#include "AnamergerSparseSelector.h"
#include <fstream>
#include <iostream>
#include <string>

ClassImp(AnamergerSparseSelector);

AnamergerSparseSelector::AnamergerSparseSelector(TTree* mergedData) : tree_reader_(mergedData),
                                                                      beta_(tree_reader_, "mergedBeta"),
                                                                      clover_vec_(tree_reader_, "clover_vec_"),
                                                                      gamma_scint_vec_(tree_reader_, "gamma_scint_vec_"),
                                                                      vandle_vec_(tree_reader_, "corrected_vandle_vec"),
                                                                      output_file_name_("anamerger_sparse_output.root") {
}

AnamergerSparseSelector::~AnamergerSparseSelector() {
    if (fHistArray) {
        delete fHistArray;
        fHistArray = nullptr;
    }
    if (fOutputFile) {
        delete fOutputFile;
        fOutputFile = nullptr;
    }
}

void AnamergerSparseSelector::Begin(TTree* mergedData) {
    GetOutputList()->Clear();
    if (fInput) {
        TNamed* named = (TNamed*)fInput->FindObject("output_file_name");
        if (named)
            output_file_name_ = named->GetTitle();
    }
}

void AnamergerSparseSelector::SlaveBegin(TTree* mergedData) {
    if (fHistArray) {
        delete fHistArray;
        fHistArray = nullptr;
    }
    fHistArray = new TObjArray();

    fHistArray->Add(new THnSparseF("Clover_Addback_Tib_ToF_QDC_multi", "Clover_Addback_Tib_ToF_QDC_multi", 5, new Int_t[5]{1000, 8000, 3200, 32000, 18}, new Double_t[5]{-3, 0, -100, 0, 0}, new Double_t[5]{3, 4000, 1500, 32000, 18}));

    fHistArray->Add(new THnSparseF("Hagrid_Tib_ToF_QDC_beta", "Hagrid_Tib_ToF_QDC_beta", 5, new Int_t[5]{1000, 8000, 3200, 32000, 32000}, new Double_t[5]{-3, 0, -100, 0, 0}, new Double_t[5]{3, 4000, 1500, 32000, 32000}));

    fHistArray->Add(new THnSparseF("neutron_beta", "neutron_beta", 4, new Int_t[4]{1000, 3200, 2000, 2000}, new Double_t[4]{-3, -100, 0, 0}, new Double_t[4]{3, 1500, 32000, 32000}));

    fHistArray->Add(new THnSparseF("beta_energy", "beta_energy", 2, new Int_t[2]{1000, 32000}, new Double_t[2]{-3, 0}, new Double_t[2]{3, 32000}));

    //adding histograms to output list
    TIter next(fHistArray);
    while (auto hist = next()) {
        GetOutputList()->Add(hist);
    }

    LoadTCuts();

    if (fInput) {
        TParameter<Double_t>* time_window = (TParameter<Double_t>*)fInput->FindObject("TimeWindow");
        if (time_window)
            time_window_ = time_window->GetVal();
        else
            time_window_ = 1.0;
    }

    if (gProofServ) {
        const TString msg = TString::Format("SlaveBegin() of Ord = %s called. %d histograms are initialized.",
                                            gProofServ->GetOrdinal(), GetOutputList()->GetEntries());
        gProofServ->SendAsynMessage(msg);
    } else {
        std::cout << "SalveBegin() called. " << GetOutputList()->GetEntries() << " histograms are initialized." << std::endl;
    }

    return;
}

void AnamergerSparseSelector::Init(TTree* mergedData) {
    tree_reader_.SetTree(mergedData);
    return;
}

