/*
 * Automatically Generated from Mathematica.
 * Wed 12 Feb 2020 15:28:07 GMT-08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_hip_abduction_right_src.h"

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
  double t608;
  double t599;
  double t2157;
  double t1511;
  double t2833;
  double t4116;
  double t2832;
  double t7158;
  double t3722;
  double t4534;
  double t4536;
  double t8271;
  double t8702;
  double t8707;
  double t8717;
  double t8720;
  double t8721;
  double t8732;
  double t8737;
  double t8742;
  double t6403;
  double t8713;
  double t8714;
  double t8784;
  double t8786;
  double t8791;
  double t8793;
  double t8794;
  double t8796;
  double t8722;
  double t8744;
  double t8748;
  double t8749;
  double t8750;
  double t8752;
  t608 = Cos(var1[4]);
  t599 = Cos(var1[3]);
  t2157 = Sin(var1[4]);
  t1511 = Sin(var1[3]);
  t2833 = Cos(var1[5]);
  t4116 = Sin(var1[5]);
  t2832 = Sin(var1[13]);
  t7158 = Cos(var1[13]);
  t3722 = t599*t2833*t2157;
  t4534 = t1511*t4116;
  t4536 = t3722 + t4534;
  t8271 = -1.*t2833*t1511;
  t8702 = t599*t2157*t4116;
  t8707 = t8271 + t8702;
  t8717 = t2833*t1511*t2157;
  t8720 = -1.*t599*t4116;
  t8721 = t8717 + t8720;
  t8732 = t599*t2833;
  t8737 = t1511*t2157*t4116;
  t8742 = t8732 + t8737;
  t6403 = t2832*t4536;
  t8713 = t7158*t8707;
  t8714 = t6403 + t8713;
  t8784 = 0.135*t2832;
  t8786 = 0. + t8784;
  t8791 = -1.*t7158;
  t8793 = 1. + t8791;
  t8794 = -0.135*t8793;
  t8796 = 0. + t8794;
  t8722 = t2832*t8721;
  t8744 = t7158*t8742;
  t8748 = t8722 + t8744;
  t8749 = t608*t2833*t2832;
  t8750 = t7158*t608*t4116;
  t8752 = t8749 + t8750;
  p_output1[0]=t599*t608;
  p_output1[1]=t1511*t608;
  p_output1[2]=-1.*t2157;
  p_output1[3]=0.;
  p_output1[4]=t8714;
  p_output1[5]=t8748;
  p_output1[6]=t8752;
  p_output1[7]=0.;
  p_output1[8]=t4536*t7158 - 1.*t2832*t8707;
  p_output1[9]=t7158*t8721 - 1.*t2832*t8742;
  p_output1[10]=-1.*t2832*t4116*t608 + t2833*t608*t7158;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.049*t599*t608 - 0.135*t8714 + t4536*t8786 + t8707*t8796 + var1[0];
  p_output1[13]=0. - 0.049*t1511*t608 - 0.135*t8748 + t8721*t8786 + t8742*t8796 + var1[1];
  p_output1[14]=0. + 0.049*t2157 - 0.135*t8752 + t2833*t608*t8786 + t4116*t608*t8796 + var1[2];
  p_output1[15]=1.;
}



void H_hip_abduction_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
