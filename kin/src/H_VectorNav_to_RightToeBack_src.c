/*
 * Automatically Generated from Mathematica.
 * Wed 23 Oct 2019 10:26:03 GMT-07:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_VectorNav_to_RightToeBack_src.h"

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
  double t622;
  double t2540;
  double t2589;
  double t2158;
  double t2700;
  double t1995;
  double t3136;
  double t3266;
  double t3327;
  double t2577;
  double t2765;
  double t3058;
  double t3355;
  double t1625;
  double t3558;
  double t3605;
  double t3649;
  double t3082;
  double t3368;
  double t3444;
  double t3680;
  double t1598;
  double t3884;
  double t3896;
  double t4023;
  double t3537;
  double t3698;
  double t3721;
  double t4029;
  double t502;
  double t256;
  double t833;
  double t4293;
  double t4296;
  double t4298;
  double t4222;
  double t4229;
  double t4264;
  double t4377;
  double t4387;
  double t4409;
  double t4278;
  double t4352;
  double t4364;
  double t4462;
  double t4470;
  double t4482;
  double t4373;
  double t4414;
  double t4449;
  double t4494;
  double t4502;
  double t4503;
  double t4455;
  double t4485;
  double t4486;
  double t4586;
  double t4591;
  double t4603;
  double t4558;
  double t4560;
  double t4564;
  double t4613;
  double t4618;
  double t4622;
  double t4567;
  double t4605;
  double t4606;
  double t4660;
  double t4670;
  double t4677;
  double t4611;
  double t4639;
  double t4648;
  double t4695;
  double t4700;
  double t4704;
  double t4653;
  double t4685;
  double t4689;
  double t3783;
  double t4065;
  double t4106;
  double t4147;
  double t4163;
  double t4180;
  double t4493;
  double t4510;
  double t4511;
  double t4536;
  double t4544;
  double t4546;
  double t4693;
  double t4705;
  double t4707;
  double t4711;
  double t4719;
  double t4720;
  double t4870;
  double t4871;
  double t4943;
  double t4953;
  double t4974;
  double t4978;
  double t5055;
  double t5065;
  double t4836;
  double t4838;
  double t4849;
  double t4852;
  double t4853;
  double t4858;
  double t4862;
  double t4891;
  double t4893;
  double t4895;
  double t4913;
  double t4916;
  double t4924;
  double t4955;
  double t4957;
  double t4958;
  double t4963;
  double t4967;
  double t4970;
  double t4988;
  double t5013;
  double t5014;
  double t5022;
  double t5027;
  double t5034;
  double t5066;
  double t5077;
  double t5081;
  double t5092;
  double t5095;
  double t5100;
  double t5139;
  double t5141;
  double t5148;
  double t5175;
  double t5176;
  double t5179;
  t622 = Cos(var1[8]);
  t2540 = Cos(var1[10]);
  t2589 = Sin(var1[9]);
  t2158 = Cos(var1[9]);
  t2700 = Sin(var1[10]);
  t1995 = Cos(var1[11]);
  t3136 = -1.*t622*t2540*t2589;
  t3266 = -1.*t622*t2158*t2700;
  t3327 = t3136 + t3266;
  t2577 = t622*t2158*t2540;
  t2765 = -1.*t622*t2589*t2700;
  t3058 = t2577 + t2765;
  t3355 = Sin(var1[11]);
  t1625 = Cos(var1[12]);
  t3558 = t1995*t3327;
  t3605 = -1.*t3058*t3355;
  t3649 = t3558 + t3605;
  t3082 = t1995*t3058;
  t3368 = t3327*t3355;
  t3444 = t3082 + t3368;
  t3680 = Sin(var1[12]);
  t1598 = Cos(var1[13]);
  t3884 = t1625*t3649;
  t3896 = -1.*t3444*t3680;
  t4023 = t3884 + t3896;
  t3537 = t1625*t3444;
  t3698 = t3649*t3680;
  t3721 = t3537 + t3698;
  t4029 = Sin(var1[13]);
  t502 = Cos(var1[7]);
  t256 = Sin(var1[8]);
  t833 = Sin(var1[7]);
  t4293 = -1.*t2158*t833;
  t4296 = -1.*t502*t256*t2589;
  t4298 = t4293 + t4296;
  t4222 = t502*t2158*t256;
  t4229 = -1.*t833*t2589;
  t4264 = t4222 + t4229;
  t4377 = t2540*t4298;
  t4387 = -1.*t4264*t2700;
  t4409 = t4377 + t4387;
  t4278 = t2540*t4264;
  t4352 = t4298*t2700;
  t4364 = t4278 + t4352;
  t4462 = t1995*t4409;
  t4470 = -1.*t4364*t3355;
  t4482 = t4462 + t4470;
  t4373 = t1995*t4364;
  t4414 = t4409*t3355;
  t4449 = t4373 + t4414;
  t4494 = t1625*t4482;
  t4502 = -1.*t4449*t3680;
  t4503 = t4494 + t4502;
  t4455 = t1625*t4449;
  t4485 = t4482*t3680;
  t4486 = t4455 + t4485;
  t4586 = t502*t2158;
  t4591 = -1.*t833*t256*t2589;
  t4603 = t4586 + t4591;
  t4558 = t2158*t833*t256;
  t4560 = t502*t2589;
  t4564 = t4558 + t4560;
  t4613 = t2540*t4603;
  t4618 = -1.*t4564*t2700;
  t4622 = t4613 + t4618;
  t4567 = t2540*t4564;
  t4605 = t4603*t2700;
  t4606 = t4567 + t4605;
  t4660 = t1995*t4622;
  t4670 = -1.*t4606*t3355;
  t4677 = t4660 + t4670;
  t4611 = t1995*t4606;
  t4639 = t4622*t3355;
  t4648 = t4611 + t4639;
  t4695 = t1625*t4677;
  t4700 = -1.*t4648*t3680;
  t4704 = t4695 + t4700;
  t4653 = t1625*t4648;
  t4685 = t4677*t3680;
  t4689 = t4653 + t4685;
  t3783 = t1598*t3721;
  t4065 = t4023*t4029;
  t4106 = t3783 + t4065;
  t4147 = t1598*t4023;
  t4163 = -1.*t3721*t4029;
  t4180 = t4147 + t4163;
  t4493 = t1598*t4486;
  t4510 = t4503*t4029;
  t4511 = t4493 + t4510;
  t4536 = t1598*t4503;
  t4544 = -1.*t4486*t4029;
  t4546 = t4536 + t4544;
  t4693 = t1598*t4689;
  t4705 = t4704*t4029;
  t4707 = t4693 + t4705;
  t4711 = t1598*t4704;
  t4719 = -1.*t4689*t4029;
  t4720 = t4711 + t4719;
  t4870 = -1.*t2540;
  t4871 = 1. + t4870;
  t4943 = -1.*t1995;
  t4953 = 1. + t4943;
  t4974 = -1.*t1625;
  t4978 = 1. + t4974;
  t5055 = -1.*t1598;
  t5065 = 1. + t5055;
  t4836 = -1.*t622;
  t4838 = 1. + t4836;
  t4849 = -1.*t2158;
  t4852 = 1. + t4849;
  t4853 = -0.049*t4852;
  t4858 = -0.09*t2589;
  t4862 = 0. + t4853 + t4858;
  t4891 = -0.049*t4871;
  t4893 = -0.21*t2700;
  t4895 = 0. + t4891 + t4893;
  t4913 = -0.21*t4871;
  t4916 = 0.049*t2700;
  t4924 = 0. + t4913 + t4916;
  t4955 = -0.0016*t4953;
  t4957 = -0.2707*t3355;
  t4958 = 0. + t4955 + t4957;
  t4963 = -0.2707*t4953;
  t4967 = 0.0016*t3355;
  t4970 = 0. + t4963 + t4967;
  t4988 = 0.0184*t4978;
  t5013 = -0.7055*t3680;
  t5014 = 0. + t4988 + t5013;
  t5022 = -0.7055*t4978;
  t5027 = -0.0184*t3680;
  t5034 = 0. + t5022 + t5027;
  t5066 = -0.0216*t5065;
  t5077 = -1.1135*t4029;
  t5081 = 0. + t5066 + t5077;
  t5092 = -1.1135*t5065;
  t5095 = 0.0216*t4029;
  t5100 = 0. + t5092 + t5095;
  t5139 = -0.135*t4838;
  t5141 = 0.049*t256;
  t5148 = 0. + t5139 + t5141;
  t5175 = -0.09*t4852;
  t5176 = 0.049*t2589;
  t5179 = 0. + t5175 + t5176;
  p_output1[0]=0. + t256;
  p_output1[1]=0. - 1.*t502*t622;
  p_output1[2]=0. - 1.*t622*t833;
  p_output1[3]=0.;
  p_output1[4]=0. + 0.642788*t4106 + 0.766044*t4180;
  p_output1[5]=0. + 0.642788*t4511 + 0.766044*t4546;
  p_output1[6]=0. + 0.642788*t4707 + 0.766044*t4720;
  p_output1[7]=0.;
  p_output1[8]=0. - 0.766044*t4106 + 0.642788*t4180;
  p_output1[9]=0. - 0.766044*t4511 + 0.642788*t4546;
  p_output1[10]=0. - 0.766044*t4707 + 0.642788*t4720;
  p_output1[11]=0.;
  p_output1[12]=-0.03155 - 0.004500000000000004*t256 - 0.027251*t4106 - 1.200144*t4180 - 0.049*t4838 + t3058*t4958 + t3327*t4970 + t3444*t5014 + t3649*t5034 + t3721*t5081 + t4023*t5100 + t4862*t622 + t2158*t4895*t622 - 1.*t2589*t4924*t622;
  p_output1[13]=0. - 0.027251*t4511 - 1.200144*t4546 + t4264*t4895 + t4298*t4924 + t4364*t4958 + t4409*t4970 + t4449*t5014 - 0.135*(1. - 1.*t502) + t256*t4862*t502 + t4482*t5034 + t4486*t5081 + t4503*t5100 + t502*t5148 - 0.1305*t502*t622 - 1.*t5179*t833;
  p_output1[14]=0.07996 - 0.027251*t4707 - 1.200144*t4720 + t4564*t4895 + t4603*t4924 + t4606*t4958 + t4622*t4970 + t4648*t5014 + t4677*t5034 + t4689*t5081 + t4704*t5100 + t502*t5179 + 0.135*t833 + t256*t4862*t833 + t5148*t833 - 0.1305*t622*t833;
  p_output1[15]=1.;
}



void H_VectorNav_to_RightToeBack_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
