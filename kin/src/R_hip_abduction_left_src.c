/*
 * Automatically Generated from Mathematica.
 * Wed 12 Feb 2020 15:27:27 GMT-08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_hip_abduction_left_src.h"

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
  double t973;
  double t1084;
  double t912;
  double t1127;
  double t1162;
  double t1176;
  double t1160;
  double t1196;
  double t1191;
  double t1193;
  double t1194;
  double t1174;
  double t1182;
  double t1187;
  double t1212;
  double t1213;
  double t1218;
  double t1203;
  double t1206;
  double t1207;
  t973 = Cos(var1[4]);
  t1084 = Sin(var1[3]);
  t912 = Cos(var1[3]);
  t1127 = Sin(var1[4]);
  t1162 = Cos(var1[5]);
  t1176 = Sin(var1[5]);
  t1160 = Cos(var1[6]);
  t1196 = Sin(var1[6]);
  t1191 = t912*t1162*t1127;
  t1193 = t1084*t1176;
  t1194 = t1191 + t1193;
  t1174 = -1.*t1162*t1084;
  t1182 = t912*t1127*t1176;
  t1187 = t1174 + t1182;
  t1212 = t1162*t1084*t1127;
  t1213 = -1.*t912*t1176;
  t1218 = t1212 + t1213;
  t1203 = t912*t1162;
  t1206 = t1084*t1127*t1176;
  t1207 = t1203 + t1206;
  p_output1[0]=t912*t973;
  p_output1[1]=t1084*t973;
  p_output1[2]=-1.*t1127;
  p_output1[3]=t1160*t1187 + t1194*t1196;
  p_output1[4]=t1160*t1207 + t1196*t1218;
  p_output1[5]=t1160*t1176*t973 + t1162*t1196*t973;
  p_output1[6]=t1160*t1194 - 1.*t1187*t1196;
  p_output1[7]=-1.*t1196*t1207 + t1160*t1218;
  p_output1[8]=t1160*t1162*t973 - 1.*t1176*t1196*t973;
}



void R_hip_abduction_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
