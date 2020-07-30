#include "AnamergerSelector.h"
#include <TMath.h>
#include <TStyle.h>
#include <fstream>
#include <iostream>
#include <string>
//#include "TCutsVandle.h"

ClassImp(AnamergerSelector);

AnamergerSelector::AnamergerSelector(TTree *mergedData) : tree_reader_(mergedData),
                                                          beta_(tree_reader_, "mergedBeta"),
                                                          clover_vec_(tree_reader_, "clover_vec_"),
                                                          gamma_scint_vec_(tree_reader_, "gamma_scint_vec_"),
                                                          vandle_vec_(tree_reader_, "corrected_vandle_vec"),
                                                          output_file_name_("anamerger_output_ga83.root")
{
}

AnamergerSelector::~AnamergerSelector()
{
    if (fHistArray)
    {
        delete fHistArray;
        fHistArray = nullptr;
    }
    if (fOutputFile)
    {
        delete fOutputFile;
        fOutputFile = nullptr;
    }
}

void AnamergerSelector::Begin(TTree *mergedData)
{
    GetOutputList()->Clear();
    if (fInput)
    {
        TNamed *named = (TNamed *)fInput->FindObject("output_file_name");
        if (named)
            output_file_name_ = named->GetTitle();
    }
}

void AnamergerSelector::SlaveBegin(TTree *mergedData)
{
    if (fHistArray)
    {
        delete fHistArray;
        fHistArray = nullptr;
    }
    fHistArray = new TObjArray();

    fHistArray->Add(new TH2F("Tib_ClvE", "ClvE_Tib", 16000, 0, 8000, 1000, -3, 3));
    fHistArray->Add(new TH2F("Tib_HighE", "Tib_HighE", 4000, -1000, 18000, 1000, -3, 3));
    fHistArray->Add(new TH2F("TGammaBeta_hagrid", "TGammaBeta_hagrid", 34000, 0, 34000, 1000, -3, 3));
    fHistArray->Add(new TH2F("Tib_LowE", "Tib_LowE", 4000, -1000, 18000, 1000, -3, 3));
    fHistArray->Add(new TH2F("Tib_DynE", "Tib_DynE", 4000, -1000, 18000, 1000, -3, 3));
    fHistArray->Add(new TH2F("Tib_Esum", "Tib_DynE", 4000, -1000, 18000, 1000, -3, 3));
    fHistArray->Add(new TH2F("nQDC_nToF", "nQDC_nToF", 3200, -100, 1500, 32000, 0, 32000));
    fHistArray->Add(new TH2F("nQDC_nToF_Gamma_Gated", "nQDC_nToF_Gamma_Gated", 3200, -100, 1500, 32000, 0, 32000));
    fHistArray->Add(new TH2F("nQDC_nToF_Gamma_Gated_BG", "nQDC_nToF_Gamma_Gated_BG", 3200, -100, 1500, 32000, 0, 32000));
    fHistArray->Add(new TH2F("nQDC_nToF_orig", "nQDC_nToF_orig", 3200, -100, 1500, 1000, 0, 32000));
    fHistArray->Add(new TH2F("gamma_gamma", "gamma_gamma", 16000, 0, 8000, 16000, 0, 8000));
    fHistArray->Add(new TH2F("Tib_ClvE_addback", "ClvE_Tib_addback", 16000, 0, 8000, 1000, -3, 3));
    fHistArray->Add(new TH2F("nQDC_nToF_BG", "nQDC_nToF_BG", 3200, -100, 1500, 1000, 0, 32000));
    fHistArray->Add(new TH2F("nQDC_nToF_BG_orig", "nQDC_nToF_BG_orig", 3200, -100, 1500, 1000, 0, 32000));
    fHistArray->Add(new TH2F("nToF_nQDC", "nTof_nQDC", 32000, 0, 32000, 1600, -100, 1000));
    fHistArray->Add(new TH2F("BarN_nToF", "BarN_nToF", 1600, -100, 1500, 50, -0.5, 49.5));
    fHistArray->Add(new TH2F("BarN_ntdiff_top", "BarN_ntdiff_top", 1600, -20, 20, 50, -0.5, 49.5));
    fHistArray->Add(new TH2F("BarN_ntdiff_bottom", "BarN_ntdiff_bottom", 1600, -20, 20, 50, -0.5, 49.5));
    fHistArray->Add(new TH1F("Tib", "Tib", 1000, -3, 3));
    fHistArray->Add(new TH2F("Tib_nToF", "Tib_nToF", 1600, -100, 1500, 1000, -3, 3));
    fHistArray->Add(new TH1F("nMult", "nMult", 50, -0.5, 49.5));
    fHistArray->Add(new TH1F("nToF", "nToF", 2500, -500, 2000));

    //adding histograms to output list
    TIter next(fHistArray);
    while (auto hist = next())
    {
        GetOutputList()->Add(hist);
    }
    LoadTCuts();

    if (fInput)
    {
        TParameter<Double_t> *time_window = (TParameter<Double_t> *)fInput->FindObject("TimeWindow");
        if (time_window)
            time_window_ = time_window->GetVal();
        else
            time_window_ = 1.0;
    }

    if (gProofServ)
    {
        const TString msg = TString::Format("SlaveBegin() of Ord = %s called. %d histograms are initialized.",
                                            gProofServ->GetOrdinal(), GetOutputList()->GetEntries());
        gProofServ->SendAsynMessage(msg);
    }
    else
    {
        std::cout << "SalveBegin() called. " << GetOutputList()->GetEntries() << " histograms are initialized." << std::endl;
    }

    return;
}

