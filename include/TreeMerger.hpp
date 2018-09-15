/** TreeMerger.hpp generated by R. Yokoyama 09/07/2018 **/

#ifndef VANDLE_MERGER_TREEMERGER_HPP_
#define VANDLE_MERGER_TREEMERGER_HPP_

#include <TFile.h>
#include "YamlReader.hpp"
#include "RemainTime.h"
#include "TSScannorBase.hpp"

/** merger class **/
// input_2 events will be merged to a vector in input_1

template <class TOUT, class TIN1, class TIN2>
class TreeMerger
{
public:
    const static std::string kMsgPrefix;

    TreeMerger();
    TreeMerger(TSScannorBase<TIN1> *input1, TSScannorBase<TIN2> *input2);
    virtual ~TreeMerger();

    void Configure(const std::string &yaml_node_name); // loads configuration from yaml
    void Merge(); // merge events from input2 to input1
    void Write(); // writes tree to the file

protected:
    TFile *tree_file_; // Output tree TFile
    TTree *tree_; // Output tree
    YamlReader *yaml_reader_; // config reader
    RemainTime *remain_time_; // estimates remaining time
    Double_t time_window_low_; // lower limit of the time window to merge events (T1-T2)
    Double_t time_window_up_; // upper limit of the time window to merge events (T1-T2)
    Double_t ts_scale_; // timestamp scale
    ULong64_t print_freq_; // frequency to print scan progress
    TOUT output_object_; // output class object

    /** timestamp scannors of input trees **/
    TSScannorBase<TIN1> *input_scannor_1_; 
    TSScannorBase<TIN2> *input_scannor_2_;

};

template <class TOUT, class TIN1, class TIN2>
const std::string TreeMerger<TOUT,TIN1,TIN2>::kMsgPrefix("[TreeMerger]:");

template <class TOUT, class TIN1, class TIN2>
TreeMerger<TOUT,TIN1,TIN2>::TreeMerger()
{
    tree_file_ = nullptr;
    yaml_reader_ = nullptr;
    yaml_reader_ = nullptr;
    tree_ = nullptr;
    input_scannor_1_ = nullptr;
    input_scannor_2_ = nullptr;
}

template <class TOUT, class TIN1, class TIN2>
TreeMerger<TOUT,TIN1,TIN2>::TreeMerger(TSScannorBase<TIN1> *input1, TSScannorBase<TIN2> *input2)
{
    tree_file_ = nullptr;
    yaml_reader_ = nullptr;
    yaml_reader_ = nullptr;
    tree_ = nullptr;
    input_scannor_1_ = input1;
    input_scannor_2_ = input2;
}

template <class TOUT, class TIN1, class TIN2>
TreeMerger<TOUT,TIN1,TIN2>::~TreeMerger()
{
    if(tree_)
        delete tree_;
    if(tree_file_){
        tree_file_->Close();
        delete tree_file_;
    }
    if(yaml_reader_)
        delete yaml_reader_;
}

template <class TOUT, class TIN1, class TIN2>
void TreeMerger<TOUT,TIN1,TIN2>::Configure(const std::string &yaml_node_name)
{
    /** loads configuration from yaml **/
    if(yaml_reader_){
        delete yaml_reader_;
        yaml_reader_ = nullptr;
    }
    yaml_reader_ = new YamlReader(yaml_node_name);

    /** opens output root file **/
    std::string output_file_name = yaml_reader_->GetString("OutputFileName");
    std::string file_option = yaml_reader_->GetString("FileOption",false,"RECREATE");
    if(tree_file_){
        delete tree_file_;
        tree_file_ = nullptr;
    }
    tree_file_ = new TFile(output_file_name.c_str(),file_option.c_str());
    std::cout << kMsgPrefix << "output file open \"" << output_file_name << "\"" << std::endl;

    /** output tree **/
    std::string tree_name = yaml_reader_->GetString("TreeName");
    if(tree_){
        delete tree_;
        tree_ = nullptr;
    }
    tree_ = new TTree(tree_name.c_str(),tree_name.c_str());
    std::cout << kMsgPrefix << "output TTree \"" << tree_name << "\" created." << std::endl;

    /** output branch **/
    std::string branch_name = yaml_reader_->GetString("BranchName");
    std::string class_name = yaml_reader_->GetString("ClassName");
    Int_t buffsize = yaml_reader_->GetULong64("BuffSize",false,32000);
    Int_t splitlevel = yaml_reader_->GetULong64("SplitLevel",false,99);
    tree_->Branch(branch_name.c_str(),class_name.c_str(),&output_object_,buffsize,splitlevel);

    /** time window **/
    time_window_low_ = yaml_reader_->GetDouble("TimeWindowLow");
    time_window_up_ = yaml_reader_->GetDouble("TimeWindowUp");
    ts_scale_ = yaml_reader_->GetDouble("TimeStampScale",false,1);

    /** frequency of printing scan progress default = 10000 **/
    print_freq_ = yaml_reader_->GetULong64("PrintFrequency",false,10000);
    return;
}

template <class TOUT, class TIN1, class TIN2>
void TreeMerger<TOUT,TIN1,TIN2>::Merge()
{
    if((!input_scannor_1_)||(!input_scannor_2_))
        throw kMsgPrefix + "Merger(), pointer to input scannors are null";
 
    auto map1 = input_scannor_1_->GetMap();
    auto map2 = input_scannor_2_->GetMap();
 
    const ULong64_t total_entry = map1.size();
    RemainTime remain_time(total_entry); // set total number of entries to estimate remaining time.
    ULong64_t i_entry = 0;
 
    for ( auto entry :  map1 )
    {
        /** loop over input2 events whithin T1-up < T2 < T1+low **/
        auto it = map2.lower_bound((ULong64_t)(entry.first*ts_scale_ - time_window_up_));
        auto last = map2.upper_bound((ULong64_t)(entry.first*ts_scale_ + time_window_low_));
        //std::cout << (double)(*it).first << "/" << (*it).second << "  " << (double)(*last).first << "/" << (*last).second << "  " << entry.first*ts_scale_ << "/" << entry.second*ts_scale_ << std::endl;
        if( it == map2.end() ) // Skip if there is no correlated event.
            continue;
        TOUT o_obj(*input_scannor_1_->GetEntry(entry.second));
        while ( it != last )
        {
           o_obj.output_vec_.emplace_back(*input_scannor_2_->GetEntry(it->second));
           ++it; 
        }
        output_object_ = o_obj;
        tree_->Fill();
        /** displays progress **/
        if ( !(i_entry%print_freq_) && i_entry){
            tm *remain = remain_time.remain(i_entry);
            std::cout << kMsgPrefix << i_entry << "/" << total_entry << " ";
            std::cout << 100.*(double)i_entry/(double)(total_entry) << "\% scanned. Remaining " << remain->tm_hour << "h ";
            std::cout << remain->tm_min << "m " << remain->tm_sec << "s" << std::endl;
        }
        ++i_entry;
    }

    return;
}

template <class TOUT, class TIN1, class TIN2>
void TreeMerger<TOUT,TIN1,TIN2>::Write()
{
    /** writes to the output file **/
    std::cout << kMsgPrefix << tree_->GetEntries() << " events have been merged." << std::endl;
    std::cout << kMsgPrefix << "writing " << tree_->GetName() << " to " << tree_file_->GetName() << std::endl;
    if(!tree_file_){
        std::cout << kMsgPrefix << "Output file is not open. No tree has been written." << std::endl;
        return;
    }
    tree_file_->Write();
    return;
}

#endif /* VANDLE_MERGER_TREEMERGER_HPP_ */
