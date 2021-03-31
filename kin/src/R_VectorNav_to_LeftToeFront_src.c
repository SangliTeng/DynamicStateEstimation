/*
 * Automatically Generated from Mathematica.
 * Wed 23 Oct 2019 10:26:13 GMT-07:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_VectorNav_to_LeftToeFront_src.h"

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
  double t385;
  double t1528;
  double t1420;
  double t1481;
  double t1596;
  double t1872;
  double t1482;
  double t1650;
  double t1690;
  double t1397;
  double t1903;
  double t1927;
  double t1967;
  double t2222;
  double t1837;
  double t2090;
  double t2154;
  double t1384;
  double t2267;
  double t2278;
  double t2288;
  double t2513;
  double t2195;
  double t2405;
  double t2482;
  double t1138;
  double t2547;
  double t2678;
  double t2690;
  double t374;
  double t41;
  double t557;
  double t3285;
  double t3458;
  double t3717;
  double t3822;
  double t3855;
  double t3881;
  double t3729;
  double t3995;
  double t4089;
  double t4303;
  double t4357;
  double t4384;
  double t4231;
  double t4419;
  double t4422;
  double t4442;
  double t4520;
  double t4740;
  double t4435;
  double t4865;
  double t4898;
  double t4980;
  double t5026;
  double t5103;
  double t5601;
  double t5613;
  double t5719;
  double t5862;
  double t6016;
  double t6053;
  double t5764;
  double t6104;
  double t6115;
  double t6130;
  double t6257;
  double t6321;
  double t6116;
  double t6361;
  double t6413;
  double t6450;
  double t6489;
  double t6507;
  double t6440;
  double t6524;
  double t6535;
  double t6565;
  double t6586;
  double t6660;
  double t2508;
  double t2751;
  double t2813;
  double t3070;
  double t3164;
  double t3167;
  double t4946;
  double t5138;
  double t5229;
  double t5403;
  double t5409;
  double t5450;
  double t6541;
  double t6662;
  double t6671;
  double t6690;
  double t6722;
  double t6753;
  t385 = Cos(var1[1]);
  t1528 = Cos(var1[3]);
  t1420 = Cos(var1[2]);
  t1481 = Sin(var1[3]);
  t1596 = Sin(var1[2]);
  t1872 = Cos(var1[4]);
  t1482 = -1.*t385*t1420*t1481;
  t1650 = -1.*t1528*t385*t1596;
  t1690 = t1482 + t1650;
  t1397 = Sin(var1[4]);
  t1903 = t1528*t385*t1420;
  t1927 = -1.*t385*t1481*t1596;
  t1967 = t1903 + t1927;
  t2222 = Cos(var1[5]);
  t1837 = t1397*t1690;
  t2090 = t1872*t1967;
  t2154 = t1837 + t2090;
  t1384 = Sin(var1[5]);
  t2267 = t1872*t1690;
  t2278 = -1.*t1397*t1967;
  t2288 = t2267 + t2278;
  t2513 = Cos(var1[6]);
  t2195 = -1.*t1384*t2154;
  t2405 = t2222*t2288;
  t2482 = t2195 + t2405;
  t1138 = Sin(var1[6]);
  t2547 = t2222*t2154;
  t2678 = t1384*t2288;
  t2690 = t2547 + t2678;
  t374 = Cos(var1[0]);
  t41 = Sin(var1[1]);
  t557 = Sin(var1[0]);
  t3285 = t374*t1420*t41;
  t3458 = -1.*t557*t1596;
  t3717 = t3285 + t3458;
  t3822 = -1.*t1420*t557;
  t3855 = -1.*t374*t41*t1596;
  t3881 = t3822 + t3855;
  t3729 = -1.*t1481*t3717;
  t3995 = t1528*t3881;
  t4089 = t3729 + t3995;
  t4303 = t1528*t3717;
  t4357 = t1481*t3881;
  t4384 = t4303 + t4357;
  t4231 = t1397*t4089;
  t4419 = t1872*t4384;
  t4422 = t4231 + t4419;
  t4442 = t1872*t4089;
  t4520 = -1.*t1397*t4384;
  t4740 = t4442 + t4520;
  t4435 = -1.*t1384*t4422;
  t4865 = t2222*t4740;
  t4898 = t4435 + t4865;
  t4980 = t2222*t4422;
  t5026 = t1384*t4740;
  t5103 = t4980 + t5026;
  t5601 = t1420*t557*t41;
  t5613 = t374*t1596;
  t5719 = t5601 + t5613;
  t5862 = t374*t1420;
  t6016 = -1.*t557*t41*t1596;
  t6053 = t5862 + t6016;
  t5764 = -1.*t1481*t5719;
  t6104 = t1528*t6053;
  t6115 = t5764 + t6104;
  t6130 = t1528*t5719;
  t6257 = t1481*t6053;
  t6321 = t6130 + t6257;
  t6116 = t1397*t6115;
  t6361 = t1872*t6321;
  t6413 = t6116 + t6361;
  t6450 = t1872*t6115;
  t6489 = -1.*t1397*t6321;
  t6507 = t6450 + t6489;
  t6440 = -1.*t1384*t6413;
  t6524 = t2222*t6507;
  t6535 = t6440 + t6524;
  t6565 = t2222*t6413;
  t6586 = t1384*t6507;
  t6660 = t6565 + t6586;
  t2508 = t1138*t2482;
  t2751 = t2513*t2690;
  t2813 = t2508 + t2751;
  t3070 = t2513*t2482;
  t3164 = -1.*t1138*t2690;
  t3167 = t3070 + t3164;
  t4946 = t1138*t4898;
  t5138 = t2513*t5103;
  t5229 = t4946 + t5138;
  t5403 = t2513*t4898;
  t5409 = -1.*t1138*t5103;
  t5450 = t5403 + t5409;
  t6541 = t1138*t6535;
  t6662 = t2513*t6660;
  t6671 = t6541 + t6662;
  t6690 = t2513*t6535;
  t6722 = -1.*t1138*t6660;
  t6753 = t6690 + t6722;
  p_output1[0]=0. + t41;
  p_output1[1]=0. - 1.*t374*t385;
  p_output1[2]=0. - 1.*t385*t557;
  p_output1[3]=0. + 0.642788*t2813 + 0.766044*t3167;
  p_output1[4]=0. + 0.642788*t5229 + 0.766044*t5450;
  p_output1[5]=0. + 0.642788*t6671 + 0.766044*t6753;
  p_output1[6]=0. - 0.766044*t2813 + 0.642788*t3167;
  p_output1[7]=0. - 0.766044*t5229 + 0.642788*t5450;
  p_output1[8]=0. - 0.766044*t6671 + 0.642788*t6753;
}



void R_VectorNav_to_LeftToeFront_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
