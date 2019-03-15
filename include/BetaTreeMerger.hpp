/** BetaBetaTreeMerger.hpp generated by R. Yokoyama 09/07/2018 **/

#ifndef VANDLE_MERGER_BETATREEMERGER_HPP_
#define VANDLE_MERGER_BETATREEMERGER_HPP_

#include "TreeMerger.hpp"
#include "BetaTreeMerger.hpp"

/** merger class **/
// input_2 events will be merged to a vector in input_1

template <class TOUT, class TIN1, class TIN2>
class BetaTreeMerger : public TreeMerger<TOUT,TIN1,TIN2>
{
public:
    const static std::string kMsgPrefix;

    BetaTreeMerger();
    BetaTreeMerger(TSScannorBase<TIN1> *input1, TSScannorBase<TIN2> *input2);
    virtual ~BetaTreeMerger();

    //void Configure(const std::string &yaml_node_name); // loads configuration from yaml
    //void Merge(); // merge events from input2 to input1
    //void Write(); // writes tree to the file
    virtual bool IsInGate(const TIN1 &in1, const TIN2 &in2);

};

template <class TOUT, class TIN1, class TIN2>
const std::string BetaTreeMerger<TOUT,TIN1,TIN2>::kMsgPrefix("[BetaTreeMerger]:");

template <class TOUT, class TIN1, class TIN2>
BetaTreeMerger<TOUT,TIN1,TIN2>::BetaTreeMerger() : TreeMerger<TOUT,TIN1,TIN2>()
{
}

template <class TOUT, class TIN1, class TIN2>
BetaTreeMerger<TOUT,TIN1,TIN2>::BetaTreeMerger(TSScannorBase<TIN1> *input1, TSScannorBase<TIN2> *input2)
   : TreeMerger<TOUT,TIN1,TIN2>(input1,input2)
{
}

template <class TOUT, class TIN1, class TIN2>
BetaTreeMerger<TOUT,TIN1,TIN2>::~BetaTreeMerger()
{
}
/*
template <class TOUT, class TIN1, class TIN2>
void BetaTreeMerger<TOUT,TIN1,TIN2>::Configure(const std::string &yaml_node_name)
   : TreeMerger(yaml_node_name)
{
}

template <class TOUT, class TIN1, class TIN2>
void BetaTreeMerger<TOUT,TIN1,TIN2>::Merge()
{
    return;
}

template <class TOUT, class TIN1, class TIN2>
void BetaTreeMerger<TOUT,TIN1,TIN2>::Write()
{
    return;
}
*/
template <class TOUT, class TIN1, class TIN2>
bool BetaTreeMerger<TOUT,TIN1,TIN2>::IsInGate(const TIN1 &in1, const TIN2 &in2)

{  
    const Double_t kDISTANCE = 0.2;

    auto pspmt_imp = in2.low_gain_;
    auto pspmt_beta = in1.high_gain_;

    Double_t x_imp = pspmt_imp.pos_x_*23.6647 - 2.8628 ; // Ion-image overlapped to the beta-image.
    Double_t y_imp = pspmt_imp.pos_y_*15.5979 - 1.4067;
    Double_t x_beta = 11.9135*pspmt_beta.pos_x_; 
    Double_t y_beta = 10.0*pspmt_beta.pos_y_;

    //std::cout << "ximp:" << x_imp << " xbeta:" << x_beta << " yimp:" << y_imp << " ybeta:" << y_beta << " dist:" << pow(x_imp-x_beta,2)+pow(y_imp-y_beta,2) << std::endl;

    if(pow(x_imp-x_beta,2)+pow(y_imp-y_beta,2)<pow(kDISTANCE,2))
        return true;
    else
        return false;
}

#endif /* VANDLE_MERGER_TREEMERGER_HPP_ */
