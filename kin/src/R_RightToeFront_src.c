/*
 * Automatically Generated from Mathematica.
 * Wed 12 Feb 2020 15:29:19 GMT-08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RightToeFront_src.h"

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
  double t163;
  double t834;
  double t915;
  double t839;
  double t995;
  double t229;
  double t457;
  double t745;
  double t783;
  double t1074;
  double t914;
  double t1027;
  double t1057;
  double t1114;
  double t1120;
  double t1133;
  double t1061;
  double t1136;
  double t1140;
  double t2516;
  double t2490;
  double t2496;
  double t2498;
  double t2453;
  double t2520;
  double t2533;
  double t2572;
  double t2745;
  double t2501;
  double t2679;
  double t2681;
  double t2372;
  double t2758;
  double t2759;
  double t2764;
  double t2887;
  double t2726;
  double t2833;
  double t2839;
  double t2370;
  double t2922;
  double t2926;
  double t2942;
  double t3040;
  double t2841;
  double t2992;
  double t3019;
  double t2354;
  double t3048;
  double t3057;
  double t3078;
  double t3134;
  double t3028;
  double t3084;
  double t3085;
  double t2351;
  double t3147;
  double t3192;
  double t3208;
  double t1328;
  double t1445;
  double t1508;
  double t1574;
  double t1632;
  double t1651;
  double t1566;
  double t1662;
  double t1873;
  double t3450;
  double t3459;
  double t3479;
  double t3489;
  double t3498;
  double t3502;
  double t3484;
  double t3511;
  double t3520;
  double t3548;
  double t3549;
  double t3580;
  double t3540;
  double t3586;
  double t3602;
  double t3625;
  double t3627;
  double t3647;
  double t3608;
  double t3700;
  double t3754;
  double t3788;
  double t3789;
  double t3796;
  double t3782;
  double t3846;
  double t3847;
  double t3868;
  double t3907;
  double t3911;
  double t2141;
  double t2142;
  double t2163;
  double t3972;
  double t3973;
  double t4014;
  double t4044;
  double t4058;
  double t4059;
  double t4030;
  double t4072;
  double t4085;
  double t4133;
  double t4145;
  double t4148;
  double t4125;
  double t4153;
  double t4157;
  double t4178;
  double t4192;
  double t4209;
  double t4175;
  double t4213;
  double t4214;
  double t4225;
  double t4226;
  double t4230;
  double t4219;
  double t4249;
  double t4250;
  double t4253;
  double t4267;
  double t4269;
  double t3117;
  double t3213;
  double t3264;
  double t3298;
  double t3329;
  double t3336;
  double t3853;
  double t3918;
  double t3933;
  double t3936;
  double t3938;
  double t3947;
  double t4252;
  double t4295;
  double t4299;
  double t4313;
  double t4322;
  double t4324;
  t163 = Cos(var1[3]);
  t834 = Cos(var1[5]);
  t915 = Sin(var1[3]);
  t839 = Sin(var1[4]);
  t995 = Sin(var1[5]);
  t229 = Cos(var1[4]);
  t457 = Sin(var1[14]);
  t745 = Cos(var1[14]);
  t783 = Sin(var1[13]);
  t1074 = Cos(var1[13]);
  t914 = t163*t834*t839;
  t1027 = t915*t995;
  t1057 = t914 + t1027;
  t1114 = -1.*t834*t915;
  t1120 = t163*t839*t995;
  t1133 = t1114 + t1120;
  t1061 = t783*t1057;
  t1136 = t1074*t1133;
  t1140 = t1061 + t1136;
  t2516 = Cos(var1[15]);
  t2490 = t1074*t1057;
  t2496 = -1.*t783*t1133;
  t2498 = t2490 + t2496;
  t2453 = Sin(var1[15]);
  t2520 = t745*t163*t229;
  t2533 = t457*t1140;
  t2572 = t2520 + t2533;
  t2745 = Cos(var1[16]);
  t2501 = t2453*t2498;
  t2679 = t2516*t2572;
  t2681 = t2501 + t2679;
  t2372 = Sin(var1[16]);
  t2758 = t2516*t2498;
  t2759 = -1.*t2453*t2572;
  t2764 = t2758 + t2759;
  t2887 = Cos(var1[17]);
  t2726 = -1.*t2372*t2681;
  t2833 = t2745*t2764;
  t2839 = t2726 + t2833;
  t2370 = Sin(var1[17]);
  t2922 = t2745*t2681;
  t2926 = t2372*t2764;
  t2942 = t2922 + t2926;
  t3040 = Cos(var1[18]);
  t2841 = t2370*t2839;
  t2992 = t2887*t2942;
  t3019 = t2841 + t2992;
  t2354 = Sin(var1[18]);
  t3048 = t2887*t2839;
  t3057 = -1.*t2370*t2942;
  t3078 = t3048 + t3057;
  t3134 = Cos(var1[19]);
  t3028 = -1.*t2354*t3019;
  t3084 = t3040*t3078;
  t3085 = t3028 + t3084;
  t2351 = Sin(var1[19]);
  t3147 = t3040*t3019;
  t3192 = t2354*t3078;
  t3208 = t3147 + t3192;
  t1328 = t834*t915*t839;
  t1445 = -1.*t163*t995;
  t1508 = t1328 + t1445;
  t1574 = t163*t834;
  t1632 = t915*t839*t995;
  t1651 = t1574 + t1632;
  t1566 = t783*t1508;
  t1662 = t1074*t1651;
  t1873 = t1566 + t1662;
  t3450 = t1074*t1508;
  t3459 = -1.*t783*t1651;
  t3479 = t3450 + t3459;
  t3489 = t745*t229*t915;
  t3498 = t457*t1873;
  t3502 = t3489 + t3498;
  t3484 = t2453*t3479;
  t3511 = t2516*t3502;
  t3520 = t3484 + t3511;
  t3548 = t2516*t3479;
  t3549 = -1.*t2453*t3502;
  t3580 = t3548 + t3549;
  t3540 = -1.*t2372*t3520;
  t3586 = t2745*t3580;
  t3602 = t3540 + t3586;
  t3625 = t2745*t3520;
  t3627 = t2372*t3580;
  t3647 = t3625 + t3627;
  t3608 = t2370*t3602;
  t3700 = t2887*t3647;
  t3754 = t3608 + t3700;
  t3788 = t2887*t3602;
  t3789 = -1.*t2370*t3647;
  t3796 = t3788 + t3789;
  t3782 = -1.*t2354*t3754;
  t3846 = t3040*t3796;
  t3847 = t3782 + t3846;
  t3868 = t3040*t3754;
  t3907 = t2354*t3796;
  t3911 = t3868 + t3907;
  t2141 = t229*t834*t783;
  t2142 = t1074*t229*t995;
  t2163 = t2141 + t2142;
  t3972 = t1074*t229*t834;
  t3973 = -1.*t229*t783*t995;
  t4014 = t3972 + t3973;
  t4044 = -1.*t745*t839;
  t4058 = t457*t2163;
  t4059 = t4044 + t4058;
  t4030 = t2453*t4014;
  t4072 = t2516*t4059;
  t4085 = t4030 + t4072;
  t4133 = t2516*t4014;
  t4145 = -1.*t2453*t4059;
  t4148 = t4133 + t4145;
  t4125 = -1.*t2372*t4085;
  t4153 = t2745*t4148;
  t4157 = t4125 + t4153;
  t4178 = t2745*t4085;
  t4192 = t2372*t4148;
  t4209 = t4178 + t4192;
  t4175 = t2370*t4157;
  t4213 = t2887*t4209;
  t4214 = t4175 + t4213;
  t4225 = t2887*t4157;
  t4226 = -1.*t2370*t4209;
  t4230 = t4225 + t4226;
  t4219 = -1.*t2354*t4214;
  t4249 = t3040*t4230;
  t4250 = t4219 + t4249;
  t4253 = t3040*t4214;
  t4267 = t2354*t4230;
  t4269 = t4253 + t4267;
  t3117 = t2351*t3085;
  t3213 = t3134*t3208;
  t3264 = t3117 + t3213;
  t3298 = t3134*t3085;
  t3329 = -1.*t2351*t3208;
  t3336 = t3298 + t3329;
  t3853 = t2351*t3847;
  t3918 = t3134*t3911;
  t3933 = t3853 + t3918;
  t3936 = t3134*t3847;
  t3938 = -1.*t2351*t3911;
  t3947 = t3936 + t3938;
  t4252 = t2351*t4250;
  t4295 = t3134*t4269;
  t4299 = t4252 + t4295;
  t4313 = t3134*t4250;
  t4322 = -1.*t2351*t4269;
  t4324 = t4313 + t4322;
  p_output1[0]=t163*t229*t457 - 1.*t1140*t745;
  p_output1[1]=-1.*t1873*t745 + t229*t457*t915;
  p_output1[2]=-1.*t2163*t745 - 1.*t457*t839;
  p_output1[3]=0.642788*t3264 + 0.766044*t3336;
  p_output1[4]=0.642788*t3933 + 0.766044*t3947;
  p_output1[5]=0.642788*t4299 + 0.766044*t4324;
  p_output1[6]=-0.766044*t3264 + 0.642788*t3336;
  p_output1[7]=-0.766044*t3933 + 0.642788*t3947;
  p_output1[8]=-0.766044*t4299 + 0.642788*t4324;
}



void R_RightToeFront_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
