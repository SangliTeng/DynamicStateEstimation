/*
 * Automatically Generated from Mathematica.
 * Wed 12 Feb 2020 15:29:22 GMT-08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RightToeBack_src.h"

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
  double t152;
  double t1283;
  double t1364;
  double t1318;
  double t1381;
  double t600;
  double t679;
  double t724;
  double t869;
  double t1139;
  double t1328;
  double t1437;
  double t1451;
  double t1513;
  double t1787;
  double t1851;
  double t1900;
  double t459;
  double t2021;
  double t2081;
  double t2100;
  double t2131;
  double t2142;
  double t2147;
  double t2208;
  double t2229;
  double t2239;
  double t2288;
  double t2533;
  double t2540;
  double t2565;
  double t2594;
  double t2612;
  double t2629;
  double t2704;
  double t2764;
  double t2766;
  double t2834;
  double t2909;
  double t2915;
  double t2922;
  double t3038;
  double t3048;
  double t3085;
  double t3134;
  double t3151;
  double t3192;
  double t3201;
  double t3298;
  double t3336;
  double t3349;
  double t3405;
  double t3426;
  double t3430;
  double t3461;
  double t3519;
  double t3528;
  double t3539;
  double t3602;
  double t3603;
  double t3608;
  double t3636;
  double t3641;
  double t3663;
  double t3698;
  double t3726;
  double t3737;
  double t3743;
  double t3778;
  double t3787;
  double t3788;
  double t751;
  double t886;
  double t920;
  double t1148;
  double t1274;
  double t1566;
  double t1610;
  double t1630;
  double t1632;
  double t1963;
  double t1971;
  double t1989;
  double t3959;
  double t3965;
  double t4006;
  double t4041;
  double t4072;
  double t4075;
  double t2170;
  double t2217;
  double t2218;
  double t4148;
  double t4153;
  double t4213;
  double t2489;
  double t2498;
  double t2520;
  double t2630;
  double t2719;
  double t2758;
  double t4250;
  double t4252;
  double t4267;
  double t4338;
  double t4344;
  double t4347;
  double t2875;
  double t2890;
  double t2899;
  double t3104;
  double t3135;
  double t3147;
  double t4364;
  double t4368;
  double t4378;
  double t4421;
  double t4430;
  double t4434;
  double t3227;
  double t3257;
  double t3294;
  double t3436;
  double t3484;
  double t3511;
  double t4450;
  double t4473;
  double t4493;
  double t4507;
  double t4511;
  double t4520;
  double t3562;
  double t3580;
  double t3586;
  double t3690;
  double t3700;
  double t3701;
  double t4530;
  double t4533;
  double t4548;
  double t4565;
  double t4585;
  double t4587;
  double t3758;
  double t3767;
  double t3769;
  double t4598;
  double t4599;
  double t4608;
  double t4616;
  double t4618;
  double t4630;
  double t4709;
  double t4712;
  double t4715;
  double t4720;
  double t4722;
  double t4725;
  double t4754;
  double t4755;
  double t4759;
  double t4766;
  double t4769;
  double t4776;
  double t4814;
  double t4831;
  double t4833;
  double t4836;
  double t4839;
  double t4840;
  double t4846;
  double t4849;
  double t4851;
  double t4859;
  double t4862;
  double t4864;
  double t4881;
  double t4883;
  double t4885;
  double t4890;
  double t4891;
  double t4899;
  double t4910;
  double t4913;
  double t4928;
  t152 = Cos(var1[3]);
  t1283 = Cos(var1[5]);
  t1364 = Sin(var1[3]);
  t1318 = Sin(var1[4]);
  t1381 = Sin(var1[5]);
  t600 = Cos(var1[14]);
  t679 = -1.*t600;
  t724 = 1. + t679;
  t869 = Sin(var1[14]);
  t1139 = Sin(var1[13]);
  t1328 = t152*t1283*t1318;
  t1437 = t1364*t1381;
  t1451 = t1328 + t1437;
  t1513 = Cos(var1[13]);
  t1787 = -1.*t1283*t1364;
  t1851 = t152*t1318*t1381;
  t1900 = t1787 + t1851;
  t459 = Cos(var1[4]);
  t2021 = t1139*t1451;
  t2081 = t1513*t1900;
  t2100 = t2021 + t2081;
  t2131 = Cos(var1[15]);
  t2142 = -1.*t2131;
  t2147 = 1. + t2142;
  t2208 = Sin(var1[15]);
  t2229 = t1513*t1451;
  t2239 = -1.*t1139*t1900;
  t2288 = t2229 + t2239;
  t2533 = t600*t152*t459;
  t2540 = t869*t2100;
  t2565 = t2533 + t2540;
  t2594 = Cos(var1[16]);
  t2612 = -1.*t2594;
  t2629 = 1. + t2612;
  t2704 = Sin(var1[16]);
  t2764 = t2208*t2288;
  t2766 = t2131*t2565;
  t2834 = t2764 + t2766;
  t2909 = t2131*t2288;
  t2915 = -1.*t2208*t2565;
  t2922 = t2909 + t2915;
  t3038 = Cos(var1[17]);
  t3048 = -1.*t3038;
  t3085 = 1. + t3048;
  t3134 = Sin(var1[17]);
  t3151 = -1.*t2704*t2834;
  t3192 = t2594*t2922;
  t3201 = t3151 + t3192;
  t3298 = t2594*t2834;
  t3336 = t2704*t2922;
  t3349 = t3298 + t3336;
  t3405 = Cos(var1[18]);
  t3426 = -1.*t3405;
  t3430 = 1. + t3426;
  t3461 = Sin(var1[18]);
  t3519 = t3134*t3201;
  t3528 = t3038*t3349;
  t3539 = t3519 + t3528;
  t3602 = t3038*t3201;
  t3603 = -1.*t3134*t3349;
  t3608 = t3602 + t3603;
  t3636 = Cos(var1[19]);
  t3641 = -1.*t3636;
  t3663 = 1. + t3641;
  t3698 = Sin(var1[19]);
  t3726 = -1.*t3461*t3539;
  t3737 = t3405*t3608;
  t3743 = t3726 + t3737;
  t3778 = t3405*t3539;
  t3787 = t3461*t3608;
  t3788 = t3778 + t3787;
  t751 = -0.049*t724;
  t886 = -0.135*t869;
  t920 = 0. + t751 + t886;
  t1148 = 0.135*t1139;
  t1274 = 0. + t1148;
  t1566 = -1.*t1513;
  t1610 = 1. + t1566;
  t1630 = -0.135*t1610;
  t1632 = 0. + t1630;
  t1963 = -0.135*t724;
  t1971 = 0.049*t869;
  t1989 = 0. + t1963 + t1971;
  t3959 = t1283*t1364*t1318;
  t3965 = -1.*t152*t1381;
  t4006 = t3959 + t3965;
  t4041 = t152*t1283;
  t4072 = t1364*t1318*t1381;
  t4075 = t4041 + t4072;
  t2170 = -0.09*t2147;
  t2217 = 0.049*t2208;
  t2218 = 0. + t2170 + t2217;
  t4148 = t1139*t4006;
  t4153 = t1513*t4075;
  t4213 = t4148 + t4153;
  t2489 = -0.049*t2147;
  t2498 = -0.09*t2208;
  t2520 = 0. + t2489 + t2498;
  t2630 = -0.049*t2629;
  t2719 = -0.21*t2704;
  t2758 = 0. + t2630 + t2719;
  t4250 = t1513*t4006;
  t4252 = -1.*t1139*t4075;
  t4267 = t4250 + t4252;
  t4338 = t600*t459*t1364;
  t4344 = t869*t4213;
  t4347 = t4338 + t4344;
  t2875 = -0.21*t2629;
  t2890 = 0.049*t2704;
  t2899 = 0. + t2875 + t2890;
  t3104 = -0.2707*t3085;
  t3135 = 0.0016*t3134;
  t3147 = 0. + t3104 + t3135;
  t4364 = t2208*t4267;
  t4368 = t2131*t4347;
  t4378 = t4364 + t4368;
  t4421 = t2131*t4267;
  t4430 = -1.*t2208*t4347;
  t4434 = t4421 + t4430;
  t3227 = -0.0016*t3085;
  t3257 = -0.2707*t3134;
  t3294 = 0. + t3227 + t3257;
  t3436 = 0.0184*t3430;
  t3484 = -0.7055*t3461;
  t3511 = 0. + t3436 + t3484;
  t4450 = -1.*t2704*t4378;
  t4473 = t2594*t4434;
  t4493 = t4450 + t4473;
  t4507 = t2594*t4378;
  t4511 = t2704*t4434;
  t4520 = t4507 + t4511;
  t3562 = -0.7055*t3430;
  t3580 = -0.0184*t3461;
  t3586 = 0. + t3562 + t3580;
  t3690 = -1.1135*t3663;
  t3700 = 0.0216*t3698;
  t3701 = 0. + t3690 + t3700;
  t4530 = t3134*t4493;
  t4533 = t3038*t4520;
  t4548 = t4530 + t4533;
  t4565 = t3038*t4493;
  t4585 = -1.*t3134*t4520;
  t4587 = t4565 + t4585;
  t3758 = -0.0216*t3663;
  t3767 = -1.1135*t3698;
  t3769 = 0. + t3758 + t3767;
  t4598 = -1.*t3461*t4548;
  t4599 = t3405*t4587;
  t4608 = t4598 + t4599;
  t4616 = t3405*t4548;
  t4618 = t3461*t4587;
  t4630 = t4616 + t4618;
  t4709 = t459*t1283*t1139;
  t4712 = t1513*t459*t1381;
  t4715 = t4709 + t4712;
  t4720 = t1513*t459*t1283;
  t4722 = -1.*t459*t1139*t1381;
  t4725 = t4720 + t4722;
  t4754 = -1.*t600*t1318;
  t4755 = t869*t4715;
  t4759 = t4754 + t4755;
  t4766 = t2208*t4725;
  t4769 = t2131*t4759;
  t4776 = t4766 + t4769;
  t4814 = t2131*t4725;
  t4831 = -1.*t2208*t4759;
  t4833 = t4814 + t4831;
  t4836 = -1.*t2704*t4776;
  t4839 = t2594*t4833;
  t4840 = t4836 + t4839;
  t4846 = t2594*t4776;
  t4849 = t2704*t4833;
  t4851 = t4846 + t4849;
  t4859 = t3134*t4840;
  t4862 = t3038*t4851;
  t4864 = t4859 + t4862;
  t4881 = t3038*t4840;
  t4883 = -1.*t3134*t4851;
  t4885 = t4881 + t4883;
  t4890 = -1.*t3461*t4864;
  t4891 = t3405*t4885;
  t4899 = t4890 + t4891;
  t4910 = t3405*t4864;
  t4913 = t3461*t4885;
  t4928 = t4910 + t4913;
  p_output1[0]=0. + t1274*t1451 + t1632*t1900 + t1989*t2100 + t2218*t2288 + t2520*t2565 + t2758*t2834 + t2899*t2922 + t3147*t3201 + t3294*t3349 + t3511*t3539 + t3586*t3608 + t3701*t3743 + t3769*t3788 - 0.027251*(t3698*t3743 + t3636*t3788) - 1.200144*(t3636*t3743 - 1.*t3698*t3788) - 0.1305*(t2100*t600 - 1.*t152*t459*t869) + t152*t459*t920 + var1[0];
  p_output1[1]=0. + t1274*t4006 + t1632*t4075 + t1989*t4213 + t2218*t4267 + t2520*t4347 + t2758*t4378 + t2899*t4434 + t3147*t4493 + t3294*t4520 + t3511*t4548 + t3586*t4587 + t3701*t4608 + t3769*t4630 - 0.027251*(t3698*t4608 + t3636*t4630) - 1.200144*(t3636*t4608 - 1.*t3698*t4630) - 0.1305*(t4213*t600 - 1.*t1364*t459*t869) + t1364*t459*t920 + var1[1];
  p_output1[2]=0. + t1274*t1283*t459 + t1381*t1632*t459 + t1989*t4715 + t2218*t4725 + t2520*t4759 + t2758*t4776 + t2899*t4833 + t3147*t4840 + t3294*t4851 + t3511*t4864 + t3586*t4885 + t3701*t4899 + t3769*t4928 - 0.027251*(t3698*t4899 + t3636*t4928) - 1.200144*(t3636*t4899 - 1.*t3698*t4928) - 0.1305*(t4715*t600 + t1318*t869) - 1.*t1318*t920 + var1[2];
}



void p_RightToeBack_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
