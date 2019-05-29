#include "AnamergerSelector.h"
#include <iostream>
#include <fstream>
#include <string>

ClassImp(AnamergerSelector);
  
AnamergerSelector::AnamergerSelector(TTree* mergedData):
   tree_reader_ (mergedData),
   beta_  (tree_reader_, "mergedBeta"),
   clover_vec_  (tree_reader_, "clover_vec_"),
   vandle_vec_  (tree_reader_, "vandle_vec_"),
   output_file_name_ ("anamerger_output.root")
{

}

AnamergerSelector::~AnamergerSelector()
{

}

void AnamergerSelector::Begin(TTree* mergedData)
{
  GetOutputList()->Clear();
  if(fInput){
    TNamed *named = (TNamed*)fInput->FindObject("output_file_name");
    if(named)
      output_file_name_ = named->GetTitle();
  }
}

void AnamergerSelector::SlaveBegin(TTree* mergedData)
{
  fHistArray = new TObjArray();
  fHistArray->Add(new TH2F("Tib_ClvE","ClvE_Tib",4000,0,4000,1000,-3,3));
  fHistArray->Add(new TH2F("Tib_HighE","Tib_HighE",4000,0,8000,1000,-3,3));
  fHistArray->Add(new TH2F("Tib_LowE","Tib_LowE",4000,0,8000,1000,-3,3));
  fHistArray->Add(new TH2F("nQDC_nToF","nQDC_nToF",1600,-100,1500,1000,0,32000));
  fHistArray->Add(new TH2F("nQDC_nToF_BG","nQDC_nToF_BG",1600,-100,1500,1000,0,32000));
  fHistArray->Add(new TH2F("nToF_nQDC","nTof_nQDC",1000,0,32000,1600,-100,1000));
  fHistArray->Add(new TH2F("BarN_nToF","BarN_nToF",1600,-100,1500,50,-0.5,49.5));
  fHistArray->Add(new TH1F("Tib","Tib",1000,-10,10));
  fHistArray->Add(new TH1F("Tib_beta_valid","Tib_beta_valid",1000,-10,10));
  fHistArray->Add(new TH1F("clover_energy","Clover Energy",4000,0,4000));
  fHistArray->Add(new TH1F("clover_energy_gated","Clover Energy Gated on Neutrons",4000,0,4000));
  fHistArray->Add(new TH1F("counts_output_vec_","Output Vector",100 ,0 ,100));
  //adding histograms to output list
  TIter next(fHistArray);
  while( auto hist = next() ){
     GetOutputList()->Add(hist);
  }

  n_correction = new TF1("n_correction","[0]+[1]*pow(x,2)",0,65536);
  n_correction->SetParameters(2.9,6.5E-9);
  
  if (gProofServ) {
    const TString msg = TString::Format("SlaveBegin() of Ord = %s called. %d histograms are initialized.",
    gProofServ->GetOrdinal(),GetOutputList()->GetEntries());
    gProofServ->SendAsynMessage(msg);
  }
  else {
    std::cout << "SalveBegin() called. " << GetOutputList()->GetEntries() << " histograms are initialized." << std::endl;
  }

  return;
}

void AnamergerSelector::Init(TTree* mergedData)
{    
  tree_reader_.SetTree( mergedData );
  return;
}

