/*
 * Automatically Generated from Mathematica.
 * Wed 12 Feb 2020 15:27:33 GMT-08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_hip_rotation_left_src.h"

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
  double t2137;
  double t2214;
  double t2130;
  double t2194;
  double t2238;
  double t2056;
  double t2324;
  double t2420;
  double t2296;
  double t2320;
  double t2323;
  double t2213;
  double t2244;
  double t2249;
  double t2447;
  double t2408;
  double t2410;
  double t2411;
  double t2369;
  double t2389;
  double t2402;
  double t2485;
  double t2471;
  double t2482;
  double t2483;
  double t2494;
  double t2495;
  double t2503;
  double t2518;
  double t2521;
  double t2528;
  t2137 = Cos(var1[5]);
  t2214 = Sin(var1[3]);
  t2130 = Cos(var1[3]);
  t2194 = Sin(var1[4]);
  t2238 = Sin(var1[5]);
  t2056 = Cos(var1[6]);
  t2324 = Sin(var1[6]);
  t2420 = Cos(var1[4]);
  t2296 = -1.*t2137*t2214;
  t2320 = t2130*t2194*t2238;
  t2323 = t2296 + t2320;
  t2213 = t2130*t2137*t2194;
  t2244 = t2214*t2238;
  t2249 = t2213 + t2244;
  t2447 = Cos(var1[7]);
  t2408 = t2130*t2137;
  t2410 = t2214*t2194*t2238;
  t2411 = t2408 + t2410;
  t2369 = t2137*t2214*t2194;
  t2389 = -1.*t2130*t2238;
  t2402 = t2369 + t2389;
  t2485 = Sin(var1[7]);
  t2471 = t2056*t2323;
  t2482 = t2249*t2324;
  t2483 = t2471 + t2482;
  t2494 = t2056*t2411;
  t2495 = t2402*t2324;
  t2503 = t2494 + t2495;
  t2518 = t2420*t2056*t2238;
  t2521 = t2420*t2137*t2324;
  t2528 = t2518 + t2521;
  p_output1[0]=-1.*t2056*t2249 + t2323*t2324;
  p_output1[1]=-1.*t2056*t2402 + t2324*t2411;
  p_output1[2]=-1.*t2056*t2137*t2420 + t2238*t2324*t2420;
  p_output1[3]=t2130*t2420*t2447 + t2483*t2485;
  p_output1[4]=t2214*t2420*t2447 + t2485*t2503;
  p_output1[5]=-1.*t2194*t2447 + t2485*t2528;
  p_output1[6]=-1.*t2447*t2483 + t2130*t2420*t2485;
  p_output1[7]=t2214*t2420*t2485 - 1.*t2447*t2503;
  p_output1[8]=-1.*t2194*t2485 - 1.*t2447*t2528;
}



void R_hip_rotation_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
