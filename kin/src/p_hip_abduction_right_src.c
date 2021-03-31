/*
 * Automatically Generated from Mathematica.
 * Wed 12 Feb 2020 15:28:05 GMT-08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_hip_abduction_right_src.h"

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
  double t197;
  double t972;
  double t1624;
  double t986;
  double t1628;
  double t494;
  double t1476;
  double t2063;
  double t2832;
  double t3009;
  double t3411;
  double t4191;
  double t4215;
  double t469;
  double t518;
  double t527;
  double t3322;
  double t3404;
  double t3406;
  double t3410;
  double t6872;
  double t7032;
  double t8153;
  double t8265;
  double t8271;
  double t8589;
  t197 = Cos(var1[3]);
  t972 = Cos(var1[5]);
  t1624 = Sin(var1[3]);
  t986 = Sin(var1[4]);
  t1628 = Sin(var1[5]);
  t494 = Sin(var1[13]);
  t1476 = t197*t972*t986;
  t2063 = t1624*t1628;
  t2832 = t1476 + t2063;
  t3009 = Cos(var1[13]);
  t3411 = -1.*t972*t1624;
  t4191 = t197*t986*t1628;
  t4215 = t3411 + t4191;
  t469 = Cos(var1[4]);
  t518 = 0.135*t494;
  t527 = 0. + t518;
  t3322 = -1.*t3009;
  t3404 = 1. + t3322;
  t3406 = -0.135*t3404;
  t3410 = 0. + t3406;
  t6872 = t972*t1624*t986;
  t7032 = -1.*t197*t1628;
  t8153 = t6872 + t7032;
  t8265 = t197*t972;
  t8271 = t1624*t986*t1628;
  t8589 = t8265 + t8271;
  p_output1[0]=0. + t3410*t4215 - 0.049*t197*t469 - 0.135*(t3009*t4215 + t2832*t494) + t2832*t527 + var1[0];
  p_output1[1]=0. - 0.049*t1624*t469 + t527*t8153 + t3410*t8589 - 0.135*(t494*t8153 + t3009*t8589) + var1[1];
  p_output1[2]=0. + t1628*t3410*t469 + t469*t527*t972 - 0.135*(t1628*t3009*t469 + t469*t494*t972) + 0.049*t986 + var1[2];
}



void p_hip_abduction_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
