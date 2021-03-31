/*
 * Automatically Generated from Mathematica.
 * Wed 12 Feb 2020 15:27:56 GMT-08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_ankle_joint_left_src.h"

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
  double t882;
  double t1220;
  double t1275;
  double t1240;
  double t1337;
  double t988;
  double t1492;
  double t1524;
  double t1542;
  double t1252;
  double t1410;
  double t1482;
  double t1665;
  double t819;
  double t1904;
  double t1906;
  double t1922;
  double t906;
  double t945;
  double t983;
  double t1484;
  double t1677;
  double t1713;
  double t1762;
  double t1836;
  double t1889;
  double t2008;
  double t2197;
  double t1894;
  double t2053;
  double t2150;
  double t478;
  double t2222;
  double t2228;
  double t2258;
  double t2670;
  double t2181;
  double t2285;
  double t2357;
  double t365;
  double t2745;
  double t2760;
  double t2864;
  double t322;
  double t3287;
  double t3323;
  double t3327;
  double t3203;
  double t3244;
  double t3262;
  double t3516;
  double t3553;
  double t3556;
  double t3129;
  double t3274;
  double t3341;
  double t3358;
  double t3413;
  double t3441;
  double t3487;
  double t3593;
  double t3670;
  double t3685;
  double t3730;
  double t3749;
  double t3012;
  double t3681;
  double t3761;
  double t3766;
  double t3824;
  double t3825;
  double t3827;
  double t4178;
  double t4243;
  double t4244;
  double t3926;
  double t3931;
  double t3991;
  double t3993;
  double t4044;
  double t4054;
  double t4072;
  double t4247;
  double t4249;
  double t4300;
  double t4316;
  double t4322;
  double t4299;
  double t4324;
  double t4356;
  double t4385;
  double t4434;
  double t4442;
  double t2569;
  double t2875;
  double t2913;
  double t3016;
  double t3082;
  double t3084;
  double t3817;
  double t3839;
  double t3841;
  double t3863;
  double t3874;
  double t3881;
  double t4378;
  double t4446;
  double t4485;
  double t4495;
  double t4496;
  double t4567;
  double t6144;
  double t6334;
  double t7201;
  double t7213;
  double t7330;
  double t7336;
  double t7445;
  double t7446;
  double t7517;
  double t7522;
  double t4817;
  double t4900;
  double t4938;
  double t5959;
  double t6053;
  double t6062;
  double t6073;
  double t6079;
  double t6133;
  double t6338;
  double t6425;
  double t6539;
  double t6861;
  double t6998;
  double t7122;
  double t7227;
  double t7242;
  double t7255;
  double t7300;
  double t7303;
  double t7323;
  double t7358;
  double t7372;
  double t7385;
  double t7413;
  double t7414;
  double t7427;
  double t7464;
  double t7477;
  double t7491;
  double t7495;
  double t7500;
  double t7508;
  double t7534;
  double t7536;
  double t7539;
  double t7548;
  double t7551;
  double t7552;
  double t4950;
  double t5018;
  double t5087;
  double t5259;
  double t5294;
  double t5309;
  t882 = Cos(var1[3]);
  t1220 = Cos(var1[5]);
  t1275 = Sin(var1[4]);
  t1240 = Sin(var1[3]);
  t1337 = Sin(var1[5]);
  t988 = Cos(var1[6]);
  t1492 = t882*t1220*t1275;
  t1524 = t1240*t1337;
  t1542 = t1492 + t1524;
  t1252 = -1.*t1220*t1240;
  t1410 = t882*t1275*t1337;
  t1482 = t1252 + t1410;
  t1665 = Sin(var1[6]);
  t819 = Cos(var1[8]);
  t1904 = t988*t1542;
  t1906 = -1.*t1482*t1665;
  t1922 = t1904 + t1906;
  t906 = Cos(var1[4]);
  t945 = Cos(var1[7]);
  t983 = t882*t906*t945;
  t1484 = t988*t1482;
  t1677 = t1542*t1665;
  t1713 = t1484 + t1677;
  t1762 = Sin(var1[7]);
  t1836 = t1713*t1762;
  t1889 = t983 + t1836;
  t2008 = Sin(var1[8]);
  t2197 = Cos(var1[9]);
  t1894 = t819*t1889;
  t2053 = t1922*t2008;
  t2150 = t1894 + t2053;
  t478 = Sin(var1[9]);
  t2222 = t819*t1922;
  t2228 = -1.*t1889*t2008;
  t2258 = t2222 + t2228;
  t2670 = Cos(var1[10]);
  t2181 = -1.*t478*t2150;
  t2285 = t2197*t2258;
  t2357 = t2181 + t2285;
  t365 = Sin(var1[10]);
  t2745 = t2197*t2150;
  t2760 = t478*t2258;
  t2864 = t2745 + t2760;
  t322 = Sin(var1[11]);
  t3287 = t1220*t1240*t1275;
  t3323 = -1.*t882*t1337;
  t3327 = t3287 + t3323;
  t3203 = t882*t1220;
  t3244 = t1240*t1275*t1337;
  t3262 = t3203 + t3244;
  t3516 = t988*t3327;
  t3553 = -1.*t3262*t1665;
  t3556 = t3516 + t3553;
  t3129 = t906*t945*t1240;
  t3274 = t988*t3262;
  t3341 = t3327*t1665;
  t3358 = t3274 + t3341;
  t3413 = t3358*t1762;
  t3441 = t3129 + t3413;
  t3487 = t819*t3441;
  t3593 = t3556*t2008;
  t3670 = t3487 + t3593;
  t3685 = t819*t3556;
  t3730 = -1.*t3441*t2008;
  t3749 = t3685 + t3730;
  t3012 = Cos(var1[11]);
  t3681 = -1.*t478*t3670;
  t3761 = t2197*t3749;
  t3766 = t3681 + t3761;
  t3824 = t2197*t3670;
  t3825 = t478*t3749;
  t3827 = t3824 + t3825;
  t4178 = t906*t1220*t988;
  t4243 = -1.*t906*t1337*t1665;
  t4244 = t4178 + t4243;
  t3926 = -1.*t945*t1275;
  t3931 = t906*t988*t1337;
  t3991 = t906*t1220*t1665;
  t3993 = t3931 + t3991;
  t4044 = t3993*t1762;
  t4054 = t3926 + t4044;
  t4072 = t819*t4054;
  t4247 = t4244*t2008;
  t4249 = t4072 + t4247;
  t4300 = t819*t4244;
  t4316 = -1.*t4054*t2008;
  t4322 = t4300 + t4316;
  t4299 = -1.*t478*t4249;
  t4324 = t2197*t4322;
  t4356 = t4299 + t4324;
  t4385 = t2197*t4249;
  t4434 = t478*t4322;
  t4442 = t4385 + t4434;
  t2569 = t365*t2357;
  t2875 = t2670*t2864;
  t2913 = t2569 + t2875;
  t3016 = t2670*t2357;
  t3082 = -1.*t365*t2864;
  t3084 = t3016 + t3082;
  t3817 = t365*t3766;
  t3839 = t2670*t3827;
  t3841 = t3817 + t3839;
  t3863 = t2670*t3766;
  t3874 = -1.*t365*t3827;
  t3881 = t3863 + t3874;
  t4378 = t365*t4356;
  t4446 = t2670*t4442;
  t4485 = t4378 + t4446;
  t4495 = t2670*t4356;
  t4496 = -1.*t365*t4442;
  t4567 = t4495 + t4496;
  t6144 = -1.*t945;
  t6334 = 1. + t6144;
  t7201 = -1.*t819;
  t7213 = 1. + t7201;
  t7330 = -1.*t2197;
  t7336 = 1. + t7330;
  t7445 = -1.*t2670;
  t7446 = 1. + t7445;
  t7517 = -1.*t3012;
  t7522 = 1. + t7517;
  t4817 = t3012*t2913;
  t4900 = t322*t3084;
  t4938 = t4817 + t4900;
  t5959 = -1.*t988;
  t6053 = 1. + t5959;
  t6062 = 0.135*t6053;
  t6073 = 0. + t6062;
  t6079 = -0.135*t1665;
  t6133 = 0. + t6079;
  t6338 = 0.135*t6334;
  t6425 = 0.049*t1762;
  t6539 = 0. + t6338 + t6425;
  t6861 = -0.049*t6334;
  t6998 = 0.135*t1762;
  t7122 = 0. + t6861 + t6998;
  t7227 = -0.049*t7213;
  t7242 = -0.09*t2008;
  t7255 = 0. + t7227 + t7242;
  t7300 = -0.09*t7213;
  t7303 = 0.049*t2008;
  t7323 = 0. + t7300 + t7303;
  t7358 = -0.049*t7336;
  t7372 = -0.21*t478;
  t7385 = 0. + t7358 + t7372;
  t7413 = -0.21*t7336;
  t7414 = 0.049*t478;
  t7427 = 0. + t7413 + t7414;
  t7464 = -0.2707*t7446;
  t7477 = 0.0016*t365;
  t7491 = 0. + t7464 + t7477;
  t7495 = -0.0016*t7446;
  t7500 = -0.2707*t365;
  t7508 = 0. + t7495 + t7500;
  t7534 = 0.0184*t7522;
  t7536 = -0.7055*t322;
  t7539 = 0. + t7534 + t7536;
  t7548 = -0.7055*t7522;
  t7551 = -0.0184*t322;
  t7552 = 0. + t7548 + t7551;
  t4950 = t3012*t3841;
  t5018 = t322*t3881;
  t5087 = t4950 + t5018;
  t5259 = t3012*t4485;
  t5294 = t322*t4567;
  t5309 = t5259 + t5294;
  p_output1[0]=-1.*t3012*t3084 + t2913*t322;
  p_output1[1]=t322*t3841 - 1.*t3012*t3881;
  p_output1[2]=t322*t4485 - 1.*t3012*t4567;
  p_output1[3]=0.;
  p_output1[4]=t4938;
  p_output1[5]=t5087;
  p_output1[6]=t5309;
  p_output1[7]=0.;
  p_output1[8]=t1762*t882*t906 - 1.*t1713*t945;
  p_output1[9]=t1240*t1762*t906 - 1.*t3358*t945;
  p_output1[10]=-1.*t1275*t1762 - 1.*t3993*t945;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.7055*(t3012*t3084 - 1.*t2913*t322) + 0.0184*t4938 + t1482*t6073 + t1542*t6133 + t1713*t6539 + t1889*t7255 + t1922*t7323 + t2150*t7385 + t2258*t7427 + t2357*t7491 + t2864*t7508 + t2913*t7539 + t3084*t7552 + t7122*t882*t906 + 0.1305*(-1.*t1762*t882*t906 + t1713*t945) + var1[0];
  p_output1[13]=0. - 0.7055*(-1.*t322*t3841 + t3012*t3881) + 0.0184*t5087 + t3262*t6073 + t3327*t6133 + t3358*t6539 + t3441*t7255 + t3556*t7323 + t3670*t7385 + t3749*t7427 + t3766*t7491 + t3827*t7508 + t3841*t7539 + t3881*t7552 + t1240*t7122*t906 + 0.1305*(-1.*t1240*t1762*t906 + t3358*t945) + var1[1];
  p_output1[14]=0. - 0.7055*(-1.*t322*t4485 + t3012*t4567) + 0.0184*t5309 + t3993*t6539 - 1.*t1275*t7122 + t4054*t7255 + t4244*t7323 + t4249*t7385 + t4322*t7427 + t4356*t7491 + t4442*t7508 + t4485*t7539 + t4567*t7552 + t1337*t6073*t906 + t1220*t6133*t906 + 0.1305*(t1275*t1762 + t3993*t945) + var1[2];
  p_output1[15]=1.;
}



void H_ankle_joint_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
