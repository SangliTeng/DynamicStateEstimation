/*
 * Automatically Generated from Mathematica.
 * Wed 12 Feb 2020 15:28:14 GMT-08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_hip_rotation_right_src.h"

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
  double t2385;
  double t3212;
  double t861;
  double t2686;
  double t3541;
  double t395;
  double t3803;
  double t5187;
  double t2792;
  double t3575;
  double t3654;
  double t4166;
  double t4190;
  double t4403;
  double t5560;
  double t5616;
  double t4707;
  double t4710;
  double t4786;
  double t4875;
  double t4883;
  double t5020;
  double t5618;
  double t5666;
  double t5670;
  double t6241;
  double t6506;
  double t6661;
  double t6930;
  double t7373;
  double t8472;
  t2385 = Cos(var1[5]);
  t3212 = Sin(var1[3]);
  t861 = Cos(var1[3]);
  t2686 = Sin(var1[4]);
  t3541 = Sin(var1[5]);
  t395 = Cos(var1[13]);
  t3803 = Sin(var1[13]);
  t5187 = Cos(var1[4]);
  t2792 = t861*t2385*t2686;
  t3575 = t3212*t3541;
  t3654 = t2792 + t3575;
  t4166 = -1.*t2385*t3212;
  t4190 = t861*t2686*t3541;
  t4403 = t4166 + t4190;
  t5560 = Cos(var1[14]);
  t5616 = Sin(var1[14]);
  t4707 = t2385*t3212*t2686;
  t4710 = -1.*t861*t3541;
  t4786 = t4707 + t4710;
  t4875 = t861*t2385;
  t4883 = t3212*t2686*t3541;
  t5020 = t4875 + t4883;
  t5618 = t3803*t3654;
  t5666 = t395*t4403;
  t5670 = t5618 + t5666;
  t6241 = t3803*t4786;
  t6506 = t395*t5020;
  t6661 = t6241 + t6506;
  t6930 = t5187*t2385*t3803;
  t7373 = t395*t5187*t3541;
  t8472 = t6930 + t7373;
  p_output1[0]=-1.*t3654*t395 + t3803*t4403;
  p_output1[1]=-1.*t395*t4786 + t3803*t5020;
  p_output1[2]=t3541*t3803*t5187 - 1.*t2385*t395*t5187;
  p_output1[3]=t5616*t5670 + t5187*t5560*t861;
  p_output1[4]=t3212*t5187*t5560 + t5616*t6661;
  p_output1[5]=-1.*t2686*t5560 + t5616*t8472;
  p_output1[6]=-1.*t5560*t5670 + t5187*t5616*t861;
  p_output1[7]=t3212*t5187*t5616 - 1.*t5560*t6661;
  p_output1[8]=-1.*t2686*t5616 - 1.*t5560*t8472;
}



void R_hip_rotation_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
