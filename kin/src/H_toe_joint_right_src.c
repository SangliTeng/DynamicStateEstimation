/*
 * Automatically Generated from Mathematica.
 * Wed 12 Feb 2020 15:28:47 GMT-08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_toe_joint_right_src.h"

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
  double t599;
  double t888;
  double t582;
  double t671;
  double t891;
  double t963;
  double t678;
  double t902;
  double t909;
  double t506;
  double t984;
  double t1067;
  double t1076;
  double t1157;
  double t920;
  double t1099;
  double t1109;
  double t448;
  double t1228;
  double t1235;
  double t1251;
  double t1263;
  double t1288;
  double t1305;
  double t1309;
  double t1313;
  double t1328;
  double t1390;
  double t1124;
  double t1344;
  double t1349;
  double t386;
  double t1392;
  double t1404;
  double t1414;
  double t1513;
  double t1374;
  double t1416;
  double t1456;
  double t355;
  double t1535;
  double t1572;
  double t1579;
  double t1656;
  double t1474;
  double t1605;
  double t1613;
  double t194;
  double t1691;
  double t1692;
  double t1704;
  double t69;
  double t1979;
  double t2041;
  double t2052;
  double t2094;
  double t2111;
  double t2118;
  double t2064;
  double t2129;
  double t2137;
  double t2183;
  double t2184;
  double t2187;
  double t2191;
  double t2200;
  double t2207;
  double t2151;
  double t2251;
  double t2260;
  double t2340;
  double t2380;
  double t2390;
  double t2274;
  double t2395;
  double t2438;
  double t2479;
  double t2486;
  double t2513;
  double t1814;
  double t2467;
  double t2551;
  double t2572;
  double t2609;
  double t2621;
  double t2630;
  double t2766;
  double t2767;
  double t2779;
  double t2787;
  double t2789;
  double t2803;
  double t2810;
  double t2815;
  double t2836;
  double t2780;
  double t2850;
  double t2855;
  double t2902;
  double t2938;
  double t2954;
  double t2860;
  double t2968;
  double t2969;
  double t3042;
  double t3049;
  double t3070;
  double t2997;
  double t3071;
  double t3117;
  double t3156;
  double t3158;
  double t3165;
  double t1643;
  double t1753;
  double t1786;
  double t1831;
  double t1839;
  double t1898;
  double t2599;
  double t2638;
  double t2693;
  double t2698;
  double t2702;
  double t2716;
  double t3147;
  double t3185;
  double t3192;
  double t3258;
  double t3260;
  double t3273;
  double t3589;
  double t3605;
  double t3829;
  double t3854;
  double t3984;
  double t4039;
  double t4093;
  double t4103;
  double t4289;
  double t4291;
  double t4366;
  double t4377;
  double t3326;
  double t3362;
  double t3388;
  double t3622;
  double t3630;
  double t3648;
  double t3659;
  double t3703;
  double t3710;
  double t3723;
  double t3738;
  double t3746;
  double t3773;
  double t3782;
  double t3806;
  double t3870;
  double t3871;
  double t3873;
  double t3939;
  double t3940;
  double t3945;
  double t4051;
  double t4052;
  double t4061;
  double t4076;
  double t4082;
  double t4090;
  double t4119;
  double t4147;
  double t4172;
  double t4189;
  double t4201;
  double t4208;
  double t4304;
  double t4310;
  double t4312;
  double t4325;
  double t4344;
  double t4353;
  double t4384;
  double t4386;
  double t4388;
  double t4391;
  double t4395;
  double t4405;
  double t3400;
  double t3401;
  double t3403;
  double t3408;
  double t3409;
  double t3427;
  t599 = Cos(var1[5]);
  t888 = Sin(var1[3]);
  t582 = Cos(var1[3]);
  t671 = Sin(var1[4]);
  t891 = Sin(var1[5]);
  t963 = Sin(var1[13]);
  t678 = t582*t599*t671;
  t902 = t888*t891;
  t909 = t678 + t902;
  t506 = Cos(var1[13]);
  t984 = -1.*t599*t888;
  t1067 = t582*t671*t891;
  t1076 = t984 + t1067;
  t1157 = Cos(var1[15]);
  t920 = t506*t909;
  t1099 = -1.*t963*t1076;
  t1109 = t920 + t1099;
  t448 = Sin(var1[15]);
  t1228 = Cos(var1[14]);
  t1235 = Cos(var1[4]);
  t1251 = t1228*t582*t1235;
  t1263 = Sin(var1[14]);
  t1288 = t963*t909;
  t1305 = t506*t1076;
  t1309 = t1288 + t1305;
  t1313 = t1263*t1309;
  t1328 = t1251 + t1313;
  t1390 = Cos(var1[16]);
  t1124 = t448*t1109;
  t1344 = t1157*t1328;
  t1349 = t1124 + t1344;
  t386 = Sin(var1[16]);
  t1392 = t1157*t1109;
  t1404 = -1.*t448*t1328;
  t1414 = t1392 + t1404;
  t1513 = Cos(var1[17]);
  t1374 = -1.*t386*t1349;
  t1416 = t1390*t1414;
  t1456 = t1374 + t1416;
  t355 = Sin(var1[17]);
  t1535 = t1390*t1349;
  t1572 = t386*t1414;
  t1579 = t1535 + t1572;
  t1656 = Cos(var1[18]);
  t1474 = t355*t1456;
  t1605 = t1513*t1579;
  t1613 = t1474 + t1605;
  t194 = Sin(var1[18]);
  t1691 = t1513*t1456;
  t1692 = -1.*t355*t1579;
  t1704 = t1691 + t1692;
  t69 = Cos(var1[19]);
  t1979 = t599*t888*t671;
  t2041 = -1.*t582*t891;
  t2052 = t1979 + t2041;
  t2094 = t582*t599;
  t2111 = t888*t671*t891;
  t2118 = t2094 + t2111;
  t2064 = t506*t2052;
  t2129 = -1.*t963*t2118;
  t2137 = t2064 + t2129;
  t2183 = t1228*t1235*t888;
  t2184 = t963*t2052;
  t2187 = t506*t2118;
  t2191 = t2184 + t2187;
  t2200 = t1263*t2191;
  t2207 = t2183 + t2200;
  t2151 = t448*t2137;
  t2251 = t1157*t2207;
  t2260 = t2151 + t2251;
  t2340 = t1157*t2137;
  t2380 = -1.*t448*t2207;
  t2390 = t2340 + t2380;
  t2274 = -1.*t386*t2260;
  t2395 = t1390*t2390;
  t2438 = t2274 + t2395;
  t2479 = t1390*t2260;
  t2486 = t386*t2390;
  t2513 = t2479 + t2486;
  t1814 = Sin(var1[19]);
  t2467 = t355*t2438;
  t2551 = t1513*t2513;
  t2572 = t2467 + t2551;
  t2609 = t1513*t2438;
  t2621 = -1.*t355*t2513;
  t2630 = t2609 + t2621;
  t2766 = t506*t1235*t599;
  t2767 = -1.*t1235*t963*t891;
  t2779 = t2766 + t2767;
  t2787 = -1.*t1228*t671;
  t2789 = t1235*t599*t963;
  t2803 = t506*t1235*t891;
  t2810 = t2789 + t2803;
  t2815 = t1263*t2810;
  t2836 = t2787 + t2815;
  t2780 = t448*t2779;
  t2850 = t1157*t2836;
  t2855 = t2780 + t2850;
  t2902 = t1157*t2779;
  t2938 = -1.*t448*t2836;
  t2954 = t2902 + t2938;
  t2860 = -1.*t386*t2855;
  t2968 = t1390*t2954;
  t2969 = t2860 + t2968;
  t3042 = t1390*t2855;
  t3049 = t386*t2954;
  t3070 = t3042 + t3049;
  t2997 = t355*t2969;
  t3071 = t1513*t3070;
  t3117 = t2997 + t3071;
  t3156 = t1513*t2969;
  t3158 = -1.*t355*t3070;
  t3165 = t3156 + t3158;
  t1643 = -1.*t194*t1613;
  t1753 = t1656*t1704;
  t1786 = t1643 + t1753;
  t1831 = t1656*t1613;
  t1839 = t194*t1704;
  t1898 = t1831 + t1839;
  t2599 = -1.*t194*t2572;
  t2638 = t1656*t2630;
  t2693 = t2599 + t2638;
  t2698 = t1656*t2572;
  t2702 = t194*t2630;
  t2716 = t2698 + t2702;
  t3147 = -1.*t194*t3117;
  t3185 = t1656*t3165;
  t3192 = t3147 + t3185;
  t3258 = t1656*t3117;
  t3260 = t194*t3165;
  t3273 = t3258 + t3260;
  t3589 = -1.*t1228;
  t3605 = 1. + t3589;
  t3829 = -1.*t1157;
  t3854 = 1. + t3829;
  t3984 = -1.*t1390;
  t4039 = 1. + t3984;
  t4093 = -1.*t1513;
  t4103 = 1. + t4093;
  t4289 = -1.*t1656;
  t4291 = 1. + t4289;
  t4366 = -1.*t69;
  t4377 = 1. + t4366;
  t3326 = t1814*t1786;
  t3362 = t69*t1898;
  t3388 = t3326 + t3362;
  t3622 = -0.049*t3605;
  t3630 = -0.135*t1263;
  t3648 = 0. + t3622 + t3630;
  t3659 = 0.135*t963;
  t3703 = 0. + t3659;
  t3710 = -1.*t506;
  t3723 = 1. + t3710;
  t3738 = -0.135*t3723;
  t3746 = 0. + t3738;
  t3773 = -0.135*t3605;
  t3782 = 0.049*t1263;
  t3806 = 0. + t3773 + t3782;
  t3870 = -0.09*t3854;
  t3871 = 0.049*t448;
  t3873 = 0. + t3870 + t3871;
  t3939 = -0.049*t3854;
  t3940 = -0.09*t448;
  t3945 = 0. + t3939 + t3940;
  t4051 = -0.049*t4039;
  t4052 = -0.21*t386;
  t4061 = 0. + t4051 + t4052;
  t4076 = -0.21*t4039;
  t4082 = 0.049*t386;
  t4090 = 0. + t4076 + t4082;
  t4119 = -0.2707*t4103;
  t4147 = 0.0016*t355;
  t4172 = 0. + t4119 + t4147;
  t4189 = -0.0016*t4103;
  t4201 = -0.2707*t355;
  t4208 = 0. + t4189 + t4201;
  t4304 = 0.0184*t4291;
  t4310 = -0.7055*t194;
  t4312 = 0. + t4304 + t4310;
  t4325 = -0.7055*t4291;
  t4344 = -0.0184*t194;
  t4353 = 0. + t4325 + t4344;
  t4384 = -1.1135*t4377;
  t4386 = 0.0216*t1814;
  t4388 = 0. + t4384 + t4386;
  t4391 = -0.0216*t4377;
  t4395 = -1.1135*t1814;
  t4405 = 0. + t4391 + t4395;
  t3400 = t1814*t2693;
  t3401 = t69*t2716;
  t3403 = t3400 + t3401;
  t3408 = t1814*t3192;
  t3409 = t69*t3273;
  t3427 = t3408 + t3409;
  p_output1[0]=t1814*t1898 - 1.*t1786*t69;
  p_output1[1]=t1814*t2716 - 1.*t2693*t69;
  p_output1[2]=t1814*t3273 - 1.*t3192*t69;
  p_output1[3]=0.;
  p_output1[4]=t3388;
  p_output1[5]=t3403;
  p_output1[6]=t3427;
  p_output1[7]=0.;
  p_output1[8]=-1.*t1228*t1309 + t1235*t1263*t582;
  p_output1[9]=-1.*t1228*t2191 + t1235*t1263*t888;
  p_output1[10]=-1.*t1228*t2810 - 1.*t1263*t671;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.0216*t3388 + t1076*t3746 + t1309*t3806 + t1109*t3873 + t1328*t3945 + t1349*t4061 + t1414*t4090 + t1456*t4172 + t1579*t4208 + t1613*t4312 + t1704*t4353 + t1786*t4388 + t1898*t4405 + t1235*t3648*t582 - 0.1305*(t1228*t1309 - 1.*t1235*t1263*t582) - 1.1135*(-1.*t1814*t1898 + t1786*t69) + t3703*t909 + var1[0];
  p_output1[13]=0. - 0.0216*t3403 + t2052*t3703 + t2118*t3746 + t2191*t3806 + t2137*t3873 + t2207*t3945 + t2260*t4061 + t2390*t4090 + t2438*t4172 + t2513*t4208 + t2572*t4312 + t2630*t4353 + t2693*t4388 + t2716*t4405 - 1.1135*(-1.*t1814*t2716 + t2693*t69) + t1235*t3648*t888 - 0.1305*(t1228*t2191 - 1.*t1235*t1263*t888) + var1[1];
  p_output1[14]=0. - 0.0216*t3427 + t2810*t3806 + t2779*t3873 + t2836*t3945 + t2855*t4061 + t2954*t4090 + t2969*t4172 + t3070*t4208 + t3117*t4312 + t3165*t4353 + t3192*t4388 + t3273*t4405 + t1235*t3703*t599 - 1.*t3648*t671 - 0.1305*(t1228*t2810 + t1263*t671) - 1.1135*(-1.*t1814*t3273 + t3192*t69) + t1235*t3746*t891 + var1[2];
  p_output1[15]=1.;
}



void H_toe_joint_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
