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

    fHistArray->Add(new THnSparseF("nQDC_nToF", "nQDC_nToF_Tib_clv_addback", 4, new Int_t[4]{3200, 1000, 1000, 8000},
                                   new Double_t[4]{-100, 0, -3, 0}, new Double_t[4]{1000, 32000, 3, 4000}));

    // fHistArray->Add(new THnSparseF("nQDC_nToF", "nQDC_nToF_gamma_gated", 4, new Int_t[4]{3200, 1000, 1000, 8000},
    //                              new Double_t[4]{-100, 0, -3, 0}, new Double_t[4]{1000, 32000, 3, 4000}));
    // fHistArray->Add(new THnSparseF("nQDC_nToF", "nQDC_nToF_Tib_clv_addback", 4, new Int_t[4]{3200, 1000, 1000, 8000},
    //                               new Double_t[4]{-100, 0, -3, 0}, new Double_t[4]{1000, 32000, 3, 4000}));

    fHistArray->Add(new THnSparseF("Clover_Addback_Tib_TBetaGamma_ToF_QDC", "Clover_Addback_Tib_TBetaGamma_ToF_QDC", 4, new Int_t[4]{1000, 8000, 32000, 3200}, new Double_t[4]{-3, 0, 0, -100}, new Double_t[4]{3, 4000, 32000, 1500}));

    fHistArray->Add(new THnSparseF("Hagrid_Tib_TBetaGamma_ToF_QDC", "Hagrid_Tib_TBetaGamma_ToF_QDC", 4, new Int_t[4]{1000, 8000, 32000, 3200}, new Double_t[4]{-3, 0, 0, -100}, new Double_t[4]{3, 4000, 32000, 1500}));

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
        if (beta->high_gain_.energy_sum_ < 200)
            return kTRUE;
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
            for (auto& vandle : *vandle_vec) {
                const double tdiff_vb = (double)vandle.GetVandleData()->sTime - (double)beta->dyn_single_.time_;
                if (tdiff_vb < 200 || tdiff_vb > 250)
                    continue;
                if (tib > 0.005 && tib < time_window_) {
                    {
                        if (clover_addback_energy_1 > 0) {
                            auto hist = (THnSparse*)fHistArray->FindObject("Clover_Addback_Tib_TBetaGamma_ToF_QDC");
                        }

                        if (clover_addback_energy_2 > 0) {
                            auto hist = (THnSparse*)fHistArray->FindObject("Clover_Addback_Tib_TBetaGamma_ToF_QDC");
                            hist->Fill(new Double_t[4]{tib, clover_addback_energy_2, vandle.GetCorrectedToF(), vandle.GetVandleData()->qdc});
                        }
                    }
                }

                for (const auto& hagrid : *gamma_scint_vec) {
                    if (hagrid.subtype.CompareTo("smallhag") == 0 || hagrid.detNum > 15) {
                        if (hagrid_beta_cut->IsInside(hagrid.energy, hagrid.time - beta->dyn_single_.time_ + 440)) {
                            auto hist = (THnSparse*)fHistArray->FindObject("Hagrid_Tib_TBetaGamma_ToF_QDC");
                            hist->Fill(new Double_t[4]{tib, hagrid.energy, vandle.GetCorrectedToF(), vandle.GetVandleData()->qdc});
                        }
                    }

                    else {
                        if (hagrid_beta_cut->IsInside(hagrid.energy, hagrid.time - beta->dyn_single_.time_)) {
                            auto hist = (THnSparse*)fHistArray->FindObject("Hagrid_Tib_TBetaGamma_ToF_QDC");
                            hist->Fill(new Double_t[4]{tib, hagrid.energy, vandle.GetCorrectedToF(), vandle.GetVandleData()->qdc});
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
