/*
 * Automatically Generated from Mathematica.
 * Wed 12 Feb 2020 15:29:15 GMT-08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RightToeFront_src.h"

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
  double t62;
  double t1197;
  double t1402;
  double t1311;
  double t1411;
  double t221;
  double t341;
  double t597;
  double t750;
  double t991;
  double t1395;
  double t1480;
  double t1504;
  double t1811;
  double t2111;
  double t2187;
  double t2301;
  double t210;
  double t2518;
  double t2702;
  double t2744;
  double t2773;
  double t2817;
  double t2829;
  double t2953;
  double t3049;
  double t3053;
  double t3064;
  double t3335;
  double t3336;
  double t3385;
  double t3416;
  double t3434;
  double t3466;
  double t3480;
  double t3577;
  double t3586;
  double t3658;
  double t3867;
  double t3873;
  double t3892;
  double t3964;
  double t3968;
  double t3976;
  double t4000;
  double t4108;
  double t4110;
  double t4125;
  double t4234;
  double t4238;
  double t4279;
  double t4350;
  double t4380;
  double t4416;
  double t4486;
  double t4540;
  double t4565;
  double t4581;
  double t4685;
  double t4691;
  double t4705;
  double t4716;
  double t4761;
  double t4775;
  double t4789;
  double t4798;
  double t4800;
  double t4819;
  double t4853;
  double t4857;
  double t4867;
  double t685;
  double t874;
  double t967;
  double t1077;
  double t1153;
  double t1939;
  double t1985;
  double t2030;
  double t2094;
  double t2348;
  double t2375;
  double t2379;
  double t5016;
  double t5024;
  double t5026;
  double t5043;
  double t5069;
  double t5083;
  double t2933;
  double t2954;
  double t2980;
  double t5092;
  double t5096;
  double t5115;
  double t3303;
  double t3314;
  double t3328;
  double t3472;
  double t3500;
  double t3569;
  double t5128;
  double t5159;
  double t5183;
  double t5328;
  double t5354;
  double t5359;
  double t3746;
  double t3806;
  double t3819;
  double t3977;
  double t4065;
  double t4092;
  double t5371;
  double t5386;
  double t5407;
  double t5442;
  double t5461;
  double t5466;
  double t4189;
  double t4220;
  double t4222;
  double t4468;
  double t4532;
  double t4537;
  double t5502;
  double t5513;
  double t5534;
  double t5565;
  double t5566;
  double t5571;
  double t4599;
  double t4608;
  double t4639;
  double t4779;
  double t4791;
  double t4795;
  double t5601;
  double t5621;
  double t5654;
  double t5667;
  double t5669;
  double t5679;
  double t4827;
  double t4832;
  double t4844;
  double t5748;
  double t5759;
  double t5765;
  double t5802;
  double t5867;
  double t5872;
  double t5996;
  double t6008;
  double t6017;
  double t6055;
  double t6057;
  double t6067;
  double t6116;
  double t6122;
  double t6125;
  double t6134;
  double t6144;
  double t6145;
  double t6157;
  double t6158;
  double t6162;
  double t6185;
  double t6209;
  double t6215;
  double t6259;
  double t6262;
  double t6268;
  double t6296;
  double t6301;
  double t6317;
  double t6322;
  double t6325;
  double t6342;
  double t6353;
  double t6356;
  double t6360;
  double t6369;
  double t6372;
  double t6373;
  t62 = Cos(var1[3]);
  t1197 = Cos(var1[5]);
  t1402 = Sin(var1[3]);
  t1311 = Sin(var1[4]);
  t1411 = Sin(var1[5]);
  t221 = Cos(var1[14]);
  t341 = -1.*t221;
  t597 = 1. + t341;
  t750 = Sin(var1[14]);
  t991 = Sin(var1[13]);
  t1395 = t62*t1197*t1311;
  t1480 = t1402*t1411;
  t1504 = t1395 + t1480;
  t1811 = Cos(var1[13]);
  t2111 = -1.*t1197*t1402;
  t2187 = t62*t1311*t1411;
  t2301 = t2111 + t2187;
  t210 = Cos(var1[4]);
  t2518 = t991*t1504;
  t2702 = t1811*t2301;
  t2744 = t2518 + t2702;
  t2773 = Cos(var1[15]);
  t2817 = -1.*t2773;
  t2829 = 1. + t2817;
  t2953 = Sin(var1[15]);
  t3049 = t1811*t1504;
  t3053 = -1.*t991*t2301;
  t3064 = t3049 + t3053;
  t3335 = t221*t62*t210;
  t3336 = t750*t2744;
  t3385 = t3335 + t3336;
  t3416 = Cos(var1[16]);
  t3434 = -1.*t3416;
  t3466 = 1. + t3434;
  t3480 = Sin(var1[16]);
  t3577 = t2953*t3064;
  t3586 = t2773*t3385;
  t3658 = t3577 + t3586;
  t3867 = t2773*t3064;
  t3873 = -1.*t2953*t3385;
  t3892 = t3867 + t3873;
  t3964 = Cos(var1[17]);
  t3968 = -1.*t3964;
  t3976 = 1. + t3968;
  t4000 = Sin(var1[17]);
  t4108 = -1.*t3480*t3658;
  t4110 = t3416*t3892;
  t4125 = t4108 + t4110;
  t4234 = t3416*t3658;
  t4238 = t3480*t3892;
  t4279 = t4234 + t4238;
  t4350 = Cos(var1[18]);
  t4380 = -1.*t4350;
  t4416 = 1. + t4380;
  t4486 = Sin(var1[18]);
  t4540 = t4000*t4125;
  t4565 = t3964*t4279;
  t4581 = t4540 + t4565;
  t4685 = t3964*t4125;
  t4691 = -1.*t4000*t4279;
  t4705 = t4685 + t4691;
  t4716 = Cos(var1[19]);
  t4761 = -1.*t4716;
  t4775 = 1. + t4761;
  t4789 = Sin(var1[19]);
  t4798 = -1.*t4486*t4581;
  t4800 = t4350*t4705;
  t4819 = t4798 + t4800;
  t4853 = t4350*t4581;
  t4857 = t4486*t4705;
  t4867 = t4853 + t4857;
  t685 = -0.049*t597;
  t874 = -0.135*t750;
  t967 = 0. + t685 + t874;
  t1077 = 0.135*t991;
  t1153 = 0. + t1077;
  t1939 = -1.*t1811;
  t1985 = 1. + t1939;
  t2030 = -0.135*t1985;
  t2094 = 0. + t2030;
  t2348 = -0.135*t597;
  t2375 = 0.049*t750;
  t2379 = 0. + t2348 + t2375;
  t5016 = t1197*t1402*t1311;
  t5024 = -1.*t62*t1411;
  t5026 = t5016 + t5024;
  t5043 = t62*t1197;
  t5069 = t1402*t1311*t1411;
  t5083 = t5043 + t5069;
  t2933 = -0.09*t2829;
  t2954 = 0.049*t2953;
  t2980 = 0. + t2933 + t2954;
  t5092 = t991*t5026;
  t5096 = t1811*t5083;
  t5115 = t5092 + t5096;
  t3303 = -0.049*t2829;
  t3314 = -0.09*t2953;
  t3328 = 0. + t3303 + t3314;
  t3472 = -0.049*t3466;
  t3500 = -0.21*t3480;
  t3569 = 0. + t3472 + t3500;
  t5128 = t1811*t5026;
  t5159 = -1.*t991*t5083;
  t5183 = t5128 + t5159;
  t5328 = t221*t210*t1402;
  t5354 = t750*t5115;
  t5359 = t5328 + t5354;
  t3746 = -0.21*t3466;
  t3806 = 0.049*t3480;
  t3819 = 0. + t3746 + t3806;
  t3977 = -0.2707*t3976;
  t4065 = 0.0016*t4000;
  t4092 = 0. + t3977 + t4065;
  t5371 = t2953*t5183;
  t5386 = t2773*t5359;
  t5407 = t5371 + t5386;
  t5442 = t2773*t5183;
  t5461 = -1.*t2953*t5359;
  t5466 = t5442 + t5461;
  t4189 = -0.0016*t3976;
  t4220 = -0.2707*t4000;
  t4222 = 0. + t4189 + t4220;
  t4468 = 0.0184*t4416;
  t4532 = -0.7055*t4486;
  t4537 = 0. + t4468 + t4532;
  t5502 = -1.*t3480*t5407;
  t5513 = t3416*t5466;
  t5534 = t5502 + t5513;
  t5565 = t3416*t5407;
  t5566 = t3480*t5466;
  t5571 = t5565 + t5566;
  t4599 = -0.7055*t4416;
  t4608 = -0.0184*t4486;
  t4639 = 0. + t4599 + t4608;
  t4779 = -1.1135*t4775;
  t4791 = 0.0216*t4789;
  t4795 = 0. + t4779 + t4791;
  t5601 = t4000*t5534;
  t5621 = t3964*t5571;
  t5654 = t5601 + t5621;
  t5667 = t3964*t5534;
  t5669 = -1.*t4000*t5571;
  t5679 = t5667 + t5669;
  t4827 = -0.0216*t4775;
  t4832 = -1.1135*t4789;
  t4844 = 0. + t4827 + t4832;
  t5748 = -1.*t4486*t5654;
  t5759 = t4350*t5679;
  t5765 = t5748 + t5759;
  t5802 = t4350*t5654;
  t5867 = t4486*t5679;
  t5872 = t5802 + t5867;
  t5996 = t210*t1197*t991;
  t6008 = t1811*t210*t1411;
  t6017 = t5996 + t6008;
  t6055 = t1811*t210*t1197;
  t6057 = -1.*t210*t991*t1411;
  t6067 = t6055 + t6057;
  t6116 = -1.*t221*t1311;
  t6122 = t750*t6017;
  t6125 = t6116 + t6122;
  t6134 = t2953*t6067;
  t6144 = t2773*t6125;
  t6145 = t6134 + t6144;
  t6157 = t2773*t6067;
  t6158 = -1.*t2953*t6125;
  t6162 = t6157 + t6158;
  t6185 = -1.*t3480*t6145;
  t6209 = t3416*t6162;
  t6215 = t6185 + t6209;
  t6259 = t3416*t6145;
  t6262 = t3480*t6162;
  t6268 = t6259 + t6262;
  t6296 = t4000*t6215;
  t6301 = t3964*t6268;
  t6317 = t6296 + t6301;
  t6322 = t3964*t6215;
  t6325 = -1.*t4000*t6268;
  t6342 = t6322 + t6325;
  t6353 = -1.*t4486*t6317;
  t6356 = t4350*t6342;
  t6360 = t6353 + t6356;
  t6369 = t4350*t6317;
  t6372 = t4486*t6342;
  t6373 = t6369 + t6372;
  p_output1[0]=0. + t1153*t1504 + t2094*t2301 + t2379*t2744 + t2980*t3064 + t3328*t3385 + t3569*t3658 + t3819*t3892 + t4092*t4125 + t4222*t4279 + t4537*t4581 + t4639*t4705 + t4795*t4819 + t4844*t4867 + 0.088451*(t4789*t4819 + t4716*t4867) - 1.062256*(t4716*t4819 - 1.*t4789*t4867) - 0.1305*(t221*t2744 - 1.*t210*t62*t750) + t210*t62*t967 + var1[0];
  p_output1[1]=0. + t1153*t5026 + t2094*t5083 + t2379*t5115 + t2980*t5183 + t3328*t5359 + t3569*t5407 + t3819*t5466 + t4092*t5534 + t4222*t5571 + t4537*t5654 + t4639*t5679 + t4795*t5765 + t4844*t5872 + 0.088451*(t4789*t5765 + t4716*t5872) - 1.062256*(t4716*t5765 - 1.*t4789*t5872) - 0.1305*(t221*t5115 - 1.*t1402*t210*t750) + t1402*t210*t967 + var1[1];
  p_output1[2]=0. + t1153*t1197*t210 + t1411*t2094*t210 + t2379*t6017 + t2980*t6067 + t3328*t6125 + t3569*t6145 + t3819*t6162 + t4092*t6215 + t4222*t6268 + t4537*t6317 + t4639*t6342 + t4795*t6360 + t4844*t6373 + 0.088451*(t4789*t6360 + t4716*t6373) - 1.062256*(t4716*t6360 - 1.*t4789*t6373) - 0.1305*(t221*t6017 + t1311*t750) - 1.*t1311*t967 + var1[2];
}



void p_RightToeFront_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
