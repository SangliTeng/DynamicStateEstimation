/*
 * Automatically Generated from Mathematica.
 * Wed 23 Oct 2019 10:26:02 GMT-07:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_VectorNav_to_LeftToeBottom_src.h"

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
  double t9;
  double t807;
  double t918;
  double t1224;
  double t2507;
  double t3316;
  double t3630;
  double t3760;
  double t3767;
  double t3784;
  double t3820;
  double t3839;
  double t3846;
  double t3856;
  double t3897;
  double t3898;
  double t3921;
  double t3939;
  double t3945;
  double t3956;
  double t3964;
  double t3975;
  double t3983;
  double t3984;
  double t3999;
  double t4002;
  double t4011;
  double t4015;
  double t4017;
  double t4019;
  double t4032;
  double t4051;
  double t4058;
  double t4064;
  double t4096;
  double t4097;
  double t4105;
  double t4148;
  double t114;
  double t438;
  double t3540;
  double t3602;
  double t3613;
  double t3622;
  double t3637;
  double t3656;
  double t3240;
  double t3318;
  double t3351;
  double t4208;
  double t3706;
  double t3721;
  double t3724;
  double t3805;
  double t3828;
  double t3831;
  double t4218;
  double t4219;
  double t4221;
  double t4227;
  double t4228;
  double t4233;
  double t3875;
  double t3880;
  double t3894;
  double t3960;
  double t3967;
  double t3968;
  double t4241;
  double t4246;
  double t4248;
  double t4259;
  double t4264;
  double t4265;
  double t3988;
  double t3991;
  double t3995;
  double t4028;
  double t4035;
  double t4039;
  double t4274;
  double t4275;
  double t4279;
  double t4293;
  double t4295;
  double t4296;
  double t4075;
  double t4079;
  double t4086;
  double t4310;
  double t4312;
  double t4315;
  double t4326;
  double t4327;
  double t4334;
  double t4187;
  double t4189;
  double t4192;
  double t4209;
  double t4210;
  double t4212;
  double t4381;
  double t4384;
  double t4386;
  double t4388;
  double t4390;
  double t4391;
  double t4395;
  double t4397;
  double t4398;
  double t4401;
  double t4402;
  double t4404;
  double t4408;
  double t4409;
  double t4410;
  double t4417;
  double t4421;
  double t4426;
  double t4431;
  double t4433;
  double t4434;
  double t4439;
  double t4441;
  double t4443;
  t9 = Cos(var1[1]);
  t807 = Cos(var1[2]);
  t918 = Cos(var1[3]);
  t1224 = -1.*t918;
  t2507 = 1. + t1224;
  t3316 = Sin(var1[3]);
  t3630 = Sin(var1[2]);
  t3760 = Cos(var1[4]);
  t3767 = -1.*t3760;
  t3784 = 1. + t3767;
  t3820 = Sin(var1[4]);
  t3839 = -1.*t9*t807*t3316;
  t3846 = -1.*t918*t9*t3630;
  t3856 = t3839 + t3846;
  t3897 = t918*t9*t807;
  t3898 = -1.*t9*t3316*t3630;
  t3921 = t3897 + t3898;
  t3939 = Cos(var1[5]);
  t3945 = -1.*t3939;
  t3956 = 1. + t3945;
  t3964 = Sin(var1[5]);
  t3975 = t3820*t3856;
  t3983 = t3760*t3921;
  t3984 = t3975 + t3983;
  t3999 = t3760*t3856;
  t4002 = -1.*t3820*t3921;
  t4011 = t3999 + t4002;
  t4015 = Cos(var1[6]);
  t4017 = -1.*t4015;
  t4019 = 1. + t4017;
  t4032 = Sin(var1[6]);
  t4051 = -1.*t3964*t3984;
  t4058 = t3939*t4011;
  t4064 = t4051 + t4058;
  t4096 = t3939*t3984;
  t4097 = t3964*t4011;
  t4105 = t4096 + t4097;
  t4148 = Cos(var1[0]);
  t114 = -1.*t9;
  t438 = 1. + t114;
  t3540 = Sin(var1[1]);
  t3602 = -1.*t807;
  t3613 = 1. + t3602;
  t3622 = -0.049*t3613;
  t3637 = -0.09*t3630;
  t3656 = 0. + t3622 + t3637;
  t3240 = -0.049*t2507;
  t3318 = -0.21*t3316;
  t3351 = 0. + t3240 + t3318;
  t4208 = Sin(var1[0]);
  t3706 = -0.21*t2507;
  t3721 = 0.049*t3316;
  t3724 = 0. + t3706 + t3721;
  t3805 = -0.2707*t3784;
  t3828 = 0.0016*t3820;
  t3831 = 0. + t3805 + t3828;
  t4218 = t4148*t807*t3540;
  t4219 = -1.*t4208*t3630;
  t4221 = t4218 + t4219;
  t4227 = -1.*t807*t4208;
  t4228 = -1.*t4148*t3540*t3630;
  t4233 = t4227 + t4228;
  t3875 = -0.0016*t3784;
  t3880 = -0.2707*t3820;
  t3894 = 0. + t3875 + t3880;
  t3960 = 0.0184*t3956;
  t3967 = -0.7055*t3964;
  t3968 = 0. + t3960 + t3967;
  t4241 = -1.*t3316*t4221;
  t4246 = t918*t4233;
  t4248 = t4241 + t4246;
  t4259 = t918*t4221;
  t4264 = t3316*t4233;
  t4265 = t4259 + t4264;
  t3988 = -0.7055*t3956;
  t3991 = -0.0184*t3964;
  t3995 = 0. + t3988 + t3991;
  t4028 = -1.1135*t4019;
  t4035 = 0.0216*t4032;
  t4039 = 0. + t4028 + t4035;
  t4274 = t3820*t4248;
  t4275 = t3760*t4265;
  t4279 = t4274 + t4275;
  t4293 = t3760*t4248;
  t4295 = -1.*t3820*t4265;
  t4296 = t4293 + t4295;
  t4075 = -0.0216*t4019;
  t4079 = -1.1135*t4032;
  t4086 = 0. + t4075 + t4079;
  t4310 = -1.*t3964*t4279;
  t4312 = t3939*t4296;
  t4315 = t4310 + t4312;
  t4326 = t3939*t4279;
  t4327 = t3964*t4296;
  t4334 = t4326 + t4327;
  t4187 = 0.135*t438;
  t4189 = 0.049*t3540;
  t4192 = 0. + t4187 + t4189;
  t4209 = -0.09*t3613;
  t4210 = 0.049*t3630;
  t4212 = 0. + t4209 + t4210;
  t4381 = t807*t4208*t3540;
  t4384 = t4148*t3630;
  t4386 = t4381 + t4384;
  t4388 = t4148*t807;
  t4390 = -1.*t4208*t3540*t3630;
  t4391 = t4388 + t4390;
  t4395 = -1.*t3316*t4386;
  t4397 = t918*t4391;
  t4398 = t4395 + t4397;
  t4401 = t918*t4386;
  t4402 = t3316*t4391;
  t4404 = t4401 + t4402;
  t4408 = t3820*t4398;
  t4409 = t3760*t4404;
  t4410 = t4408 + t4409;
  t4417 = t3760*t4398;
  t4421 = -1.*t3820*t4404;
  t4426 = t4417 + t4421;
  t4431 = -1.*t3964*t4410;
  t4433 = t3939*t4426;
  t4434 = t4431 + t4433;
  t4439 = t3939*t4410;
  t4441 = t3964*t4426;
  t4443 = t4439 + t4441;
  p_output1[0]=-0.03155 + 0.004500000000000004*t3540 + t3831*t3856 + t3894*t3921 + t3968*t3984 + t3995*t4011 + t4039*t4064 + t4086*t4105 + 0.0306*(t4032*t4064 + t4015*t4105) - 1.1312*(t4015*t4064 - 1.*t4032*t4105) - 0.049*t438 + t3656*t9 - 1.*t3630*t3724*t9 + t3351*t807*t9;
  p_output1[1]=0. + 0.135*(1. - 1.*t4148) + t3540*t3656*t4148 + t4148*t4192 - 1.*t4208*t4212 + t3351*t4221 + t3724*t4233 + t3831*t4248 + t3894*t4265 + t3968*t4279 + t3995*t4296 + t4039*t4315 + t4086*t4334 + 0.0306*(t4032*t4315 + t4015*t4334) - 1.1312*(t4015*t4315 - 1.*t4032*t4334) + 0.1305*t4148*t9;
  p_output1[2]=0.07996 - 0.135*t4208 + t3540*t3656*t4208 + t4192*t4208 + t4148*t4212 + t3351*t4386 + t3724*t4391 + t3831*t4398 + t3894*t4404 + t3968*t4410 + t3995*t4426 + t4039*t4434 + t4086*t4443 + 0.0306*(t4032*t4434 + t4015*t4443) - 1.1312*(t4015*t4434 - 1.*t4032*t4443) + 0.1305*t4208*t9;
}



void p_VectorNav_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
