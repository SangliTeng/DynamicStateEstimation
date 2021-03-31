/*
 * Automatically Generated from Mathematica.
 * Wed 12 Feb 2020 15:28:43 GMT-08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_ankle_joint_right_src.h"

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
  double t2675;
  double t2883;
  double t1843;
  double t2709;
  double t3189;
  double t3475;
  double t2880;
  double t3272;
  double t3339;
  double t1463;
  double t3496;
  double t3547;
  double t3612;
  double t3640;
  double t3347;
  double t3613;
  double t3620;
  double t1237;
  double t3651;
  double t4074;
  double t4158;
  double t4167;
  double t4171;
  double t4182;
  double t4283;
  double t4328;
  double t4333;
  double t4426;
  double t3631;
  double t4340;
  double t4383;
  double t860;
  double t4430;
  double t4481;
  double t4506;
  double t4561;
  double t4390;
  double t4555;
  double t4558;
  double t467;
  double t4575;
  double t4576;
  double t4577;
  double t146;
  double t4784;
  double t4871;
  double t4873;
  double t4886;
  double t4912;
  double t4914;
  double t4876;
  double t4921;
  double t5009;
  double t5045;
  double t5051;
  double t5054;
  double t5069;
  double t5076;
  double t5091;
  double t5030;
  double t5141;
  double t5148;
  double t5174;
  double t5177;
  double t5188;
  double t4647;
  double t5169;
  double t5199;
  double t5225;
  double t5239;
  double t5240;
  double t5251;
  double t5424;
  double t5428;
  double t5450;
  double t5463;
  double t5467;
  double t5470;
  double t5506;
  double t5512;
  double t5517;
  double t5454;
  double t5539;
  double t5622;
  double t5633;
  double t5676;
  double t5702;
  double t5628;
  double t5710;
  double t5731;
  double t5751;
  double t5756;
  double t5773;
  double t4559;
  double t4600;
  double t4618;
  double t4727;
  double t4728;
  double t4734;
  double t5235;
  double t5269;
  double t5274;
  double t5350;
  double t5353;
  double t5368;
  double t5732;
  double t5784;
  double t5890;
  double t5911;
  double t5965;
  double t5970;
  t2675 = Cos(var1[5]);
  t2883 = Sin(var1[3]);
  t1843 = Cos(var1[3]);
  t2709 = Sin(var1[4]);
  t3189 = Sin(var1[5]);
  t3475 = Sin(var1[13]);
  t2880 = t1843*t2675*t2709;
  t3272 = t2883*t3189;
  t3339 = t2880 + t3272;
  t1463 = Cos(var1[13]);
  t3496 = -1.*t2675*t2883;
  t3547 = t1843*t2709*t3189;
  t3612 = t3496 + t3547;
  t3640 = Cos(var1[15]);
  t3347 = t1463*t3339;
  t3613 = -1.*t3475*t3612;
  t3620 = t3347 + t3613;
  t1237 = Sin(var1[15]);
  t3651 = Cos(var1[14]);
  t4074 = Cos(var1[4]);
  t4158 = t3651*t1843*t4074;
  t4167 = Sin(var1[14]);
  t4171 = t3475*t3339;
  t4182 = t1463*t3612;
  t4283 = t4171 + t4182;
  t4328 = t4167*t4283;
  t4333 = t4158 + t4328;
  t4426 = Cos(var1[16]);
  t3631 = t1237*t3620;
  t4340 = t3640*t4333;
  t4383 = t3631 + t4340;
  t860 = Sin(var1[16]);
  t4430 = t3640*t3620;
  t4481 = -1.*t1237*t4333;
  t4506 = t4430 + t4481;
  t4561 = Cos(var1[17]);
  t4390 = -1.*t860*t4383;
  t4555 = t4426*t4506;
  t4558 = t4390 + t4555;
  t467 = Sin(var1[17]);
  t4575 = t4426*t4383;
  t4576 = t860*t4506;
  t4577 = t4575 + t4576;
  t146 = Sin(var1[18]);
  t4784 = t2675*t2883*t2709;
  t4871 = -1.*t1843*t3189;
  t4873 = t4784 + t4871;
  t4886 = t1843*t2675;
  t4912 = t2883*t2709*t3189;
  t4914 = t4886 + t4912;
  t4876 = t1463*t4873;
  t4921 = -1.*t3475*t4914;
  t5009 = t4876 + t4921;
  t5045 = t3651*t4074*t2883;
  t5051 = t3475*t4873;
  t5054 = t1463*t4914;
  t5069 = t5051 + t5054;
  t5076 = t4167*t5069;
  t5091 = t5045 + t5076;
  t5030 = t1237*t5009;
  t5141 = t3640*t5091;
  t5148 = t5030 + t5141;
  t5174 = t3640*t5009;
  t5177 = -1.*t1237*t5091;
  t5188 = t5174 + t5177;
  t4647 = Cos(var1[18]);
  t5169 = -1.*t860*t5148;
  t5199 = t4426*t5188;
  t5225 = t5169 + t5199;
  t5239 = t4426*t5148;
  t5240 = t860*t5188;
  t5251 = t5239 + t5240;
  t5424 = t1463*t4074*t2675;
  t5428 = -1.*t4074*t3475*t3189;
  t5450 = t5424 + t5428;
  t5463 = -1.*t3651*t2709;
  t5467 = t4074*t2675*t3475;
  t5470 = t1463*t4074*t3189;
  t5506 = t5467 + t5470;
  t5512 = t4167*t5506;
  t5517 = t5463 + t5512;
  t5454 = t1237*t5450;
  t5539 = t3640*t5517;
  t5622 = t5454 + t5539;
  t5633 = t3640*t5450;
  t5676 = -1.*t1237*t5517;
  t5702 = t5633 + t5676;
  t5628 = -1.*t860*t5622;
  t5710 = t4426*t5702;
  t5731 = t5628 + t5710;
  t5751 = t4426*t5622;
  t5756 = t860*t5702;
  t5773 = t5751 + t5756;
  t4559 = t467*t4558;
  t4600 = t4561*t4577;
  t4618 = t4559 + t4600;
  t4727 = t4561*t4558;
  t4728 = -1.*t467*t4577;
  t4734 = t4727 + t4728;
  t5235 = t467*t5225;
  t5269 = t4561*t5251;
  t5274 = t5235 + t5269;
  t5350 = t4561*t5225;
  t5353 = -1.*t467*t5251;
  t5368 = t5350 + t5353;
  t5732 = t467*t5731;
  t5784 = t4561*t5773;
  t5890 = t5732 + t5784;
  t5911 = t4561*t5731;
  t5965 = -1.*t467*t5773;
  t5970 = t5911 + t5965;
  p_output1[0]=t146*t4618 - 1.*t4647*t4734;
  p_output1[1]=t146*t5274 - 1.*t4647*t5368;
  p_output1[2]=t146*t5890 - 1.*t4647*t5970;
  p_output1[3]=t4618*t4647 + t146*t4734;
  p_output1[4]=t4647*t5274 + t146*t5368;
  p_output1[5]=t4647*t5890 + t146*t5970;
  p_output1[6]=t1843*t4074*t4167 - 1.*t3651*t4283;
  p_output1[7]=t2883*t4074*t4167 - 1.*t3651*t5069;
  p_output1[8]=-1.*t2709*t4167 - 1.*t3651*t5506;
}



void R_ankle_joint_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
