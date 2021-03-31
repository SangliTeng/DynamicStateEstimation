/*
 * Automatically Generated from Mathematica.
 * Wed 12 Feb 2020 15:27:31 GMT-08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_hip_rotation_left_src.h"

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
  double t1729;
  double t1779;
  double t277;
  double t1752;
  double t1801;
  double t145;
  double t1882;
  double t1991;
  double t1857;
  double t1868;
  double t1877;
  double t1771;
  double t1809;
  double t1814;
  double t2018;
  double t1943;
  double t1944;
  double t1948;
  double t1911;
  double t1918;
  double t1923;
  double t2046;
  double t2039;
  double t2040;
  double t2041;
  double t2067;
  double t2078;
  double t2089;
  double t2119;
  double t2124;
  double t2128;
  double t2262;
  double t2266;
  double t2022;
  double t2049;
  double t2055;
  double t2204;
  double t2205;
  double t2212;
  double t2213;
  double t2216;
  double t2233;
  double t2268;
  double t2269;
  double t2270;
  double t2292;
  double t2296;
  double t2315;
  double t2056;
  double t2092;
  double t2103;
  double t2112;
  double t2130;
  double t2132;
  t1729 = Cos(var1[5]);
  t1779 = Sin(var1[3]);
  t277 = Cos(var1[3]);
  t1752 = Sin(var1[4]);
  t1801 = Sin(var1[5]);
  t145 = Cos(var1[6]);
  t1882 = Sin(var1[6]);
  t1991 = Cos(var1[4]);
  t1857 = -1.*t1729*t1779;
  t1868 = t277*t1752*t1801;
  t1877 = t1857 + t1868;
  t1771 = t277*t1729*t1752;
  t1809 = t1779*t1801;
  t1814 = t1771 + t1809;
  t2018 = Cos(var1[7]);
  t1943 = t277*t1729;
  t1944 = t1779*t1752*t1801;
  t1948 = t1943 + t1944;
  t1911 = t1729*t1779*t1752;
  t1918 = -1.*t277*t1801;
  t1923 = t1911 + t1918;
  t2046 = Sin(var1[7]);
  t2039 = t145*t1877;
  t2040 = t1814*t1882;
  t2041 = t2039 + t2040;
  t2067 = t145*t1948;
  t2078 = t1923*t1882;
  t2089 = t2067 + t2078;
  t2119 = t1991*t145*t1801;
  t2124 = t1991*t1729*t1882;
  t2128 = t2119 + t2124;
  t2262 = -1.*t2018;
  t2266 = 1. + t2262;
  t2022 = t277*t1991*t2018;
  t2049 = t2041*t2046;
  t2055 = t2022 + t2049;
  t2204 = -1.*t145;
  t2205 = 1. + t2204;
  t2212 = 0.135*t2205;
  t2213 = 0. + t2212;
  t2216 = -0.135*t1882;
  t2233 = 0. + t2216;
  t2268 = 0.135*t2266;
  t2269 = 0.049*t2046;
  t2270 = 0. + t2268 + t2269;
  t2292 = -0.049*t2266;
  t2296 = 0.135*t2046;
  t2315 = 0. + t2292 + t2296;
  t2056 = t1991*t2018*t1779;
  t2092 = t2089*t2046;
  t2103 = t2056 + t2092;
  t2112 = -1.*t2018*t1752;
  t2130 = t2128*t2046;
  t2132 = t2112 + t2130;
  p_output1[0]=-1.*t145*t1814 + t1877*t1882;
  p_output1[1]=-1.*t145*t1923 + t1882*t1948;
  p_output1[2]=-1.*t145*t1729*t1991 + t1801*t1882*t1991;
  p_output1[3]=0.;
  p_output1[4]=t2055;
  p_output1[5]=t2103;
  p_output1[6]=t2132;
  p_output1[7]=0.;
  p_output1[8]=-1.*t2018*t2041 + t1991*t2046*t277;
  p_output1[9]=t1779*t1991*t2046 - 1.*t2018*t2089;
  p_output1[10]=-1.*t1752*t2046 - 1.*t2018*t2128;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.09*(t145*t1814 - 1.*t1877*t1882) - 0.049*t2055 + t1877*t2213 + t1814*t2233 + t2041*t2270 + t1991*t2315*t277 + 0.135*(t2018*t2041 - 1.*t1991*t2046*t277) + var1[0];
  p_output1[13]=0. - 0.09*(t145*t1923 - 1.*t1882*t1948) + 0.135*(-1.*t1779*t1991*t2046 + t2018*t2089) - 0.049*t2103 + t1948*t2213 + t1923*t2233 + t2089*t2270 + t1779*t1991*t2315 + var1[1];
  p_output1[14]=0. - 0.09*(t145*t1729*t1991 - 1.*t1801*t1882*t1991) + 0.135*(t1752*t2046 + t2018*t2128) - 0.049*t2132 + t1801*t1991*t2213 + t1729*t1991*t2233 + t2128*t2270 - 1.*t1752*t2315 + var1[2];
  p_output1[15]=1.;
}



void H_hip_rotation_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
