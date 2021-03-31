/*
 * Automatically Generated from Mathematica.
 * Wed 12 Feb 2020 15:28:03 GMT-08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_toe_joint_left_src.h"

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
  double t1513;
  double t3185;
  double t3439;
  double t3192;
  double t3495;
  double t3049;
  double t4388;
  double t4445;
  double t4541;
  double t3285;
  double t3723;
  double t3884;
  double t4547;
  double t1309;
  double t5236;
  double t5243;
  double t5250;
  double t1678;
  double t2085;
  double t2438;
  double t4386;
  double t5186;
  double t5205;
  double t5209;
  double t5215;
  double t5223;
  double t5270;
  double t5392;
  double t5232;
  double t5352;
  double t5360;
  double t907;
  double t5417;
  double t5441;
  double t5474;
  double t5500;
  double t5374;
  double t5478;
  double t5479;
  double t416;
  double t5518;
  double t5525;
  double t5536;
  double t5567;
  double t5491;
  double t5543;
  double t5552;
  double t309;
  double t5570;
  double t5575;
  double t5643;
  double t194;
  double t5943;
  double t5978;
  double t5988;
  double t5853;
  double t5857;
  double t5879;
  double t6038;
  double t6041;
  double t6065;
  double t5819;
  double t5915;
  double t5991;
  double t5997;
  double t6011;
  double t6018;
  double t6020;
  double t6080;
  double t6164;
  double t6218;
  double t6228;
  double t6254;
  double t6193;
  double t6256;
  double t6261;
  double t6269;
  double t6284;
  double t6290;
  double t5717;
  double t6267;
  double t6291;
  double t6292;
  double t6335;
  double t6391;
  double t6449;
  double t6758;
  double t6761;
  double t6762;
  double t6684;
  double t6688;
  double t6698;
  double t6705;
  double t6714;
  double t6724;
  double t6754;
  double t6780;
  double t6810;
  double t6815;
  double t6836;
  double t6854;
  double t6812;
  double t6857;
  double t6916;
  double t6950;
  double t6956;
  double t7048;
  double t6944;
  double t7078;
  double t7082;
  double t7124;
  double t7161;
  double t7166;
  double t5557;
  double t5686;
  double t5701;
  double t5723;
  double t5755;
  double t5778;
  double t6298;
  double t6521;
  double t6549;
  double t6630;
  double t6659;
  double t6660;
  double t7084;
  double t7220;
  double t7267;
  double t7298;
  double t7374;
  double t7392;
  t1513 = Cos(var1[3]);
  t3185 = Cos(var1[5]);
  t3439 = Sin(var1[4]);
  t3192 = Sin(var1[3]);
  t3495 = Sin(var1[5]);
  t3049 = Cos(var1[6]);
  t4388 = t1513*t3185*t3439;
  t4445 = t3192*t3495;
  t4541 = t4388 + t4445;
  t3285 = -1.*t3185*t3192;
  t3723 = t1513*t3439*t3495;
  t3884 = t3285 + t3723;
  t4547 = Sin(var1[6]);
  t1309 = Cos(var1[8]);
  t5236 = t3049*t4541;
  t5243 = -1.*t3884*t4547;
  t5250 = t5236 + t5243;
  t1678 = Cos(var1[4]);
  t2085 = Cos(var1[7]);
  t2438 = t1513*t1678*t2085;
  t4386 = t3049*t3884;
  t5186 = t4541*t4547;
  t5205 = t4386 + t5186;
  t5209 = Sin(var1[7]);
  t5215 = t5205*t5209;
  t5223 = t2438 + t5215;
  t5270 = Sin(var1[8]);
  t5392 = Cos(var1[9]);
  t5232 = t1309*t5223;
  t5352 = t5250*t5270;
  t5360 = t5232 + t5352;
  t907 = Sin(var1[9]);
  t5417 = t1309*t5250;
  t5441 = -1.*t5223*t5270;
  t5474 = t5417 + t5441;
  t5500 = Cos(var1[10]);
  t5374 = -1.*t907*t5360;
  t5478 = t5392*t5474;
  t5479 = t5374 + t5478;
  t416 = Sin(var1[10]);
  t5518 = t5392*t5360;
  t5525 = t907*t5474;
  t5536 = t5518 + t5525;
  t5567 = Cos(var1[11]);
  t5491 = t416*t5479;
  t5543 = t5500*t5536;
  t5552 = t5491 + t5543;
  t309 = Sin(var1[11]);
  t5570 = t5500*t5479;
  t5575 = -1.*t416*t5536;
  t5643 = t5570 + t5575;
  t194 = Cos(var1[12]);
  t5943 = t3185*t3192*t3439;
  t5978 = -1.*t1513*t3495;
  t5988 = t5943 + t5978;
  t5853 = t1513*t3185;
  t5857 = t3192*t3439*t3495;
  t5879 = t5853 + t5857;
  t6038 = t3049*t5988;
  t6041 = -1.*t5879*t4547;
  t6065 = t6038 + t6041;
  t5819 = t1678*t2085*t3192;
  t5915 = t3049*t5879;
  t5991 = t5988*t4547;
  t5997 = t5915 + t5991;
  t6011 = t5997*t5209;
  t6018 = t5819 + t6011;
  t6020 = t1309*t6018;
  t6080 = t6065*t5270;
  t6164 = t6020 + t6080;
  t6218 = t1309*t6065;
  t6228 = -1.*t6018*t5270;
  t6254 = t6218 + t6228;
  t6193 = -1.*t907*t6164;
  t6256 = t5392*t6254;
  t6261 = t6193 + t6256;
  t6269 = t5392*t6164;
  t6284 = t907*t6254;
  t6290 = t6269 + t6284;
  t5717 = Sin(var1[12]);
  t6267 = t416*t6261;
  t6291 = t5500*t6290;
  t6292 = t6267 + t6291;
  t6335 = t5500*t6261;
  t6391 = -1.*t416*t6290;
  t6449 = t6335 + t6391;
  t6758 = t1678*t3185*t3049;
  t6761 = -1.*t1678*t3495*t4547;
  t6762 = t6758 + t6761;
  t6684 = -1.*t2085*t3439;
  t6688 = t1678*t3049*t3495;
  t6698 = t1678*t3185*t4547;
  t6705 = t6688 + t6698;
  t6714 = t6705*t5209;
  t6724 = t6684 + t6714;
  t6754 = t1309*t6724;
  t6780 = t6762*t5270;
  t6810 = t6754 + t6780;
  t6815 = t1309*t6762;
  t6836 = -1.*t6724*t5270;
  t6854 = t6815 + t6836;
  t6812 = -1.*t907*t6810;
  t6857 = t5392*t6854;
  t6916 = t6812 + t6857;
  t6950 = t5392*t6810;
  t6956 = t907*t6854;
  t7048 = t6950 + t6956;
  t6944 = t416*t6916;
  t7078 = t5500*t7048;
  t7082 = t6944 + t7078;
  t7124 = t5500*t6916;
  t7161 = -1.*t416*t7048;
  t7166 = t7124 + t7161;
  t5557 = -1.*t309*t5552;
  t5686 = t5567*t5643;
  t5701 = t5557 + t5686;
  t5723 = t5567*t5552;
  t5755 = t309*t5643;
  t5778 = t5723 + t5755;
  t6298 = -1.*t309*t6292;
  t6521 = t5567*t6449;
  t6549 = t6298 + t6521;
  t6630 = t5567*t6292;
  t6659 = t309*t6449;
  t6660 = t6630 + t6659;
  t7084 = -1.*t309*t7082;
  t7220 = t5567*t7166;
  t7267 = t7084 + t7220;
  t7298 = t5567*t7082;
  t7374 = t309*t7166;
  t7392 = t7298 + t7374;
  p_output1[0]=-1.*t194*t5701 + t5717*t5778;
  p_output1[1]=-1.*t194*t6549 + t5717*t6660;
  p_output1[2]=-1.*t194*t7267 + t5717*t7392;
  p_output1[3]=t5701*t5717 + t194*t5778;
  p_output1[4]=t5717*t6549 + t194*t6660;
  p_output1[5]=t5717*t7267 + t194*t7392;
  p_output1[6]=-1.*t2085*t5205 + t1513*t1678*t5209;
  p_output1[7]=t1678*t3192*t5209 - 1.*t2085*t5997;
  p_output1[8]=-1.*t3439*t5209 - 1.*t2085*t6705;
}



void R_toe_joint_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