void AnamergerSelector::Init(TTree *mergedData)
{
    tree_reader_.SetTree(mergedData);
    return;
}

/*ToF to Energy Conversion Function*/
/*
Double_t neutron_energy(Double_t ToF) {
    Double_t neutron_energy = 0;
    Double_t flight_path = 1.05;  // Units are in m
    Double_t velocity = (flight_path / ToF) * 10E+9;
    Double_t beta = velocity / 3E+8;
    Double_t gamma = 1 / sqrt(1 - beta * beta);
    double_t kinetic_energy = 939.57 * (gamma - 1);  //in keV
    return neutron_energy;
}
*/
Bool_t AnamergerSelector::Process(Long64_t entry)
{
    tree_reader_.SetLocalEntry(entry);
    {
        auto beta = beta_.Get();
        if (!beta)
            return kTRUE;
        auto clover_vec = clover_vec_.Get();
        if (!clover_vec)
            return kTRUE;
        auto gamma_scint_vec = gamma_scint_vec_.Get();
        if (!gamma_scint_vec)
            return kTRUE;
        auto vandle_vec = vandle_vec_.Get();
        if (!vandle_vec)
            return kTRUE;
        if (beta->high_gain_.energy_sum_ < 200)
            return kTRUE;
        //if (beta->low_gain_.energy_ > 2000)
        //	return kTRUE;
        for (const auto &imp : beta->output_vec_)
        {
            if (imp.output_vec_.empty())
                continue;
            if (imp.output_vec_.at(0).sts != 6)
                continue;
            const Double_t tib = (((double)beta->dyn_single_.time_ - (double)imp.dyn_single_.time_)) / 1.E+9;
            ((TH1F *)fHistArray->FindObject("Tib"))->Fill(tib);
            ((TH2F *)fHistArray->FindObject("Tib_HighE"))->Fill(beta->high_gain_.energy_sum_, tib);
            ((TH2F *)fHistArray->FindObject("Tib_LowE"))->Fill(beta->low_gain_.energy_, tib);
            ((TH2F *)fHistArray->FindObject("Tib_DynE"))->Fill(beta->dyn_single_.energy_, tib);
            ((TH2F *)fHistArray->FindObject("Tib_Esum"))->Fill(beta->high_gain_.energy_sum_, tib);
            Double_t clover_addback_energy_1 = 0;
            Double_t clover_addback_energy_2 = 0;
            std::sort((*clover_vec_).begin(), (*clover_vec_).end(), [](const processor_struct::CLOVERS &a, const processor_struct::CLOVERS &b) -> bool { return a.energy < b.energy; });

            for (const auto &clv : *clover_vec)
            {
                auto hist = (TH2F *)fHistArray->FindObject("Tib_ClvE");
                hist->Fill(clv.energy, tib);
                //if (clv.time - beta->dyn_single_.time_ > -850 && clv.time - beta->dyn_single_.time_ < -500) {
                if (clover_beta_cut->IsInside(clv.energy, clv.time - beta->dyn_single_.time_))
                {
                    if (clv.detNum == 0 || clv.detNum == 1 || clv.detNum == 2 || clv.detNum == 3)
                    {
                        clover_addback_energy_1 += clv.energy;
                    }

                    if (clv.detNum == 4 || clv.detNum == 5 || clv.detNum == 6 || clv.detNum == 7)
                    {
                        clover_addback_energy_2 += clv.energy;
                    }
                }
            }

            if (clover_addback_energy_1 > 0)
            {
                auto hist = (TH2F *)fHistArray->FindObject("Tib_ClvE_addback");
                hist->Fill(clover_addback_energy_1, tib);
            }
            if (clover_addback_energy_2 > 0)
            {
                auto hist = (TH2F *)fHistArray->FindObject("Tib_ClvE_addback");
                hist->Fill(clover_addback_energy_2, tib);
            }

            //  if (clover_addback_energy_2 > 0 && clover_addback_energy_1 > 0)
            //  {
            //      auto hist = (TH2F *)fHistArray->FindObject("gamma_gamma");
            //      hist->Fill(clover_addback_energy_1, clover_addback_energy_2);
            //      hist->Fill(clover_addback_energy_2, clover_addback_energy_1);
            //  }

            /*   for (const auto &hagrid : *gamma_scint_vec)
            {
                if (hagrid.detNum % 2)
                {
                    if (hagrid.subtype.CompareTo("smallhag") == 0 || hagrid.detNum > 15)
                    {
                        // Double_t beta_hagrid_dt = hagrid.time - beta->dyn_single_.time_ + 440;  //Fixing the external trace delay
                        if (hagrid_beta_cut->IsInside(hagrid.energy, hagrid.time - beta->dyn_single_.time_ + 440))
                        {
                            auto hist = (TH2F *)fHistArray->FindObject("TGammaBeta_hagrid");
                            hist->Fill(hagrid.energy, tib);
                        }
                    }

                    else
                    {
                        //Double_t beta_hagrid_dt = hagrid.time - beta->dyn_single_.time_;
                        if (hagrid_beta_cut->IsInside(hagrid.energy, hagrid.time - beta->dyn_single_.time_))
                        {
                            auto hist = (TH2F *)fHistArray->FindObject("TGammaBeta_hagrid");
                            hist->Fill(hagrid.energy, tib);
                        }
                    }
                }
            }*/

            for (auto &vandle : *vandle_vec)
            {
                const double tdiff_vb = (double)vandle.GetVandleData()->sTime - (double)beta->dyn_single_.time_;
                if (tdiff_vb < 200 || tdiff_vb > 250)
                    continue;
                {
                    auto hist = (TH2F *)fHistArray->FindObject("Tib_nToF");
                    hist->Fill(vandle.GetCorrectedToF(), tib);
                }
                if (tib > 0.005 && tib < time_window_)
                {
                    {
                        auto hist = (TH2F *)fHistArray->FindObject("nQDC_nToF");
                        hist->Fill(vandle.GetCorrectedToF(), vandle.GetVandleData()->qdc);
                    }

                    /*
                    {
                        auto hist = (TH2F*)fHistArray->FindObject("BarN_nToF");
                        hist->Fill(vandle.GetCorrectedToF(), vandle.GetVandleData()->barNum);
                    }
                    {
                        if (vandle.GetTranformedY() < -2) {
                            auto hist = (TH2F*)fHistArray->FindObject("BarN_ntdiff_bottom");
                            hist->Fill(vandle.GetVandleData()->tDiff, vandle.GetVandleData()->barNum);
                        }
                    }
                    {
                        if (vandle.GetTranformedY() > 2) {
                            auto hist = (TH2F*)fHistArray->FindObject("BarN_ntdiff_top");
                            hist->Fill(vandle.GetVandleData()->tDiff, vandle.GetVandleData()->barNum);
                        }
                    }
                    */
                    if (clover_addback_energy_1 > 1346.9631 && clover_addback_energy_1 < 1349.3770)
                    {
                        auto hist = (TH2F *)fHistArray->FindObject("nQDC_nToF_Gamma_Gated");
                        hist->Fill(vandle.GetCorrectedToF(), vandle.GetVandleData()->qdc);
                    }
                    if (clover_addback_energy_2 > 1346.9631 && clover_addback_energy_2 < 1349.3770)
                    {
                        auto hist = (TH2F *)fHistArray->FindObject("nQDC_nToF_Gamma_Gated");
                        hist->Fill(vandle.GetCorrectedToF(), vandle.GetVandleData()->qdc);
                    }
                }
                if (tib > (0.0 - time_window_) && tib < -0.005)
                {
                    {
                        auto hist = (TH2F *)fHistArray->FindObject("nQDC_nToF_BG");
                        hist->Fill(vandle.GetCorrectedToF(), vandle.GetVandleData()->qdc);
                    }

                    if (clover_addback_energy_1 > 1346.9631 && clover_addback_energy_1 < 1349.3770)
                    {
                        auto hist = (TH2F *)fHistArray->FindObject("nQDC_nToF_Gamma_Gated_BG");
                        hist->Fill(vandle.GetCorrectedToF(), vandle.GetVandleData()->qdc);
                    }
                    if (clover_addback_energy_2 > 1346.9631 && clover_addback_energy_2 < 1349.3770)
                    {
                        auto hist = (TH2F *)fHistArray->FindObject("nQDC_nToF_Gamma_Gated_BG");
                        hist->Fill(vandle.GetCorrectedToF(), vandle.GetVandleData()->qdc);
                    }

                    /*******
                    {
                        auto hist = (TH2F*)fHistArray->FindObject("nQDC_nToF_BG_orig");
                        hist->Fill(vandle.GetVandleData()->corTof - n_correction->Eval(vandle.GetVandleData()->qdc), vandle.GetVandleData()->qdc);
                    }
					**********/
                }
            }
        }

    } //end loop through the mergedData TTree

    return kTRUE;
}