Bool_t AnamergerSparseSelector::Process(Long64_t entry) {
    tree_reader_.SetLocalEntry(entry);
    {
        auto beta = beta_.Get();
        if (!beta)
            return kTRUE;
        auto clover_vec = clover_vec_.Get();
        if (!clover_vec)
            return kTRUE;
        auto vandle_vec = vandle_vec_.Get();
        if (!vandle_vec)
            return kTRUE;
        auto gamma_scint_vec = gamma_scint_vec_.Get();
        if (!gamma_scint_vec)
            return kTRUE;
        //  if (beta->high_gain_.energy_sum_ < 200)
        //    return kTRUE;
        for (const auto& imp : beta->output_vec_) {
            if (imp.output_vec_.empty())
                continue;
            if (imp.output_vec_.at(0).sts != 6)
                continue;
            const Double_t tib = (((double)beta->dyn_single_.time_ - (double)imp.dyn_single_.time_)) / 1.E+9;

            Double_t clover_addback_energy_1 = 0;
            Double_t tbeta_gamma_1 = 0;
            Double_t clover_addback_energy_2 = 0;
            Double_t tbeta_gamma_2 = 0;

            std::sort((*clover_vec_).begin(), (*clover_vec_).end(), [](const processor_struct::CLOVERS& a, const processor_struct::CLOVERS& b) -> bool { return a.energy < b.energy; });
            {
                auto hist = (THnSparse*)fHistArray->FindObject("beta_energy");
                hist->Fill(new Double_t[2]{tib, beta->dyn_single_.energy_});
            }

            for (const auto& clv : *clover_vec) {
                if (clover_beta_cut->IsInside(clv.energy, clv.time - beta->dyn_single_.time_)) {
                    if (clv.detNum == 0 || clv.detNum == 1 || clv.detNum == 2 || clv.detNum == 3) {
                        clover_addback_energy_1 += clv.energy;
                        tbeta_gamma_1 = clv.time - beta->dyn_single_.time_;
                    }

                    if (clv.detNum == 4 || clv.detNum == 5 || clv.detNum == 6 || clv.detNum == 7) {
                        clover_addback_energy_2 += clv.energy;
                        tbeta_gamma_2 = clv.time - beta->dyn_single_.time_;
                    }
                }
            }
            /******
            if (clover_addback_energy_1 > 0) {
                auto hist = (THnSparse*)fHistArray->FindObject("Clover_Addback_Tib_TGammaBeta");
                hist->Fill(new Double_t[3]{tib, clover_addback_energy_1, tbeta_gamma_1});
            }

            if (clover_addback_energy_2 > 0) {
                auto hist = (THnSparse*)fHistArray->FindObject("Clover_Addback_Tib_TGammaBeta");
                hist->Fill(new Double_t[3]{tib, clover_addback_energy_2, tbeta_gamma_2});
            }
**********/
            Int_t neutron_multiplicity = std::count_if(vandle_vec_->begin(), vandle_vec_->end(), [this](CorrectedVANDLEData v) { return banana_cut->IsInside(v.GetCorrectedToF(), v.GetVandleData()->qdc); });

            /**for (auto& vandle : *vandle_vec) {
             if (IsInside.)/// vandle banana gate
             {
                 neutron_multiplicity++;
             }

            }**/
            for (auto& vandle : *vandle_vec) {
                // const double tdiff_vb = (double)vandle.GetVandleData()->sTime - (double)beta->dyn_single_.time_;
                //if (tdiff_vb < 200 || tdiff_vb > 250)
                //  continue;

                {
                    auto hist = (THnSparse*)fHistArray->FindObject("neutron_beta");
                    hist->Fill(new Double_t[4]{tib, vandle.GetCorrectedToF(), vandle.GetVandleData()->qdc, beta->dyn_single_.energy_});
                }

                //  if (tib > 0.005 && tib < time_window_) {
                {
                    if (clover_addback_energy_1 > 0) {
                        auto hist = (THnSparse*)fHistArray->FindObject("Clover_Addback_Tib_ToF_QDC_multi");
                        hist->Fill(new Double_t[5]{tib, clover_addback_energy_1, vandle.GetCorrectedToF(), vandle.GetVandleData()->qdc, neutron_multiplicity});
                    }

                    if (clover_addback_energy_2 > 0) {
                        auto hist = (THnSparse*)fHistArray->FindObject("Clover_Addback_Tib_ToF_QDC_multi");
                        hist->Fill(new Double_t[5]{tib, clover_addback_energy_2, vandle.GetCorrectedToF(), vandle.GetVandleData()->qdc, neutron_multiplicity});
                    }
                }
                //}

                for (const auto& hagrid : *gamma_scint_vec)
                    if (hagrid.detNum % 2) {
                        {
                            if (hagrid.subtype.CompareTo("smallhag") == 0 || hagrid.detNum > 15) {
                                if (hagrid_beta_cut->IsInside(hagrid.energy, hagrid.time - beta->dyn_single_.time_ + 440)) {
                                    auto hist = (THnSparse*)fHistArray->FindObject("Hagrid_Tib_ToF_QDC_beta");
                                    hist->Fill(new Double_t[5]{tib, hagrid.energy, vandle.GetCorrectedToF(), vandle.GetVandleData()->qdc, beta->dyn_single_.energy_});
                                }
                            }

                            else {
                                if (hagrid_beta_cut->IsInside(hagrid.energy, hagrid.time - beta->dyn_single_.time_)) {
                                    auto hist = (THnSparse*)fHistArray->FindObject("Hagrid_Tib_ToF_QDC_beta");
                                    hist->Fill(new Double_t[5]{tib, hagrid.energy, vandle.GetCorrectedToF(), vandle.GetVandleData()->qdc, beta->dyn_single_.energy_});
                                }
                            }
                        }
                    }
            }  //end loop through the mergedData TTree
        }

        return kTRUE;
    }
}

void AnamergerSparseSelector::LoadTCuts() {
    clover_beta_cut = new TCutG("clover_beta_cut", TCutsVandle::clover_beta_timing_cut.size());
    for (UInt_t it = 0; it < TCutsVandle::clover_beta_timing_cut.size(); it++) {
        clover_beta_cut->SetPoint(it, TCutsVandle::clover_beta_timing_cut.at(it).first, TCutsVandle::clover_beta_timing_cut.at(it).second);
    }

    hagrid_beta_cut = new TCutG("hagrid_beta_cut", TCutsVandle::hagrid_beta_timing_cut.size());
    for (UInt_t it = 0; it < TCutsVandle::hagrid_beta_timing_cut.size(); it++) {
        hagrid_beta_cut->SetPoint(it, TCutsVandle::hagrid_beta_timing_cut.at(it).first, TCutsVandle::hagrid_beta_timing_cut.at(it).second);
    }
    banana_cut = new TCutG("banana_cut", TCutsVandle::vandle_banana_cut.size());
    for (UInt_t it = 0; it < TCutsVandle::vandle_banana_cut.size(); it++) {
        banana_cut->SetPoint(it, TCutsVandle::vandle_banana_cut.at(it).first, TCutsVandle::vandle_banana_cut.at(it).second);
    }
}

void AnamergerSparseSelector::Terminate() {
    if (fOutputFile) {
        delete fOutputFile;
        fOutputFile = nullptr;
    }
    fOutputFile = new TFile(output_file_name_.c_str(), "recreate");
    std::cout << "[AnamergerSparseSelector::Terminate()]: output file: " << output_file_name_ << std::endl;
    // write the histograms
    TIter next(GetOutputList());
    while (TObject* obj = next()) {
        std::cout << "[AnamergerSparseSelector::Terminate]: writing " << obj->GetName() << " to file." << std::endl;
        obj->Write();
    }

    fOutputFile->Close();

    return;
}
