#ifndef TCuts_Vandle_h
#define TCuts_Vandle_h
// Root Headers needed
#include <TObject.h>
#include <TROOT.h>
#include "TCutG.h"

namespace TCutsVandle {
// TCutG* VTQ_fullQ = new TCutG("VTQ_fullQ", 12);
// TCutG* CBdT = new TCutG("clover_beta_tdiff", 17);

//! Example on how to load the TCUTs
// nGinV = new TCutG("VTQ_fullQ", 12);
// for (Int_t it = 0; it < TCutsVandle::VTQ_fullQ_vec.size(); it++) {
//     nGinV->SetPoint(it, TCutsVandle::VTQ_fullQ_vec.at(it).first, TCutsVandle::VTQ_fullQ_vec.at(it).second);
// }

// valid_CBdT = new TCutG("clover_beta_tdiff", 17);
// for (Int_t it = 0; it < TCutsVandle::CloBetaTDiff_cut.size(); it++) {
//     valid_CBdT->SetPoint(it, TCutsVandle::CloBetaTDiff_cut.at(it).first, TCutsVandle::CloBetaTDiff_cut.at(it).second);
// }

static std::vector<std::pair<Double_t, Double_t>> clover_beta_timing_cut = {{70.1373, 327.99}, {142.444, 227.512}, {214.75, 104.007}, {207.52, -34.1507}, {272.596, -207.895}, {373.825, -287.44}, {554.591, -433.971}, {807.664, -480.024}, {1212.58, -549.103}, {1769.34, -609.809}, {2347.79, -630.742}, {3114.24, -655.861}, {3620.39, -668.421}, {4292.84, -683.074}, {4972.52, -691.447}, {5507.59, -704.007}, {6396.96, -716.567}, {7365.87, -727.033}, {7792.48, -731.22}, {7843.09, -762.62}, {7843.09, -785.646}, {7763.56, -812.859}, {7684.02, -831.699}, {7257.41, -852.632}, {2521.33, -869.378}, {1031.81, -881.938}, {330.441, -846.352}, {26.7534, -745.873}, {41.2147, 332.177}, {99.06, 302.871}, {113.521, 304.964}, {70.1373, 327.99}};

//std::vector<std::pair<Double_t, Double_t>> vandle_banana_cut = {};

static std::vector<std::pair<Double_t, Double_t>> hagrid_beta_timing_cut = {{21.2002, -190.458}, {339.206, -263.889}, {869.216, -313.432}, {1293.22, -331.127}, {2194.24, -337.32}, {3360.26, -341.743}, {4764.79, -346.167}, {6858.33, -348.821}, {8501.36, -348.821}, {9614.38, -349.706}, {11442.9, -349.706}, {13775, -350.59}, {16345.5, -351.475}, {19419.6, -351.475}, {25276.2, -351.475}, {27740.7, -353.244}, {29913.8, -349.706}, {30390.8, -355.014}, {30390.8, -375.362}, {30152.3, -390.402}, {29436.8, -397.48}, {23686.2, -406.327}, {19684.6, -409.866}, {16372, -414.289}, {11866.9, -412.52}, {8686.87, -409.866}, {6301.82, -407.212}, {4022.78, -408.981}, {2512.25, -424.906}, {1425.73, -447.024}, {683.713, -466.487}, {339.206, -471.796}, {74.2012, -475.334}, {-58.3013, -479.758}, {-31.8008, -202.844}, {100.702, -202.844}, {21.2002, -190.458}};

//std::vector<std::pair<Double_t, Double_t>> neutron_beta_timing_cut = {};

// TCutG* CBdt = new TCutG("clover_beta_tdiff", 17);
// CBdT->SetVarX("Clover Energy");
// CBdT->SetVarY("Clover-Beta dt");
// CBdT->SetTitle("Graph");
// CBdT->SetFillStyle(1000);
// CBdT->SetPoint(0, 67.2575, 935.835);
// CBdT->SetPoint(1, 125.912, 691.18);
// CBdT->SetPoint(2, 297.967, 512.45);
// CBdT->SetPoint(3, 599.061, 417.225);
// CBdT->SetPoint(4, 1920.75, 348.37);
// CBdT->SetPoint(5, 3582.64, 314.675);
// CBdT->SetPoint(6, 5549.53, 291.235);
// CBdT->SetPoint(7, 5690.3, 232.635);
// CBdT->SetPoint(8, 5338.37, 179.895);
// CBdT->SetPoint(9, 3402.76, 200.405);
// CBdT->SetPoint(10, 1005.74, 200.405);
// CBdT->SetPoint(11, 638.165, 204.8);
// CBdT->SetPoint(12, 137.643, 247.285);
// CBdT->SetPoint(13, 55.5265, 399.645);
// CBdT->SetPoint(14, 32.0646, 595.955);
// CBdT->SetPoint(15, 32.0646, 921.185);
// CBdT->SetPoint(16, 67.2575, 927.045);

//    TCutG *cutg = new TCutG("CUTG",19);
//    cutg->SetVarX("Clover Energy vs Clover - low res Beta dt");
//    cutg->SetVarY("");
//    cutg->SetTitle("Graph");
//    cutg->SetFillStyle(1000);
//    cutg->SetPoint(0,38.3654,512.502);
//    cutg->SetPoint(1,43.2824,587.187);
//    cutg->SetPoint(2,48.1356,615.194);
//    cutg->SetPoint(3,54.266,630.131);
//    cutg->SetPoint(4,104.343,489.065);
//    cutg->SetPoint(5,173.747,399.219);
//    cutg->SetPoint(6,249.274,331.006);
//    cutg->SetPoint(7,807.657,206.383);
//    cutg->SetPoint(8,820.791,205.594);
//    cutg->SetPoint(9,2889.36,117.541);
//    cutg->SetPoint(10,5580.35,81.3743);
//    cutg->SetPoint(11,5615.91,-72.3327);
//    cutg->SetPoint(12,917.545,-31.6456);
//    cutg->SetPoint(13,309.009,-13.5624);
//    cutg->SetPoint(14,119.336,67.8119);
//    cutg->SetPoint(15,62.9506,219.365);
//    cutg->SetPoint(16,44.1126,363.133);
//    cutg->SetPoint(17,41.5583,434.083);
//    cutg->SetPoint(18,38.3654,512.502);

// TCutG* VTQ_fullQ = new TCutG("VTQ_fullQ", 12);
// VTQ_fullQ->SetVarX("Tof");
// VTQ_fullQ->SetVarY("QDC");
// VTQ_fullQ->SetTitle("Graph");
// VTQ_fullQ->SetFillStyle(1000);
// VTQ_fullQ->SetPoint(0, 21.7007, 11570.8);
// VTQ_fullQ->SetPoint(1, 48.781, 534.735);
// VTQ_fullQ->SetPoint(2, 48.2701, 40.886);
// VTQ_fullQ->SetPoint(3, 391.117, 45.9992);
// VTQ_fullQ->SetPoint(4, 391.117, 229.405);
// VTQ_fullQ->SetPoint(5, 316.263, 263.684);
// VTQ_fullQ->SetPoint(6, 189.547, 721.779);
// VTQ_fullQ->SetPoint(7, 106.007, 2582.46);
// VTQ_fullQ->SetPoint(8, 69.9854, 9959.34);
// VTQ_fullQ->SetPoint(9, 63.0876, 11821.4);
// VTQ_fullQ->SetPoint(10, 23.489, 11821.4);
// VTQ_fullQ->SetPoint(11, 21.7007, 11570.8);

// TCutG *hagHRBdt = new TCutG("LaBr_HRB_TDIFF",22);
// hagHRBdt->SetVarX("LaBr Energy vs LaBr- high res Beta dt");
// hagHRBdt->SetVarY("");
// hagHRBdt->SetFillStyle(1000);
// hagHRBdt->SetPoint(0,1272.89,20.3925);
// hagHRBdt->SetPoint(1,6242.8,16.97);
// hagHRBdt->SetPoint(2,7976.49,16.97);
// hagHRBdt->SetPoint(3,7967.6,49.1424);
// hagHRBdt->SetPoint(4,4455.77,50.8537);
// hagHRBdt->SetPoint(5,890.59,54.2763);
// hagHRBdt->SetPoint(6,468.281,57.0143);
// hagHRBdt->SetPoint(7,188.223,63.175);
// hagHRBdt->SetPoint(8,103.761,70.0202);
// hagHRBdt->SetPoint(9,77.0893,91.5826);
// hagHRBdt->SetPoint(10,50.4172,96.7165);
// hagHRBdt->SetPoint(11,32.6357,111.091);
// hagHRBdt->SetPoint(12,23.745,137.103);
// hagHRBdt->SetPoint(13,14.8543,144.633);
// hagHRBdt->SetPoint(14,5.96358,124.44);
// hagHRBdt->SetPoint(15,5.96358,60.0947);
// hagHRBdt->SetPoint(16,10.4089,63.5173);
// hagHRBdt->SetPoint(17,19.2997,44.0085);
// hagHRBdt->SetPoint(18,32.6357,37.1633);
// hagHRBdt->SetPoint(19,117.098,26.211);
// hagHRBdt->SetPoint(20,1268.45,20.3925);
// hagHRBdt->SetPoint(21,1272.89,20.3925);

// TCutG *naiBdt = new TCutG("NaI_B_TDIFF",22);
// naiBdt->SetVarX("nai Energy vs NaI-Beta dt");
// naiBdt->SetVarY("");
// naiBdt->SetTitle("Graph");
// naiBdt->SetFillStyle(1000);
// naiBdt->SetPoint(0,389.882,247.477);
// naiBdt->SetPoint(1,974.867,231.133);
// naiBdt->SetPoint(2,3731.13,212.746);
// naiBdt->SetPoint(3,6466.19,214.789);
// naiBdt->SetPoint(4,7905.96,185.505);
// naiBdt->SetPoint(5,5351.53,167.799);
// naiBdt->SetPoint(6,4224.4,160.308);
// naiBdt->SetPoint(7,3106.26,166.437);
// naiBdt->SetPoint(8,1912.83,150.774);
// naiBdt->SetPoint(9,1191.93,119.448);
// naiBdt->SetPoint(10,986.463,51.3477);
// naiBdt->SetPoint(11,279.985,47.9426);
// naiBdt->SetPoint(12,44.2562,86.7599);
// naiBdt->SetPoint(13,15.7255,150.093);
// naiBdt->SetPoint(14,1.40077,175.29);
// naiBdt->SetPoint(15,1.3843,333.283);
// naiBdt->SetPoint(16,1.40907,438.839);
// naiBdt->SetPoint(17,15.1774,422.495);
// naiBdt->SetPoint(18,69.7745,353.032);
// naiBdt->SetPoint(19,87.8702,293.104);
// naiBdt->SetPoint(20,396.859,248.839);
// naiBdt->SetPoint(21,389.882,247.477);
// naiBdt->Draw("");

// newHagHRBdt = new TCutG("new_hagHRBdt",20);
// newHagHRBdt->SetVarX("LaBr Energy vs LaBr- high res Beta dt");
// newHagHRBdt->SetVarY("");
// newHagHRBdt->SetTitle("Graph");
// newHagHRBdt->SetFillStyle(1000);
// newHagHRBdt->SetPoint(0,153.083,-4.36398);
// newHagHRBdt->SetPoint(1,868.021,-11.4641);
// newHagHRBdt->SetPoint(2,5753.49,-12.5686);
// newHagHRBdt->SetPoint(3,7014.28,-11.1485);
// newHagHRBdt->SetPoint(4,6565.97,-1.68172);
// newHagHRBdt->SetPoint(5,5385.77,-0.577258);
// newHagHRBdt->SetPoint(6,2380.19,1.78944);
// newHagHRBdt->SetPoint(7,899.862,3.05169);
// newHagHRBdt->SetPoint(8,318.462,7.46953);
// newHagHRBdt->SetPoint(9,184.401,11.7296);
// newHagHRBdt->SetPoint(10,95.8369,18.3564);
// newHagHRBdt->SetPoint(11,63.3296,26.7187);
// newHagHRBdt->SetPoint(12,30.4422,50.3857);
// newHagHRBdt->SetPoint(13,19.639,74.8417);
// newHagHRBdt->SetPoint(14,7.03423,55.2769);
// newHagHRBdt->SetPoint(15,22.8197,22.3009);
// newHagHRBdt->SetPoint(16,42.1006,8.57399);
// newHagHRBdt->SetPoint(17,150.35,-4.2062);
// newHagHRBdt->SetPoint(18,150.35,-4.2062);
// newHagHRBdt->SetPoint(19,153.083,-4.36398);
// newHagHRBdt->Draw("");

//    TCutG *newHagLRBdt = new TCutG("newHagLRBdt_TCUT",23);
//    newHagLRBdt->SetVarX("LaBr Energy vs LaBr- low res Beta dt");
//    newHagLRBdt->SetVarY("");
//    newHagLRBdt->SetTitle("Graph");
//    newHagLRBdt->SetFillStyle(1000);
//    newHagLRBdt->SetPoint(0,4171.41,153.516);
//    newHagLRBdt->SetPoint(1,5709.8,137.135);
//    newHagLRBdt->SetPoint(2,5709.8,114.851);
//    newHagLRBdt->SetPoint(3,5142.5,108.259);
//    newHagLRBdt->SetPoint(4,3981.84,106.147);
//    newHagLRBdt->SetPoint(5,3344.57,106.147);
//    newHagLRBdt->SetPoint(6,2925.98,106.147);
//    newHagLRBdt->SetPoint(7,2278.8,105.957);
//    newHagLRBdt->SetPoint(8,1694.11,106.147);
//    newHagLRBdt->SetPoint(9,1095.43,106.528);
//    newHagLRBdt->SetPoint(10,700.124,106.528);
//    newHagLRBdt->SetPoint(11,118.882,113.217);
//    newHagLRBdt->SetPoint(12,46.6259,129.728);
//    newHagLRBdt->SetPoint(13,11.3529,176.219);
//    newHagLRBdt->SetPoint(14,9.04981,231.362);
//    newHagLRBdt->SetPoint(15,27.3116,231.362);
//    newHagLRBdt->SetPoint(16,65.3228,196.564);
//    newHagLRBdt->SetPoint(17,131.997,180.694);
//    newHagLRBdt->SetPoint(18,317.545,172.781);
//    newHagLRBdt->SetPoint(19,680.066,169.107);
//    newHagLRBdt->SetPoint(20,1195.24,163.448);
//    newHagLRBdt->SetPoint(21,1774.76,161.412);
//    newHagLRBdt->SetPoint(22,4171.41,153.516);
//    newHagLRBdt->Draw("");
// }

//    newNaiLRBdt = new TCutG("new_naiLRBdt",24);
// newNaiLRBdt->SetVarX("nai Energy vs nai- low res Beta dt");
// newNaiLRBdt->SetVarY("");
// newNaiLRBdt->SetTitle("Graph");
// newNaiLRBdt->SetFillStyle(1000);
// newNaiLRBdt->SetPoint(0,161.75,66.012);
// newNaiLRBdt->SetPoint(1,876.564,26.8461);
// newNaiLRBdt->SetPoint(2,2652.4,17.0547);
// newNaiLRBdt->SetPoint(3,3836.41,11.1798);
// newNaiLRBdt->SetPoint(4,4539.81,-24.0694);
// newNaiLRBdt->SetPoint(5,2848.21,-34.84);
// newNaiLRBdt->SetPoint(6,947.388,-37.7775);
// newNaiLRBdt->SetPoint(7,193.902,-49.5272);
// newNaiLRBdt->SetPoint(8,55.214,8.24237);
// newNaiLRBdt->SetPoint(9,23.3373,33.7002);
// newNaiLRBdt->SetPoint(10,15.1232,37.6167);
// newNaiLRBdt->SetPoint(11,5.6889,41.5333);
// newNaiLRBdt->SetPoint(12,1.88006,55.2414);
// newNaiLRBdt->SetPoint(13,2.04517,213.863);
// newNaiLRBdt->SetPoint(14,5.76305,191.343);
// newNaiLRBdt->SetPoint(15,10.5921,172.739);
// newNaiLRBdt->SetPoint(16,20.2388,154.135);
// newNaiLRBdt->SetPoint(17,41.7957,120.844);
// newNaiLRBdt->SetPoint(18,67.4873,86.574);
// newNaiLRBdt->SetPoint(19,96.9829,77.7617);
// newNaiLRBdt->SetPoint(20,117.776,69.9285);
// newNaiLRBdt->SetPoint(21,163.859,66.9911);
// newNaiLRBdt->SetPoint(22,163.859,66.9911);
// newNaiLRBdt->SetPoint(23,161.75,66.012);
// newNaiLRBdt->Draw("");
};  //namespace TCutsVandle

#endif