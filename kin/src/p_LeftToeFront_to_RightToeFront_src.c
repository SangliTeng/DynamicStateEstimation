/*
 * Automatically Generated from Mathematica.
 * Wed 23 Oct 2019 10:26:42 GMT-07:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_LeftToeFront_to_RightToeFront_src.h"

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
  double t16;
  double t191;
  double t438;
  double t817;
  double t819;
  double t952;
  double t1043;
  double t1216;
  double t1520;
  double t1526;
  double t1565;
  double t1643;
  double t1460;
  double t1508;
  double t1516;
  double t1727;
  double t1792;
  double t1802;
  double t2039;
  double t2058;
  double t2091;
  double t2106;
  double t1923;
  double t1963;
  double t1974;
  double t2135;
  double t2138;
  double t2176;
  double t2424;
  double t2427;
  double t2467;
  double t2570;
  double t2254;
  double t2351;
  double t2370;
  double t2618;
  double t2645;
  double t2742;
  double t2988;
  double t2999;
  double t3029;
  double t3175;
  double t2841;
  double t2845;
  double t2985;
  double t3301;
  double t3337;
  double t3338;
  double t3756;
  double t3814;
  double t3757;
  double t3773;
  double t3820;
  double t3936;
  double t3809;
  double t3903;
  double t3908;
  double t3721;
  double t3938;
  double t3955;
  double t3969;
  double t4196;
  double t3912;
  double t3978;
  double t3989;
  double t3712;
  double t4252;
  double t4286;
  double t4298;
  double t4383;
  double t4044;
  double t4306;
  double t4345;
  double t3690;
  double t4399;
  double t4462;
  double t4466;
  double t4699;
  double t4626;
  double t4664;
  double t4689;
  double t4741;
  double t4744;
  double t4813;
  double t4827;
  double t4837;
  double t4782;
  double t4847;
  double t4854;
  double t4876;
  double t4882;
  double t4913;
  double t4867;
  double t4922;
  double t4925;
  double t4949;
  double t4950;
  double t4976;
  double t4943;
  double t4986;
  double t4988;
  double t5002;
  double t5003;
  double t5015;
  double t4369;
  double t4538;
  double t4546;
  double t4557;
  double t4565;
  double t4595;
  double t4994;
  double t5021;
  double t5023;
  double t5031;
  double t5041;
  double t5050;
  double t5168;
  double t5170;
  double t5171;
  double t5173;
  double t5176;
  double t5177;
  double t5172;
  double t5180;
  double t5183;
  double t5197;
  double t5202;
  double t5203;
  double t5193;
  double t5214;
  double t5220;
  double t5240;
  double t5243;
  double t5256;
  double t5238;
  double t5260;
  double t5266;
  double t5272;
  double t5281;
  double t5290;
  double t5114;
  double t5124;
  double t5126;
  double t5029;
  double t5062;
  double t5096;
  double t5268;
  double t5314;
  double t5331;
  double t5336;
  double t5338;
  double t5341;
  double t4548;
  double t4604;
  double t4605;
  double t5136;
  double t5139;
  double t5143;
  double t5113;
  double t5159;
  double t285;
  double t386;
  double t408;
  double t578;
  double t638;
  double t1033;
  double t1045;
  double t1074;
  double t1223;
  double t1290;
  double t1425;
  double t1611;
  double t1668;
  double t1694;
  double t1814;
  double t1829;
  double t1841;
  double t5467;
  double t5472;
  double t5480;
  double t5494;
  double t5498;
  double t5499;
  double t2096;
  double t2121;
  double t2128;
  double t2184;
  double t2207;
  double t2228;
  double t5516;
  double t5520;
  double t5523;
  double t5534;
  double t5540;
  double t5549;
  double t2479;
  double t2574;
  double t2585;
  double t2748;
  double t2776;
  double t2777;
  double t5557;
  double t5558;
  double t5559;
  double t5574;
  double t5586;
  double t5589;
  double t3099;
  double t3200;
  double t3252;
  double t3347;
  double t3349;
  double t3352;
  double t5596;
  double t5600;
  double t5602;
  double t5604;
  double t5607;
  double t5612;
  double t5386;
  double t5397;
  double t5400;
  double t5335;
  double t5343;
  double t5352;
  double t5362;
  double t5367;
  double t5368;
  double t5374;
  double t5402;
  double t5403;
  double t5409;
  double t5419;
  double t5420;
  double t5432;
  double t5437;
  double t5440;
  double t5718;
  double t5725;
  double t5745;
  double t5762;
  double t5766;
  double t5769;
  double t5774;
  double t5779;
  double t5787;
  double t5795;
  double t5799;
  double t5800;
  double t5802;
  double t5804;
  double t5805;
  double t5836;
  double t5837;
  double t5847;
  double t5951;
  double t5953;
  double t6038;
  double t6045;
  double t6089;
  double t6090;
  double t6133;
  double t6134;
  double t6159;
  double t6164;
  double t5920;
  double t5923;
  double t6046;
  double t6049;
  double t6055;
  double t5966;
  double t5971;
  double t6010;
  double t6070;
  double t6072;
  double t6074;
  double t6096;
  double t6111;
  double t6116;
  double t6119;
  double t6122;
  double t6127;
  double t6135;
  double t6138;
  double t6141;
  double t6144;
  double t6145;
  double t6149;
  double t6166;
  double t6171;
  double t6172;
  double t6184;
  double t6190;
  double t6194;
  double t5903;
  double t5906;
  double t5909;
  double t5914;
  double t5932;
  double t5942;
  double t5945;
  double t5947;
  double t6013;
  double t6031;
  double t6032;
  double t6035;
  double t6037;
  double t6063;
  double t6088;
  double t6118;
  double t6130;
  double t6142;
  double t6152;
  double t6180;
  double t6195;
  double t6196;
  double t6199;
  double t6201;
  double t6212;
  double t6215;
  double t6219;
  double t6221;
  double t6222;
  double t6224;
  double t6225;
  double t6226;
  double t6228;
  double t6229;
  double t6231;
  double t6234;
  double t6237;
  double t6242;
  double t132;
  double t209;
  double t665;
  double t1151;
  double t1454;
  double t1724;
  double t1867;
  double t2130;
  double t2238;
  double t2617;
  double t2814;
  double t3274;
  double t3353;
  double t3364;
  double t3372;
  double t3385;
  double t3396;
  double t3525;
  double t3569;
  double t3573;
  double t3629;
  double t3643;
  double t5704;
  double t5709;
  double t5711;
  double t5714;
  double t5717;
  double t5753;
  double t5771;
  double t5792;
  double t5801;
  double t5830;
  double t5849;
  double t5852;
  double t5856;
  double t5859;
  double t5873;
  double t5879;
  double t5881;
  double t5882;
  double t5885;
  double t5887;
  double t5445;
  double t5446;
  double t5449;
  double t5458;
  double t5459;
  double t5461;
  double t5466;
  double t5485;
  double t5502;
  double t5529;
  double t5556;
  double t5572;
  double t5595;
  double t5603;
  double t5625;
  double t5630;
  double t5637;
  double t5642;
  double t5644;
  double t5653;
  double t5654;
  double t5667;
  double t5671;
  double t5683;
  double t6292;
  double t6297;
  double t6302;
  double t6303;
  double t6308;
  double t6312;
  double t6314;
  double t6316;
  double t6321;
  double t6328;
  double t6329;
  double t6332;
  double t6333;
  double t6338;
  double t6343;
  double t6348;
  double t6207;
  double t6245;
  double t6253;
  double t6393;
  double t6403;
  double t6404;
  double t6272;
  double t6274;
  double t6286;
  t16 = Sin(var1[7]);
  t191 = Cos(var1[8]);
  t438 = Sin(var1[8]);
  t817 = Cos(var1[9]);
  t819 = -1.*t817;
  t952 = 1. + t819;
  t1043 = Sin(var1[9]);
  t1216 = Cos(var1[7]);
  t1520 = Cos(var1[10]);
  t1526 = -1.*t1520;
  t1565 = 1. + t1526;
  t1643 = Sin(var1[10]);
  t1460 = t817*t16*t438;
  t1508 = t1216*t1043;
  t1516 = t1460 + t1508;
  t1727 = t1216*t817;
  t1792 = -1.*t16*t438*t1043;
  t1802 = t1727 + t1792;
  t2039 = Cos(var1[11]);
  t2058 = -1.*t2039;
  t2091 = 1. + t2058;
  t2106 = Sin(var1[11]);
  t1923 = t1520*t1516;
  t1963 = t1802*t1643;
  t1974 = t1923 + t1963;
  t2135 = t1520*t1802;
  t2138 = -1.*t1516*t1643;
  t2176 = t2135 + t2138;
  t2424 = Cos(var1[12]);
  t2427 = -1.*t2424;
  t2467 = 1. + t2427;
  t2570 = Sin(var1[12]);
  t2254 = t2039*t1974;
  t2351 = t2176*t2106;
  t2370 = t2254 + t2351;
  t2618 = t2039*t2176;
  t2645 = -1.*t1974*t2106;
  t2742 = t2618 + t2645;
  t2988 = Cos(var1[13]);
  t2999 = -1.*t2988;
  t3029 = 1. + t2999;
  t3175 = Sin(var1[13]);
  t2841 = t2424*t2370;
  t2845 = t2742*t2570;
  t2985 = t2841 + t2845;
  t3301 = t2424*t2742;
  t3337 = -1.*t2370*t2570;
  t3338 = t3301 + t3337;
  t3756 = Cos(var1[1]);
  t3814 = Cos(var1[3]);
  t3757 = Cos(var1[2]);
  t3773 = Sin(var1[3]);
  t3820 = Sin(var1[2]);
  t3936 = Cos(var1[4]);
  t3809 = -1.*t3756*t3757*t3773;
  t3903 = -1.*t3814*t3756*t3820;
  t3908 = t3809 + t3903;
  t3721 = Sin(var1[4]);
  t3938 = t3814*t3756*t3757;
  t3955 = -1.*t3756*t3773*t3820;
  t3969 = t3938 + t3955;
  t4196 = Cos(var1[5]);
  t3912 = t3721*t3908;
  t3978 = t3936*t3969;
  t3989 = t3912 + t3978;
  t3712 = Sin(var1[5]);
  t4252 = t3936*t3908;
  t4286 = -1.*t3721*t3969;
  t4298 = t4252 + t4286;
  t4383 = Cos(var1[6]);
  t4044 = -1.*t3712*t3989;
  t4306 = t4196*t4298;
  t4345 = t4044 + t4306;
  t3690 = Sin(var1[6]);
  t4399 = t4196*t3989;
  t4462 = t3712*t4298;
  t4466 = t4399 + t4462;
  t4699 = Sin(var1[0]);
  t4626 = Cos(var1[0]);
  t4664 = Sin(var1[1]);
  t4689 = t4626*t3757*t4664;
  t4741 = -1.*t4699*t3820;
  t4744 = t4689 + t4741;
  t4813 = -1.*t3757*t4699;
  t4827 = -1.*t4626*t4664*t3820;
  t4837 = t4813 + t4827;
  t4782 = -1.*t3773*t4744;
  t4847 = t3814*t4837;
  t4854 = t4782 + t4847;
  t4876 = t3814*t4744;
  t4882 = t3773*t4837;
  t4913 = t4876 + t4882;
  t4867 = t3721*t4854;
  t4922 = t3936*t4913;
  t4925 = t4867 + t4922;
  t4949 = t3936*t4854;
  t4950 = -1.*t3721*t4913;
  t4976 = t4949 + t4950;
  t4943 = -1.*t3712*t4925;
  t4986 = t4196*t4976;
  t4988 = t4943 + t4986;
  t5002 = t4196*t4925;
  t5003 = t3712*t4976;
  t5015 = t5002 + t5003;
  t4369 = t3690*t4345;
  t4538 = t4383*t4466;
  t4546 = t4369 + t4538;
  t4557 = t4383*t4345;
  t4565 = -1.*t3690*t4466;
  t4595 = t4557 + t4565;
  t4994 = t3690*t4988;
  t5021 = t4383*t5015;
  t5023 = t4994 + t5021;
  t5031 = t4383*t4988;
  t5041 = -1.*t3690*t5015;
  t5050 = t5031 + t5041;
  t5168 = t3757*t4699*t4664;
  t5170 = t4626*t3820;
  t5171 = t5168 + t5170;
  t5173 = t4626*t3757;
  t5176 = -1.*t4699*t4664*t3820;
  t5177 = t5173 + t5176;
  t5172 = -1.*t3773*t5171;
  t5180 = t3814*t5177;
  t5183 = t5172 + t5180;
  t5197 = t3814*t5171;
  t5202 = t3773*t5177;
  t5203 = t5197 + t5202;
  t5193 = t3721*t5183;
  t5214 = t3936*t5203;
  t5220 = t5193 + t5214;
  t5240 = t3936*t5183;
  t5243 = -1.*t3721*t5203;
  t5256 = t5240 + t5243;
  t5238 = -1.*t3712*t5220;
  t5260 = t4196*t5256;
  t5266 = t5238 + t5260;
  t5272 = t4196*t5220;
  t5281 = t3712*t5256;
  t5290 = t5272 + t5281;
  t5114 = -0.766044*t4546;
  t5124 = 0.642788*t4595;
  t5126 = t5114 + t5124;
  t5029 = -0.766044*t5023;
  t5062 = 0.642788*t5050;
  t5096 = t5029 + t5062;
  t5268 = t3690*t5266;
  t5314 = t4383*t5290;
  t5331 = t5268 + t5314;
  t5336 = t4383*t5266;
  t5338 = -1.*t3690*t5290;
  t5341 = t5336 + t5338;
  t4548 = 0.642788*t4546;
  t4604 = 0.766044*t4595;
  t4605 = t4548 + t4604;
  t5136 = 0.642788*t5023;
  t5139 = 0.766044*t5050;
  t5143 = t5136 + t5139;
  t5113 = t4605*t5096;
  t5159 = -1.*t5126*t5143;
  t285 = -1.*t191;
  t386 = 1. + t285;
  t408 = -0.135*t386;
  t578 = 0.049*t438;
  t638 = 0. + t408 + t578;
  t1033 = -0.049*t952;
  t1045 = -0.09*t1043;
  t1074 = 0. + t1033 + t1045;
  t1223 = -0.09*t952;
  t1290 = 0.049*t1043;
  t1425 = 0. + t1223 + t1290;
  t1611 = -0.049*t1565;
  t1668 = -0.21*t1643;
  t1694 = 0. + t1611 + t1668;
  t1814 = -0.21*t1565;
  t1829 = 0.049*t1643;
  t1841 = 0. + t1814 + t1829;
  t5467 = t1216*t817*t438;
  t5472 = -1.*t16*t1043;
  t5480 = t5467 + t5472;
  t5494 = -1.*t817*t16;
  t5498 = -1.*t1216*t438*t1043;
  t5499 = t5494 + t5498;
  t2096 = -0.0016*t2091;
  t2121 = -0.2707*t2106;
  t2128 = 0. + t2096 + t2121;
  t2184 = -0.2707*t2091;
  t2207 = 0.0016*t2106;
  t2228 = 0. + t2184 + t2207;
  t5516 = t1520*t5480;
  t5520 = t5499*t1643;
  t5523 = t5516 + t5520;
  t5534 = t1520*t5499;
  t5540 = -1.*t5480*t1643;
  t5549 = t5534 + t5540;
  t2479 = 0.0184*t2467;
  t2574 = -0.7055*t2570;
  t2585 = 0. + t2479 + t2574;
  t2748 = -0.7055*t2467;
  t2776 = -0.0184*t2570;
  t2777 = 0. + t2748 + t2776;
  t5557 = t2039*t5523;
  t5558 = t5549*t2106;
  t5559 = t5557 + t5558;
  t5574 = t2039*t5549;
  t5586 = -1.*t5523*t2106;
  t5589 = t5574 + t5586;
  t3099 = -0.0216*t3029;
  t3200 = -1.1135*t3175;
  t3252 = 0. + t3099 + t3200;
  t3347 = -1.1135*t3029;
  t3349 = 0.0216*t3175;
  t3352 = 0. + t3347 + t3349;
  t5596 = t2424*t5559;
  t5600 = t5589*t2570;
  t5602 = t5596 + t5600;
  t5604 = t2424*t5589;
  t5607 = -1.*t5559*t2570;
  t5612 = t5604 + t5607;
  t5386 = -0.766044*t5331;
  t5397 = 0.642788*t5341;
  t5400 = t5386 + t5397;
  t5335 = 0.642788*t5331;
  t5343 = 0.766044*t5341;
  t5352 = t5335 + t5343;
  t5362 = t4626*t3756*t5126;
  t5367 = t4664*t5096;
  t5368 = t5362 + t5367;
  t5374 = -1.*t5352*t5368;
  t5402 = t4626*t3756*t4605;
  t5403 = t4664*t5143;
  t5409 = t5402 + t5403;
  t5419 = t5400*t5409;
  t5420 = t5113 + t5159;
  t5432 = -1.*t3756*t4699*t5420;
  t5437 = 0. + t5374 + t5419 + t5432;
  t5440 = 1/t5437;
  t5718 = t191*t817*t1520;
  t5725 = -1.*t191*t1043*t1643;
  t5745 = t5718 + t5725;
  t5762 = -1.*t191*t1520*t1043;
  t5766 = -1.*t191*t817*t1643;
  t5769 = t5762 + t5766;
  t5774 = t2039*t5745;
  t5779 = t5769*t2106;
  t5787 = t5774 + t5779;
  t5795 = t2039*t5769;
  t5799 = -1.*t5745*t2106;
  t5800 = t5795 + t5799;
  t5802 = t2424*t5787;
  t5804 = t5800*t2570;
  t5805 = t5802 + t5804;
  t5836 = t2424*t5800;
  t5837 = -1.*t5787*t2570;
  t5847 = t5836 + t5837;
  t5951 = -1.*t3757;
  t5953 = 1. + t5951;
  t6038 = -1.*t3814;
  t6045 = 1. + t6038;
  t6089 = -1.*t3936;
  t6090 = 1. + t6089;
  t6133 = -1.*t4196;
  t6134 = 1. + t6133;
  t6159 = -1.*t4383;
  t6164 = 1. + t6159;
  t5920 = -1.*t3756;
  t5923 = 1. + t5920;
  t6046 = -0.049*t6045;
  t6049 = -0.21*t3773;
  t6055 = 0. + t6046 + t6049;
  t5966 = -0.049*t5953;
  t5971 = -0.09*t3820;
  t6010 = 0. + t5966 + t5971;
  t6070 = -0.21*t6045;
  t6072 = 0.049*t3773;
  t6074 = 0. + t6070 + t6072;
  t6096 = -0.2707*t6090;
  t6111 = 0.0016*t3721;
  t6116 = 0. + t6096 + t6111;
  t6119 = -0.0016*t6090;
  t6122 = -0.2707*t3721;
  t6127 = 0. + t6119 + t6122;
  t6135 = 0.0184*t6134;
  t6138 = -0.7055*t3712;
  t6141 = 0. + t6135 + t6138;
  t6144 = -0.7055*t6134;
  t6145 = -0.0184*t3712;
  t6149 = 0. + t6144 + t6145;
  t6166 = -1.1135*t6164;
  t6171 = 0.0216*t3690;
  t6172 = 0. + t6166 + t6171;
  t6184 = -0.0216*t6164;
  t6190 = -1.1135*t3690;
  t6194 = 0. + t6184 + t6190;
  t5903 = -1.*t4626;
  t5906 = 1. + t5903;
  t5909 = 0.135*t5906;
  t5914 = 0.1305*t4626*t3756;
  t5932 = 0.135*t5923;
  t5942 = 0.049*t4664;
  t5945 = 0. + t5932 + t5942;
  t5947 = t4626*t5945;
  t6013 = t4626*t4664*t6010;
  t6031 = -0.09*t5953;
  t6032 = 0.049*t3820;
  t6035 = 0. + t6031 + t6032;
  t6037 = -1.*t4699*t6035;
  t6063 = t6055*t4744;
  t6088 = t6074*t4837;
  t6118 = t6116*t4854;
  t6130 = t6127*t4913;
  t6142 = t6141*t4925;
  t6152 = t6149*t4976;
  t6180 = t6172*t4988;
  t6195 = t6194*t5015;
  t6196 = 0.088451*t5023;
  t6199 = -1.062256*t5050;
  t6201 = 0. + t5909 + t5914 + t5947 + t6013 + t6037 + t6063 + t6088 + t6118 + t6130 + t6142 + t6152 + t6180 + t6195 + t6196 + t6199;
  t6212 = -0.049*t5923;
  t6215 = t3756*t3757*t6055;
  t6219 = 0.004500000000000004*t4664;
  t6221 = t3756*t6010;
  t6222 = -1.*t3756*t6074*t3820;
  t6224 = t6116*t3908;
  t6225 = t6127*t3969;
  t6226 = t6141*t3989;
  t6228 = t6149*t4298;
  t6229 = t6172*t4345;
  t6231 = t6194*t4466;
  t6234 = 0.088451*t4546;
  t6237 = -1.062256*t4595;
  t6242 = 0. + t6212 + t6215 + t6219 + t6221 + t6222 + t6224 + t6225 + t6226 + t6228 + t6229 + t6231 + t6234 + t6237;
  t132 = 0.135*t16;
  t209 = -0.1305*t191*t16;
  t665 = t16*t638;
  t1151 = t16*t438*t1074;
  t1454 = t1216*t1425;
  t1724 = t1516*t1694;
  t1867 = t1802*t1841;
  t2130 = t1974*t2128;
  t2238 = t2176*t2228;
  t2617 = t2370*t2585;
  t2814 = t2742*t2777;
  t3274 = t2985*t3252;
  t3353 = t3338*t3352;
  t3364 = t2988*t2985;
  t3372 = t3338*t3175;
  t3385 = t3364 + t3372;
  t3396 = 0.088451*t3385;
  t3525 = t2988*t3338;
  t3569 = -1.*t2985*t3175;
  t3573 = t3525 + t3569;
  t3629 = -1.062256*t3573;
  t3643 = 0. + t132 + t209 + t665 + t1151 + t1454 + t1724 + t1867 + t2130 + t2238 + t2617 + t2814 + t3274 + t3353 + t3396 + t3629;
  t5704 = -0.049*t386;
  t5709 = -0.004500000000000004*t438;
  t5711 = t191*t1074;
  t5714 = t191*t817*t1694;
  t5717 = -1.*t191*t1043*t1841;
  t5753 = t5745*t2128;
  t5771 = t5769*t2228;
  t5792 = t5787*t2585;
  t5801 = t5800*t2777;
  t5830 = t5805*t3252;
  t5849 = t5847*t3352;
  t5852 = t2988*t5805;
  t5856 = t5847*t3175;
  t5859 = t5852 + t5856;
  t5873 = 0.088451*t5859;
  t5879 = t2988*t5847;
  t5881 = -1.*t5805*t3175;
  t5882 = t5879 + t5881;
  t5885 = -1.062256*t5882;
  t5887 = 0. + t5704 + t5709 + t5711 + t5714 + t5717 + t5753 + t5771 + t5792 + t5801 + t5830 + t5849 + t5873 + t5885;
  t5445 = -1.*t1216;
  t5446 = 1. + t5445;
  t5449 = -0.135*t5446;
  t5458 = -0.1305*t1216*t191;
  t5459 = t1216*t638;
  t5461 = t1216*t438*t1074;
  t5466 = -1.*t16*t1425;
  t5485 = t5480*t1694;
  t5502 = t5499*t1841;
  t5529 = t5523*t2128;
  t5556 = t5549*t2228;
  t5572 = t5559*t2585;
  t5595 = t5589*t2777;
  t5603 = t5602*t3252;
  t5625 = t5612*t3352;
  t5630 = t2988*t5602;
  t5637 = t5612*t3175;
  t5642 = t5630 + t5637;
  t5644 = 0.088451*t5642;
  t5653 = t2988*t5612;
  t5654 = -1.*t5602*t3175;
  t5667 = t5653 + t5654;
  t5671 = -1.062256*t5667;
  t5683 = 0. + t5449 + t5458 + t5459 + t5461 + t5466 + t5485 + t5502 + t5529 + t5556 + t5572 + t5595 + t5603 + t5625 + t5644 + t5671;
  t6292 = -0.135*t4699;
  t6297 = 0.1305*t3756*t4699;
  t6302 = t4699*t5945;
  t6303 = t4699*t4664*t6010;
  t6308 = t4626*t6035;
  t6312 = t6055*t5171;
  t6314 = t6074*t5177;
  t6316 = t6116*t5183;
  t6321 = t6127*t5203;
  t6328 = t6141*t5220;
  t6329 = t6149*t5256;
  t6332 = t6172*t5266;
  t6333 = t6194*t5290;
  t6338 = 0.088451*t5331;
  t6343 = -1.062256*t5341;
  t6348 = 0. + t6292 + t6297 + t6302 + t6303 + t6308 + t6312 + t6314 + t6316 + t6321 + t6328 + t6329 + t6332 + t6333 + t6338 + t6343;
  t6207 = t5126*t6201;
  t6245 = -1.*t6242*t5096;
  t6253 = t6207 + t6245;
  t6393 = t4626*t3756*t6242;
  t6403 = t4664*t6201;
  t6404 = t6393 + t6403;
  t6272 = t4605*t6201;
  t6274 = -1.*t6242*t5143;
  t6286 = t6272 + t6274;
  p_output1[0]=t3643*(0. + t5113 + t5159)*t5440 + (0. + t5126*t5352 - 1.*t4605*t5400)*t5440*t5683 + (0. - 1.*t5096*t5352 + t5143*t5400)*t5440*t5887 + t5440*(-1.*t5352*t6253 + t5400*t6286 - 1.*t5420*t6348);
  p_output1[1]=t3643*(0. - 1.*t4664*t5096 - 1.*t3756*t4626*t5126)*t5440 + (0. + t3756*t4699*t5126 + t4664*t5400)*t5440*t5683 + (0. - 1.*t3756*t4699*t5096 + t3756*t4626*t5400)*t5440*t5887 + t5440*(-1.*t3756*t4699*t6253 + t5368*t6348 - 1.*t5400*t6404);
  p_output1[2]=t3643*(0. + t5402 + t5403)*t5440 + (0. - 1.*t3756*t4605*t4699 - 1.*t4664*t5352)*t5440*t5683 + (0. + t3756*t4699*t5143 - 1.*t3756*t4626*t5352)*t5440*t5887 + t5440*(t3756*t4699*t6286 - 1.*t5409*t6348 + t5352*t6404);
}



void p_LeftToeFront_to_RightToeFront_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
