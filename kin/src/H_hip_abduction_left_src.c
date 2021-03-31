/*
 * Automatically Generated from Mathematica.
 * Wed 12 Feb 2020 15:27:26 GMT-08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_hip_abduction_left_src.h"

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
  double t817;
  double t852;
  double t796;
  double t860;
  double t880;
  double t883;
  double t876;
  double t926;
  double t918;
  double t922;
  double t923;
  double t882;
  double t898;
  double t903;
  double t977;
  double t982;
  double t986;
  double t963;
  double t966;
  double t972;
  double t912;
  double t939;
  double t946;
  double t1099;
  double t1107;
  double t1112;
  double t1115;
  double t1121;
  double t1127;
  double t973;
  double t993;
  double t1019;
  double t1023;
  double t1029;
  double t1032;
  t817 = Cos(var1[4]);
  t852 = Sin(var1[3]);
  t796 = Cos(var1[3]);
  t860 = Sin(var1[4]);
  t880 = Cos(var1[5]);
  t883 = Sin(var1[5]);
  t876 = Cos(var1[6]);
  t926 = Sin(var1[6]);
  t918 = t796*t880*t860;
  t922 = t852*t883;
  t923 = t918 + t922;
  t882 = -1.*t880*t852;
  t898 = t796*t860*t883;
  t903 = t882 + t898;
  t977 = t880*t852*t860;
  t982 = -1.*t796*t883;
  t986 = t977 + t982;
  t963 = t796*t880;
  t966 = t852*t860*t883;
  t972 = t963 + t966;
  t912 = t876*t903;
  t939 = t923*t926;
  t946 = t912 + t939;
  t1099 = -1.*t876;
  t1107 = 1. + t1099;
  t1112 = 0.135*t1107;
  t1115 = 0. + t1112;
  t1121 = -0.135*t926;
  t1127 = 0. + t1121;
  t973 = t876*t972;
  t993 = t986*t926;
  t1019 = t973 + t993;
  t1023 = t817*t876*t883;
  t1029 = t817*t880*t926;
  t1032 = t1023 + t1029;
  p_output1[0]=t796*t817;
  p_output1[1]=t817*t852;
  p_output1[2]=-1.*t860;
  p_output1[3]=0.;
  p_output1[4]=t946;
  p_output1[5]=t1019;
  p_output1[6]=t1032;
  p_output1[7]=0.;
  p_output1[8]=t876*t923 - 1.*t903*t926;
  p_output1[9]=-1.*t926*t972 + t876*t986;
  p_output1[10]=t817*t876*t880 - 1.*t817*t883*t926;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.049*t796*t817 + t1115*t903 + t1127*t923 + 0.135*t946 + var1[0];
  p_output1[13]=0. + 0.135*t1019 - 0.049*t817*t852 + t1115*t972 + t1127*t986 + var1[1];
  p_output1[14]=0. + 0.135*t1032 + 0.049*t860 + t1127*t817*t880 + t1115*t817*t883 + var1[2];
  p_output1[15]=1.;
}



void H_hip_abduction_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
