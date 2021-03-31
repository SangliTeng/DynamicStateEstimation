/*
 * Automatically Generated from Mathematica.
 * Wed 23 Oct 2019 10:33:53 GMT-07:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jwb_VectorNav_to_RightToeBottom_src.h"

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
  double t1251;
  double t1557;
  double t1719;
  double t1425;
  double t1591;
  double t1628;
  double t1208;
  double t1929;
  double t2045;
  double t2091;
  double t2553;
  double t1640;
  double t2159;
  double t2491;
  double t1166;
  double t2740;
  double t2820;
  double t2859;
  double t2982;
  double t2502;
  double t2911;
  double t2914;
  double t1152;
  double t3131;
  double t3215;
  double t3374;
  double t783;
  double t3496;
  double t4106;
  double t4326;
  double t4340;
  double t4101;
  double t4348;
  double t4449;
  double t4566;
  double t4577;
  double t799;
  double t4529;
  double t4603;
  double t4622;
  double t4724;
  double t4766;
  double t4809;
  double t2942;
  double t3378;
  double t3446;
  double t3537;
  double t3577;
  double t3644;
  double t4657;
  double t4811;
  double t4813;
  double t4911;
  double t4972;
  double t4975;
  t1251 = Cos(var1[13]);
  t1557 = Sin(var1[13]);
  t1719 = Cos(var1[12]);
  t1425 = 0.642788*t1251;
  t1591 = -0.766044*t1557;
  t1628 = t1425 + t1591;
  t1208 = Sin(var1[12]);
  t1929 = 0.766044*t1251;
  t2045 = 0.642788*t1557;
  t2091 = t1929 + t2045;
  t2553 = Cos(var1[11]);
  t1640 = t1208*t1628;
  t2159 = t1719*t2091;
  t2491 = 0. + t1640 + t2159;
  t1166 = Sin(var1[11]);
  t2740 = t1719*t1628;
  t2820 = -1.*t1208*t2091;
  t2859 = 0. + t2740 + t2820;
  t2982 = Cos(var1[10]);
  t2502 = -1.*t1166*t2491;
  t2911 = t2553*t2859;
  t2914 = 0. + t2502 + t2911;
  t1152 = Sin(var1[10]);
  t3131 = t2553*t2491;
  t3215 = t1166*t2859;
  t3374 = 0. + t3131 + t3215;
  t783 = Cos(var1[8]);
  t3496 = Cos(var1[9]);
  t4106 = -0.766044*t1251;
  t4326 = -0.642788*t1557;
  t4340 = t4106 + t4326;
  t4101 = -1.*t1208*t1628;
  t4348 = t1719*t4340;
  t4449 = 0. + t4101 + t4348;
  t4566 = t1208*t4340;
  t4577 = 0. + t2740 + t4566;
  t799 = Sin(var1[9]);
  t4529 = t1166*t4449;
  t4603 = t2553*t4577;
  t4622 = 0. + t4529 + t4603;
  t4724 = t2553*t4449;
  t4766 = -1.*t1166*t4577;
  t4809 = 0. + t4724 + t4766;
  t2942 = t1152*t2914;
  t3378 = t2982*t3374;
  t3446 = 0. + t2942 + t3378;
  t3537 = t2982*t2914;
  t3577 = -1.*t1152*t3374;
  t3644 = 0. + t3537 + t3577;
  t4657 = -1.*t1152*t4622;
  t4811 = t2982*t4809;
  t4813 = 0. + t4657 + t4811;
  t4911 = t2982*t4622;
  t4972 = t1152*t4809;
  t4975 = 0. + t4911 + t4972;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0. + Sin(var1[8]);
  p_output1[22]=0. + t783*(0. + t3496*t3644 - 1.*t3446*t799);
  p_output1[23]=0. + t783*(0. + t3496*t4813 - 1.*t4975*t799);
  p_output1[24]=0.;
  p_output1[25]=0. + t3446*t3496 + t3644*t799;
  p_output1[26]=0. + t3496*t4975 + t4813*t799;
  p_output1[27]=1.;
  p_output1[28]=0.;
  p_output1[29]=0.;
  p_output1[30]=1.;
  p_output1[31]=0.;
  p_output1[32]=0.;
  p_output1[33]=1.;
  p_output1[34]=0.;
  p_output1[35]=0.;
  p_output1[36]=1.;
  p_output1[37]=0.;
  p_output1[38]=0.;
  p_output1[39]=1.;
  p_output1[40]=0.;
  p_output1[41]=0.;
}



void Jwb_VectorNav_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
