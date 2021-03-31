/*
 * Automatically Generated from Mathematica.
 * Wed 12 Feb 2020 15:29:25 GMT-08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RightToeBack_src.h"

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
  double t94;
  double t337;
  double t405;
  double t371;
  double t493;
  double t168;
  double t201;
  double t237;
  double t299;
  double t537;
  double t401;
  double t498;
  double t501;
  double t540;
  double t550;
  double t552;
  double t510;
  double t553;
  double t555;
  double t1698;
  double t1505;
  double t1541;
  double t1635;
  double t1433;
  double t1716;
  double t1728;
  double t1744;
  double t1810;
  double t1678;
  double t1754;
  double t1756;
  double t1430;
  double t1812;
  double t1826;
  double t1839;
  double t1888;
  double t1789;
  double t1845;
  double t1871;
  double t1429;
  double t1895;
  double t1905;
  double t1906;
  double t1968;
  double t1880;
  double t1913;
  double t1938;
  double t1425;
  double t2009;
  double t2034;
  double t2049;
  double t2128;
  double t1941;
  double t2084;
  double t2087;
  double t1398;
  double t2130;
  double t2144;
  double t2164;
  double t762;
  double t863;
  double t876;
  double t958;
  double t972;
  double t980;
  double t948;
  double t1022;
  double t1067;
  double t2338;
  double t2360;
  double t2365;
  double t2380;
  double t2394;
  double t2411;
  double t2371;
  double t2421;
  double t2423;
  double t2459;
  double t2473;
  double t2476;
  double t2431;
  double t2500;
  double t2598;
  double t2625;
  double t2634;
  double t2635;
  double t2624;
  double t2637;
  double t2639;
  double t2688;
  double t2697;
  double t2698;
  double t2664;
  double t2710;
  double t2749;
  double t2769;
  double t2792;
  double t2793;
  double t1260;
  double t1266;
  double t1274;
  double t2877;
  double t2952;
  double t2956;
  double t2987;
  double t2991;
  double t2995;
  double t2984;
  double t3036;
  double t3056;
  double t3072;
  double t3074;
  double t3079;
  double t3058;
  double t3112;
  double t3114;
  double t3136;
  double t3145;
  double t3170;
  double t3131;
  double t3179;
  double t3198;
  double t3223;
  double t3238;
  double t3239;
  double t3201;
  double t3252;
  double t3266;
  double t3298;
  double t3301;
  double t3307;
  double t2103;
  double t2174;
  double t2207;
  double t2232;
  double t2234;
  double t2254;
  double t2760;
  double t2794;
  double t2823;
  double t2858;
  double t2860;
  double t2861;
  double t3294;
  double t3312;
  double t3323;
  double t3344;
  double t3354;
  double t3390;
  double t3659;
  double t3660;
  double t3840;
  double t3843;
  double t3969;
  double t3993;
  double t4106;
  double t4127;
  double t4200;
  double t4210;
  double t4273;
  double t4276;
  double t3672;
  double t3678;
  double t3696;
  double t3715;
  double t3720;
  double t3737;
  double t3747;
  double t3748;
  double t3753;
  double t3781;
  double t3804;
  double t3805;
  double t3875;
  double t3879;
  double t3888;
  double t3922;
  double t3927;
  double t3939;
  double t4013;
  double t4019;
  double t4020;
  double t4040;
  double t4063;
  double t4072;
  double t4132;
  double t4142;
  double t4154;
  double t4172;
  double t4173;
  double t4187;
  double t4215;
  double t4223;
  double t4231;
  double t4248;
  double t4255;
  double t4257;
  double t4280;
  double t4281;
  double t4284;
  double t4302;
  double t4313;
  double t4315;
  t94 = Cos(var1[3]);
  t337 = Cos(var1[5]);
  t405 = Sin(var1[3]);
  t371 = Sin(var1[4]);
  t493 = Sin(var1[5]);
  t168 = Cos(var1[4]);
  t201 = Sin(var1[14]);
  t237 = Cos(var1[14]);
  t299 = Sin(var1[13]);
  t537 = Cos(var1[13]);
  t401 = t94*t337*t371;
  t498 = t405*t493;
  t501 = t401 + t498;
  t540 = -1.*t337*t405;
  t550 = t94*t371*t493;
  t552 = t540 + t550;
  t510 = t299*t501;
  t553 = t537*t552;
  t555 = t510 + t553;
  t1698 = Cos(var1[15]);
  t1505 = t537*t501;
  t1541 = -1.*t299*t552;
  t1635 = t1505 + t1541;
  t1433 = Sin(var1[15]);
  t1716 = t237*t94*t168;
  t1728 = t201*t555;
  t1744 = t1716 + t1728;
  t1810 = Cos(var1[16]);
  t1678 = t1433*t1635;
  t1754 = t1698*t1744;
  t1756 = t1678 + t1754;
  t1430 = Sin(var1[16]);
  t1812 = t1698*t1635;
  t1826 = -1.*t1433*t1744;
  t1839 = t1812 + t1826;
  t1888 = Cos(var1[17]);
  t1789 = -1.*t1430*t1756;
  t1845 = t1810*t1839;
  t1871 = t1789 + t1845;
  t1429 = Sin(var1[17]);
  t1895 = t1810*t1756;
  t1905 = t1430*t1839;
  t1906 = t1895 + t1905;
  t1968 = Cos(var1[18]);
  t1880 = t1429*t1871;
  t1913 = t1888*t1906;
  t1938 = t1880 + t1913;
  t1425 = Sin(var1[18]);
  t2009 = t1888*t1871;
  t2034 = -1.*t1429*t1906;
  t2049 = t2009 + t2034;
  t2128 = Cos(var1[19]);
  t1941 = -1.*t1425*t1938;
  t2084 = t1968*t2049;
  t2087 = t1941 + t2084;
  t1398 = Sin(var1[19]);
  t2130 = t1968*t1938;
  t2144 = t1425*t2049;
  t2164 = t2130 + t2144;
  t762 = t337*t405*t371;
  t863 = -1.*t94*t493;
  t876 = t762 + t863;
  t958 = t94*t337;
  t972 = t405*t371*t493;
  t980 = t958 + t972;
  t948 = t299*t876;
  t1022 = t537*t980;
  t1067 = t948 + t1022;
  t2338 = t537*t876;
  t2360 = -1.*t299*t980;
  t2365 = t2338 + t2360;
  t2380 = t237*t168*t405;
  t2394 = t201*t1067;
  t2411 = t2380 + t2394;
  t2371 = t1433*t2365;
  t2421 = t1698*t2411;
  t2423 = t2371 + t2421;
  t2459 = t1698*t2365;
  t2473 = -1.*t1433*t2411;
  t2476 = t2459 + t2473;
  t2431 = -1.*t1430*t2423;
  t2500 = t1810*t2476;
  t2598 = t2431 + t2500;
  t2625 = t1810*t2423;
  t2634 = t1430*t2476;
  t2635 = t2625 + t2634;
  t2624 = t1429*t2598;
  t2637 = t1888*t2635;
  t2639 = t2624 + t2637;
  t2688 = t1888*t2598;
  t2697 = -1.*t1429*t2635;
  t2698 = t2688 + t2697;
  t2664 = -1.*t1425*t2639;
  t2710 = t1968*t2698;
  t2749 = t2664 + t2710;
  t2769 = t1968*t2639;
  t2792 = t1425*t2698;
  t2793 = t2769 + t2792;
  t1260 = t168*t337*t299;
  t1266 = t537*t168*t493;
  t1274 = t1260 + t1266;
  t2877 = t537*t168*t337;
  t2952 = -1.*t168*t299*t493;
  t2956 = t2877 + t2952;
  t2987 = -1.*t237*t371;
  t2991 = t201*t1274;
  t2995 = t2987 + t2991;
  t2984 = t1433*t2956;
  t3036 = t1698*t2995;
  t3056 = t2984 + t3036;
  t3072 = t1698*t2956;
  t3074 = -1.*t1433*t2995;
  t3079 = t3072 + t3074;
  t3058 = -1.*t1430*t3056;
  t3112 = t1810*t3079;
  t3114 = t3058 + t3112;
  t3136 = t1810*t3056;
  t3145 = t1430*t3079;
  t3170 = t3136 + t3145;
  t3131 = t1429*t3114;
  t3179 = t1888*t3170;
  t3198 = t3131 + t3179;
  t3223 = t1888*t3114;
  t3238 = -1.*t1429*t3170;
  t3239 = t3223 + t3238;
  t3201 = -1.*t1425*t3198;
  t3252 = t1968*t3239;
  t3266 = t3201 + t3252;
  t3298 = t1968*t3198;
  t3301 = t1425*t3239;
  t3307 = t3298 + t3301;
  t2103 = t1398*t2087;
  t2174 = t2128*t2164;
  t2207 = t2103 + t2174;
  t2232 = t2128*t2087;
  t2234 = -1.*t1398*t2164;
  t2254 = t2232 + t2234;
  t2760 = t1398*t2749;
  t2794 = t2128*t2793;
  t2823 = t2760 + t2794;
  t2858 = t2128*t2749;
  t2860 = -1.*t1398*t2793;
  t2861 = t2858 + t2860;
  t3294 = t1398*t3266;
  t3312 = t2128*t3307;
  t3323 = t3294 + t3312;
  t3344 = t2128*t3266;
  t3354 = -1.*t1398*t3307;
  t3390 = t3344 + t3354;
  t3659 = -1.*t237;
  t3660 = 1. + t3659;
  t3840 = -1.*t1698;
  t3843 = 1. + t3840;
  t3969 = -1.*t1810;
  t3993 = 1. + t3969;
  t4106 = -1.*t1888;
  t4127 = 1. + t4106;
  t4200 = -1.*t1968;
  t4210 = 1. + t4200;
  t4273 = -1.*t2128;
  t4276 = 1. + t4273;
  t3672 = -0.049*t3660;
  t3678 = -0.135*t201;
  t3696 = 0. + t3672 + t3678;
  t3715 = 0.135*t299;
  t3720 = 0. + t3715;
  t3737 = -1.*t537;
  t3747 = 1. + t3737;
  t3748 = -0.135*t3747;
  t3753 = 0. + t3748;
  t3781 = -0.135*t3660;
  t3804 = 0.049*t201;
  t3805 = 0. + t3781 + t3804;
  t3875 = -0.09*t3843;
  t3879 = 0.049*t1433;
  t3888 = 0. + t3875 + t3879;
  t3922 = -0.049*t3843;
  t3927 = -0.09*t1433;
  t3939 = 0. + t3922 + t3927;
  t4013 = -0.049*t3993;
  t4019 = -0.21*t1430;
  t4020 = 0. + t4013 + t4019;
  t4040 = -0.21*t3993;
  t4063 = 0.049*t1430;
  t4072 = 0. + t4040 + t4063;
  t4132 = -0.2707*t4127;
  t4142 = 0.0016*t1429;
  t4154 = 0. + t4132 + t4142;
  t4172 = -0.0016*t4127;
  t4173 = -0.2707*t1429;
  t4187 = 0. + t4172 + t4173;
  t4215 = 0.0184*t4210;
  t4223 = -0.7055*t1425;
  t4231 = 0. + t4215 + t4223;
  t4248 = -0.7055*t4210;
  t4255 = -0.0184*t1425;
  t4257 = 0. + t4248 + t4255;
  t4280 = -1.1135*t4276;
  t4281 = 0.0216*t1398;
  t4284 = 0. + t4280 + t4281;
  t4302 = -0.0216*t4276;
  t4313 = -1.1135*t1398;
  t4315 = 0. + t4302 + t4313;
  p_output1[0]=-1.*t237*t555 + t168*t201*t94;
  p_output1[1]=-1.*t1067*t237 + t168*t201*t405;
  p_output1[2]=-1.*t1274*t237 - 1.*t201*t371;
  p_output1[3]=0.;
  p_output1[4]=0.642788*t2207 + 0.766044*t2254;
  p_output1[5]=0.642788*t2823 + 0.766044*t2861;
  p_output1[6]=0.642788*t3323 + 0.766044*t3390;
  p_output1[7]=0.;
  p_output1[8]=-0.766044*t2207 + 0.642788*t2254;
  p_output1[9]=-0.766044*t2823 + 0.642788*t2861;
  p_output1[10]=-0.766044*t3323 + 0.642788*t3390;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.027251*t2207 - 1.200144*t2254 + t1635*t3888 + t1744*t3939 + t1756*t4020 + t1839*t4072 + t1871*t4154 + t1906*t4187 + t1938*t4231 + t2049*t4257 + t2087*t4284 + t2164*t4315 + t3720*t501 + t3753*t552 + t3805*t555 + t168*t3696*t94 - 0.1305*(t237*t555 - 1.*t168*t201*t94) + var1[0];
  p_output1[13]=0. - 0.027251*t2823 - 1.200144*t2861 + t1067*t3805 + t2365*t3888 + t2411*t3939 + t2423*t4020 + t168*t3696*t405 - 0.1305*(t1067*t237 - 1.*t168*t201*t405) + t2476*t4072 + t2598*t4154 + t2635*t4187 + t2639*t4231 + t2698*t4257 + t2749*t4284 + t2793*t4315 + t3720*t876 + t3753*t980 + var1[1];
  p_output1[14]=0. - 0.027251*t3323 - 1.200144*t3390 - 1.*t3696*t371 - 0.1305*(t1274*t237 + t201*t371) + t168*t337*t3720 + t1274*t3805 + t2956*t3888 + t2995*t3939 + t3056*t4020 + t3079*t4072 + t3114*t4154 + t3170*t4187 + t3198*t4231 + t3239*t4257 + t3266*t4284 + t3307*t4315 + t168*t3753*t493 + var1[2];
  p_output1[15]=1.;
}



void H_RightToeBack_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
