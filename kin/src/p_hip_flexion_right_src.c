/*
 * Automatically Generated from Mathematica.
 * Wed 12 Feb 2020 15:28:15 GMT-08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_hip_flexion_right_src.h"

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
  double t1804;
  double t5566;
  double t5811;
  double t5698;
  double t6085;
  double t2109;
  double t2876;
  double t3209;
  double t4204;
  double t4987;
  double t5721;
  double t6282;
  double t6363;
  double t6418;
  double t9148;
  double t9168;
  double t9178;
  double t1808;
  double t9193;
  double t9199;
  double t9203;
  double t9208;
  double t9211;
  double t9215;
  double t9219;
  double t9232;
  double t9236;
  double t9239;
  double t9275;
  double t9276;
  double t9279;
  double t4189;
  double t4590;
  double t4655;
  double t5081;
  double t5460;
  double t7339;
  double t8190;
  double t9119;
  double t9136;
  double t9185;
  double t9188;
  double t9190;
  double t9342;
  double t9344;
  double t9348;
  double t9351;
  double t9352;
  double t9357;
  double t9216;
  double t9229;
  double t9231;
  double t9378;
  double t9379;
  double t9382;
  double t9260;
  double t9262;
  double t9266;
  double t9386;
  double t9390;
  double t9391;
  double t9439;
  double t9447;
  double t9449;
  double t9513;
  double t9515;
  double t9517;
  double t9521;
  double t9525;
  double t9530;
  double t9554;
  double t9557;
  double t9558;
  t1804 = Cos(var1[3]);
  t5566 = Cos(var1[5]);
  t5811 = Sin(var1[3]);
  t5698 = Sin(var1[4]);
  t6085 = Sin(var1[5]);
  t2109 = Cos(var1[14]);
  t2876 = -1.*t2109;
  t3209 = 1. + t2876;
  t4204 = Sin(var1[14]);
  t4987 = Sin(var1[13]);
  t5721 = t1804*t5566*t5698;
  t6282 = t5811*t6085;
  t6363 = t5721 + t6282;
  t6418 = Cos(var1[13]);
  t9148 = -1.*t5566*t5811;
  t9168 = t1804*t5698*t6085;
  t9178 = t9148 + t9168;
  t1808 = Cos(var1[4]);
  t9193 = t4987*t6363;
  t9199 = t6418*t9178;
  t9203 = t9193 + t9199;
  t9208 = Cos(var1[15]);
  t9211 = -1.*t9208;
  t9215 = 1. + t9211;
  t9219 = Sin(var1[15]);
  t9232 = t6418*t6363;
  t9236 = -1.*t4987*t9178;
  t9239 = t9232 + t9236;
  t9275 = t2109*t1804*t1808;
  t9276 = t4204*t9203;
  t9279 = t9275 + t9276;
  t4189 = -0.049*t3209;
  t4590 = -0.135*t4204;
  t4655 = 0. + t4189 + t4590;
  t5081 = 0.135*t4987;
  t5460 = 0. + t5081;
  t7339 = -1.*t6418;
  t8190 = 1. + t7339;
  t9119 = -0.135*t8190;
  t9136 = 0. + t9119;
  t9185 = -0.135*t3209;
  t9188 = 0.049*t4204;
  t9190 = 0. + t9185 + t9188;
  t9342 = t5566*t5811*t5698;
  t9344 = -1.*t1804*t6085;
  t9348 = t9342 + t9344;
  t9351 = t1804*t5566;
  t9352 = t5811*t5698*t6085;
  t9357 = t9351 + t9352;
  t9216 = -0.09*t9215;
  t9229 = 0.049*t9219;
  t9231 = 0. + t9216 + t9229;
  t9378 = t4987*t9348;
  t9379 = t6418*t9357;
  t9382 = t9378 + t9379;
  t9260 = -0.049*t9215;
  t9262 = -0.09*t9219;
  t9266 = 0. + t9260 + t9262;
  t9386 = t6418*t9348;
  t9390 = -1.*t4987*t9357;
  t9391 = t9386 + t9390;
  t9439 = t2109*t1808*t5811;
  t9447 = t4204*t9382;
  t9449 = t9439 + t9447;
  t9513 = t1808*t5566*t4987;
  t9515 = t6418*t1808*t6085;
  t9517 = t9513 + t9515;
  t9521 = t6418*t1808*t5566;
  t9525 = -1.*t1808*t4987*t6085;
  t9530 = t9521 + t9525;
  t9554 = -1.*t2109*t5698;
  t9557 = t4204*t9517;
  t9558 = t9554 + t9557;
  p_output1[0]=0. + t1804*t1808*t4655 + t5460*t6363 + t9136*t9178 + t9190*t9203 - 0.135*(-1.*t1804*t1808*t4204 + t2109*t9203) + t9231*t9239 + t9266*t9279 - 0.049*(t9219*t9239 + t9208*t9279) - 0.09*(t9208*t9239 - 1.*t9219*t9279) + var1[0];
  p_output1[1]=0. + t1808*t4655*t5811 + t5460*t9348 + t9136*t9357 + t9190*t9382 - 0.135*(-1.*t1808*t4204*t5811 + t2109*t9382) + t9231*t9391 + t9266*t9449 - 0.049*(t9219*t9391 + t9208*t9449) - 0.09*(t9208*t9391 - 1.*t9219*t9449) + var1[1];
  p_output1[2]=0. + t1808*t5460*t5566 - 1.*t4655*t5698 + t1808*t6085*t9136 + t9190*t9517 - 0.135*(t4204*t5698 + t2109*t9517) + t9231*t9530 + t9266*t9558 - 0.049*(t9219*t9530 + t9208*t9558) - 0.09*(t9208*t9530 - 1.*t9219*t9558) + var1[2];
}



void p_hip_flexion_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
