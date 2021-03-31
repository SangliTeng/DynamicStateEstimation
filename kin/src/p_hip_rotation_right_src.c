/*
 * Automatically Generated from Mathematica.
 * Wed 12 Feb 2020 15:28:09 GMT-08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_hip_rotation_right_src.h"

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
  double t439;
  double t4634;
  double t5260;
  double t4755;
  double t5408;
  double t510;
  double t1413;
  double t1418;
  double t2145;
  double t4335;
  double t5255;
  double t6160;
  double t6540;
  double t8881;
  double t8985;
  double t8998;
  double t9006;
  double t450;
  double t9021;
  double t9024;
  double t9027;
  double t1937;
  double t3414;
  double t3675;
  double t4574;
  double t4617;
  double t8916;
  double t8930;
  double t8935;
  double t8976;
  double t9009;
  double t9015;
  double t9018;
  double t9068;
  double t9071;
  double t9075;
  double t9079;
  double t9084;
  double t9086;
  double t9093;
  double t9094;
  double t9095;
  double t9137;
  double t9141;
  double t9142;
  t439 = Cos(var1[3]);
  t4634 = Cos(var1[5]);
  t5260 = Sin(var1[3]);
  t4755 = Sin(var1[4]);
  t5408 = Sin(var1[5]);
  t510 = Cos(var1[14]);
  t1413 = -1.*t510;
  t1418 = 1. + t1413;
  t2145 = Sin(var1[14]);
  t4335 = Sin(var1[13]);
  t5255 = t439*t4634*t4755;
  t6160 = t5260*t5408;
  t6540 = t5255 + t6160;
  t8881 = Cos(var1[13]);
  t8985 = -1.*t4634*t5260;
  t8998 = t439*t4755*t5408;
  t9006 = t8985 + t8998;
  t450 = Cos(var1[4]);
  t9021 = t4335*t6540;
  t9024 = t8881*t9006;
  t9027 = t9021 + t9024;
  t1937 = -0.049*t1418;
  t3414 = -0.135*t2145;
  t3675 = 0. + t1937 + t3414;
  t4574 = 0.135*t4335;
  t4617 = 0. + t4574;
  t8916 = -1.*t8881;
  t8930 = 1. + t8916;
  t8935 = -0.135*t8930;
  t8976 = 0. + t8935;
  t9009 = -0.135*t1418;
  t9015 = 0.049*t2145;
  t9018 = 0. + t9009 + t9015;
  t9068 = t4634*t5260*t4755;
  t9071 = -1.*t439*t5408;
  t9075 = t9068 + t9071;
  t9079 = t439*t4634;
  t9084 = t5260*t4755*t5408;
  t9086 = t9079 + t9084;
  t9093 = t4335*t9075;
  t9094 = t8881*t9086;
  t9095 = t9093 + t9094;
  t9137 = t450*t4634*t4335;
  t9141 = t8881*t450*t5408;
  t9142 = t9137 + t9141;
  p_output1[0]=0. + t3675*t439*t450 + t4617*t6540 + t8976*t9006 - 0.09*(t6540*t8881 - 1.*t4335*t9006) + t9018*t9027 - 0.049*(t439*t450*t510 + t2145*t9027) - 0.135*(-1.*t2145*t439*t450 + t510*t9027) + var1[0];
  p_output1[1]=0. + t3675*t450*t5260 + t4617*t9075 + t8976*t9086 - 0.09*(t8881*t9075 - 1.*t4335*t9086) + t9018*t9095 - 0.049*(t450*t510*t5260 + t2145*t9095) - 0.135*(-1.*t2145*t450*t5260 + t510*t9095) + var1[1];
  p_output1[2]=0. + t450*t4617*t4634 - 1.*t3675*t4755 - 0.09*(-1.*t4335*t450*t5408 + t450*t4634*t8881) + t450*t5408*t8976 + t9018*t9142 - 0.049*(-1.*t4755*t510 + t2145*t9142) - 0.135*(t2145*t4755 + t510*t9142) + var1[2];
}



void p_hip_rotation_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
