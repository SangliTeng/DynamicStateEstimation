/*
 * Automatically Generated from Mathematica.
 * Wed 12 Feb 2020 15:29:33 GMT-08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_VectorNav_src.h"

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
  double t1631;
  double t1935;
  double t283;
  double t2089;
  double t2124;
  double t2198;
  double t2870;
  double t2877;
  double t2908;
  double t2927;
  double t2956;
  double t3029;
  t1631 = Cos(var1[4]);
  t1935 = Sin(var1[3]);
  t283 = Cos(var1[3]);
  t2089 = Sin(var1[4]);
  t2124 = Cos(var1[5]);
  t2198 = Sin(var1[5]);
  t2870 = t283*t2124*t2089;
  t2877 = t1935*t2198;
  t2908 = t2870 + t2877;
  t2927 = t2124*t1935*t2089;
  t2956 = -1.*t283*t2198;
  t3029 = t2927 + t2956;
  p_output1[0]=t1631*t283;
  p_output1[1]=t1631*t1935;
  p_output1[2]=-1.*t2089;
  p_output1[3]=0;
  p_output1[4]=-1.*t1935*t2124 + t2089*t2198*t283;
  p_output1[5]=t1935*t2089*t2198 + t2124*t283;
  p_output1[6]=t1631*t2198;
  p_output1[7]=0;
  p_output1[8]=t2908;
  p_output1[9]=t3029;
  p_output1[10]=t1631*t2124;
  p_output1[11]=0;
  p_output1[12]=0.03155*t1631*t283 - 0.07996*t2908 + var1[0];
  p_output1[13]=0.03155*t1631*t1935 - 0.07996*t3029 + var1[1];
  p_output1[14]=-0.03155*t2089 - 0.07996*t1631*t2124 + var1[2];
  p_output1[15]=1.;
}



void H_VectorNav_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
