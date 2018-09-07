/** TSScannorBase.cpp generated by R. Yokoyama 09/04/2018 **/
#include "TSScannorBase.hpp"

const std::string TSScannorBase::kMsgPrefix("[TSScannorBase]:");

TSScannorBase::TSScannorBase()
{
    tree_file_ = nullptr;
    tree_reader_ = nullptr;
    yaml_reader_ = nullptr;
}

TSScannorBase::~TSScannorBase()
{
    tree_file_->Close();
    if(tree_file_)
        delete tree_file_;
    if(tree_reader_)
        delete tree_reader_;
    if(yaml_reader_)
        delete yaml_reader_;
}

void TSScannorBase::Configure(const std::string &yaml_node_name)
{
    /** loads configuration from yaml **/
    if(yaml_reader_)
        delete yaml_reader_;
    yaml_reader_ = new YamlReader(yaml_node_name);
    std::string input_file_name = yaml_reader_->GetString("InputFileName");
    std::string tree_name = yaml_reader_->GetString("TreeName");

    /** opens input root file **/
    tree_file_ = new TFile(input_file_name.c_str());
    std::cout << kMsgPrefix << "file open \"" << input_file_name << "\"" << std::endl;

    /** creates TTreeReader **/
    tree_reader_ = new TTreeReader(tree_name.c_str(),tree_file_);

    /** scan entries range **/
    first_entry_ = yaml_reader_->GetULong64("FirstEntry",false,0);
    last_entry_ = yaml_reader_->GetULong64("LastEntry",false,tree_reader_->GetEntries(true));
    tree_reader_->SetEntriesRange(first_entry_, last_entry_);

    /** frequency of printing scan progress default = 10000 **/
    print_freq_ = yaml_reader_->GetULong64("PrintFrequency",false,10000);
    return;
}

void TSScannorBase::SetReader()
{
    if(!yaml_reader_){
        std::cout << kMsgPrefix << "SetReader() called before Configure()." << std::endl;
        return;
    }
}

void TSScannorBase::Scan()
{
    ULong64_t total_entry = last_entry_ - first_entry_;
    RemainTime remain_time(total_entry);

    while ( tree_reader_->Next() )
    {
        if ( IsInGate() ){
            entry_ts_map_.emplace(GetTS(),tree_reader_->GetCurrentEntry());
        }
        /** displays progress **/
        ULong64_t i_entry = tree_reader_->GetCurrentEntry() - first_entry_;
        if ( !(tree_reader_->GetCurrentEntry()%print_freq_) && i_entry){
            tm *remain = remain_time.remain(i_entry);
            std::cout << kMsgPrefix << tree_reader_->GetCurrentEntry() << "/" << last_entry_ << " ";
            std::cout << 100.*(double)i_entry/(double)(total_entry) << "\% scanned. Remaining " << remain->tm_hour << "h ";
            std::cout << remain->tm_min << "m " << remain->tm_sec << "s" << std::endl;
        }
    }
    return;
}

