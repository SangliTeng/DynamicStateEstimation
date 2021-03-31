/*
 * Automatically Generated from Mathematica.
 * Wed 12 Feb 2020 15:28:54 GMT-08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_LeftToeBottom_src.h"

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
  double t665;
  double t333;
  double t695;
  double t570;
  double t704;
  double t145;
  double t236;
  double t1136;
  double t1290;
  double t1298;
  double t648;
  double t737;
  double t843;
  double t958;
  double t1001;
  double t1028;
  double t1048;
  double t1194;
  double t1230;
  double t2427;
  double t2527;
  double t2531;
  double t2563;
  double t2433;
  double t2472;
  double t2489;
  double t2567;
  double t2648;
  double t2491;
  double t2586;
  double t2601;
  double t2417;
  double t2692;
  double t2719;
  double t2743;
  double t2862;
  double t2628;
  double t2758;
  double t2773;
  double t2345;
  double t2944;
  double t2963;
  double t2970;
  double t3091;
  double t2800;
  double t2982;
  double t2986;
  double t2303;
  double t3218;
  double t3279;
  double t3286;
  double t3315;
  double t3052;
  double t3292;
  double t3293;
  double t2289;
  double t3457;
  double t3483;
  double t3486;
  double t1459;
  double t1499;
  double t1508;
  double t1519;
  double t1618;
  double t1621;
  double t1695;
  double t1751;
  double t1778;
  double t3811;
  double t3820;
  double t3858;
  double t3681;
  double t3763;
  double t3792;
  double t3802;
  double t3916;
  double t3918;
  double t3934;
  double t3948;
  double t3968;
  double t3923;
  double t3999;
  double t4003;
  double t4008;
  double t4011;
  double t4034;
  double t4006;
  double t4036;
  double t4045;
  double t4091;
  double t4108;
  double t4121;
  double t4081;
  double t4122;
  double t4129;
  double t4166;
  double t4174;
  double t4186;
  double t2035;
  double t2088;
  double t2162;
  double t4373;
  double t4380;
  double t4381;
  double t4311;
  double t4315;
  double t4362;
  double t4364;
  double t4393;
  double t4403;
  double t4414;
  double t4420;
  double t4446;
  double t4413;
  double t4452;
  double t4457;
  double t4475;
  double t4485;
  double t4488;
  double t4465;
  double t4494;
  double t4495;
  double t4535;
  double t4538;
  double t4543;
  double t4521;
  double t4548;
  double t4550;
  double t4567;
  double t4578;
  double t4598;
  double t3308;
  double t3516;
  double t3542;
  double t3557;
  double t3623;
  double t3664;
  double t4143;
  double t4199;
  double t4206;
  double t4224;
  double t4260;
  double t4271;
  double t4562;
  double t4604;
  double t4611;
  double t4638;
  double t4642;
  double t4670;
  t665 = Cos(var1[3]);
  t333 = Cos(var1[5]);
  t695 = Sin(var1[4]);
  t570 = Sin(var1[3]);
  t704 = Sin(var1[5]);
  t145 = Cos(var1[7]);
  t236 = Cos(var1[6]);
  t1136 = Sin(var1[6]);
  t1290 = Cos(var1[4]);
  t1298 = Sin(var1[7]);
  t648 = -1.*t333*t570;
  t737 = t665*t695*t704;
  t843 = t648 + t737;
  t958 = t236*t843;
  t1001 = t665*t333*t695;
  t1028 = t570*t704;
  t1048 = t1001 + t1028;
  t1194 = t1048*t1136;
  t1230 = t958 + t1194;
  t2427 = Cos(var1[8]);
  t2527 = t236*t1048;
  t2531 = -1.*t843*t1136;
  t2563 = t2527 + t2531;
  t2433 = t665*t1290*t145;
  t2472 = t1230*t1298;
  t2489 = t2433 + t2472;
  t2567 = Sin(var1[8]);
  t2648 = Cos(var1[9]);
  t2491 = t2427*t2489;
  t2586 = t2563*t2567;
  t2601 = t2491 + t2586;
  t2417 = Sin(var1[9]);
  t2692 = t2427*t2563;
  t2719 = -1.*t2489*t2567;
  t2743 = t2692 + t2719;
  t2862 = Cos(var1[10]);
  t2628 = -1.*t2417*t2601;
  t2758 = t2648*t2743;
  t2773 = t2628 + t2758;
  t2345 = Sin(var1[10]);
  t2944 = t2648*t2601;
  t2963 = t2417*t2743;
  t2970 = t2944 + t2963;
  t3091 = Cos(var1[11]);
  t2800 = t2345*t2773;
  t2982 = t2862*t2970;
  t2986 = t2800 + t2982;
  t2303 = Sin(var1[11]);
  t3218 = t2862*t2773;
  t3279 = -1.*t2345*t2970;
  t3286 = t3218 + t3279;
  t3315 = Cos(var1[12]);
  t3052 = -1.*t2303*t2986;
  t3292 = t3091*t3286;
  t3293 = t3052 + t3292;
  t2289 = Sin(var1[12]);
  t3457 = t3091*t2986;
  t3483 = t2303*t3286;
  t3486 = t3457 + t3483;
  t1459 = t665*t333;
  t1499 = t570*t695*t704;
  t1508 = t1459 + t1499;
  t1519 = t236*t1508;
  t1618 = t333*t570*t695;
  t1621 = -1.*t665*t704;
  t1695 = t1618 + t1621;
  t1751 = t1695*t1136;
  t1778 = t1519 + t1751;
  t3811 = t236*t1695;
  t3820 = -1.*t1508*t1136;
  t3858 = t3811 + t3820;
  t3681 = t1290*t145*t570;
  t3763 = t1778*t1298;
  t3792 = t3681 + t3763;
  t3802 = t2427*t3792;
  t3916 = t3858*t2567;
  t3918 = t3802 + t3916;
  t3934 = t2427*t3858;
  t3948 = -1.*t3792*t2567;
  t3968 = t3934 + t3948;
  t3923 = -1.*t2417*t3918;
  t3999 = t2648*t3968;
  t4003 = t3923 + t3999;
  t4008 = t2648*t3918;
  t4011 = t2417*t3968;
  t4034 = t4008 + t4011;
  t4006 = t2345*t4003;
  t4036 = t2862*t4034;
  t4045 = t4006 + t4036;
  t4091 = t2862*t4003;
  t4108 = -1.*t2345*t4034;
  t4121 = t4091 + t4108;
  t4081 = -1.*t2303*t4045;
  t4122 = t3091*t4121;
  t4129 = t4081 + t4122;
  t4166 = t3091*t4045;
  t4174 = t2303*t4121;
  t4186 = t4166 + t4174;
  t2035 = t1290*t236*t704;
  t2088 = t1290*t333*t1136;
  t2162 = t2035 + t2088;
  t4373 = t1290*t333*t236;
  t4380 = -1.*t1290*t704*t1136;
  t4381 = t4373 + t4380;
  t4311 = -1.*t145*t695;
  t4315 = t2162*t1298;
  t4362 = t4311 + t4315;
  t4364 = t2427*t4362;
  t4393 = t4381*t2567;
  t4403 = t4364 + t4393;
  t4414 = t2427*t4381;
  t4420 = -1.*t4362*t2567;
  t4446 = t4414 + t4420;
  t4413 = -1.*t2417*t4403;
  t4452 = t2648*t4446;
  t4457 = t4413 + t4452;
  t4475 = t2648*t4403;
  t4485 = t2417*t4446;
  t4488 = t4475 + t4485;
  t4465 = t2345*t4457;
  t4494 = t2862*t4488;
  t4495 = t4465 + t4494;
  t4535 = t2862*t4457;
  t4538 = -1.*t2345*t4488;
  t4543 = t4535 + t4538;
  t4521 = -1.*t2303*t4495;
  t4548 = t3091*t4543;
  t4550 = t4521 + t4548;
  t4567 = t3091*t4495;
  t4578 = t2303*t4543;
  t4598 = t4567 + t4578;
  t3308 = t2289*t3293;
  t3516 = t3315*t3486;
  t3542 = t3308 + t3516;
  t3557 = t3315*t3293;
  t3623 = -1.*t2289*t3486;
  t3664 = t3557 + t3623;
  t4143 = t2289*t4129;
  t4199 = t3315*t4186;
  t4206 = t4143 + t4199;
  t4224 = t3315*t4129;
  t4260 = -1.*t2289*t4186;
  t4271 = t4224 + t4260;
  t4562 = t2289*t4550;
  t4604 = t3315*t4598;
  t4611 = t4562 + t4604;
  t4638 = t3315*t4550;
  t4642 = -1.*t2289*t4598;
  t4670 = t4638 + t4642;
  p_output1[0]=-1.*t1230*t145 + t1290*t1298*t665;
  p_output1[1]=-1.*t145*t1778 + t1290*t1298*t570;
  p_output1[2]=-1.*t145*t2162 - 1.*t1298*t695;
  p_output1[3]=0.642788*t3542 + 0.766044*t3664;
  p_output1[4]=0.642788*t4206 + 0.766044*t4271;
  p_output1[5]=0.642788*t4611 + 0.766044*t4670;
  p_output1[6]=-0.766044*t3542 + 0.642788*t3664;
  p_output1[7]=-0.766044*t4206 + 0.642788*t4271;
  p_output1[8]=-0.766044*t4611 + 0.642788*t4670;
}



void R_LeftToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
