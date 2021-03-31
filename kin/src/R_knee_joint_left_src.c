/*
 * Automatically Generated from Mathematica.
 * Wed 12 Feb 2020 15:27:46 GMT-08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_knee_joint_left_src.h"

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
  double t1223;
  double t3110;
  double t5080;
  double t3401;
  double t5103;
  double t3076;
  double t5385;
  double t5404;
  double t5410;
  double t4996;
  double t5249;
  double t5265;
  double t5416;
  double t193;
  double t5465;
  double t5466;
  double t5481;
  double t2013;
  double t2453;
  double t3070;
  double t5275;
  double t5433;
  double t5436;
  double t5448;
  double t5455;
  double t5458;
  double t5482;
  double t114;
  double t5550;
  double t5555;
  double t5558;
  double t5540;
  double t5541;
  double t5542;
  double t5488;
  double t5584;
  double t5586;
  double t5588;
  double t5537;
  double t5549;
  double t5569;
  double t5573;
  double t5579;
  double t5580;
  double t5638;
  double t5650;
  double t5652;
  double t5612;
  double t5623;
  double t5626;
  double t5629;
  double t5631;
  double t5634;
  double t5459;
  double t5484;
  double t5485;
  double t5490;
  double t5493;
  double t5513;
  double t5583;
  double t5590;
  double t5591;
  double t5595;
  double t5596;
  double t5603;
  double t5635;
  double t5661;
  double t5664;
  double t5667;
  double t5671;
  double t5673;
  t1223 = Cos(var1[3]);
  t3110 = Cos(var1[5]);
  t5080 = Sin(var1[4]);
  t3401 = Sin(var1[3]);
  t5103 = Sin(var1[5]);
  t3076 = Cos(var1[6]);
  t5385 = t1223*t3110*t5080;
  t5404 = t3401*t5103;
  t5410 = t5385 + t5404;
  t4996 = -1.*t3110*t3401;
  t5249 = t1223*t5080*t5103;
  t5265 = t4996 + t5249;
  t5416 = Sin(var1[6]);
  t193 = Cos(var1[8]);
  t5465 = t3076*t5410;
  t5466 = -1.*t5265*t5416;
  t5481 = t5465 + t5466;
  t2013 = Cos(var1[4]);
  t2453 = Cos(var1[7]);
  t3070 = t1223*t2013*t2453;
  t5275 = t3076*t5265;
  t5433 = t5410*t5416;
  t5436 = t5275 + t5433;
  t5448 = Sin(var1[7]);
  t5455 = t5436*t5448;
  t5458 = t3070 + t5455;
  t5482 = Sin(var1[8]);
  t114 = Sin(var1[9]);
  t5550 = t3110*t3401*t5080;
  t5555 = -1.*t1223*t5103;
  t5558 = t5550 + t5555;
  t5540 = t1223*t3110;
  t5541 = t3401*t5080*t5103;
  t5542 = t5540 + t5541;
  t5488 = Cos(var1[9]);
  t5584 = t3076*t5558;
  t5586 = -1.*t5542*t5416;
  t5588 = t5584 + t5586;
  t5537 = t2013*t2453*t3401;
  t5549 = t3076*t5542;
  t5569 = t5558*t5416;
  t5573 = t5549 + t5569;
  t5579 = t5573*t5448;
  t5580 = t5537 + t5579;
  t5638 = t2013*t3110*t3076;
  t5650 = -1.*t2013*t5103*t5416;
  t5652 = t5638 + t5650;
  t5612 = -1.*t2453*t5080;
  t5623 = t2013*t3076*t5103;
  t5626 = t2013*t3110*t5416;
  t5629 = t5623 + t5626;
  t5631 = t5629*t5448;
  t5634 = t5612 + t5631;
  t5459 = t193*t5458;
  t5484 = t5481*t5482;
  t5485 = t5459 + t5484;
  t5490 = t193*t5481;
  t5493 = -1.*t5458*t5482;
  t5513 = t5490 + t5493;
  t5583 = t193*t5580;
  t5590 = t5588*t5482;
  t5591 = t5583 + t5590;
  t5595 = t193*t5588;
  t5596 = -1.*t5580*t5482;
  t5603 = t5595 + t5596;
  t5635 = t193*t5634;
  t5661 = t5652*t5482;
  t5664 = t5635 + t5661;
  t5667 = t193*t5652;
  t5671 = -1.*t5634*t5482;
  t5673 = t5667 + t5671;
  p_output1[0]=t114*t5485 - 1.*t5488*t5513;
  p_output1[1]=t114*t5591 - 1.*t5488*t5603;
  p_output1[2]=t114*t5664 - 1.*t5488*t5673;
  p_output1[3]=t5485*t5488 + t114*t5513;
  p_output1[4]=t5488*t5591 + t114*t5603;
  p_output1[5]=t5488*t5664 + t114*t5673;
  p_output1[6]=-1.*t2453*t5436 + t1223*t2013*t5448;
  p_output1[7]=t2013*t3401*t5448 - 1.*t2453*t5573;
  p_output1[8]=-1.*t5080*t5448 - 1.*t2453*t5629;
}



void R_knee_joint_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
