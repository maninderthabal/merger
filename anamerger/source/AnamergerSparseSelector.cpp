#include "AnamergerSparseSelector.h"
#include <fstream>
#include <iostream>
#include <string>
#include <map>
ClassImp(AnamergerSparseSelector);

AnamergerSparseSelector::AnamergerSparseSelector(TTree *mergedData) : tree_reader_(mergedData),
                                                                      beta_(tree_reader_, "mergedBeta"),
                                                                      clover_vec_(tree_reader_, "clover_vec_"),
                                                                      gamma_scint_vec_(tree_reader_, "gamma_scint_vec_"),
                                                                      vandle_vec_(tree_reader_, "corrected_vandle_vec"),
                                                                      output_file_name_("anamerger_sparse_output.root")
{
}

AnamergerSparseSelector::~AnamergerSparseSelector()
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

void AnamergerSparseSelector::Begin(TTree *mergedData)
{
    GetOutputList()->Clear();
    if (fInput)
    {
        TNamed *named = (TNamed *)fInput->FindObject("output_file_name");
        if (named)
            output_file_name_ = named->GetTitle();
    }
}

void AnamergerSparseSelector::SlaveBegin(TTree *mergedData)
{

    if (fHistArray)
    {
        delete fHistArray;
        fHistArray = nullptr;
    }
    fHistArray = new TObjArray();

    fHistArray->Add(new THnSparseF("Clover_Addback_Tib_ToF_QDC_multi", "Clover_Addback_Tib_ToF_QDC_multi", 5, new Int_t[5]{1000, 16000, 3200, 32000, 18}, new Double_t[5]{-3, 0, -100, 0, 0}, new Double_t[5]{3, 8000, 1500, 32000, 18}));

    fHistArray->Add(new THnSparseF("YSO_beta", "YSO_beta", 2, new Int_t[2]{2000, 2000}, new Double_t[2]{-10, -10}, new Double_t[2]{10, 10}));

    fHistArray->Add(new THnSparseF("YSO_ion", "YSO_ion", 2, new Int_t[2]{2000, 2000}, new Double_t[2]{0, 0}, new Double_t[2]{10, 10}));

    fHistArray->Add(new THnSparseF("Clover_Addback_Tib_ToF_QDC_banana", "Clover_Addback_Tib_ToF_QDC_banana", 5, new Int_t[5]{1000, 16000, 3200, 32000, 1000}, new Double_t[5]{-3, 0, -100, 0, -1000}, new Double_t[5]{3, 8000, 1500, 32000, 1000}));

    fHistArray->Add(new THnSparseF("QDC_Pos_tdiff", "QDC_pos_tdiff", 5, new Int_t[5]{1000, 1000, 1000, 3200, 32000}, new Double_t[5]{-3, -200, -200, 0, 0}, new Double_t[5]{3, 200, 200, 1600, 32000}));

    fHistArray->Add(new THnSparseF("QDC_Pos_tdiff_outside", "QDC_pos_tdiff_outside", 5, new Int_t[5]{1000, 1000, 1000, 3200, 32000}, new Double_t[5]{-3, -200, -200, 0, 0}, new Double_t[5]{3, 200, 200, 1600, 32000}));

    fHistArray->Add(new THnSparseF("Hagrid_Tib_ToF_QDC_beta", "Hagrid_Tib_ToF_QDC_beta", 5, new Int_t[5]{1000, 8000, 3200, 32000, 32000}, new Double_t[5]{-3, 0, -100, 0, 0}, new Double_t[5]{3, 4000, 1500, 32000, 32000}));

    fHistArray->Add(new THnSparseF("Hagrid_Tib_ToF_QDC_banana", "Hagrid_Tib_ToF_QDC_banana", 5, new Int_t[5]{1000, 8000, 3200, 32000, 32000}, new Double_t[5]{-3, 0, -100, 0, 0}, new Double_t[5]{3, 4000, 1500, 32000, 32000}));

    fHistArray->Add(new THnSparseF("neutron_beta", "neutron_beta", 7, new Int_t[7]{1000, 3200, 2000, 2000, 10, 48, 240}, new Double_t[7]{-3, -100, 0, 0, -0.5, 0, -60}, new Double_t[7]{3, 1500, 32000, 32000, 9.5, 48, 60}));

    fHistArray->Add(new THnSparseF("beta_energy", "beta_energy", 3, new Int_t[3]{1000, 32000, 5000}, new Double_t[3]{-3, 0, 0}, new Double_t[3]{3, 32000, 3000000}));

    fHistArray->Add(new THnSparseF("tib_gamma_clover", "tib_gamma_clover", 3, new Int_t[3]{1000, 16000, 1000}, new Double_t[3]{-3, 0, -1000}, new Double_t[3]{3, 8000, 1000}));

    fHistArray->Add(new THnSparseF("tib_gamma_clover_singles", "tib_gamma_clover_singles", 2, new Int_t[2]{1000, 16000}, new Double_t[2]{-3, 0}, new Double_t[2]{3, 8000}));

    fHistArray->Add(new THnSparseF("tib_neutron_gamma_addback_mode", "tib_neutron_gamma_addback_mode", 2, new Int_t[2]{1000, 8000}, new Double_t[2]{-3, 0}, new Double_t[2]{3, 4000}));

    fHistArray->Add(new THnSparseF("tib_neutron_gamma_singles_mode", "tib_neutron_gamma_singles_mode", 2, new Int_t[2]{1000, 8000}, new Double_t[2]{-3, 0}, new Double_t[2]{3, 4000}));

    fHistArray->Add(new THnSparseF("tib_gamma_hagrid", "tib_gamma_hagrid", 3, new Int_t[3]{1000, 8000, 1000}, new Double_t[3]{-3, 0, -4000}, new Double_t[3]{3, 8000, 4000}));

    fHistArray->Add(new THnSparseF("tib_neutron_energy_qdc", "tib_neutron_energy_qdc", 3, new Int_t[3]{1000, 32000, 2000}, new Double_t[3]{-3, 0, 0}, new Double_t[3]{3, 32000, 20}));

    fHistArray->Add(new THnSparseF("gamma_gamma", "gamma_gamma", 3, new Int_t[3]{1000, 8000, 8000}, new Double_t[3]{-3, 0, 0}, new Double_t[3]{3, 4000, 4000}));

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

void AnamergerSparseSelector::Init(TTree *mergedData)
{
    tree_reader_.SetTree(mergedData);
    return;
}

/*ToF to Energy Conversion Function*/

/*Hagrid Walk Corrector*/

Double_t hagrid_walk_correction(Double_t x, Double_t y)

{
    Double_t walk_corrected_timing = x - 51.8564 * exp(-0.0042535100 * y);
    return walk_corrected_timing;
}

Double_t QDC_Position(Double_t a, Double_t b, Double_t qdcl, Double_t qdcr)

{

    Double_t QDC_Pos = a * 90 * log(qdcl / qdcr) + b;
    return QDC_Pos;
}

Double_t neutron_energy(Double_t x)
{
    Double_t flight_path = 1.05; // Units are in m
    Double_t velocity = (flight_path / x) * 1E+9;
    Double_t beta = velocity / 3E+8;
    Double_t gamma = 1 / sqrt(1. - beta * beta);
    Double_t kinetic_energy = 939.57 * (gamma - 1); //in keV
    return kinetic_energy;
}

Bool_t AnamergerSparseSelector::Process(Long64_t entry)
{
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
        for (const auto &imp : beta->output_vec_)
        {
            if (imp.output_vec_.empty())
                continue;
            if (imp.output_vec_.at(0).sts != 6)
                continue;
            const Double_t tib = (((double)beta->dyn_single_.time_ - (double)imp.dyn_single_.time_)) / 1.E+9;

            Double_t clover_addback_energy_1 = 0;
            Double_t tbeta_gamma_1 = 0;
            Double_t clover_addback_energy_2 = 0;
            Double_t tbeta_gamma_2 = 0;
            Int_t N_Detected_vandle = 0;

            std::sort((*clover_vec_).begin(), (*clover_vec_).end(), [](const processor_struct::CLOVERS &a, const processor_struct::CLOVERS &b) -> bool { return a.energy < b.energy; });
            {
                auto hist = (THnSparse *)fHistArray->FindObject("beta_energy");
                hist->Fill(new Double_t[3]{tib, beta->dyn_single_.energy_, (double)beta->dyn_single_.time_ / 1.E+9});
            }

            {
                auto hist = (THnSparse *)fHistArray->FindObject("YSO_beta");
                hist->Fill(new Double_t[2]{beta->high_gain_.pos_x_, beta->high_gain_.pos_y_});
            }

            {
                auto hist = (THnSparse *)fHistArray->FindObject("YSO_ion");
                hist->Fill(new Double_t[2]{imp.low_gain_.pos_x_, imp.low_gain_.pos_y_});
            }

            for (const auto &clv : *clover_vec)
            {
                if (clover_beta_cut->IsInside(clv.energy, clv.time - beta->dyn_single_.time_))
                {
                    if (clv.detNum == 0 || clv.detNum == 1 || clv.detNum == 2 || clv.detNum == 3)
                    {
                        clover_addback_energy_1 += clv.energy;
                        tbeta_gamma_1 = clv.time - beta->dyn_single_.time_;
                    }

                    if (clv.detNum == 4 || clv.detNum == 5 || clv.detNum == 6 || clv.detNum == 7)
                    {
                        clover_addback_energy_2 += clv.energy;
                        tbeta_gamma_2 = clv.time - beta->dyn_single_.time_;
                    }

                    {
                        auto hist = (THnSparse *)fHistArray->FindObject("tib_gamma_clover_singles");
                        hist->Fill(new Double_t[2]{tib, clv.energy});
                    }
                }
            }

            if (clover_addback_energy_1 > 0)
            {
                auto hist = (THnSparse *)fHistArray->FindObject("tib_gamma_clover");
                hist->Fill(new Double_t[3]{tib, clover_addback_energy_1, tbeta_gamma_1 - 130.165 * exp(-0.00115635 * clover_addback_energy_1)});
            }

            if (clover_addback_energy_2 > 0)
            {
                auto hist = (THnSparse *)fHistArray->FindObject("tib_gamma_clover");
                hist->Fill(new Double_t[3]{tib, clover_addback_energy_2, tbeta_gamma_2 - 130.165 * exp(-0.00115635 * clover_addback_energy_2)});
            }

            if (clover_addback_energy_1 > 0 && clover_addback_energy_2 > 0)
            {
                auto hist = (THnSparse *)fHistArray->FindObject("gamma_gamma");
                hist->Fill(new Double_t[3]{tib, clover_addback_energy_1, clover_addback_energy_2});
            }

            if (clover_addback_energy_1 > 0 && clover_addback_energy_2 > 0)
            {
                auto hist = (THnSparse *)fHistArray->FindObject("gamma_gamma");
                hist->Fill(new Double_t[3]{tib, clover_addback_energy_2, clover_addback_energy_1});
            }

            for (const auto &hagrid : *gamma_scint_vec)
                if (hagrid.detNum % 2)
                {
                    // if (beta->high_gain_.energy_ > 750 && beta->high_gain_.energy_ < 900)

                    auto hist = (THnSparse *)fHistArray->FindObject("tib_gamma_hagrid");

                    if (hagrid.subtype.CompareTo("smallhag") == 0 || hagrid.detNum > 15)
                    {

                        if ((hagrid_beta_cut->IsInside(hagrid.energy, hagrid.time - beta->dyn_single_.time_ + 440)))
                        {

                            hist->Fill(new Double_t[3]{tib, hagrid.energy, hagrid.time - 51.8564 * exp(-0.0042535100 * hagrid.energy) - beta->high_gain_.time_ + 440});
                        }
                    }

                    else
                    {
                        if ((hagrid_beta_cut->IsInside(hagrid.energy, hagrid.time - beta->dyn_single_.time_)))
                        {

                            hist->Fill(new Double_t[3]{tib, hagrid.energy, hagrid.time - 51.8564 * exp(-0.0042535100 * hagrid.energy) - beta->high_gain_.time_});
                        }
                    }
                }

            Int_t neutron_multiplicity = 0;
            for (auto &vandle : *vandle_vec)
            {
                if (banana_Cu81->IsInside(vandle.GetCorrectedToF(), vandle.GetVandleData()->qdc)) // vandle banana gate
                {
                    neutron_multiplicity++;
                }
            }

            std::cout << neutron_multiplicity << std::endl;

            for (auto &vandle : *vandle_vec)
            {

                // const double tdiff_vb = (double)vandle.GetVandleData()->sTime - (double)beta->dyn_single_.time_;
                //if (tdiff_vb < 200 || tdiff_vb > 250)
                //  continue;
                //if (banana_Cu81->IsInside(vandle.GetCorrectedToF(), vandle.GetVandleData()->qdc))
                {

                    N_Detected_vandle++;

                    {
                        auto hist = (THnSparse *)fHistArray->FindObject("neutron_beta");
                        hist->Fill(new Double_t[7]{tib, vandle.GetCorrectedToF(), vandle.GetVandleData()->qdc, beta->dyn_single_.energy_, neutron_multiplicity, vandle.GetVandleData()->barNum, vandle.GetVandleData()->wcTdiff});
                    }

                    /*  {
                        auto hist = (THnSparse *)fHistArray->FindObject("QDC_Pos_tdiff");
                        auto hist1 = (THnSparse *)fHistArray->FindObject("QDC_Pos_tdiff_outside");

                        int bar = vandle.GetVandleData()->barNum;

                        Double_t qdc_pos = QDC_Position(BarCalParameter.at(bar).first, BarCalParameter.at(bar).second, vandle.GetVandleData()->qdcL, vandle.GetVandleData()->qdcR);

                        if (abs(qdc_pos - 7.4 * vandle.GetVandleData()->wcTdiff) < 100.0)
                        {

                            hist->Fill(new Double_t[5]{tib, qdc_pos, 7.4 * vandle.GetVandleData()->wcTdiff, vandle.GetCorrectedToF(), vandle.GetVandleData()->qdc});
                        }
                        else
                        {

                            hist1->Fill(new Double_t[5]{tib, qdc_pos, 7.4 * vandle.GetVandleData()->wcTdiff, vandle.GetCorrectedToF(), vandle.GetVandleData()->qdc});
                        }
                    }*/

                    {
                        auto hist = (THnSparse *)fHistArray->FindObject("QDC_Pos_tdiff_outside");

                        int bar = vandle.GetVandleData()->barNum;

                        Double_t qdc_pos = QDC_Position(BarCalParameter.at(bar).first, BarCalParameter.at(bar).second, vandle.GetVandleData()->qdcL, vandle.GetVandleData()->qdcR);
                    }

                    {
                        auto hist = (THnSparse *)fHistArray->FindObject("Clover_Addback_Tib_ToF_QDC_banana");

                        if (clover_addback_energy_1 > 0) // && (clover_beta_cut->IsInside(clover_addback_energy_1, tbeta_gamma_1)))
                        {
                            hist->Fill(new Double_t[5]{tib, clover_addback_energy_1, vandle.GetCorrectedToF(), vandle.GetVandleData()->qdc, tbeta_gamma_1});
                        }

                        if (clover_addback_energy_2 > 0) // && (clover_beta_cut->IsInside(clover_addback_energy_2, tbeta_gamma_2)))
                        {
                            hist->Fill(new Double_t[5]{tib, clover_addback_energy_2, vandle.GetCorrectedToF(), vandle.GetVandleData()->qdc, tbeta_gamma_2});
                        }
                    }

                    for (const auto &hagrid : *gamma_scint_vec)
                        if (hagrid.detNum % 2)
                        {
                            {
                                if (hagrid.subtype.CompareTo("smallhag") == 0 || hagrid.detNum > 15)
                                {
                                    if (hagrid_beta_cut->IsInside(hagrid.energy, hagrid.time - beta->dyn_single_.time_ + 440))
                                    {
                                        auto hist = (THnSparse *)fHistArray->FindObject("Hagrid_Tib_ToF_QDC_banana");
                                        hist->Fill(new Double_t[5]{tib, hagrid.energy, vandle.GetCorrectedToF(), vandle.GetVandleData()->qdc, beta->dyn_single_.energy_});
                                    }
                                }

                                else
                                {
                                    if (hagrid_beta_cut->IsInside(hagrid.energy, hagrid.time - beta->dyn_single_.time_))
                                    {
                                        auto hist = (THnSparse *)fHistArray->FindObject("Hagrid_Tib_ToF_QDC_banana");
                                        hist->Fill(new Double_t[5]{tib, hagrid.energy, vandle.GetCorrectedToF(), vandle.GetVandleData()->qdc, beta->dyn_single_.energy_});
                                    }
                                }
                            }
                        }
                }
            }

            if (N_Detected_vandle > 0)
            {
                auto hist = (THnSparse *)fHistArray->FindObject("tib_neutron_gamma_addback_mode");
                auto hist1 = (THnSparse *)fHistArray->FindObject("tib_neutron_gamma_singles_mode");

                if (clover_addback_energy_1 > 0)
                {

                    hist->Fill(new Double_t[2]{tib, clover_addback_energy_1});
                }
                if (clover_addback_energy_2 > 0)
                {

                    hist->Fill(new Double_t[2]{tib, clover_addback_energy_2});
                }

                for (const auto &clv : *clover_vec)

                    if (clover_beta_cut->IsInside(clv.energy, clv.time - beta->dyn_single_.time_))
                    {
                        hist1->Fill(new Double_t[2]{tib, clv.energy});
                    }

            } //end loop through the mergedData TTree}
        }
        return kTRUE;
    }
}
void AnamergerSparseSelector::LoadTCuts()
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

    banana_cut = new TCutG("banana_cut", TCutsVandle::vandle_banana_cut.size());
    for (UInt_t it = 0; it < TCutsVandle::vandle_banana_cut.size(); it++)
    {
        banana_cut->SetPoint(it, TCutsVandle::vandle_banana_cut.at(it).first, TCutsVandle::vandle_banana_cut.at(it).second);
    }

    banana_Ga83 = new TCutG("banana_Ga83", TCutsVandle::banana_Ga83_cut.size());
    for (UInt_t it = 0; it < TCutsVandle::banana_Ga83_cut.size(); it++)
    {
        banana_Ga83->SetPoint(it, TCutsVandle::banana_Ga83_cut.at(it).first, TCutsVandle::banana_Ga83_cut.at(it).second);
    }

    banana_Cu81 = new TCutG("banana_Cu81", TCutsVandle::banana_Cu81_cut.size());
    for (UInt_t it = 0; it < TCutsVandle::banana_Cu81_cut.size(); it++)
    {
        banana_Cu81->SetPoint(it, TCutsVandle::banana_Cu81_cut.at(it).first, TCutsVandle::banana_Cu81_cut.at(it).second);
    }

    banana_Cu79 = new TCutG("banana_Cu79", TCutsVandle::banana_Cu79_cut.size());
    for (UInt_t it = 0; it < TCutsVandle::banana_Cu79_cut.size(); it++)
    {
        banana_Cu79->SetPoint(it, TCutsVandle::banana_Cu79_cut.at(it).first, TCutsVandle::banana_Cu79_cut.at(it).second);
    }
}

void AnamergerSparseSelector::Terminate()

{
    if (fOutputFile)
    {
        delete fOutputFile;
        fOutputFile = nullptr;
    }
    fOutputFile = new TFile("Ga86_sparses.root", "recreate");
    std::cout << "[AnamergerSparseSelector::Terminate()]: output file: " << output_file_name_ << std::endl;
    // write the histograms
    TIter next(GetOutputList());
    while (TObject *obj = next())
    {
        std::cout << "[AnamergerSparseSelector::Terminate]: writing " << obj->GetName() << " to file." << std::endl;
        obj->Write();
    }

    fOutputFile->Close();

    return;
}
