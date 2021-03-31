/*
 * Automatically Generated from Mathematica.
 * Wed 12 Feb 2020 15:27:50 GMT-08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_knee_to_shin_left_src.h"

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
  double t870;
  double t1969;
  double t2199;
  double t2127;
  double t2221;
  double t1861;
  double t2481;
  double t2523;
  double t2619;
  double t2136;
  double t2300;
  double t2319;
  double t2772;
  double t846;
  double t3232;
  double t3254;
  double t3438;
  double t1198;
  double t1401;
  double t1409;
  double t2464;
  double t2871;
  double t2946;
  double t2947;
  double t3086;
  double t3205;
  double t3454;
  double t3574;
  double t3225;
  double t3460;
  double t3530;
  double t839;
  double t3578;
  double t3642;
  double t3717;
  double t263;
  double t4678;
  double t4830;
  double t4891;
  double t4365;
  double t4457;
  double t4503;
  double t5897;
  double t5900;
  double t6033;
  double t4332;
  double t4504;
  double t5109;
  double t5142;
  double t5592;
  double t5704;
  double t3978;
  double t5865;
  double t6035;
  double t6076;
  double t6128;
  double t6129;
  double t6155;
  double t6250;
  double t6266;
  double t6270;
  double t6218;
  double t6224;
  double t6231;
  double t6238;
  double t6240;
  double t6242;
  double t6243;
  double t6288;
  double t6302;
  double t6306;
  double t6330;
  double t6339;
  double t3540;
  double t3875;
  double t3929;
  double t4009;
  double t4069;
  double t4132;
  double t6117;
  double t6163;
  double t6172;
  double t6181;
  double t6188;
  double t6194;
  double t6304;
  double t6340;
  double t6356;
  double t6373;
  double t6380;
  double t6381;
  double t6471;
  double t6472;
  double t6502;
  double t6507;
  double t6533;
  double t6535;
  double t6563;
  double t6569;
  double t6386;
  double t6389;
  double t6390;
  double t6447;
  double t6449;
  double t6451;
  double t6452;
  double t6458;
  double t6466;
  double t6475;
  double t6477;
  double t6479;
  double t6486;
  double t6490;
  double t6491;
  double t6508;
  double t6510;
  double t6513;
  double t6520;
  double t6524;
  double t6528;
  double t6538;
  double t6541;
  double t6542;
  double t6552;
  double t6554;
  double t6557;
  double t6571;
  double t6572;
  double t6575;
  double t6580;
  double t6585;
  double t6586;
  double t6395;
  double t6396;
  double t6399;
  double t6400;
  double t6401;
  double t6407;
  t870 = Cos(var1[3]);
  t1969 = Cos(var1[5]);
  t2199 = Sin(var1[4]);
  t2127 = Sin(var1[3]);
  t2221 = Sin(var1[5]);
  t1861 = Cos(var1[6]);
  t2481 = t870*t1969*t2199;
  t2523 = t2127*t2221;
  t2619 = t2481 + t2523;
  t2136 = -1.*t1969*t2127;
  t2300 = t870*t2199*t2221;
  t2319 = t2136 + t2300;
  t2772 = Sin(var1[6]);
  t846 = Cos(var1[8]);
  t3232 = t1861*t2619;
  t3254 = -1.*t2319*t2772;
  t3438 = t3232 + t3254;
  t1198 = Cos(var1[4]);
  t1401 = Cos(var1[7]);
  t1409 = t870*t1198*t1401;
  t2464 = t1861*t2319;
  t2871 = t2619*t2772;
  t2946 = t2464 + t2871;
  t2947 = Sin(var1[7]);
  t3086 = t2946*t2947;
  t3205 = t1409 + t3086;
  t3454 = Sin(var1[8]);
  t3574 = Cos(var1[9]);
  t3225 = t846*t3205;
  t3460 = t3438*t3454;
  t3530 = t3225 + t3460;
  t839 = Sin(var1[9]);
  t3578 = t846*t3438;
  t3642 = -1.*t3205*t3454;
  t3717 = t3578 + t3642;
  t263 = Cos(var1[10]);
  t4678 = t1969*t2127*t2199;
  t4830 = -1.*t870*t2221;
  t4891 = t4678 + t4830;
  t4365 = t870*t1969;
  t4457 = t2127*t2199*t2221;
  t4503 = t4365 + t4457;
  t5897 = t1861*t4891;
  t5900 = -1.*t4503*t2772;
  t6033 = t5897 + t5900;
  t4332 = t1198*t1401*t2127;
  t4504 = t1861*t4503;
  t5109 = t4891*t2772;
  t5142 = t4504 + t5109;
  t5592 = t5142*t2947;
  t5704 = t4332 + t5592;
  t3978 = Sin(var1[10]);
  t5865 = t846*t5704;
  t6035 = t6033*t3454;
  t6076 = t5865 + t6035;
  t6128 = t846*t6033;
  t6129 = -1.*t5704*t3454;
  t6155 = t6128 + t6129;
  t6250 = t1198*t1969*t1861;
  t6266 = -1.*t1198*t2221*t2772;
  t6270 = t6250 + t6266;
  t6218 = -1.*t1401*t2199;
  t6224 = t1198*t1861*t2221;
  t6231 = t1198*t1969*t2772;
  t6238 = t6224 + t6231;
  t6240 = t6238*t2947;
  t6242 = t6218 + t6240;
  t6243 = t846*t6242;
  t6288 = t6270*t3454;
  t6302 = t6243 + t6288;
  t6306 = t846*t6270;
  t6330 = -1.*t6242*t3454;
  t6339 = t6306 + t6330;
  t3540 = -1.*t839*t3530;
  t3875 = t3574*t3717;
  t3929 = t3540 + t3875;
  t4009 = t3574*t3530;
  t4069 = t839*t3717;
  t4132 = t4009 + t4069;
  t6117 = -1.*t839*t6076;
  t6163 = t3574*t6155;
  t6172 = t6117 + t6163;
  t6181 = t3574*t6076;
  t6188 = t839*t6155;
  t6194 = t6181 + t6188;
  t6304 = -1.*t839*t6302;
  t6340 = t3574*t6339;
  t6356 = t6304 + t6340;
  t6373 = t3574*t6302;
  t6380 = t839*t6339;
  t6381 = t6373 + t6380;
  t6471 = -1.*t1401;
  t6472 = 1. + t6471;
  t6502 = -1.*t846;
  t6507 = 1. + t6502;
  t6533 = -1.*t3574;
  t6535 = 1. + t6533;
  t6563 = -1.*t263;
  t6569 = 1. + t6563;
  t6386 = t3978*t3929;
  t6389 = t263*t4132;
  t6390 = t6386 + t6389;
  t6447 = -1.*t1861;
  t6449 = 1. + t6447;
  t6451 = 0.135*t6449;
  t6452 = 0. + t6451;
  t6458 = -0.135*t2772;
  t6466 = 0. + t6458;
  t6475 = 0.135*t6472;
  t6477 = 0.049*t2947;
  t6479 = 0. + t6475 + t6477;
  t6486 = -0.049*t6472;
  t6490 = 0.135*t2947;
  t6491 = 0. + t6486 + t6490;
  t6508 = -0.049*t6507;
  t6510 = -0.09*t3454;
  t6513 = 0. + t6508 + t6510;
  t6520 = -0.09*t6507;
  t6524 = 0.049*t3454;
  t6528 = 0. + t6520 + t6524;
  t6538 = -0.049*t6535;
  t6541 = -0.21*t839;
  t6542 = 0. + t6538 + t6541;
  t6552 = -0.21*t6535;
  t6554 = 0.049*t839;
  t6557 = 0. + t6552 + t6554;
  t6571 = -0.2707*t6569;
  t6572 = 0.0016*t3978;
  t6575 = 0. + t6571 + t6572;
  t6580 = -0.0016*t6569;
  t6585 = -0.2707*t3978;
  t6586 = 0. + t6580 + t6585;
  t6395 = t3978*t6172;
  t6396 = t263*t6194;
  t6399 = t6395 + t6396;
  t6400 = t3978*t6356;
  t6401 = t263*t6381;
  t6407 = t6400 + t6401;
  p_output1[0]=-1.*t263*t3929 + t3978*t4132;
  p_output1[1]=-1.*t263*t6172 + t3978*t6194;
  p_output1[2]=-1.*t263*t6356 + t3978*t6381;
  p_output1[3]=0.;
  p_output1[4]=t6390;
  p_output1[5]=t6399;
  p_output1[6]=t6407;
  p_output1[7]=0.;
  p_output1[8]=-1.*t1401*t2946 + t1198*t2947*t870;
  p_output1[9]=t1198*t2127*t2947 - 1.*t1401*t5142;
  p_output1[10]=-1.*t2199*t2947 - 1.*t1401*t6238;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.2707*(t263*t3929 - 1.*t3978*t4132) - 0.0016*t6390 + t2319*t6452 + t2619*t6466 + t2946*t6479 + t3205*t6513 + t3438*t6528 + t3530*t6542 + t3717*t6557 + t3929*t6575 + t4132*t6586 + t1198*t6491*t870 + 0.1305*(t1401*t2946 - 1.*t1198*t2947*t870) + var1[0];
  p_output1[13]=0. + 0.1305*(-1.*t1198*t2127*t2947 + t1401*t5142) - 0.2707*(t263*t6172 - 1.*t3978*t6194) - 0.0016*t6399 + t4503*t6452 + t4891*t6466 + t5142*t6479 + t1198*t2127*t6491 + t5704*t6513 + t6033*t6528 + t6076*t6542 + t6155*t6557 + t6172*t6575 + t6194*t6586 + var1[1];
  p_output1[14]=0. + 0.1305*(t2199*t2947 + t1401*t6238) - 0.2707*(t263*t6356 - 1.*t3978*t6381) - 0.0016*t6407 + t1198*t2221*t6452 + t1198*t1969*t6466 + t6238*t6479 - 1.*t2199*t6491 + t6242*t6513 + t6270*t6528 + t6302*t6542 + t6339*t6557 + t6356*t6575 + t6381*t6586 + var1[2];
  p_output1[15]=1.;
}



void H_knee_to_shin_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
