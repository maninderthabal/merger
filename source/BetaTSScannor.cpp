/** BetaTSScannor.cpp generated by R. Yokoyama 09/06/2018 **/
#include "BetaTSScannor.hpp"

const std::string BetaTSScannor::kMsgPrefix("[BetaTSScannor]:");

void BetaTSScannor::SetReader()
{
    TSScannorBase::SetReader();
    std::string br_name = yaml_reader_->GetString("PixieBranchName");
    pixie_tree_data_ = new TTreeReaderValue<PixTreeEvent>(*tree_reader_,br_name.c_str());
    std::cout << kMsgPrefix << "TTreeReaderValue: " << br_name << " created." << std::endl;

    high_gain_min_ = yaml_reader_->GetDouble("MinHighGainDynEnergy");
    high_gain_max_ = yaml_reader_->GetDouble("MaxHighGainDynEnergy");
    std::cout << kMsgPrefix << "Beta range on dynode high gain: " << high_gain_min_ << " - " << high_gain_max_ << std::endl;
    low_gain_min_ = yaml_reader_->GetDouble("MinLowGainDynEnergy");
    low_gain_max_ = yaml_reader_->GetDouble("MaxLowGainDynEnergy");
    std::cout << kMsgPrefix << "Beta range on dynode low gain: " << low_gain_min_ << " - " << low_gain_max_ << std::endl;
    return;
}

Bool_t BetaTSScannor::IsInGate() const
{
    std::vector<processor_struct::PSPMT> pspmt_vec = pixie_tree_data_->Get()->pspmt_vec_;
    if(pspmt_vec.empty())
        return false;
    Double_t low_gain = pspmt_vec.at(0).dy_l;
    Double_t high_gain = pspmt_vec.at(0).dy_h;
    if( low_gain > low_gain_min_ && low_gain < low_gain_max_ && high_gain > high_gain_min_ && high_gain < high_gain_max_ )
        return true;
    else
        return false;
}

