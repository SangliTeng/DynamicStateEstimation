/*
 * Automatically Generated from Mathematica.
 * Wed 12 Feb 2020 15:28:26 GMT-08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_knee_joint_right_src.h"

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
  double t320;
  double t536;
  double t307;
  double t390;
  double t574;
  double t811;
  double t534;
  double t586;
  double t641;
  double t303;
  double t884;
  double t895;
  double t1107;
  double t1458;
  double t808;
  double t1308;
  double t1384;
  double t284;
  double t1469;
  double t1603;
  double t1661;
  double t1699;
  double t1776;
  double t1791;
  double t1805;
  double t1823;
  double t1863;
  double t192;
  double t2211;
  double t2213;
  double t2224;
  double t2387;
  double t2420;
  double t2455;
  double t1908;
  double t2244;
  double t2461;
  double t2466;
  double t2485;
  double t2494;
  double t2495;
  double t2503;
  double t2530;
  double t2576;
  double t2957;
  double t3015;
  double t3021;
  double t3032;
  double t3108;
  double t3141;
  double t3181;
  double t3186;
  double t3263;
  double t1431;
  double t1880;
  double t1890;
  double t1930;
  double t1945;
  double t2036;
  double t2471;
  double t2586;
  double t2611;
  double t2726;
  double t2733;
  double t2848;
  double t3027;
  double t3270;
  double t3343;
  double t3355;
  double t3357;
  double t3386;
  double t3957;
  double t3973;
  double t4374;
  double t4381;
  double t4585;
  double t4668;
  double t3460;
  double t3571;
  double t3610;
  double t3975;
  double t3982;
  double t4059;
  double t4068;
  double t4123;
  double t4236;
  double t4243;
  double t4268;
  double t4270;
  double t4303;
  double t4336;
  double t4348;
  double t4396;
  double t4400;
  double t4417;
  double t4552;
  double t4560;
  double t4579;
  double t4720;
  double t4722;
  double t4789;
  double t4810;
  double t4833;
  double t4851;
  double t3616;
  double t3634;
  double t3711;
  double t3718;
  double t3721;
  double t3740;
  t320 = Cos(var1[5]);
  t536 = Sin(var1[3]);
  t307 = Cos(var1[3]);
  t390 = Sin(var1[4]);
  t574 = Sin(var1[5]);
  t811 = Sin(var1[13]);
  t534 = t307*t320*t390;
  t586 = t536*t574;
  t641 = t534 + t586;
  t303 = Cos(var1[13]);
  t884 = -1.*t320*t536;
  t895 = t307*t390*t574;
  t1107 = t884 + t895;
  t1458 = Cos(var1[15]);
  t808 = t303*t641;
  t1308 = -1.*t811*t1107;
  t1384 = t808 + t1308;
  t284 = Sin(var1[15]);
  t1469 = Cos(var1[14]);
  t1603 = Cos(var1[4]);
  t1661 = t1469*t307*t1603;
  t1699 = Sin(var1[14]);
  t1776 = t811*t641;
  t1791 = t303*t1107;
  t1805 = t1776 + t1791;
  t1823 = t1699*t1805;
  t1863 = t1661 + t1823;
  t192 = Sin(var1[16]);
  t2211 = t320*t536*t390;
  t2213 = -1.*t307*t574;
  t2224 = t2211 + t2213;
  t2387 = t307*t320;
  t2420 = t536*t390*t574;
  t2455 = t2387 + t2420;
  t1908 = Cos(var1[16]);
  t2244 = t303*t2224;
  t2461 = -1.*t811*t2455;
  t2466 = t2244 + t2461;
  t2485 = t1469*t1603*t536;
  t2494 = t811*t2224;
  t2495 = t303*t2455;
  t2503 = t2494 + t2495;
  t2530 = t1699*t2503;
  t2576 = t2485 + t2530;
  t2957 = t303*t1603*t320;
  t3015 = -1.*t1603*t811*t574;
  t3021 = t2957 + t3015;
  t3032 = -1.*t1469*t390;
  t3108 = t1603*t320*t811;
  t3141 = t303*t1603*t574;
  t3181 = t3108 + t3141;
  t3186 = t1699*t3181;
  t3263 = t3032 + t3186;
  t1431 = t284*t1384;
  t1880 = t1458*t1863;
  t1890 = t1431 + t1880;
  t1930 = t1458*t1384;
  t1945 = -1.*t284*t1863;
  t2036 = t1930 + t1945;
  t2471 = t284*t2466;
  t2586 = t1458*t2576;
  t2611 = t2471 + t2586;
  t2726 = t1458*t2466;
  t2733 = -1.*t284*t2576;
  t2848 = t2726 + t2733;
  t3027 = t284*t3021;
  t3270 = t1458*t3263;
  t3343 = t3027 + t3270;
  t3355 = t1458*t3021;
  t3357 = -1.*t284*t3263;
  t3386 = t3355 + t3357;
  t3957 = -1.*t1469;
  t3973 = 1. + t3957;
  t4374 = -1.*t1458;
  t4381 = 1. + t4374;
  t4585 = -1.*t1908;
  t4668 = 1. + t4585;
  t3460 = t1908*t1890;
  t3571 = t192*t2036;
  t3610 = t3460 + t3571;
  t3975 = -0.049*t3973;
  t3982 = -0.135*t1699;
  t4059 = 0. + t3975 + t3982;
  t4068 = 0.135*t811;
  t4123 = 0. + t4068;
  t4236 = -1.*t303;
  t4243 = 1. + t4236;
  t4268 = -0.135*t4243;
  t4270 = 0. + t4268;
  t4303 = -0.135*t3973;
  t4336 = 0.049*t1699;
  t4348 = 0. + t4303 + t4336;
  t4396 = -0.09*t4381;
  t4400 = 0.049*t284;
  t4417 = 0. + t4396 + t4400;
  t4552 = -0.049*t4381;
  t4560 = -0.09*t284;
  t4579 = 0. + t4552 + t4560;
  t4720 = -0.049*t4668;
  t4722 = -0.21*t192;
  t4789 = 0. + t4720 + t4722;
  t4810 = -0.21*t4668;
  t4833 = 0.049*t192;
  t4851 = 0. + t4810 + t4833;
  t3616 = t1908*t2611;
  t3634 = t192*t2848;
  t3711 = t3616 + t3634;
  t3718 = t1908*t3343;
  t3721 = t192*t3386;
  t3740 = t3718 + t3721;
  p_output1[0]=t1890*t192 - 1.*t1908*t2036;
  p_output1[1]=t192*t2611 - 1.*t1908*t2848;
  p_output1[2]=t192*t3343 - 1.*t1908*t3386;
  p_output1[3]=0.;
  p_output1[4]=t3610;
  p_output1[5]=t3711;
  p_output1[6]=t3740;
  p_output1[7]=0.;
  p_output1[8]=-1.*t1469*t1805 + t1603*t1699*t307;
  p_output1[9]=-1.*t1469*t2503 + t1603*t1699*t536;
  p_output1[10]=-1.*t1469*t3181 - 1.*t1699*t390;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.21*(-1.*t1890*t192 + t1908*t2036) - 0.1305*(t1469*t1805 - 1.*t1603*t1699*t307) - 0.049*t3610 + t1603*t307*t4059 + t1107*t4270 + t1805*t4348 + t1384*t4417 + t1863*t4579 + t1890*t4789 + t2036*t4851 + t4123*t641 + var1[0];
  p_output1[13]=0. - 0.21*(-1.*t192*t2611 + t1908*t2848) - 0.049*t3711 + t2224*t4123 + t2455*t4270 + t2503*t4348 + t2466*t4417 + t2576*t4579 + t2611*t4789 + t2848*t4851 + t1603*t4059*t536 - 0.1305*(t1469*t2503 - 1.*t1603*t1699*t536) + var1[1];
  p_output1[14]=0. - 0.21*(-1.*t192*t3343 + t1908*t3386) - 0.049*t3740 - 0.1305*(t1469*t3181 + t1699*t390) - 1.*t390*t4059 + t1603*t320*t4123 + t3181*t4348 + t3021*t4417 + t3263*t4579 + t3343*t4789 + t3386*t4851 + t1603*t4270*t574 + var1[2];
  p_output1[15]=1.;
}



void H_knee_joint_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