void AnamergerSelector::LoadTCuts()
{
    clover_beta_cut = new TCutG("clover_beta_cut", TCutsVandle::clover_beta_timing_cut.size());
    for (UInt_t it = 0; it < TCutsVandle::clover_beta_timing_cut.size(); it++)
    {
        clover_beta_cut->SetPoint(it, TCutsVandle::clover_beta_timing_cut.at(it).first, TCutsVandle::clover_beta_timing_cut.at(it).second);
    }

    hagrid_beta_cut = new TCutG("hagrid_beta_cut", TCutsVandle::hagrid_beta_timing_cut.size());
    for (UInt_t it = 0; it < TCutsVandle::hagrid_beta_timing_cut.size(); it++)
    {
        hagrid_beta_cut->SetPoint(it, TCutsVandle::hagrid_beta_timing_cut.at(it).first, TCutsVandle::hagrid_beta_timing_cut.at(it).second);
    }
}

void AnamergerSelector::Terminate()
{
    fOutputFile = new TFile(output_file_name_.c_str(), "recreate");
    std::cout << "[AnamergerSelector::Terminate()]: output file: " << output_file_name_ << std::endl;
    // write the histograms
    TIter next(GetOutputList());
    while (TObject *obj = next())
    {
        std::cout << "[AnamergerSelector::Terminate]: writing " << obj->GetName() << " to file." << std::endl;
        obj->Write();
    }

    fOutputFile->Close();

    if (fOutputFile)
    {
        delete fOutputFile;
        fOutputFile = nullptr;
    }

    return;
}
