/*
 * Automatically Generated from Mathematica.
 * Wed 23 Oct 2019 10:26:06 GMT-07:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_VectorNav_to_RightToeBack_src.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE static __inline__        /* use standard inline */
#endif

/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
INLINE double Power(double x, double y) { return pow(x, y); }
INLINE double Sqrt(double x) { return sqrt(x); }

INLINE double Abs(double x) { return fabs(x); }

INLINE double Exp(double x) { return exp(x); }
INLINE double Log(double x) { return log(x); }

INLINE double Sin(double x) { return sin(x); }
INLINE double Cos(double x) { return cos(x); }
INLINE double Tan(double x) { return tan(x); }

INLINE double Csc(double x) { return 1.0/sin(x); }
INLINE double Sec(double x) { return 1.0/cos(x); }

INLINE double ArcSin(double x) { return asin(x); }
INLINE double ArcCos(double x) { return acos(x); }

/* update ArcTan function to use atan2 instead. */
INLINE double ArcTan(double x, double y) { return atan2(y,x); }

INLINE double Sinh(double x) { return sinh(x); }
INLINE double Cosh(double x) { return cosh(x); }
INLINE double Tanh(double x) { return tanh(x); }

#define E 2.71828182845904523536029
#define Pi 3.14159265358979323846264
#define Degree 0.01745329251994329576924

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1)
{
  double t52;
  double t136;
  double t531;
  double t1064;
  double t1121;
  double t1154;
  double t1245;
  double t1608;
  double t2115;
  double t2341;
  double t2342;
  double t2453;
  double t2023;
  double t2059;
  double t2066;
  double t3030;
  double t3041;
  double t3071;
  double t3727;
  double t3757;
  double t4045;
  double t4071;
  double t3591;
  double t3609;
  double t3694;
  double t4161;
  double t4179;
  double t4420;
  double t4846;
  double t4960;
  double t4976;
  double t5019;
  double t4718;
  double t4738;
  double t4826;
  double t5281;
  double t5289;
  double t5293;
  double t5439;
  double t5449;
  double t5454;
  double t5462;
  double t5419;
  double t5421;
  double t5434;
  double t5515;
  double t5522;
  double t5523;
  double t265;
  double t449;
  double t504;
  double t674;
  double t929;
  double t1187;
  double t1368;
  double t1460;
  double t1668;
  double t1768;
  double t1770;
  double t2362;
  double t2708;
  double t2837;
  double t3107;
  double t3155;
  double t3404;
  double t5680;
  double t5682;
  double t5685;
  double t5687;
  double t5691;
  double t5693;
  double t4053;
  double t4073;
  double t4131;
  double t4462;
  double t4663;
  double t4685;
  double t5697;
  double t5699;
  double t5705;
  double t5714;
  double t5715;
  double t5725;
  double t5011;
  double t5095;
  double t5167;
  double t5318;
  double t5348;
  double t5417;
  double t5737;
  double t5738;
  double t5747;
  double t5765;
  double t5766;
  double t5767;
  double t5459;
  double t5467;
  double t5483;
  double t5529;
  double t5542;
  double t5547;
  double t5775;
  double t5779;
  double t5780;
  double t5787;
  double t5788;
  double t5789;
  double t5832;
  double t5833;
  double t5834;
  double t5838;
  double t5844;
  double t5846;
  double t5849;
  double t5854;
  double t5855;
  double t5863;
  double t5865;
  double t5867;
  double t5872;
  double t5873;
  double t5874;
  double t5876;
  double t5880;
  double t5881;
  double t5914;
  double t5918;
  double t5919;
  double t5921;
  double t5923;
  double t5925;
  double t5933;
  double t5935;
  double t5936;
  double t5938;
  double t5940;
  double t5941;
  double t5943;
  double t5944;
  double t5945;
  double t5948;
  double t5949;
  double t5951;
  double t5893;
  double t5895;
  double t5900;
  double t5982;
  double t5983;
  double t5985;
  double t5987;
  double t5988;
  double t5989;
  double t5992;
  double t5993;
  double t5996;
  double t5999;
  double t6000;
  double t6010;
  double t6015;
  double t6017;
  double t6021;
  double t6028;
  double t6029;
  double t6035;
  double t6082;
  double t6085;
  double t6086;
  double t6089;
  double t6094;
  double t6095;
  double t6100;
  double t6101;
  double t6102;
  double t6108;
  double t6113;
  double t6117;
  double t6129;
  double t6131;
  double t6133;
  double t6119;
  double t6120;
  double t6123;
  double t6064;
  double t6067;
  double t6068;
  double t6166;
  double t6167;
  double t6169;
  double t6172;
  double t6178;
  double t6181;
  double t6184;
  double t6185;
  double t6187;
  double t6190;
  double t6191;
  double t6193;
  double t6196;
  double t6197;
  double t6209;
  double t6211;
  double t6212;
  double t6203;
  double t6204;
  double t6205;
  double t6157;
  double t6158;
  double t6240;
  double t6241;
  double t6242;
  double t6247;
  double t6250;
  double t6252;
  double t6255;
  double t6260;
  double t6270;
  double t6273;
  double t6275;
  double t6279;
  double t6283;
  double t6284;
  double t6299;
  double t6303;
  double t6306;
  double t6290;
  double t6291;
  double t6294;
  double t6088;
  double t6099;
  double t6107;
  double t6118;
  double t6127;
  double t6137;
  double t6138;
  double t6140;
  double t6144;
  double t6146;
  double t6147;
  double t6148;
  double t6152;
  double t6154;
  double t6328;
  double t6329;
  double t6334;
  double t6336;
  double t6337;
  double t6358;
  double t6359;
  double t6367;
  double t6370;
  double t6374;
  double t6375;
  double t6377;
  double t6387;
  double t6392;
  double t6393;
  double t6379;
  double t6380;
  double t6382;
  double t6423;
  double t6424;
  double t6426;
  double t6428;
  double t6433;
  double t6444;
  double t6446;
  double t6448;
  double t6452;
  double t6453;
  double t6459;
  double t6460;
  double t6462;
  double t6473;
  double t6474;
  double t6475;
  double t6464;
  double t6468;
  double t6469;
  double t6515;
  double t6516;
  double t6517;
  double t6527;
  double t6528;
  double t6531;
  double t6532;
  double t6545;
  double t6546;
  double t6549;
  double t6539;
  double t6540;
  double t6542;
  double t6508;
  double t6510;
  double t6519;
  double t6520;
  double t6521;
  double t6577;
  double t6578;
  double t6588;
  double t6591;
  double t6592;
  double t6584;
  double t6585;
  double t6610;
  double t6611;
  double t6612;
  double t6615;
  double t6616;
  double t6620;
  double t6621;
  double t6629;
  double t6630;
  double t6634;
  double t6624;
  double t6625;
  double t6627;
  double t6656;
  double t6657;
  double t6658;
  double t6668;
  double t6669;
  double t6665;
  double t6666;
  double t6649;
  double t6650;
  double t6659;
  double t6661;
  double t6663;
  double t6688;
  double t6691;
  double t5810;
  double t6704;
  double t6706;
  double t6707;
  double t6714;
  double t6715;
  double t6709;
  double t6711;
  double t6733;
  double t6734;
  double t6736;
  double t6675;
  double t6678;
  double t6730;
  double t6731;
  double t6737;
  double t6738;
  double t6739;
  double t6694;
  double t5813;
  double t5818;
  double t6764;
  double t6766;
  double t6767;
  double t6718;
  double t6724;
  t52 = Sin(var1[7]);
  t136 = Cos(var1[8]);
  t531 = Sin(var1[8]);
  t1064 = Cos(var1[9]);
  t1121 = -1.*t1064;
  t1154 = 1. + t1121;
  t1245 = Sin(var1[9]);
  t1608 = Cos(var1[7]);
  t2115 = Cos(var1[10]);
  t2341 = -1.*t2115;
  t2342 = 1. + t2341;
  t2453 = Sin(var1[10]);
  t2023 = -1.*t1064*t52*t531;
  t2059 = -1.*t1608*t1245;
  t2066 = t2023 + t2059;
  t3030 = -1.*t1608*t1064;
  t3041 = t52*t531*t1245;
  t3071 = t3030 + t3041;
  t3727 = Cos(var1[11]);
  t3757 = -1.*t3727;
  t4045 = 1. + t3757;
  t4071 = Sin(var1[11]);
  t3591 = t2115*t2066;
  t3609 = t3071*t2453;
  t3694 = t3591 + t3609;
  t4161 = t2115*t3071;
  t4179 = -1.*t2066*t2453;
  t4420 = t4161 + t4179;
  t4846 = Cos(var1[12]);
  t4960 = -1.*t4846;
  t4976 = 1. + t4960;
  t5019 = Sin(var1[12]);
  t4718 = t3727*t3694;
  t4738 = t4420*t4071;
  t4826 = t4718 + t4738;
  t5281 = t3727*t4420;
  t5289 = -1.*t3694*t4071;
  t5293 = t5281 + t5289;
  t5439 = Cos(var1[13]);
  t5449 = -1.*t5439;
  t5454 = 1. + t5449;
  t5462 = Sin(var1[13]);
  t5419 = t4846*t4826;
  t5421 = t5293*t5019;
  t5434 = t5419 + t5421;
  t5515 = t4846*t5293;
  t5522 = -1.*t4826*t5019;
  t5523 = t5515 + t5522;
  t265 = -1.*t136;
  t449 = 1. + t265;
  t504 = -0.135*t449;
  t674 = 0.049*t531;
  t929 = 0. + t504 + t674;
  t1187 = -0.049*t1154;
  t1368 = -0.09*t1245;
  t1460 = 0. + t1187 + t1368;
  t1668 = -0.09*t1154;
  t1768 = 0.049*t1245;
  t1770 = 0. + t1668 + t1768;
  t2362 = -0.049*t2342;
  t2708 = -0.21*t2453;
  t2837 = 0. + t2362 + t2708;
  t3107 = -0.21*t2342;
  t3155 = 0.049*t2453;
  t3404 = 0. + t3107 + t3155;
  t5680 = t1608*t1064*t531;
  t5682 = -1.*t52*t1245;
  t5685 = t5680 + t5682;
  t5687 = -1.*t1064*t52;
  t5691 = -1.*t1608*t531*t1245;
  t5693 = t5687 + t5691;
  t4053 = -0.0016*t4045;
  t4073 = -0.2707*t4071;
  t4131 = 0. + t4053 + t4073;
  t4462 = -0.2707*t4045;
  t4663 = 0.0016*t4071;
  t4685 = 0. + t4462 + t4663;
  t5697 = t2115*t5685;
  t5699 = t5693*t2453;
  t5705 = t5697 + t5699;
  t5714 = t2115*t5693;
  t5715 = -1.*t5685*t2453;
  t5725 = t5714 + t5715;
  t5011 = 0.0184*t4976;
  t5095 = -0.7055*t5019;
  t5167 = 0. + t5011 + t5095;
  t5318 = -0.7055*t4976;
  t5348 = -0.0184*t5019;
  t5417 = 0. + t5318 + t5348;
  t5737 = t3727*t5705;
  t5738 = t5725*t4071;
  t5747 = t5737 + t5738;
  t5765 = t3727*t5725;
  t5766 = -1.*t5705*t4071;
  t5767 = t5765 + t5766;
  t5459 = -0.0216*t5454;
  t5467 = -1.1135*t5462;
  t5483 = 0. + t5459 + t5467;
  t5529 = -1.1135*t5454;
  t5542 = 0.0216*t5462;
  t5547 = 0. + t5529 + t5542;
  t5775 = t4846*t5747;
  t5779 = t5767*t5019;
  t5780 = t5775 + t5779;
  t5787 = t4846*t5767;
  t5788 = -1.*t5747*t5019;
  t5789 = t5787 + t5788;
  t5832 = -1.*t1064*t2115*t531;
  t5833 = t531*t1245*t2453;
  t5834 = t5832 + t5833;
  t5838 = t2115*t531*t1245;
  t5844 = t1064*t531*t2453;
  t5846 = t5838 + t5844;
  t5849 = t3727*t5834;
  t5854 = t5846*t4071;
  t5855 = t5849 + t5854;
  t5863 = t3727*t5846;
  t5865 = -1.*t5834*t4071;
  t5867 = t5863 + t5865;
  t5872 = t4846*t5855;
  t5873 = t5867*t5019;
  t5874 = t5872 + t5873;
  t5876 = t4846*t5867;
  t5880 = -1.*t5855*t5019;
  t5881 = t5876 + t5880;
  t5914 = t1608*t136*t1064*t2115;
  t5918 = -1.*t1608*t136*t1245*t2453;
  t5919 = t5914 + t5918;
  t5921 = -1.*t1608*t136*t2115*t1245;
  t5923 = -1.*t1608*t136*t1064*t2453;
  t5925 = t5921 + t5923;
  t5933 = t3727*t5919;
  t5935 = t5925*t4071;
  t5936 = t5933 + t5935;
  t5938 = t3727*t5925;
  t5940 = -1.*t5919*t4071;
  t5941 = t5938 + t5940;
  t5943 = t4846*t5936;
  t5944 = t5941*t5019;
  t5945 = t5943 + t5944;
  t5948 = t4846*t5941;
  t5949 = -1.*t5936*t5019;
  t5951 = t5948 + t5949;
  t5893 = 0.049*t136;
  t5895 = -0.135*t531;
  t5900 = t5893 + t5895;
  t5982 = t136*t1064*t2115*t52;
  t5983 = -1.*t136*t52*t1245*t2453;
  t5985 = t5982 + t5983;
  t5987 = -1.*t136*t2115*t52*t1245;
  t5988 = -1.*t136*t1064*t52*t2453;
  t5989 = t5987 + t5988;
  t5992 = t3727*t5985;
  t5993 = t5989*t4071;
  t5996 = t5992 + t5993;
  t5999 = t3727*t5989;
  t6000 = -1.*t5985*t4071;
  t6010 = t5999 + t6000;
  t6015 = t4846*t5996;
  t6017 = t6010*t5019;
  t6021 = t6015 + t6017;
  t6028 = t4846*t6010;
  t6029 = -1.*t5996*t5019;
  t6035 = t6028 + t6029;
  t6082 = -1.*t136*t2115*t1245;
  t6085 = -1.*t136*t1064*t2453;
  t6086 = t6082 + t6085;
  t6089 = -1.*t136*t1064*t2115;
  t6094 = t136*t1245*t2453;
  t6095 = t6089 + t6094;
  t6100 = t3727*t6086;
  t6101 = t6095*t4071;
  t6102 = t6100 + t6101;
  t6108 = t3727*t6095;
  t6113 = -1.*t6086*t4071;
  t6117 = t6108 + t6113;
  t6129 = t4846*t6117;
  t6131 = -1.*t6102*t5019;
  t6133 = t6129 + t6131;
  t6119 = t4846*t6102;
  t6120 = t6117*t5019;
  t6123 = t6119 + t6120;
  t6064 = -0.09*t1064;
  t6067 = -0.049*t1245;
  t6068 = t6064 + t6067;
  t6166 = -1.*t1608*t1064*t531;
  t6167 = t52*t1245;
  t6169 = t6166 + t6167;
  t6172 = t6169*t2453;
  t6178 = t5714 + t6172;
  t6181 = t2115*t6169;
  t6184 = -1.*t5693*t2453;
  t6185 = t6181 + t6184;
  t6187 = t3727*t6178;
  t6190 = t6185*t4071;
  t6191 = t6187 + t6190;
  t6193 = t3727*t6185;
  t6196 = -1.*t6178*t4071;
  t6197 = t6193 + t6196;
  t6209 = t4846*t6197;
  t6211 = -1.*t6191*t5019;
  t6212 = t6209 + t6211;
  t6203 = t4846*t6191;
  t6204 = t6197*t5019;
  t6205 = t6203 + t6204;
  t6157 = 0.049*t1064;
  t6158 = t6157 + t1368;
  t6240 = t1608*t1064;
  t6241 = -1.*t52*t531*t1245;
  t6242 = t6240 + t6241;
  t6247 = t2115*t6242;
  t6250 = t2066*t2453;
  t6252 = t6247 + t6250;
  t6255 = -1.*t6242*t2453;
  t6260 = t3591 + t6255;
  t6270 = t3727*t6252;
  t6273 = t6260*t4071;
  t6275 = t6270 + t6273;
  t6279 = t3727*t6260;
  t6283 = -1.*t6252*t4071;
  t6284 = t6279 + t6283;
  t6299 = t4846*t6284;
  t6303 = -1.*t6275*t5019;
  t6306 = t6299 + t6303;
  t6290 = t4846*t6275;
  t6291 = t6284*t5019;
  t6294 = t6290 + t6291;
  t6088 = t6086*t4131;
  t6099 = t6095*t4685;
  t6107 = t6102*t5167;
  t6118 = t6117*t5417;
  t6127 = t6123*t5483;
  t6137 = t6133*t5547;
  t6138 = t5439*t6133;
  t6140 = -1.*t6123*t5462;
  t6144 = t6138 + t6140;
  t6146 = -1.200144*t6144;
  t6147 = t5439*t6123;
  t6148 = t6133*t5462;
  t6152 = t6147 + t6148;
  t6154 = -0.027251*t6152;
  t6328 = 0.049*t2115;
  t6329 = t6328 + t2708;
  t6334 = -0.21*t2115;
  t6336 = -0.049*t2453;
  t6337 = t6334 + t6336;
  t6358 = -1.*t2115*t5685;
  t6359 = t6358 + t6184;
  t6367 = t6359*t4071;
  t6370 = t5765 + t6367;
  t6374 = t3727*t6359;
  t6375 = -1.*t5725*t4071;
  t6377 = t6374 + t6375;
  t6387 = t4846*t6377;
  t6392 = -1.*t6370*t5019;
  t6393 = t6387 + t6392;
  t6379 = t4846*t6370;
  t6380 = t6377*t5019;
  t6382 = t6379 + t6380;
  t6423 = t1064*t52*t531;
  t6424 = t1608*t1245;
  t6426 = t6423 + t6424;
  t6428 = -1.*t6426*t2453;
  t6433 = t6247 + t6428;
  t6444 = -1.*t2115*t6426;
  t6446 = t6444 + t6255;
  t6448 = t3727*t6433;
  t6452 = t6446*t4071;
  t6453 = t6448 + t6452;
  t6459 = t3727*t6446;
  t6460 = -1.*t6433*t4071;
  t6462 = t6459 + t6460;
  t6473 = t4846*t6462;
  t6474 = -1.*t6453*t5019;
  t6475 = t6473 + t6474;
  t6464 = t4846*t6453;
  t6468 = t6462*t5019;
  t6469 = t6464 + t6468;
  t6515 = t136*t1064*t2115;
  t6516 = -1.*t136*t1245*t2453;
  t6517 = t6515 + t6516;
  t6527 = -1.*t6517*t4071;
  t6528 = t6100 + t6527;
  t6531 = -1.*t3727*t6517;
  t6532 = t6531 + t6113;
  t6545 = t4846*t6532;
  t6546 = -1.*t6528*t5019;
  t6549 = t6545 + t6546;
  t6539 = t4846*t6528;
  t6540 = t6532*t5019;
  t6542 = t6539 + t6540;
  t6508 = 0.0016*t3727;
  t6510 = t6508 + t4073;
  t6519 = -0.2707*t3727;
  t6520 = -0.0016*t4071;
  t6521 = t6519 + t6520;
  t6577 = -1.*t3727*t5705;
  t6578 = t6577 + t6375;
  t6588 = t4846*t6578;
  t6591 = -1.*t5767*t5019;
  t6592 = t6588 + t6591;
  t6584 = t6578*t5019;
  t6585 = t5787 + t6584;
  t6610 = t2115*t6426;
  t6611 = t6242*t2453;
  t6612 = t6610 + t6611;
  t6615 = -1.*t6612*t4071;
  t6616 = t6448 + t6615;
  t6620 = -1.*t3727*t6612;
  t6621 = t6620 + t6460;
  t6629 = t4846*t6621;
  t6630 = -1.*t6616*t5019;
  t6634 = t6629 + t6630;
  t6624 = t4846*t6616;
  t6625 = t6621*t5019;
  t6627 = t6624 + t6625;
  t6656 = t3727*t6517;
  t6657 = t6086*t4071;
  t6658 = t6656 + t6657;
  t6668 = -1.*t4846*t6658;
  t6669 = t6668 + t6546;
  t6665 = -1.*t6658*t5019;
  t6666 = t6539 + t6665;
  t6649 = -0.0184*t4846;
  t6650 = t6649 + t5095;
  t6659 = -0.7055*t4846;
  t6661 = 0.0184*t5019;
  t6663 = t6659 + t6661;
  t6688 = -1.*t4846*t5747;
  t6691 = t6688 + t6591;
  t5810 = t5439*t5789;
  t6704 = t3727*t6612;
  t6706 = t6433*t4071;
  t6707 = t6704 + t6706;
  t6714 = -1.*t4846*t6707;
  t6715 = t6714 + t6630;
  t6709 = -1.*t6707*t5019;
  t6711 = t6624 + t6709;
  t6733 = t4846*t6658;
  t6734 = t6528*t5019;
  t6736 = t6733 + t6734;
  t6675 = -1.*t6666*t5462;
  t6678 = t5439*t6666;
  t6730 = 0.0216*t5439;
  t6731 = t6730 + t5467;
  t6737 = -1.1135*t5439;
  t6738 = -0.0216*t5462;
  t6739 = t6737 + t6738;
  t6694 = -1.*t5789*t5462;
  t5813 = -1.*t5780*t5462;
  t5818 = t5810 + t5813;
  t6764 = t4846*t6707;
  t6766 = t6616*t5019;
  t6767 = t6764 + t6766;
  t6718 = -1.*t6711*t5462;
  t6724 = t5439*t6711;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=-1.*t1608*t1770 + t2066*t2837 + t3071*t3404 + t3694*t4131 + t4420*t4685 + t4826*t5167 - 0.135*t52 + 0.1305*t136*t52 - 1.*t1460*t52*t531 + t5293*t5417 + t5434*t5483 - 1.200144*(-1.*t5434*t5462 + t5439*t5523) - 0.027251*(t5434*t5439 + t5462*t5523) + t5523*t5547 - 1.*t52*t929;
  p_output1[23]=0.135*t1608 - 0.1305*t136*t1608 - 1.*t1770*t52 + t1460*t1608*t531 + t2837*t5685 + t3404*t5693 + t4131*t5705 + t4685*t5725 + t5167*t5747 + t5417*t5767 + t5483*t5780 + t5547*t5789 - 0.027251*(t5439*t5780 + t5462*t5789) - 1.200144*t5818 + t1608*t929;
  p_output1[24]=-0.004500000000000004*t136 - 0.049*t531 - 1.*t1460*t531 - 1.*t1064*t2837*t531 + t1245*t3404*t531 + t4131*t5834 + t4685*t5846 + t5167*t5855 + t5417*t5867 + t5483*t5874 + t5547*t5881 - 1.200144*(-1.*t5462*t5874 + t5439*t5881) - 0.027251*(t5439*t5874 + t5462*t5881);
  p_output1[25]=t136*t1460*t1608 + t1064*t136*t1608*t2837 - 1.*t1245*t136*t1608*t3404 + 0.1305*t1608*t531 + t1608*t5900 + t4131*t5919 + t4685*t5925 + t5167*t5936 + t5417*t5941 + t5483*t5945 + t5547*t5951 - 1.200144*(-1.*t5462*t5945 + t5439*t5951) - 0.027251*(t5439*t5945 + t5462*t5951);
  p_output1[26]=t136*t1460*t52 + t1064*t136*t2837*t52 - 1.*t1245*t136*t3404*t52 + 0.1305*t52*t531 + t52*t5900 + t4131*t5985 + t4685*t5989 + t5167*t5996 + t5417*t6010 + t5483*t6021 + t5547*t6035 - 1.200144*(-1.*t5462*t6021 + t5439*t6035) - 0.027251*(t5439*t6021 + t5462*t6035);
  p_output1[27]=-1.*t1245*t136*t2837 - 1.*t1064*t136*t3404 + t136*t6068 + t6088 + t6099 + t6107 + t6118 + t6127 + t6137 + t6146 + t6154;
  p_output1[28]=t2837*t5693 + t1608*t531*t6068 - 1.*t52*t6158 + t3404*t6169 + t4131*t6178 + t4685*t6185 + t5167*t6191 + t5417*t6197 + t5483*t6205 + t5547*t6212 - 1.200144*(-1.*t5462*t6205 + t5439*t6212) - 0.027251*(t5439*t6205 + t5462*t6212);
  p_output1[29]=t2066*t3404 + t52*t531*t6068 + t1608*t6158 + t2837*t6242 + t4131*t6252 + t4685*t6260 + t5167*t6275 + t5417*t6284 + t5483*t6294 + t5547*t6306 - 1.200144*(-1.*t5462*t6294 + t5439*t6306) - 0.027251*(t5439*t6294 + t5462*t6306);
  p_output1[30]=t6088 + t6099 + t6107 + t6118 + t6127 + t6137 + t6146 + t6154 - 1.*t1245*t136*t6329 + t1064*t136*t6337;
  p_output1[31]=t4131*t5725 + t5693*t6329 + t5685*t6337 + t4685*t6359 + t5167*t6370 + t5417*t6377 + t5483*t6382 + t5547*t6393 - 1.200144*(-1.*t5462*t6382 + t5439*t6393) - 0.027251*(t5439*t6382 + t5462*t6393);
  p_output1[32]=t6242*t6329 + t6337*t6426 + t4131*t6433 + t4685*t6446 + t5167*t6453 + t5417*t6462 + t5483*t6469 + t5547*t6475 - 1.200144*(-1.*t5462*t6469 + t5439*t6475) - 0.027251*(t5439*t6469 + t5462*t6475);
  p_output1[33]=t6086*t6510 + t6517*t6521 + t5167*t6528 + t5417*t6532 + t5483*t6542 + t5547*t6549 - 1.200144*(-1.*t5462*t6542 + t5439*t6549) - 0.027251*(t5439*t6542 + t5462*t6549);
  p_output1[34]=t5167*t5767 + t5725*t6510 + t5705*t6521 + t5417*t6578 + t5483*t6585 + t5547*t6592 - 1.200144*(-1.*t5462*t6585 + t5439*t6592) - 0.027251*(t5439*t6585 + t5462*t6592);
  p_output1[35]=t6433*t6510 + t6521*t6612 + t5167*t6616 + t5417*t6621 + t5483*t6627 + t5547*t6634 - 1.200144*(-1.*t5462*t6627 + t5439*t6634) - 0.027251*(t5439*t6627 + t5462*t6634);
  p_output1[36]=t6528*t6650 + t6658*t6663 + t5483*t6666 + t5547*t6669 - 1.200144*(t5439*t6669 + t6675) - 0.027251*(t5462*t6669 + t6678);
  p_output1[37]=t5483*t5789 + t5767*t6650 + t5747*t6663 + t5547*t6691 - 0.027251*(t5810 + t5462*t6691) - 1.200144*(t5439*t6691 + t6694);
  p_output1[38]=t6616*t6650 + t6663*t6707 + t5483*t6711 + t5547*t6715 - 1.200144*(t5439*t6715 + t6718) - 0.027251*(t5462*t6715 + t6724);
  p_output1[39]=t6666*t6731 - 1.200144*(t6675 - 1.*t5439*t6736) - 0.027251*(t6678 - 1.*t5462*t6736) + t6736*t6739;
  p_output1[40]=-0.027251*t5818 - 1.200144*(-1.*t5439*t5780 + t6694) + t5789*t6731 + t5780*t6739;
  p_output1[41]=t6711*t6731 + t6739*t6767 - 1.200144*(t6718 - 1.*t5439*t6767) - 0.027251*(t6724 - 1.*t5462*t6767);
}



void Jp_VectorNav_to_RightToeBack_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
