/*
 * Automatically Generated from Mathematica.
 * Wed 12 Feb 2020 15:29:02 GMT-08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_LeftToeFront_src.h"

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
  double t930;
  double t518;
  double t932;
  double t875;
  double t938;
  double t24;
  double t54;
  double t974;
  double t1002;
  double t1004;
  double t927;
  double t943;
  double t951;
  double t956;
  double t961;
  double t965;
  double t969;
  double t980;
  double t985;
  double t1106;
  double t1142;
  double t1166;
  double t1168;
  double t1111;
  double t1113;
  double t1116;
  double t1184;
  double t1246;
  double t1123;
  double t1199;
  double t1216;
  double t1100;
  double t1269;
  double t1276;
  double t1314;
  double t1585;
  double t1244;
  double t1434;
  double t1525;
  double t1095;
  double t1619;
  double t1623;
  double t1676;
  double t1794;
  double t1567;
  double t1726;
  double t1755;
  double t1090;
  double t1799;
  double t1838;
  double t1902;
  double t2031;
  double t1777;
  double t1927;
  double t1981;
  double t1086;
  double t2103;
  double t2132;
  double t2133;
  double t1008;
  double t1010;
  double t1014;
  double t1018;
  double t1022;
  double t1026;
  double t1029;
  double t1030;
  double t1034;
  double t2537;
  double t2541;
  double t2605;
  double t2415;
  double t2493;
  double t2511;
  double t2532;
  double t2616;
  double t2619;
  double t2643;
  double t2705;
  double t2717;
  double t2631;
  double t2768;
  double t2770;
  double t2827;
  double t2901;
  double t2927;
  double t2811;
  double t2974;
  double t2985;
  double t3035;
  double t3054;
  double t3191;
  double t2999;
  double t3210;
  double t3232;
  double t3265;
  double t3277;
  double t3301;
  double t1063;
  double t1065;
  double t1066;
  double t3643;
  double t3652;
  double t3729;
  double t3507;
  double t3549;
  double t3594;
  double t3625;
  double t3772;
  double t3774;
  double t3803;
  double t3813;
  double t3834;
  double t3800;
  double t3903;
  double t3943;
  double t3986;
  double t3997;
  double t4005;
  double t3985;
  double t4050;
  double t4062;
  double t4078;
  double t4113;
  double t4200;
  double t4067;
  double t4224;
  double t4268;
  double t4283;
  double t4286;
  double t4328;
  double t2002;
  double t2155;
  double t2179;
  double t2212;
  double t2220;
  double t2264;
  double t3244;
  double t3350;
  double t3364;
  double t3420;
  double t3457;
  double t3470;
  double t4274;
  double t4365;
  double t4396;
  double t4415;
  double t4431;
  double t4441;
  t930 = Cos(var1[3]);
  t518 = Cos(var1[5]);
  t932 = Sin(var1[4]);
  t875 = Sin(var1[3]);
  t938 = Sin(var1[5]);
  t24 = Cos(var1[7]);
  t54 = Cos(var1[6]);
  t974 = Sin(var1[6]);
  t1002 = Cos(var1[4]);
  t1004 = Sin(var1[7]);
  t927 = -1.*t518*t875;
  t943 = t930*t932*t938;
  t951 = t927 + t943;
  t956 = t54*t951;
  t961 = t930*t518*t932;
  t965 = t875*t938;
  t969 = t961 + t965;
  t980 = t969*t974;
  t985 = t956 + t980;
  t1106 = Cos(var1[8]);
  t1142 = t54*t969;
  t1166 = -1.*t951*t974;
  t1168 = t1142 + t1166;
  t1111 = t930*t1002*t24;
  t1113 = t985*t1004;
  t1116 = t1111 + t1113;
  t1184 = Sin(var1[8]);
  t1246 = Cos(var1[9]);
  t1123 = t1106*t1116;
  t1199 = t1168*t1184;
  t1216 = t1123 + t1199;
  t1100 = Sin(var1[9]);
  t1269 = t1106*t1168;
  t1276 = -1.*t1116*t1184;
  t1314 = t1269 + t1276;
  t1585 = Cos(var1[10]);
  t1244 = -1.*t1100*t1216;
  t1434 = t1246*t1314;
  t1525 = t1244 + t1434;
  t1095 = Sin(var1[10]);
  t1619 = t1246*t1216;
  t1623 = t1100*t1314;
  t1676 = t1619 + t1623;
  t1794 = Cos(var1[11]);
  t1567 = t1095*t1525;
  t1726 = t1585*t1676;
  t1755 = t1567 + t1726;
  t1090 = Sin(var1[11]);
  t1799 = t1585*t1525;
  t1838 = -1.*t1095*t1676;
  t1902 = t1799 + t1838;
  t2031 = Cos(var1[12]);
  t1777 = -1.*t1090*t1755;
  t1927 = t1794*t1902;
  t1981 = t1777 + t1927;
  t1086 = Sin(var1[12]);
  t2103 = t1794*t1755;
  t2132 = t1090*t1902;
  t2133 = t2103 + t2132;
  t1008 = t930*t518;
  t1010 = t875*t932*t938;
  t1014 = t1008 + t1010;
  t1018 = t54*t1014;
  t1022 = t518*t875*t932;
  t1026 = -1.*t930*t938;
  t1029 = t1022 + t1026;
  t1030 = t1029*t974;
  t1034 = t1018 + t1030;
  t2537 = t54*t1029;
  t2541 = -1.*t1014*t974;
  t2605 = t2537 + t2541;
  t2415 = t1002*t24*t875;
  t2493 = t1034*t1004;
  t2511 = t2415 + t2493;
  t2532 = t1106*t2511;
  t2616 = t2605*t1184;
  t2619 = t2532 + t2616;
  t2643 = t1106*t2605;
  t2705 = -1.*t2511*t1184;
  t2717 = t2643 + t2705;
  t2631 = -1.*t1100*t2619;
  t2768 = t1246*t2717;
  t2770 = t2631 + t2768;
  t2827 = t1246*t2619;
  t2901 = t1100*t2717;
  t2927 = t2827 + t2901;
  t2811 = t1095*t2770;
  t2974 = t1585*t2927;
  t2985 = t2811 + t2974;
  t3035 = t1585*t2770;
  t3054 = -1.*t1095*t2927;
  t3191 = t3035 + t3054;
  t2999 = -1.*t1090*t2985;
  t3210 = t1794*t3191;
  t3232 = t2999 + t3210;
  t3265 = t1794*t2985;
  t3277 = t1090*t3191;
  t3301 = t3265 + t3277;
  t1063 = t1002*t54*t938;
  t1065 = t1002*t518*t974;
  t1066 = t1063 + t1065;
  t3643 = t1002*t518*t54;
  t3652 = -1.*t1002*t938*t974;
  t3729 = t3643 + t3652;
  t3507 = -1.*t24*t932;
  t3549 = t1066*t1004;
  t3594 = t3507 + t3549;
  t3625 = t1106*t3594;
  t3772 = t3729*t1184;
  t3774 = t3625 + t3772;
  t3803 = t1106*t3729;
  t3813 = -1.*t3594*t1184;
  t3834 = t3803 + t3813;
  t3800 = -1.*t1100*t3774;
  t3903 = t1246*t3834;
  t3943 = t3800 + t3903;
  t3986 = t1246*t3774;
  t3997 = t1100*t3834;
  t4005 = t3986 + t3997;
  t3985 = t1095*t3943;
  t4050 = t1585*t4005;
  t4062 = t3985 + t4050;
  t4078 = t1585*t3943;
  t4113 = -1.*t1095*t4005;
  t4200 = t4078 + t4113;
  t4067 = -1.*t1090*t4062;
  t4224 = t1794*t4200;
  t4268 = t4067 + t4224;
  t4283 = t1794*t4062;
  t4286 = t1090*t4200;
  t4328 = t4283 + t4286;
  t2002 = t1086*t1981;
  t2155 = t2031*t2133;
  t2179 = t2002 + t2155;
  t2212 = t2031*t1981;
  t2220 = -1.*t1086*t2133;
  t2264 = t2212 + t2220;
  t3244 = t1086*t3232;
  t3350 = t2031*t3301;
  t3364 = t3244 + t3350;
  t3420 = t2031*t3232;
  t3457 = -1.*t1086*t3301;
  t3470 = t3420 + t3457;
  t4274 = t1086*t4268;
  t4365 = t2031*t4328;
  t4396 = t4274 + t4365;
  t4415 = t2031*t4268;
  t4431 = -1.*t1086*t4328;
  t4441 = t4415 + t4431;
  p_output1[0]=t1002*t1004*t930 - 1.*t24*t985;
  p_output1[1]=-1.*t1034*t24 + t1002*t1004*t875;
  p_output1[2]=-1.*t1066*t24 - 1.*t1004*t932;
  p_output1[3]=0.642788*t2179 + 0.766044*t2264;
  p_output1[4]=0.642788*t3364 + 0.766044*t3470;
  p_output1[5]=0.642788*t4396 + 0.766044*t4441;
  p_output1[6]=-0.766044*t2179 + 0.642788*t2264;
  p_output1[7]=-0.766044*t3364 + 0.642788*t3470;
  p_output1[8]=-0.766044*t4396 + 0.642788*t4441;
}



void R_LeftToeFront_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
