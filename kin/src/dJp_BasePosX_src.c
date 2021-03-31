/*
 * Automatically Generated from Mathematica.
 * Sat 21 Mar 2020 21:40:35 GMT-07:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJp_BasePosX_src.h"

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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t579;
  double t567;
  double t590;
  double t609;
  double t492;
  double t622;
  double t648;
  double t584;
  double t598;
  double t606;
  double t700;
  double t708;
  double t709;
  double t743;
  double t652;
  double t653;
  double t654;
  double t610;
  double t633;
  double t634;
  double t745;
  double t760;
  double t765;
  double t715;
  double t725;
  double t727;
  t579 = Sin(var1[3]);
  t567 = Cos(var1[5]);
  t590 = Sin(var1[4]);
  t609 = Cos(var1[3]);
  t492 = Cos(var1[4]);
  t622 = Sin(var1[5]);
  t648 = -0.03155*t609*t492;
  t584 = 0.07996*t492*t567*t579;
  t598 = 0.03155*t579*t590;
  t606 = t584 + t598;
  t700 = -0.07996*t609*t492*t567;
  t708 = -0.03155*t609*t590;
  t709 = t700 + t708;
  t743 = -0.03155*t492*t579;
  t652 = -1.*t609*t567*t590;
  t653 = -1.*t579*t622;
  t654 = t652 + t653;
  t610 = t609*t567;
  t633 = t579*t590*t622;
  t634 = t610 + t633;
  t745 = -1.*t567*t579*t590;
  t760 = t609*t622;
  t765 = t745 + t760;
  t715 = t567*t579;
  t725 = -1.*t609*t590*t622;
  t727 = t715 + t725;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(t648 - 0.07996*t654)*var2[3] + t606*var2[4] - 0.07996*t634*var2[5];
  p_output1[10]=(t743 - 0.07996*t765)*var2[3] + t709*var2[4] - 0.07996*t727*var2[5];
  p_output1[11]=0;
  p_output1[12]=t606*var2[3] + (0.07996*t567*t590*t609 + t648)*var2[4] + 0.07996*t492*t609*t622*var2[5];
  p_output1[13]=t709*var2[3] + (0.07996*t567*t579*t590 + t743)*var2[4] + 0.07996*t492*t579*t622*var2[5];
  p_output1[14]=(0.07996*t492*t567 + 0.03155*t590)*var2[4] - 0.07996*t590*t622*var2[5];
  p_output1[15]=-0.07996*t634*var2[3] + 0.07996*t492*t609*t622*var2[4] - 0.07996*t654*var2[5];
  p_output1[16]=-0.07996*t727*var2[3] + 0.07996*t492*t579*t622*var2[4] - 0.07996*t765*var2[5];
  p_output1[17]=-0.07996*t590*t622*var2[4] + 0.07996*t492*t567*var2[5];
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
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



void dJp_BasePosX_src(double *p_output1, const double *var1,const double *var2)
{
  /* Call Subroutines */
  output1(p_output1, var1, var2);

}
