/*
 * Automatically Generated from Mathematica.
 * Wed 12 Feb 2020 15:28:06 GMT-08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_hip_abduction_right_src.h"

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
  double t516;
  double t5559;
  double t3338;
  double t3395;
  double t5744;
  double t812;
  double t4805;
  double t6360;
  double t6403;
  double t6872;
  double t8598;
  double t8603;
  double t8702;
  double t488;
  double t2832;
  double t2910;
  double t8153;
  double t8195;
  double t8271;
  double t8589;
  double t8720;
  double t8721;
  double t8722;
  double t8729;
  double t8732;
  double t8733;
  double t8813;
  double t8816;
  double t8818;
  double t8839;
  double t8842;
  double t8843;
  double t8824;
  double t8849;
  double t8892;
  double t8893;
  double t8894;
  double t8868;
  double t8871;
  double t8873;
  double t8877;
  t516 = Sin(var1[3]);
  t5559 = Cos(var1[3]);
  t3338 = Cos(var1[5]);
  t3395 = Sin(var1[4]);
  t5744 = Sin(var1[5]);
  t812 = Sin(var1[13]);
  t4805 = -1.*t3338*t516*t3395;
  t6360 = t5559*t5744;
  t6403 = t4805 + t6360;
  t6872 = Cos(var1[13]);
  t8598 = -1.*t5559*t3338;
  t8603 = -1.*t516*t3395*t5744;
  t8702 = t8598 + t8603;
  t488 = Cos(var1[4]);
  t2832 = 0.135*t812;
  t2910 = 0. + t2832;
  t8153 = -1.*t6872;
  t8195 = 1. + t8153;
  t8271 = -0.135*t8195;
  t8589 = 0. + t8271;
  t8720 = t5559*t3338*t3395;
  t8721 = t516*t5744;
  t8722 = t8720 + t8721;
  t8729 = -1.*t3338*t516;
  t8732 = t5559*t3395*t5744;
  t8733 = t8729 + t8732;
  t8813 = t3338*t516;
  t8816 = -1.*t5559*t3395*t5744;
  t8818 = t8813 + t8816;
  t8839 = t3338*t516*t3395;
  t8842 = -1.*t5559*t5744;
  t8843 = t8839 + t8842;
  t8824 = t6872*t8722;
  t8849 = t6872*t8843;
  t8892 = t5559*t3338;
  t8893 = t516*t3395*t5744;
  t8894 = t8892 + t8893;
  t8868 = t6872*t488*t3338;
  t8871 = -1.*t488*t812*t5744;
  t8873 = t8868 + t8871;
  t8877 = -0.135*t8873;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=0.049*t488*t516 + t2910*t6403 + t8589*t8702 - 0.135*(t6403*t812 + t6872*t8702);
  p_output1[10]=-0.049*t488*t5559 + t2910*t8722 + t8589*t8733 - 0.135*(t812*t8722 + t6872*t8733);
  p_output1[11]=0;
  p_output1[12]=0.049*t3395*t5559 + t2910*t3338*t488*t5559 - 0.135*(t488*t5559*t5744*t6872 + t3338*t488*t5559*t812) + t488*t5559*t5744*t8589;
  p_output1[13]=0.049*t3395*t516 + t2910*t3338*t488*t516 - 0.135*(t488*t516*t5744*t6872 + t3338*t488*t516*t812) + t488*t516*t5744*t8589;
  p_output1[14]=-1.*t2910*t3338*t3395 + 0.049*t488 - 0.135*(-1.*t3395*t5744*t6872 - 1.*t3338*t3395*t812) - 1.*t3395*t5744*t8589;
  p_output1[15]=t8589*t8722 + t2910*t8818 - 0.135*(t812*t8818 + t8824);
  p_output1[16]=t2910*t8702 + t8589*t8843 - 0.135*(t812*t8702 + t8849);
  p_output1[17]=-1.*t2910*t488*t5744 + t3338*t488*t8589 + t8877;
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
  p_output1[39]=0.135*t6872*t8722 - 0.135*t812*t8733 - 0.135*(-1.*t812*t8733 + t8824);
  p_output1[40]=0.135*t6872*t8843 - 0.135*t812*t8894 - 0.135*(t8849 - 1.*t812*t8894);
  p_output1[41]=0.135*t3338*t488*t6872 - 0.135*t488*t5744*t812 + t8877;
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



void Jp_hip_abduction_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
