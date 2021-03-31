/*
 * Automatically Generated from Mathematica.
 * Wed 12 Feb 2020 15:28:20 GMT-08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_hip_flexion_right_src.h"

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
  double t1672;
  double t2397;
  double t614;
  double t1682;
  double t2519;
  double t2999;
  double t2209;
  double t2537;
  double t2730;
  double t596;
  double t3345;
  double t3364;
  double t3482;
  double t442;
  double t3691;
  double t3777;
  double t3783;
  double t3808;
  double t4415;
  double t4500;
  double t4509;
  double t4573;
  double t4590;
  double t4643;
  double t2737;
  double t3602;
  double t3604;
  double t3791;
  double t3813;
  double t3868;
  double t3897;
  double t4016;
  double t4071;
  double t4570;
  double t4812;
  double t4828;
  double t4865;
  double t4889;
  double t4894;
  double t4916;
  double t4989;
  double t5049;
  double t5055;
  double t5089;
  double t5114;
  double t5159;
  double t5162;
  double t5164;
  double t5172;
  double t5230;
  double t5261;
  t1672 = Cos(var1[5]);
  t2397 = Sin(var1[3]);
  t614 = Cos(var1[3]);
  t1682 = Sin(var1[4]);
  t2519 = Sin(var1[5]);
  t2999 = Sin(var1[13]);
  t2209 = t614*t1672*t1682;
  t2537 = t2397*t2519;
  t2730 = t2209 + t2537;
  t596 = Cos(var1[13]);
  t3345 = -1.*t1672*t2397;
  t3364 = t614*t1682*t2519;
  t3482 = t3345 + t3364;
  t442 = Cos(var1[15]);
  t3691 = Sin(var1[15]);
  t3777 = Cos(var1[14]);
  t3783 = Cos(var1[4]);
  t3808 = Sin(var1[14]);
  t4415 = t1672*t2397*t1682;
  t4500 = -1.*t614*t2519;
  t4509 = t4415 + t4500;
  t4573 = t614*t1672;
  t4590 = t2397*t1682*t2519;
  t4643 = t4573 + t4590;
  t2737 = t596*t2730;
  t3602 = -1.*t2999*t3482;
  t3604 = t2737 + t3602;
  t3791 = t3777*t614*t3783;
  t3813 = t2999*t2730;
  t3868 = t596*t3482;
  t3897 = t3813 + t3868;
  t4016 = t3808*t3897;
  t4071 = t3791 + t4016;
  t4570 = t596*t4509;
  t4812 = -1.*t2999*t4643;
  t4828 = t4570 + t4812;
  t4865 = t3777*t3783*t2397;
  t4889 = t2999*t4509;
  t4894 = t596*t4643;
  t4916 = t4889 + t4894;
  t4989 = t3808*t4916;
  t5049 = t4865 + t4989;
  t5055 = t596*t3783*t1672;
  t5089 = -1.*t3783*t2999*t2519;
  t5114 = t5055 + t5089;
  t5159 = -1.*t3777*t1682;
  t5162 = t3783*t1672*t2999;
  t5164 = t596*t3783*t2519;
  t5172 = t5162 + t5164;
  t5230 = t3808*t5172;
  t5261 = t5159 + t5230;
  p_output1[0]=t3691*t4071 - 1.*t3604*t442;
  p_output1[1]=-1.*t442*t4828 + t3691*t5049;
  p_output1[2]=-1.*t442*t5114 + t3691*t5261;
  p_output1[3]=t3604*t3691 + t4071*t442;
  p_output1[4]=t3691*t4828 + t442*t5049;
  p_output1[5]=t3691*t5114 + t442*t5261;
  p_output1[6]=-1.*t3777*t3897 + t3783*t3808*t614;
  p_output1[7]=t2397*t3783*t3808 - 1.*t3777*t4916;
  p_output1[8]=-1.*t1682*t3808 - 1.*t3777*t5172;
}



void R_hip_flexion_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
