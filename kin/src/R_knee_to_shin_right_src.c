/*
 * Automatically Generated from Mathematica.
 * Wed 12 Feb 2020 15:28:36 GMT-08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_knee_to_shin_right_src.h"

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
  double t877;
  double t2606;
  double t437;
  double t2464;
  double t2696;
  double t2839;
  double t2584;
  double t2721;
  double t2724;
  double t434;
  double t2887;
  double t2905;
  double t3520;
  double t3852;
  double t2728;
  double t3608;
  double t3629;
  double t419;
  double t3856;
  double t3862;
  double t3872;
  double t3883;
  double t3887;
  double t3889;
  double t3935;
  double t3947;
  double t3966;
  double t4001;
  double t3788;
  double t3967;
  double t3974;
  double t409;
  double t4012;
  double t4023;
  double t4030;
  double t385;
  double t4178;
  double t4188;
  double t4192;
  double t4244;
  double t4252;
  double t4352;
  double t4214;
  double t4354;
  double t4358;
  double t4410;
  double t4437;
  double t4450;
  double t4478;
  double t4480;
  double t4493;
  double t4128;
  double t4398;
  double t4526;
  double t4528;
  double t4605;
  double t4614;
  double t4648;
  double t4759;
  double t4764;
  double t4773;
  double t4776;
  double t4831;
  double t4834;
  double t4836;
  double t4846;
  double t4848;
  double t4774;
  double t4854;
  double t4866;
  double t4899;
  double t4910;
  double t4922;
  double t3995;
  double t4058;
  double t4111;
  double t4133;
  double t4153;
  double t4157;
  double t4530;
  double t4653;
  double t4656;
  double t4672;
  double t4701;
  double t4708;
  double t4872;
  double t4941;
  double t4942;
  double t4965;
  double t4967;
  double t4975;
  t877 = Cos(var1[5]);
  t2606 = Sin(var1[3]);
  t437 = Cos(var1[3]);
  t2464 = Sin(var1[4]);
  t2696 = Sin(var1[5]);
  t2839 = Sin(var1[13]);
  t2584 = t437*t877*t2464;
  t2721 = t2606*t2696;
  t2724 = t2584 + t2721;
  t434 = Cos(var1[13]);
  t2887 = -1.*t877*t2606;
  t2905 = t437*t2464*t2696;
  t3520 = t2887 + t2905;
  t3852 = Cos(var1[15]);
  t2728 = t434*t2724;
  t3608 = -1.*t2839*t3520;
  t3629 = t2728 + t3608;
  t419 = Sin(var1[15]);
  t3856 = Cos(var1[14]);
  t3862 = Cos(var1[4]);
  t3872 = t3856*t437*t3862;
  t3883 = Sin(var1[14]);
  t3887 = t2839*t2724;
  t3889 = t434*t3520;
  t3935 = t3887 + t3889;
  t3947 = t3883*t3935;
  t3966 = t3872 + t3947;
  t4001 = Cos(var1[16]);
  t3788 = t419*t3629;
  t3967 = t3852*t3966;
  t3974 = t3788 + t3967;
  t409 = Sin(var1[16]);
  t4012 = t3852*t3629;
  t4023 = -1.*t419*t3966;
  t4030 = t4012 + t4023;
  t385 = Cos(var1[17]);
  t4178 = t877*t2606*t2464;
  t4188 = -1.*t437*t2696;
  t4192 = t4178 + t4188;
  t4244 = t437*t877;
  t4252 = t2606*t2464*t2696;
  t4352 = t4244 + t4252;
  t4214 = t434*t4192;
  t4354 = -1.*t2839*t4352;
  t4358 = t4214 + t4354;
  t4410 = t3856*t3862*t2606;
  t4437 = t2839*t4192;
  t4450 = t434*t4352;
  t4478 = t4437 + t4450;
  t4480 = t3883*t4478;
  t4493 = t4410 + t4480;
  t4128 = Sin(var1[17]);
  t4398 = t419*t4358;
  t4526 = t3852*t4493;
  t4528 = t4398 + t4526;
  t4605 = t3852*t4358;
  t4614 = -1.*t419*t4493;
  t4648 = t4605 + t4614;
  t4759 = t434*t3862*t877;
  t4764 = -1.*t3862*t2839*t2696;
  t4773 = t4759 + t4764;
  t4776 = -1.*t3856*t2464;
  t4831 = t3862*t877*t2839;
  t4834 = t434*t3862*t2696;
  t4836 = t4831 + t4834;
  t4846 = t3883*t4836;
  t4848 = t4776 + t4846;
  t4774 = t419*t4773;
  t4854 = t3852*t4848;
  t4866 = t4774 + t4854;
  t4899 = t3852*t4773;
  t4910 = -1.*t419*t4848;
  t4922 = t4899 + t4910;
  t3995 = -1.*t409*t3974;
  t4058 = t4001*t4030;
  t4111 = t3995 + t4058;
  t4133 = t4001*t3974;
  t4153 = t409*t4030;
  t4157 = t4133 + t4153;
  t4530 = -1.*t409*t4528;
  t4653 = t4001*t4648;
  t4656 = t4530 + t4653;
  t4672 = t4001*t4528;
  t4701 = t409*t4648;
  t4708 = t4672 + t4701;
  t4872 = -1.*t409*t4866;
  t4941 = t4001*t4922;
  t4942 = t4872 + t4941;
  t4965 = t4001*t4866;
  t4967 = t409*t4922;
  t4975 = t4965 + t4967;
  p_output1[0]=-1.*t385*t4111 + t4128*t4157;
  p_output1[1]=-1.*t385*t4656 + t4128*t4708;
  p_output1[2]=-1.*t385*t4942 + t4128*t4975;
  p_output1[3]=t4111*t4128 + t385*t4157;
  p_output1[4]=t4128*t4656 + t385*t4708;
  p_output1[5]=t4128*t4942 + t385*t4975;
  p_output1[6]=-1.*t3856*t3935 + t3862*t3883*t437;
  p_output1[7]=t2606*t3862*t3883 - 1.*t3856*t4478;
  p_output1[8]=-1.*t2464*t3883 - 1.*t3856*t4836;
}



void R_knee_to_shin_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
