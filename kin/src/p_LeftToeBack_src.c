/*
 * Automatically Generated from Mathematica.
 * Wed 12 Feb 2020 15:29:04 GMT-08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_LeftToeBack_src.h"

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
  double t1078;
  double t990;
  double t1082;
  double t1053;
  double t1088;
  double t726;
  double t1065;
  double t1111;
  double t1142;
  double t1185;
  double t1192;
  double t1199;
  double t1219;
  double t1853;
  double t1927;
  double t2103;
  double t2155;
  double t1761;
  double t1783;
  double t1795;
  double t2212;
  double t3232;
  double t3265;
  double t3277;
  double t3392;
  double t2929;
  double t2937;
  double t2974;
  double t3482;
  double t3493;
  double t3533;
  double t3824;
  double t3943;
  double t3957;
  double t3997;
  double t4101;
  double t4116;
  double t4200;
  double t4390;
  double t4459;
  double t4501;
  double t4560;
  double t4580;
  double t4604;
  double t4640;
  double t4678;
  double t4689;
  double t4762;
  double t4841;
  double t4855;
  double t4861;
  double t4871;
  double t4888;
  double t4907;
  double t4914;
  double t4931;
  double t4933;
  double t4936;
  double t4974;
  double t4982;
  double t4983;
  double t4990;
  double t5002;
  double t5003;
  double t5009;
  double t5021;
  double t5022;
  double t5027;
  double t5044;
  double t5047;
  double t5049;
  double t770;
  double t778;
  double t969;
  double t979;
  double t1246;
  double t1637;
  double t5136;
  double t5153;
  double t5163;
  double t5172;
  double t5182;
  double t5185;
  double t2152;
  double t2168;
  double t2179;
  double t2264;
  double t2616;
  double t2768;
  double t5202;
  double t5206;
  double t5208;
  double t3350;
  double t3402;
  double t3477;
  double t3561;
  double t3613;
  double t3646;
  double t3979;
  double t4027;
  double t4088;
  double t5235;
  double t5252;
  double t5261;
  double t5268;
  double t5269;
  double t5270;
  double t4268;
  double t4274;
  double t4283;
  double t4630;
  double t4641;
  double t4652;
  double t5282;
  double t5301;
  double t5305;
  double t5313;
  double t5321;
  double t5324;
  double t4792;
  double t4803;
  double t4816;
  double t4912;
  double t4921;
  double t4930;
  double t5344;
  double t5353;
  double t5356;
  double t5387;
  double t5394;
  double t5413;
  double t4948;
  double t4953;
  double t4970;
  double t5008;
  double t5011;
  double t5020;
  double t5428;
  double t5429;
  double t5431;
  double t5443;
  double t5452;
  double t5454;
  double t5037;
  double t5038;
  double t5041;
  double t5470;
  double t5476;
  double t5477;
  double t5511;
  double t5512;
  double t5514;
  double t5645;
  double t5658;
  double t5681;
  double t5773;
  double t5828;
  double t5834;
  double t5853;
  double t5868;
  double t5870;
  double t5889;
  double t5904;
  double t5907;
  double t5912;
  double t5913;
  double t5914;
  double t5916;
  double t5926;
  double t5931;
  double t5942;
  double t5958;
  double t5965;
  double t5986;
  double t6003;
  double t6005;
  double t6029;
  double t6039;
  double t6044;
  double t6061;
  double t6069;
  double t6070;
  double t6077;
  double t6079;
  double t6085;
  t1078 = Cos(var1[3]);
  t990 = Cos(var1[5]);
  t1082 = Sin(var1[4]);
  t1053 = Sin(var1[3]);
  t1088 = Sin(var1[5]);
  t726 = Cos(var1[6]);
  t1065 = -1.*t990*t1053;
  t1111 = t1078*t1082*t1088;
  t1142 = t1065 + t1111;
  t1185 = t1078*t990*t1082;
  t1192 = t1053*t1088;
  t1199 = t1185 + t1192;
  t1219 = Sin(var1[6]);
  t1853 = Cos(var1[7]);
  t1927 = -1.*t1853;
  t2103 = 1. + t1927;
  t2155 = Sin(var1[7]);
  t1761 = t726*t1142;
  t1783 = t1199*t1219;
  t1795 = t1761 + t1783;
  t2212 = Cos(var1[4]);
  t3232 = Cos(var1[8]);
  t3265 = -1.*t3232;
  t3277 = 1. + t3265;
  t3392 = Sin(var1[8]);
  t2929 = t1078*t2212*t1853;
  t2937 = t1795*t2155;
  t2974 = t2929 + t2937;
  t3482 = t726*t1199;
  t3493 = -1.*t1142*t1219;
  t3533 = t3482 + t3493;
  t3824 = Cos(var1[9]);
  t3943 = -1.*t3824;
  t3957 = 1. + t3943;
  t3997 = Sin(var1[9]);
  t4101 = t3232*t2974;
  t4116 = t3533*t3392;
  t4200 = t4101 + t4116;
  t4390 = t3232*t3533;
  t4459 = -1.*t2974*t3392;
  t4501 = t4390 + t4459;
  t4560 = Cos(var1[10]);
  t4580 = -1.*t4560;
  t4604 = 1. + t4580;
  t4640 = Sin(var1[10]);
  t4678 = -1.*t3997*t4200;
  t4689 = t3824*t4501;
  t4762 = t4678 + t4689;
  t4841 = t3824*t4200;
  t4855 = t3997*t4501;
  t4861 = t4841 + t4855;
  t4871 = Cos(var1[11]);
  t4888 = -1.*t4871;
  t4907 = 1. + t4888;
  t4914 = Sin(var1[11]);
  t4931 = t4640*t4762;
  t4933 = t4560*t4861;
  t4936 = t4931 + t4933;
  t4974 = t4560*t4762;
  t4982 = -1.*t4640*t4861;
  t4983 = t4974 + t4982;
  t4990 = Cos(var1[12]);
  t5002 = -1.*t4990;
  t5003 = 1. + t5002;
  t5009 = Sin(var1[12]);
  t5021 = -1.*t4914*t4936;
  t5022 = t4871*t4983;
  t5027 = t5021 + t5022;
  t5044 = t4871*t4936;
  t5047 = t4914*t4983;
  t5049 = t5044 + t5047;
  t770 = -1.*t726;
  t778 = 1. + t770;
  t969 = 0.135*t778;
  t979 = 0. + t969;
  t1246 = -0.135*t1219;
  t1637 = 0. + t1246;
  t5136 = t1078*t990;
  t5153 = t1053*t1082*t1088;
  t5163 = t5136 + t5153;
  t5172 = t990*t1053*t1082;
  t5182 = -1.*t1078*t1088;
  t5185 = t5172 + t5182;
  t2152 = 0.135*t2103;
  t2168 = 0.049*t2155;
  t2179 = 0. + t2152 + t2168;
  t2264 = -0.049*t2103;
  t2616 = 0.135*t2155;
  t2768 = 0. + t2264 + t2616;
  t5202 = t726*t5163;
  t5206 = t5185*t1219;
  t5208 = t5202 + t5206;
  t3350 = -0.049*t3277;
  t3402 = -0.09*t3392;
  t3477 = 0. + t3350 + t3402;
  t3561 = -0.09*t3277;
  t3613 = 0.049*t3392;
  t3646 = 0. + t3561 + t3613;
  t3979 = -0.049*t3957;
  t4027 = -0.21*t3997;
  t4088 = 0. + t3979 + t4027;
  t5235 = t2212*t1853*t1053;
  t5252 = t5208*t2155;
  t5261 = t5235 + t5252;
  t5268 = t726*t5185;
  t5269 = -1.*t5163*t1219;
  t5270 = t5268 + t5269;
  t4268 = -0.21*t3957;
  t4274 = 0.049*t3997;
  t4283 = 0. + t4268 + t4274;
  t4630 = -0.2707*t4604;
  t4641 = 0.0016*t4640;
  t4652 = 0. + t4630 + t4641;
  t5282 = t3232*t5261;
  t5301 = t5270*t3392;
  t5305 = t5282 + t5301;
  t5313 = t3232*t5270;
  t5321 = -1.*t5261*t3392;
  t5324 = t5313 + t5321;
  t4792 = -0.0016*t4604;
  t4803 = -0.2707*t4640;
  t4816 = 0. + t4792 + t4803;
  t4912 = 0.0184*t4907;
  t4921 = -0.7055*t4914;
  t4930 = 0. + t4912 + t4921;
  t5344 = -1.*t3997*t5305;
  t5353 = t3824*t5324;
  t5356 = t5344 + t5353;
  t5387 = t3824*t5305;
  t5394 = t3997*t5324;
  t5413 = t5387 + t5394;
  t4948 = -0.7055*t4907;
  t4953 = -0.0184*t4914;
  t4970 = 0. + t4948 + t4953;
  t5008 = -1.1135*t5003;
  t5011 = 0.0216*t5009;
  t5020 = 0. + t5008 + t5011;
  t5428 = t4640*t5356;
  t5429 = t4560*t5413;
  t5431 = t5428 + t5429;
  t5443 = t4560*t5356;
  t5452 = -1.*t4640*t5413;
  t5454 = t5443 + t5452;
  t5037 = -0.0216*t5003;
  t5038 = -1.1135*t5009;
  t5041 = 0. + t5037 + t5038;
  t5470 = -1.*t4914*t5431;
  t5476 = t4871*t5454;
  t5477 = t5470 + t5476;
  t5511 = t4871*t5431;
  t5512 = t4914*t5454;
  t5514 = t5511 + t5512;
  t5645 = t2212*t726*t1088;
  t5658 = t2212*t990*t1219;
  t5681 = t5645 + t5658;
  t5773 = -1.*t1853*t1082;
  t5828 = t5681*t2155;
  t5834 = t5773 + t5828;
  t5853 = t2212*t990*t726;
  t5868 = -1.*t2212*t1088*t1219;
  t5870 = t5853 + t5868;
  t5889 = t3232*t5834;
  t5904 = t5870*t3392;
  t5907 = t5889 + t5904;
  t5912 = t3232*t5870;
  t5913 = -1.*t5834*t3392;
  t5914 = t5912 + t5913;
  t5916 = -1.*t3997*t5907;
  t5926 = t3824*t5914;
  t5931 = t5916 + t5926;
  t5942 = t3824*t5907;
  t5958 = t3997*t5914;
  t5965 = t5942 + t5958;
  t5986 = t4640*t5931;
  t6003 = t4560*t5965;
  t6005 = t5986 + t6003;
  t6029 = t4560*t5931;
  t6039 = -1.*t4640*t5965;
  t6044 = t6029 + t6039;
  t6061 = -1.*t4914*t6005;
  t6069 = t4871*t6044;
  t6070 = t6061 + t6069;
  t6077 = t4871*t6005;
  t6079 = t4914*t6044;
  t6085 = t6077 + t6079;
  p_output1[0]=0. + t1199*t1637 + t1795*t2179 + 0.1305*(t1795*t1853 - 1.*t1078*t2155*t2212) + t1078*t2212*t2768 + t2974*t3477 + t3533*t3646 + t4088*t4200 + t4283*t4501 + t4652*t4762 + t4816*t4861 + t4930*t4936 + t4970*t4983 + t5020*t5027 + t5041*t5049 - 0.027251*(t5009*t5027 + t4990*t5049) - 1.200144*(t4990*t5027 - 1.*t5009*t5049) + t1142*t979 + var1[0];
  p_output1[1]=0. + t1053*t2212*t2768 + t1637*t5185 + t2179*t5208 + 0.1305*(-1.*t1053*t2155*t2212 + t1853*t5208) + t3477*t5261 + t3646*t5270 + t4088*t5305 + t4283*t5324 + t4652*t5356 + t4816*t5413 + t4930*t5431 + t4970*t5454 + t5020*t5477 + t5041*t5514 - 0.027251*(t5009*t5477 + t4990*t5514) - 1.200144*(t4990*t5477 - 1.*t5009*t5514) + t5163*t979 + var1[1];
  p_output1[2]=0. - 1.*t1082*t2768 + t2179*t5681 + 0.1305*(t1082*t2155 + t1853*t5681) + t3477*t5834 + t3646*t5870 + t4088*t5907 + t4283*t5914 + t4652*t5931 + t4816*t5965 + t4930*t6005 + t4970*t6044 + t5020*t6070 + t5041*t6085 - 0.027251*(t5009*t6070 + t4990*t6085) - 1.200144*(t4990*t6070 - 1.*t5009*t6085) + t1088*t2212*t979 + t1637*t2212*t990 + var1[2];
}



void p_LeftToeBack_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
