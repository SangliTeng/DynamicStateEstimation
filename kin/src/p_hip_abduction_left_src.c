/*
 * Automatically Generated from Mathematica.
 * Wed 12 Feb 2020 15:27:24 GMT-08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_hip_abduction_left_src.h"

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
  double t502;
  double t574;
  double t583;
  double t580;
  double t584;
  double t528;
  double t581;
  double t590;
  double t593;
  double t595;
  double t598;
  double t606;
  double t611;
  double t505;
  double t558;
  double t563;
  double t569;
  double t573;
  double t612;
  double t615;
  double t651;
  double t657;
  double t660;
  double t671;
  double t673;
  double t676;
  t502 = Cos(var1[3]);
  t574 = Cos(var1[5]);
  t583 = Sin(var1[4]);
  t580 = Sin(var1[3]);
  t584 = Sin(var1[5]);
  t528 = Cos(var1[6]);
  t581 = -1.*t574*t580;
  t590 = t502*t583*t584;
  t593 = t581 + t590;
  t595 = t502*t574*t583;
  t598 = t580*t584;
  t606 = t595 + t598;
  t611 = Sin(var1[6]);
  t505 = Cos(var1[4]);
  t558 = -1.*t528;
  t563 = 1. + t558;
  t569 = 0.135*t563;
  t573 = 0. + t569;
  t612 = -0.135*t611;
  t615 = 0. + t612;
  t651 = t502*t574;
  t657 = t580*t583*t584;
  t660 = t651 + t657;
  t671 = t574*t580*t583;
  t673 = -1.*t502*t584;
  t676 = t671 + t673;
  p_output1[0]=0. - 0.049*t502*t505 + t573*t593 + 0.135*(t528*t593 + t606*t611) + t606*t615 + var1[0];
  p_output1[1]=0. - 0.049*t505*t580 + t573*t660 + t615*t676 + 0.135*(t528*t660 + t611*t676) + var1[1];
  p_output1[2]=0. + 0.049*t583 + t505*t573*t584 + 0.135*(t505*t528*t584 + t505*t574*t611) + t505*t574*t615 + var1[2];
}



void p_hip_abduction_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
