// AnamergerSparseSelector for PROOF created by Rin Yokoyama on 7/21/2017

#ifndef ANAMERGER_SPARSE_SELECTOR_H
#define ANAMERGER_SPARSE_SELECTOR_H

#include <TApplication.h>
#include <TChain.h>
#include <TCutG.h>
#include <TFile.h>
#include <TTreeReader.h>
#include <TTreeReaderArray.h>
#include <TTreeReaderValue.h>
#include <unistd.h>
#include <iomanip>
#include <iostream>
#include <map>
#include <string>
#include <vector>
#include "BigRIPSTreeData.h"
#include "CorrectedVANDLEData.h"
#include "OutputTreeData.hpp"
#include "PaassRootStruct.hpp"
#include "PspmtData.hpp"
#include "TCutsVandle.h"
#include "TF1.h"
#include "TFile.h"
#include "TH1.h"
#include "TH2.h"
#include "THnSparse.h"
#include "TMath.h"
#include "TParameter.h"
#include "TProofServ.h"
#include "TSelector.h"
#include "TTree.h"
#include "TTreeReader.h"
#include "TTreeReaderValue.h"
#include <map>
#include <map>

class AnamergerSparseSelector : public TSelector

{
public:
    AnamergerSparseSelector(TTree * = 0);
    virtual ~AnamergerSparseSelector();

    virtual Int_t Version() const { return 2; }
    virtual void Init(TTree *mergedData);
    virtual void Begin(TTree *mergedData);
    virtual void SlaveBegin(TTree *mergedData);
    virtual Bool_t Notify() { return kTRUE; }
    virtual Bool_t Process(Long64_t entry);
    virtual void SetOption(const char *option) { fOption = option; }
    virtual void SetObject(TObject *obj) { fObject = obj; }
    virtual void SetInputList(TList *input) { fInput = input; }
    virtual TList *GetOutputList() const { return fOutput; }
    virtual void SlaveTerminate() { tree_reader_.SetTree((TTree *)nullptr); }
    virtual void Terminate();
    void SetTimeWindow(const Double_t &time_window) { time_window_ = time_window; }
    void LoadTCuts();
    void SetOutputFileName(const std::string &file_name)
    {
        output_file_name_ = file_name;
    }

protected:
    TTreeReader tree_reader_;
    TTreeReaderValue<OutputTreeData<PspmtData, OutputTreeData<PspmtData, TreeData>>> beta_;
    TTreeReaderValue<std::vector<processor_struct::CLOVERS>> clover_vec_;
    TTreeReaderValue<std::vector<processor_struct::GAMMASCINT>> gamma_scint_vec_;
    TTreeReaderValue<std::vector<CorrectedVANDLEData>> vandle_vec_;
    ULong64_t total_entry_;

    TCutG *clover_beta_cut, *hagrid_beta_cut, *banana_cut, *banana_Ga83, *banana_Cu81, *banana_Cu80, *banana_Cu79;

    // array for histograms
    TObjArray *fHistArray = nullptr;
    // output file
    TFile *fOutputFile = nullptr;
    std::string output_file_name_;
    TF1 *n_correction = nullptr;
    Double_t time_window_;

    ClassDef(AnamergerSparseSelector, 1)

        typedef std::pair<Double_t, Double_t> pair;

    std::map<int, pair> BarCalParameter = {

        {0, std::make_pair(-0.90841801124951, -20.797831984)},
        {1, std::make_pair(-0.88680682091567, 51.0011370983)},
        {2, std::make_pair(-0.62569820020806, -16.175186539)},
        {3, std::make_pair(-1.06026948002548, -19.482728400)},
        {4, std::make_pair(-1.07197032811914, -11.336746446)},
        {5, std::make_pair(-1.42115220662412, -19.457400000)},
        {6, std::make_pair(-1.42725997908785, 0.18572999181)},
        {7, std::make_pair(-1.51934742958227, 2.53576637242)},
        {8, std::make_pair(-1.43611288451373, -43.628300000)},
        {9, std::make_pair(-1.36546007395874, -10.900179693)},
        {10, std::make_pair(-0.93344078641467, 2.51935208410)},
        {11, std::make_pair(-1.31518813776154, -3.5196817556)},
        {12, std::make_pair(-0.88902959996855, 18.503700000)},
        {13, std::make_pair(-1.13938539580989, -1.5492987130)},
        {14, std::make_pair(-1.16481268089087, -3.2935323218)},
        {15, std::make_pair(-1.12676853187896, 1.06095918008)},
        {16, std::make_pair(-0.85591181008169, 4.72836828320)},
        {17, std::make_pair(-0.66152214992810, -2.1362205133)},
        {18, std::make_pair(-0.93777596478409, 21.5414000000)},
        {19, std::make_pair(-1.62344331134358, 2.27424885083)},
        {20, std::make_pair(-0.79749248969060, 2.78195927791)},
        {21, std::make_pair(-1.25198756335565, 7.11743370165)},
        {22, std::make_pair(-1.13521274086681, -3.7343829974)},
        {23, std::make_pair(-1.47009745790235, 3.34796062884)},
        {24, std::make_pair(-0.77673709921481, 1.09325121424)},
        {25, std::make_pair(-0.86334883781336, 3.25428635896)},
        {26, std::make_pair(-1.10664848702055, -8.1985300000)},
        {27, std::make_pair(-1.05634917284632, 12.4963997935)},
        {28, std::make_pair(-1.37078932242451, -4.2506378277)},
        {29, std::make_pair(-1.40513567324558, -4.0669599773)},
        {30, std::make_pair(-0.75790563037906, 0.74308439823)},
        {31, std::make_pair(-1.25942494880407, -0.8413265751)},
        {32, std::make_pair(-1.36797295441616, -3.5284100000)},
        {33, std::make_pair(-0.97584582935021, 2.43064052066)},
        {34, std::make_pair(-0.73044055132200, -9.0572200000)},
        {35, std::make_pair(-0.99395762139099, 16.8716000000)},
        {36, std::make_pair(-1.05631891540486, -3.408550000)},
        {37, std::make_pair(-1.27008334059095, -2.5304121298)},
        {38, std::make_pair(-0.93313394954965, 10.090100000)},
        {39, std::make_pair(-1.34807712135272, -6.65386)},
        {40, std::make_pair(-1.27058662698189, 13.8487884351)},
        {41, std::make_pair(-1.08747017070819, -0.3867686166)},
        {42, std::make_pair(-1.05783628398295, 4.60384047228)},
        {43, std::make_pair(-1.39958702132070, -2.7664378521)},
        {44, std::make_pair(-1.61522913218290, 2.93761189962)},
        {45, std::make_pair(-1.01529227722470, 2.21227997318)},
        {46, std::make_pair(-1.75824095752598, 9.97853685392)},
        {47, std::make_pair(-1.34940971387934, -5.90466)}};

    std::map<int, pair>::iterator it;
};

#endif
