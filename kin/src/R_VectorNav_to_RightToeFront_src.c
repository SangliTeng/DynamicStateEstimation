/*
 * Automatically Generated from Mathematica.
 * Wed 23 Oct 2019 10:26:10 GMT-07:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_VectorNav_to_RightToeFront_src.h"

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
  double t244;
  double t1431;
  double t1938;
  double t1236;
  double t2010;
  double t1124;
  double t2510;
  double t2623;
  double t2839;
  double t1687;
  double t2107;
  double t2233;
  double t2865;
  double t975;
  double t3429;
  double t3480;
  double t3508;
  double t2389;
  double t2968;
  double t3216;
  double t3660;
  double t743;
  double t3992;
  double t4003;
  double t4172;
  double t3371;
  double t3759;
  double t3838;
  double t4182;
  double t217;
  double t57;
  double t513;
  double t5432;
  double t5475;
  double t5513;
  double t4968;
  double t5012;
  double t5227;
  double t5712;
  double t5759;
  double t5777;
  double t5250;
  double t5629;
  double t5675;
  double t5995;
  double t6009;
  double t6019;
  double t5690;
  double t5807;
  double t5814;
  double t6100;
  double t6139;
  double t6162;
  double t5947;
  double t6046;
  double t6070;
  double t6395;
  double t6435;
  double t6436;
  double t6334;
  double t6345;
  double t6359;
  double t6490;
  double t6494;
  double t6500;
  double t6380;
  double t6442;
  double t6467;
  double t6535;
  double t6540;
  double t6554;
  double t6487;
  double t6507;
  double t6513;
  double t6566;
  double t6569;
  double t6572;
  double t6518;
  double t6558;
  double t6562;
  double t3949;
  double t4242;
  double t4300;
  double t4525;
  double t4636;
  double t4764;
  double t6087;
  double t6164;
  double t6181;
  double t6288;
  double t6298;
  double t6309;
  double t6564;
  double t6573;
  double t6579;
  double t6594;
  double t6624;
  double t6651;
  t244 = Cos(var1[8]);
  t1431 = Cos(var1[10]);
  t1938 = Sin(var1[9]);
  t1236 = Cos(var1[9]);
  t2010 = Sin(var1[10]);
  t1124 = Cos(var1[11]);
  t2510 = -1.*t244*t1431*t1938;
  t2623 = -1.*t244*t1236*t2010;
  t2839 = t2510 + t2623;
  t1687 = t244*t1236*t1431;
  t2107 = -1.*t244*t1938*t2010;
  t2233 = t1687 + t2107;
  t2865 = Sin(var1[11]);
  t975 = Cos(var1[12]);
  t3429 = t1124*t2839;
  t3480 = -1.*t2233*t2865;
  t3508 = t3429 + t3480;
  t2389 = t1124*t2233;
  t2968 = t2839*t2865;
  t3216 = t2389 + t2968;
  t3660 = Sin(var1[12]);
  t743 = Cos(var1[13]);
  t3992 = t975*t3508;
  t4003 = -1.*t3216*t3660;
  t4172 = t3992 + t4003;
  t3371 = t975*t3216;
  t3759 = t3508*t3660;
  t3838 = t3371 + t3759;
  t4182 = Sin(var1[13]);
  t217 = Cos(var1[7]);
  t57 = Sin(var1[8]);
  t513 = Sin(var1[7]);
  t5432 = -1.*t1236*t513;
  t5475 = -1.*t217*t57*t1938;
  t5513 = t5432 + t5475;
  t4968 = t217*t1236*t57;
  t5012 = -1.*t513*t1938;
  t5227 = t4968 + t5012;
  t5712 = t1431*t5513;
  t5759 = -1.*t5227*t2010;
  t5777 = t5712 + t5759;
  t5250 = t1431*t5227;
  t5629 = t5513*t2010;
  t5675 = t5250 + t5629;
  t5995 = t1124*t5777;
  t6009 = -1.*t5675*t2865;
  t6019 = t5995 + t6009;
  t5690 = t1124*t5675;
  t5807 = t5777*t2865;
  t5814 = t5690 + t5807;
  t6100 = t975*t6019;
  t6139 = -1.*t5814*t3660;
  t6162 = t6100 + t6139;
  t5947 = t975*t5814;
  t6046 = t6019*t3660;
  t6070 = t5947 + t6046;
  t6395 = t217*t1236;
  t6435 = -1.*t513*t57*t1938;
  t6436 = t6395 + t6435;
  t6334 = t1236*t513*t57;
  t6345 = t217*t1938;
  t6359 = t6334 + t6345;
  t6490 = t1431*t6436;
  t6494 = -1.*t6359*t2010;
  t6500 = t6490 + t6494;
  t6380 = t1431*t6359;
  t6442 = t6436*t2010;
  t6467 = t6380 + t6442;
  t6535 = t1124*t6500;
  t6540 = -1.*t6467*t2865;
  t6554 = t6535 + t6540;
  t6487 = t1124*t6467;
  t6507 = t6500*t2865;
  t6513 = t6487 + t6507;
  t6566 = t975*t6554;
  t6569 = -1.*t6513*t3660;
  t6572 = t6566 + t6569;
  t6518 = t975*t6513;
  t6558 = t6554*t3660;
  t6562 = t6518 + t6558;
  t3949 = t743*t3838;
  t4242 = t4172*t4182;
  t4300 = t3949 + t4242;
  t4525 = t743*t4172;
  t4636 = -1.*t3838*t4182;
  t4764 = t4525 + t4636;
  t6087 = t743*t6070;
  t6164 = t6162*t4182;
  t6181 = t6087 + t6164;
  t6288 = t743*t6162;
  t6298 = -1.*t6070*t4182;
  t6309 = t6288 + t6298;
  t6564 = t743*t6562;
  t6573 = t6572*t4182;
  t6579 = t6564 + t6573;
  t6594 = t743*t6572;
  t6624 = -1.*t6562*t4182;
  t6651 = t6594 + t6624;
  p_output1[0]=0. + t57;
  p_output1[1]=0. - 1.*t217*t244;
  p_output1[2]=0. - 1.*t244*t513;
  p_output1[3]=0. + 0.642788*t4300 + 0.766044*t4764;
  p_output1[4]=0. + 0.642788*t6181 + 0.766044*t6309;
  p_output1[5]=0. + 0.642788*t6579 + 0.766044*t6651;
  p_output1[6]=0. - 0.766044*t4300 + 0.642788*t4764;
  p_output1[7]=0. - 0.766044*t6181 + 0.642788*t6309;
  p_output1[8]=0. - 0.766044*t6579 + 0.642788*t6651;
}



void R_VectorNav_to_RightToeFront_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
