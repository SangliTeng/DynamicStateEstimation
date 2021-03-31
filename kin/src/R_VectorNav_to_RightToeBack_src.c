/*
 * Automatically Generated from Mathematica.
 * Wed 23 Oct 2019 10:26:04 GMT-07:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_VectorNav_to_RightToeBack_src.h"

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
  double t776;
  double t2975;
  double t3537;
  double t2912;
  double t3698;
  double t2577;
  double t4187;
  double t4202;
  double t4298;
  double t3194;
  double t4023;
  double t4065;
  double t4377;
  double t2345;
  double t4469;
  double t4485;
  double t4510;
  double t4147;
  double t4418;
  double t4455;
  double t4536;
  double t2152;
  double t4603;
  double t4605;
  double t4622;
  double t4462;
  double t4552;
  double t4560;
  double t4639;
  double t758;
  double t253;
  double t1165;
  double t4843;
  double t4853;
  double t4862;
  double t4772;
  double t4793;
  double t4825;
  double t4916;
  double t4928;
  double t4957;
  double t4829;
  double t4865;
  double t4895;
  double t5013;
  double t5022;
  double t5034;
  double t4908;
  double t4958;
  double t4963;
  double t5095;
  double t5100;
  double t5101;
  double t4967;
  double t5045;
  double t5084;
  double t5198;
  double t5221;
  double t5228;
  double t5167;
  double t5182;
  double t5187;
  double t5265;
  double t5271;
  double t5276;
  double t5190;
  double t5235;
  double t5238;
  double t5291;
  double t5292;
  double t5297;
  double t5256;
  double t5284;
  double t5288;
  double t5310;
  double t5312;
  double t5313;
  double t5289;
  double t5299;
  double t5300;
  double t4567;
  double t4660;
  double t4685;
  double t4705;
  double t4711;
  double t4722;
  double t5092;
  double t5127;
  double t5128;
  double t5132;
  double t5139;
  double t5141;
  double t5308;
  double t5316;
  double t5317;
  double t5322;
  double t5323;
  double t5326;
  t776 = Cos(var1[8]);
  t2975 = Cos(var1[10]);
  t3537 = Sin(var1[9]);
  t2912 = Cos(var1[9]);
  t3698 = Sin(var1[10]);
  t2577 = Cos(var1[11]);
  t4187 = -1.*t776*t2975*t3537;
  t4202 = -1.*t776*t2912*t3698;
  t4298 = t4187 + t4202;
  t3194 = t776*t2912*t2975;
  t4023 = -1.*t776*t3537*t3698;
  t4065 = t3194 + t4023;
  t4377 = Sin(var1[11]);
  t2345 = Cos(var1[12]);
  t4469 = t2577*t4298;
  t4485 = -1.*t4065*t4377;
  t4510 = t4469 + t4485;
  t4147 = t2577*t4065;
  t4418 = t4298*t4377;
  t4455 = t4147 + t4418;
  t4536 = Sin(var1[12]);
  t2152 = Cos(var1[13]);
  t4603 = t2345*t4510;
  t4605 = -1.*t4455*t4536;
  t4622 = t4603 + t4605;
  t4462 = t2345*t4455;
  t4552 = t4510*t4536;
  t4560 = t4462 + t4552;
  t4639 = Sin(var1[13]);
  t758 = Cos(var1[7]);
  t253 = Sin(var1[8]);
  t1165 = Sin(var1[7]);
  t4843 = -1.*t2912*t1165;
  t4853 = -1.*t758*t253*t3537;
  t4862 = t4843 + t4853;
  t4772 = t758*t2912*t253;
  t4793 = -1.*t1165*t3537;
  t4825 = t4772 + t4793;
  t4916 = t2975*t4862;
  t4928 = -1.*t4825*t3698;
  t4957 = t4916 + t4928;
  t4829 = t2975*t4825;
  t4865 = t4862*t3698;
  t4895 = t4829 + t4865;
  t5013 = t2577*t4957;
  t5022 = -1.*t4895*t4377;
  t5034 = t5013 + t5022;
  t4908 = t2577*t4895;
  t4958 = t4957*t4377;
  t4963 = t4908 + t4958;
  t5095 = t2345*t5034;
  t5100 = -1.*t4963*t4536;
  t5101 = t5095 + t5100;
  t4967 = t2345*t4963;
  t5045 = t5034*t4536;
  t5084 = t4967 + t5045;
  t5198 = t758*t2912;
  t5221 = -1.*t1165*t253*t3537;
  t5228 = t5198 + t5221;
  t5167 = t2912*t1165*t253;
  t5182 = t758*t3537;
  t5187 = t5167 + t5182;
  t5265 = t2975*t5228;
  t5271 = -1.*t5187*t3698;
  t5276 = t5265 + t5271;
  t5190 = t2975*t5187;
  t5235 = t5228*t3698;
  t5238 = t5190 + t5235;
  t5291 = t2577*t5276;
  t5292 = -1.*t5238*t4377;
  t5297 = t5291 + t5292;
  t5256 = t2577*t5238;
  t5284 = t5276*t4377;
  t5288 = t5256 + t5284;
  t5310 = t2345*t5297;
  t5312 = -1.*t5288*t4536;
  t5313 = t5310 + t5312;
  t5289 = t2345*t5288;
  t5299 = t5297*t4536;
  t5300 = t5289 + t5299;
  t4567 = t2152*t4560;
  t4660 = t4622*t4639;
  t4685 = t4567 + t4660;
  t4705 = t2152*t4622;
  t4711 = -1.*t4560*t4639;
  t4722 = t4705 + t4711;
  t5092 = t2152*t5084;
  t5127 = t5101*t4639;
  t5128 = t5092 + t5127;
  t5132 = t2152*t5101;
  t5139 = -1.*t5084*t4639;
  t5141 = t5132 + t5139;
  t5308 = t2152*t5300;
  t5316 = t5313*t4639;
  t5317 = t5308 + t5316;
  t5322 = t2152*t5313;
  t5323 = -1.*t5300*t4639;
  t5326 = t5322 + t5323;
  p_output1[0]=0. + t253;
  p_output1[1]=0. - 1.*t758*t776;
  p_output1[2]=0. - 1.*t1165*t776;
  p_output1[3]=0. + 0.642788*t4685 + 0.766044*t4722;
  p_output1[4]=0. + 0.642788*t5128 + 0.766044*t5141;
  p_output1[5]=0. + 0.642788*t5317 + 0.766044*t5326;
  p_output1[6]=0. - 0.766044*t4685 + 0.642788*t4722;
  p_output1[7]=0. - 0.766044*t5128 + 0.642788*t5141;
  p_output1[8]=0. - 0.766044*t5317 + 0.642788*t5326;
}



void R_VectorNav_to_RightToeBack_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
