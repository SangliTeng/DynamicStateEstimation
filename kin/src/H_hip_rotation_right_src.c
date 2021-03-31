/*
 * Automatically Generated from Mathematica.
 * Wed 12 Feb 2020 15:28:12 GMT-08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_hip_rotation_right_src.h"

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
  double t846;
  double t1114;
  double t571;
  double t1025;
  double t1131;
  double t524;
  double t1697;
  double t3536;
  double t1031;
  double t1544;
  double t1562;
  double t1834;
  double t1840;
  double t1855;
  double t3581;
  double t3745;
  double t2372;
  double t2433;
  double t2502;
  double t2525;
  double t2607;
  double t2723;
  double t3803;
  double t3890;
  double t4327;
  double t4695;
  double t4793;
  double t4840;
  double t5163;
  double t5304;
  double t5356;
  double t6739;
  double t6890;
  double t3736;
  double t4403;
  double t4642;
  double t6920;
  double t6930;
  double t7256;
  double t7587;
  double t8472;
  double t9090;
  double t9093;
  double t9099;
  double t9102;
  double t9116;
  double t9119;
  double t9136;
  double t4673;
  double t4953;
  double t5020;
  double t5093;
  double t5423;
  double t5498;
  t846 = Cos(var1[5]);
  t1114 = Sin(var1[3]);
  t571 = Cos(var1[3]);
  t1025 = Sin(var1[4]);
  t1131 = Sin(var1[5]);
  t524 = Cos(var1[13]);
  t1697 = Sin(var1[13]);
  t3536 = Cos(var1[4]);
  t1031 = t571*t846*t1025;
  t1544 = t1114*t1131;
  t1562 = t1031 + t1544;
  t1834 = -1.*t846*t1114;
  t1840 = t571*t1025*t1131;
  t1855 = t1834 + t1840;
  t3581 = Cos(var1[14]);
  t3745 = Sin(var1[14]);
  t2372 = t846*t1114*t1025;
  t2433 = -1.*t571*t1131;
  t2502 = t2372 + t2433;
  t2525 = t571*t846;
  t2607 = t1114*t1025*t1131;
  t2723 = t2525 + t2607;
  t3803 = t1697*t1562;
  t3890 = t524*t1855;
  t4327 = t3803 + t3890;
  t4695 = t1697*t2502;
  t4793 = t524*t2723;
  t4840 = t4695 + t4793;
  t5163 = t3536*t846*t1697;
  t5304 = t524*t3536*t1131;
  t5356 = t5163 + t5304;
  t6739 = -1.*t3581;
  t6890 = 1. + t6739;
  t3736 = t3581*t571*t3536;
  t4403 = t3745*t4327;
  t4642 = t3736 + t4403;
  t6920 = -0.049*t6890;
  t6930 = -0.135*t3745;
  t7256 = 0. + t6920 + t6930;
  t7587 = 0.135*t1697;
  t8472 = 0. + t7587;
  t9090 = -1.*t524;
  t9093 = 1. + t9090;
  t9099 = -0.135*t9093;
  t9102 = 0. + t9099;
  t9116 = -0.135*t6890;
  t9119 = 0.049*t3745;
  t9136 = 0. + t9116 + t9119;
  t4673 = t3581*t3536*t1114;
  t4953 = t3745*t4840;
  t5020 = t4673 + t4953;
  t5093 = -1.*t3581*t1025;
  t5423 = t3745*t5356;
  t5498 = t5093 + t5423;
  p_output1[0]=t1697*t1855 - 1.*t1562*t524;
  p_output1[1]=t1697*t2723 - 1.*t2502*t524;
  p_output1[2]=t1131*t1697*t3536 - 1.*t3536*t524*t846;
  p_output1[3]=0.;
  p_output1[4]=t4642;
  p_output1[5]=t5020;
  p_output1[6]=t5498;
  p_output1[7]=0.;
  p_output1[8]=-1.*t3581*t4327 + t3536*t3745*t571;
  p_output1[9]=t1114*t3536*t3745 - 1.*t3581*t4840;
  p_output1[10]=-1.*t1025*t3745 - 1.*t3581*t5356;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.049*t4642 - 0.09*(-1.*t1697*t1855 + t1562*t524) - 0.135*(t3581*t4327 - 1.*t3536*t3745*t571) + t3536*t571*t7256 + t1562*t8472 + t1855*t9102 + t4327*t9136 + var1[0];
  p_output1[13]=0. - 0.135*(-1.*t1114*t3536*t3745 + t3581*t4840) - 0.049*t5020 - 0.09*(-1.*t1697*t2723 + t2502*t524) + t1114*t3536*t7256 + t2502*t8472 + t2723*t9102 + t4840*t9136 + var1[1];
  p_output1[14]=0. - 0.135*(t1025*t3745 + t3581*t5356) - 0.049*t5498 - 1.*t1025*t7256 - 0.09*(-1.*t1131*t1697*t3536 + t3536*t524*t846) + t3536*t846*t8472 + t1131*t3536*t9102 + t5356*t9136 + var1[2];
  p_output1[15]=1.;
}



void H_hip_rotation_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
