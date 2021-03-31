/*
 * Automatically Generated from Mathematica.
 * Wed 12 Feb 2020 15:28:08 GMT-08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_hip_abduction_right_src.h"

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
  double t4428;
  double t815;
  double t6213;
  double t5105;
  double t8749;
  double t8766;
  double t6924;
  double t8796;
  double t8762;
  double t8780;
  double t8790;
  double t8800;
  double t8805;
  double t8806;
  double t8829;
  double t8835;
  double t8839;
  double t8844;
  double t8847;
  double t8852;
  t4428 = Cos(var1[4]);
  t815 = Cos(var1[3]);
  t6213 = Sin(var1[4]);
  t5105 = Sin(var1[3]);
  t8749 = Cos(var1[5]);
  t8766 = Sin(var1[5]);
  t6924 = Sin(var1[13]);
  t8796 = Cos(var1[13]);
  t8762 = t815*t8749*t6213;
  t8780 = t5105*t8766;
  t8790 = t8762 + t8780;
  t8800 = -1.*t8749*t5105;
  t8805 = t815*t6213*t8766;
  t8806 = t8800 + t8805;
  t8829 = t8749*t5105*t6213;
  t8835 = -1.*t815*t8766;
  t8839 = t8829 + t8835;
  t8844 = t815*t8749;
  t8847 = t5105*t6213*t8766;
  t8852 = t8844 + t8847;
  p_output1[0]=t4428*t815;
  p_output1[1]=t4428*t5105;
  p_output1[2]=-1.*t6213;
  p_output1[3]=t6924*t8790 + t8796*t8806;
  p_output1[4]=t6924*t8839 + t8796*t8852;
  p_output1[5]=t4428*t6924*t8749 + t4428*t8766*t8796;
  p_output1[6]=t8790*t8796 - 1.*t6924*t8806;
  p_output1[7]=t8796*t8839 - 1.*t6924*t8852;
  p_output1[8]=-1.*t4428*t6924*t8766 + t4428*t8749*t8796;
}



void R_hip_abduction_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
