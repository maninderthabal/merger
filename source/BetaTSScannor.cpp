/** BetaTSScannor.cpp generated by R. Yokoyama 09/06/2018 **/
#include "BetaTSScannor.hpp"

const std::string BetaTSScannor::kMsgPrefix("[BetaTSScannor]:");

void BetaTSScannor::SetReader()
{
    TSScannorBase<PspmtData>::SetReader();
    std::string br_name = yaml_reader_->GetString("PixieBranchName");
    tree_data_ = new TTreeReaderValue<PspmtData>(*tree_reader_,br_name.c_str());
    std::cout << kMsgPrefix << "TTreeReaderValue: " << br_name << " created." << std::endl;

    high_gain_min_ = yaml_reader_->GetDouble("MinHighGainDynEnergy");
    high_gain_max_ = yaml_reader_->GetDouble("MaxHighGainDynEnergy");
    std::cout << kMsgPrefix << "Beta range on dynode high gain: " << high_gain_min_ << " - " << high_gain_max_ << std::endl;
    low_gain_min_ = yaml_reader_->GetDouble("MinLowGainDynEnergy");
    low_gain_max_ = yaml_reader_->GetDouble("MaxLowGainDynEnergy");
    std::cout << kMsgPrefix << "Beta range on dynode low gain: " << low_gain_min_ << " - " << low_gain_max_ << std::endl;
    return;
}

Bool_t BetaTSScannor::IsInGate()
{
    auto high = tree_data_->Get()->high_gain_;
    {   /** checks if this is an implant event **/
        /** if there is a coinsidence with one of the desi detectors, record the timestamp and returns false **/
        {
            const Double_t tdiff = high.time_ - tree_data_->Get()->desi_top_time_ - 95.;
            const Double_t energy = tree_data_->Get()->desi_top_energy_;
            if( tdiff > -5. && tdiff < 5. && energy > 10. ){
                prev_implant_ = tree_data_->Get()->external_ts_high_;
                return false;
            }
        }
        {
            const Double_t tdiff = high.time_ - tree_data_->Get()->desi_bottom_time_ - 95.;
            const Double_t energy = tree_data_->Get()->desi_bottom_energy_;
            if( tdiff > -5. && tdiff < 5. && energy > 10.){
                prev_implant_ = tree_data_->Get()->external_ts_high_;
                return false;
            }
        }
    }

    {   /* checks if there is a coincidence with veto detector */
        {
            const Double_t tdiff = high.time_ - tree_data_->Get()->veto_first_time_ - 100.;
            const Double_t energy = tree_data_->Get()->veto_first_energy_;
            if( tdiff > -20. && tdiff < 20. && energy > 10. )
                return false;
        }
        {
            const Double_t tdiff = high.time_ - tree_data_->Get()->veto_second_time_ - 100.;
            const Double_t energy = tree_data_->Get()->veto_second_energy_;
            if( tdiff > -20. && tdiff < 20. && energy > 10.)
                return false;
        }
    }

    {   /* energy gates on pspmt */
        auto pspmt_high = tree_data_->Get()->high_gain_;
        if(pspmt_high.energy_<400 || pspmt_high.energy_>4050 )
            return false;
        if(pspmt_high.valid_ == 0 )
            return false;
    }
/*************
    {
        auto pspmt_ts_high = tree_data_->Get()->external_ts_high_;
        if(pspmt_ts_high-prev_implant_ < 50E+3/40. && pspmt_ts_high-prev_implant_>0)
            return false;
    }

**************/
    return true;
}