Bool_t AnamergerSelector::Process(Long64_t entry){

  tree_reader_.SetLocalEntry(entry);
  { double counts = 0; 
    auto beta = beta_.Get();
    auto clover_vec = clover_vec_.Get();
    auto vandle_vec = vandle_vec_.Get();
    for( const auto &imp : beta->output_vec_){
      //if( !imp.output_vec_.at(0).sts )
      //  continue;
      const Double_t tib = (8.*((double)beta->dyn_single_.time_ - (double)imp.dyn_single_.time_))/1.E+9;
      ((TH1F*)fHistArray->FindObject("Tib"))->Fill(tib);
      ((TH2F*)fHistArray->FindObject("Tib_HighE"))->Fill(beta->high_gain_.energy_sum_,tib);
      ((TH2F*)fHistArray->FindObject("Tib_LowE"))->Fill(beta->low_gain_.energy_,tib);
      double beta_trans_x_ = 11.9135504*(beta->high_gain_.pos_x_) ;
      double beta_trans_y_ = 10.0*(beta->high_gain_.pos_y_) ;
      if (tib>0.0 && tib <1.0 && beta->high_gain_.valid_ == 1.0 && beta_trans_x_ > 2.0 && beta_trans_x_ < 3.0 && beta_trans_y_ > 1.5 && beta_trans_y_ < 2.5 )
      {
	      counts ++ ;
      }
      
      if (beta->high_gain_.valid_ == 1.0 && beta->high_gain_.energy_sum_ > 1100)
	   {
      ((TH1F*)fHistArray->FindObject("Tib_beta_valid"))->Fill(tib);
  	 }
      bool neutron_gate = false;
      for( const auto &vandle : *vandle_vec){
        if( tib > 0.0 && tib < 1.0 ){
           {
            auto hist = (TH2F*)fHistArray->FindObject("nQDC_nToF");
<<<<<<< HEAD
            hist->Fill(vandle.tof,vandle.qdc);
           }
           {
            auto hist = (TH2F*)fHistArray->FindObject("BarN_nToF");
            hist->Fill(vandle.tof,vandle.barNum);
           }
            if (vandle.tof > 33.0 && vandle.tof < 1000.0 && beta->high_gain_.valid_ == 1 && beta->high_gain_.energy_sum_ > 1100 )  //put the neutron energy value in the bracket
                   neutron_gate = true;

           }
           }
            for( const auto &clv : *clover_vec){
           {
            auto hist = (TH2F*)fHistArray->FindObject("Tib_ClvE");
            hist->Fill(clv.energy,tib);
            }
           if( tib > 0.0 && tib < 1.0 && beta->high_gain_.valid_ == 1 ){
            {
            auto hist = (TH1F*)fHistArray->FindObject("clover_energy");
            hist->Fill(clv.energy);
            }   

            if (neutron_gate){
            auto hist = (TH1F*)fHistArray->FindObject("clover_energy_gated");
            hist->Fill(clv.energy);
           }  
         }
=======
            hist->Fill(vandle.tof - n_correction->Eval(vandle.qdc),vandle.qdc);
          }
          {
            auto hist = (TH2F*)fHistArray->FindObject("nToF_nQDC");
            hist->Fill(vandle.qdc,vandle.tof);
          }
          {
            auto hist = (TH2F*)fHistArray->FindObject("BarN_nToF");
            hist->Fill(vandle.tof,vandle.barNum);
          }
        }
        if( tib > -1.0 && tib < -0.02 ){
          {
            auto hist = (TH2F*)fHistArray->FindObject("nQDC_nToF_BG");
            hist->Fill(vandle.tof - n_correction->Eval(vandle.qdc),vandle.qdc);
          }
        }
>>>>>>> a6d237a2f90665298f3acfbcccd2bb0a74a85564
      }
    }

	      ((TH1F*)fHistArray->FindObject("counts_output_vec_"))->Fill(counts);
  }//end loop through the mergedData TTree

  return kTRUE;
}

void AnamergerSelector::Terminate(){
 
  fOutputFile = new TFile(output_file_name_.c_str(),"recreate");
  std::cout << "[AnamergerSelector::Terminate()]: output file: " << output_file_name_ << std::endl;
  // write the histograms
  TIter next(GetOutputList());
  while( TObject* obj = next() ){
    std::cout << "[AnamergerSelector::Terminate]: writing " << obj->GetName() << " to file." << std::endl;
    obj->Write();
  }
  fOutputFile->Close();
  return ;
}
