/*
 * Automatically Generated from Mathematica.
 * Wed 12 Feb 2020 15:27:25 GMT-08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_hip_abduction_left_src.h"

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
  double t618;
  double t703;
  double t715;
  double t702;
  double t718;
  double t660;
  double t711;
  double t719;
  double t724;
  double t729;
  double t737;
  double t753;
  double t756;
  double t593;
  double t671;
  double t676;
  double t690;
  double t698;
  double t757;
  double t765;
  double t794;
  double t796;
  double t805;
  double t815;
  double t817;
  double t819;
  double t946;
  double t957;
  double t963;
  double t986;
  double t992;
  double t993;
  double t968;
  double t1017;
  double t1096;
  double t1099;
  double t1103;
  double t1044;
  double t1045;
  double t1046;
  double t1052;
  t618 = Sin(var1[3]);
  t703 = Cos(var1[5]);
  t715 = Sin(var1[4]);
  t702 = Cos(var1[3]);
  t718 = Sin(var1[5]);
  t660 = Cos(var1[6]);
  t711 = -1.*t702*t703;
  t719 = -1.*t618*t715*t718;
  t724 = t711 + t719;
  t729 = -1.*t703*t618*t715;
  t737 = t702*t718;
  t753 = t729 + t737;
  t756 = Sin(var1[6]);
  t593 = Cos(var1[4]);
  t671 = -1.*t660;
  t676 = 1. + t671;
  t690 = 0.135*t676;
  t698 = 0. + t690;
  t757 = -0.135*t756;
  t765 = 0. + t757;
  t794 = -1.*t703*t618;
  t796 = t702*t715*t718;
  t805 = t794 + t796;
  t815 = t702*t703*t715;
  t817 = t618*t718;
  t819 = t815 + t817;
  t946 = t703*t618;
  t957 = -1.*t702*t715*t718;
  t963 = t946 + t957;
  t986 = t703*t618*t715;
  t992 = -1.*t702*t718;
  t993 = t986 + t992;
  t968 = t660*t819;
  t1017 = t660*t993;
  t1096 = t702*t703;
  t1099 = t618*t715*t718;
  t1103 = t1096 + t1099;
  t1044 = t593*t703*t660;
  t1045 = -1.*t593*t718*t756;
  t1046 = t1044 + t1045;
  t1052 = 0.135*t1046;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=0.049*t593*t618 + t698*t724 + 0.135*(t660*t724 + t753*t756) + t753*t765;
  p_output1[10]=-0.049*t593*t702 + t698*t805 + t765*t819 + 0.135*(t660*t805 + t756*t819);
  p_output1[11]=0;
  p_output1[12]=0.049*t702*t715 + t593*t698*t702*t718 + 0.135*(t593*t660*t702*t718 + t593*t702*t703*t756) + t593*t702*t703*t765;
  p_output1[13]=0.049*t618*t715 + t593*t618*t698*t718 + 0.135*(t593*t618*t660*t718 + t593*t618*t703*t756) + t593*t618*t703*t765;
  p_output1[14]=0.049*t593 - 1.*t698*t715*t718 + 0.135*(-1.*t660*t715*t718 - 1.*t703*t715*t756) - 1.*t703*t715*t765;
  p_output1[15]=t698*t819 + t765*t963 + 0.135*(t756*t963 + t968);
  p_output1[16]=0.135*(t1017 + t724*t756) + t724*t765 + t698*t993;
  p_output1[17]=t1052 + t593*t698*t703 - 1.*t593*t718*t765;
  p_output1[18]=0.135*t756*t805 - 0.135*t660*t819 + 0.135*(-1.*t756*t805 + t968);
  p_output1[19]=0.135*t1103*t756 + 0.135*(t1017 - 1.*t1103*t756) - 0.135*t660*t993;
  p_output1[20]=t1052 - 0.135*t593*t660*t703 + 0.135*t593*t718*t756;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
}



void Jp_hip_abduction_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
