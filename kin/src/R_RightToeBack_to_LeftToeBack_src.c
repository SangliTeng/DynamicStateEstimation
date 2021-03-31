/*
 * Automatically Generated from Mathematica.
 * Wed 23 Oct 2019 10:26:26 GMT-07:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RightToeBack_to_LeftToeBack_src.h"

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
  double t711;
  double t852;
  double t956;
  double t764;
  double t967;
  double t634;
  double t1058;
  double t1078;
  double t1085;
  double t918;
  double t1003;
  double t1024;
  double t1121;
  double t596;
  double t1248;
  double t1282;
  double t1299;
  double t1056;
  double t1163;
  double t1201;
  double t1316;
  double t443;
  double t1425;
  double t1455;
  double t1480;
  double t1224;
  double t1346;
  double t1371;
  double t1496;
  double t1738;
  double t1679;
  double t1709;
  double t1897;
  double t1910;
  double t1973;
  double t1712;
  double t1741;
  double t1862;
  double t2105;
  double t2161;
  double t2170;
  double t1868;
  double t1979;
  double t2076;
  double t2254;
  double t2299;
  double t2391;
  double t2101;
  double t2202;
  double t2239;
  double t2455;
  double t2471;
  double t2482;
  double t2246;
  double t2400;
  double t2416;
  double t1395;
  double t1512;
  double t1519;
  double t1560;
  double t1598;
  double t1611;
  double t2425;
  double t2485;
  double t2517;
  double t2527;
  double t2555;
  double t2567;
  double t2729;
  double t2748;
  double t2786;
  double t2671;
  double t2686;
  double t2713;
  double t2994;
  double t3001;
  double t3003;
  double t2891;
  double t2941;
  double t2979;
  double t3108;
  double t3114;
  double t3117;
  double t2985;
  double t3072;
  double t3090;
  double t3165;
  double t3170;
  double t3174;
  double t3092;
  double t3126;
  double t3138;
  double t3279;
  double t3288;
  double t3322;
  double t3164;
  double t3198;
  double t3239;
  double t2522;
  double t2598;
  double t2603;
  double t1546;
  double t1663;
  double t1672;
  double t3252;
  double t3336;
  double t3343;
  double t3371;
  double t3380;
  double t3456;
  double t3359;
  double t3465;
  double t3488;
  double t3607;
  double t3608;
  double t3610;
  double t436;
  double t3649;
  double t3673;
  double t2882;
  double t3491;
  double t3509;
  double t3543;
  double t3550;
  double t3612;
  double t3628;
  double t3648;
  double t3685;
  double t3694;
  double t3707;
  double t3723;
  double t345;
  double t3742;
  double t3819;
  double t3748;
  double t3767;
  double t3808;
  double t4111;
  double t4087;
  double t4097;
  double t4138;
  double t4163;
  double t4101;
  double t4158;
  double t4160;
  double t4083;
  double t4174;
  double t4177;
  double t4201;
  double t4232;
  double t4162;
  double t4203;
  double t4204;
  double t4082;
  double t4258;
  double t4264;
  double t4282;
  double t4300;
  double t4209;
  double t4291;
  double t4293;
  double t4080;
  double t4303;
  double t4309;
  double t4317;
  double t2631;
  double t2789;
  double t2805;
  double t4374;
  double t4379;
  double t4384;
  double t4393;
  double t4400;
  double t4409;
  double t4385;
  double t4418;
  double t4422;
  double t4425;
  double t4435;
  double t4437;
  double t4424;
  double t4440;
  double t4443;
  double t4448;
  double t4468;
  double t4471;
  double t4444;
  double t4476;
  double t4477;
  double t4481;
  double t4493;
  double t4494;
  double t3730;
  double t4527;
  double t4533;
  double t4537;
  double t4553;
  double t4554;
  double t4555;
  double t4543;
  double t4562;
  double t4563;
  double t4571;
  double t4573;
  double t4574;
  double t4566;
  double t4580;
  double t4583;
  double t4594;
  double t4602;
  double t4603;
  double t4590;
  double t4604;
  double t4608;
  double t4610;
  double t4615;
  double t4620;
  double t3926;
  double t3940;
  double t3954;
  double t4297;
  double t4330;
  double t4335;
  double t4337;
  double t4345;
  double t4346;
  double t4354;
  double t4356;
  double t4360;
  double t3832;
  double t3838;
  double t3839;
  double t4480;
  double t4501;
  double t4504;
  double t4511;
  double t4513;
  double t4514;
  double t4515;
  double t4516;
  double t4524;
  double t3864;
  double t3891;
  double t3901;
  double t4609;
  double t4624;
  double t4625;
  double t4628;
  double t4629;
  double t4636;
  double t4651;
  double t4652;
  double t4656;
  double t4035;
  double t4038;
  double t4049;
  double t3986;
  double t3988;
  double t3992;
  double t4027;
  double t4706;
  double t4708;
  double t4713;
  double t4720;
  double t4722;
  double t4724;
  double t4733;
  double t4741;
  double t4745;
  t711 = Cos(var1[8]);
  t852 = Cos(var1[10]);
  t956 = Sin(var1[9]);
  t764 = Cos(var1[9]);
  t967 = Sin(var1[10]);
  t634 = Cos(var1[11]);
  t1058 = -1.*t711*t852*t956;
  t1078 = -1.*t711*t764*t967;
  t1085 = t1058 + t1078;
  t918 = t711*t764*t852;
  t1003 = -1.*t711*t956*t967;
  t1024 = t918 + t1003;
  t1121 = Sin(var1[11]);
  t596 = Cos(var1[12]);
  t1248 = t634*t1085;
  t1282 = -1.*t1024*t1121;
  t1299 = t1248 + t1282;
  t1056 = t634*t1024;
  t1163 = t1085*t1121;
  t1201 = t1056 + t1163;
  t1316 = Sin(var1[12]);
  t443 = Cos(var1[13]);
  t1425 = t596*t1299;
  t1455 = -1.*t1201*t1316;
  t1480 = t1425 + t1455;
  t1224 = t596*t1201;
  t1346 = t1299*t1316;
  t1371 = t1224 + t1346;
  t1496 = Sin(var1[13]);
  t1738 = Cos(var1[7]);
  t1679 = Sin(var1[7]);
  t1709 = Sin(var1[8]);
  t1897 = t1738*t764;
  t1910 = -1.*t1679*t1709*t956;
  t1973 = t1897 + t1910;
  t1712 = t764*t1679*t1709;
  t1741 = t1738*t956;
  t1862 = t1712 + t1741;
  t2105 = t852*t1973;
  t2161 = -1.*t1862*t967;
  t2170 = t2105 + t2161;
  t1868 = t852*t1862;
  t1979 = t1973*t967;
  t2076 = t1868 + t1979;
  t2254 = t634*t2170;
  t2299 = -1.*t2076*t1121;
  t2391 = t2254 + t2299;
  t2101 = t634*t2076;
  t2202 = t2170*t1121;
  t2239 = t2101 + t2202;
  t2455 = t596*t2391;
  t2471 = -1.*t2239*t1316;
  t2482 = t2455 + t2471;
  t2246 = t596*t2239;
  t2400 = t2391*t1316;
  t2416 = t2246 + t2400;
  t1395 = t443*t1371;
  t1512 = t1480*t1496;
  t1519 = t1395 + t1512;
  t1560 = t443*t1480;
  t1598 = -1.*t1371*t1496;
  t1611 = t1560 + t1598;
  t2425 = t443*t2416;
  t2485 = t2482*t1496;
  t2517 = t2425 + t2485;
  t2527 = t443*t2482;
  t2555 = -1.*t2416*t1496;
  t2567 = t2527 + t2555;
  t2729 = 0.642788*t2517;
  t2748 = 0.766044*t2567;
  t2786 = t2729 + t2748;
  t2671 = -0.766044*t1519;
  t2686 = 0.642788*t1611;
  t2713 = t2671 + t2686;
  t2994 = -1.*t764*t1679;
  t3001 = -1.*t1738*t1709*t956;
  t3003 = t2994 + t3001;
  t2891 = t1738*t764*t1709;
  t2941 = -1.*t1679*t956;
  t2979 = t2891 + t2941;
  t3108 = t852*t3003;
  t3114 = -1.*t2979*t967;
  t3117 = t3108 + t3114;
  t2985 = t852*t2979;
  t3072 = t3003*t967;
  t3090 = t2985 + t3072;
  t3165 = t634*t3117;
  t3170 = -1.*t3090*t1121;
  t3174 = t3165 + t3170;
  t3092 = t634*t3090;
  t3126 = t3117*t1121;
  t3138 = t3092 + t3126;
  t3279 = t596*t3174;
  t3288 = -1.*t3138*t1316;
  t3322 = t3279 + t3288;
  t3164 = t596*t3138;
  t3198 = t3174*t1316;
  t3239 = t3164 + t3198;
  t2522 = -0.766044*t2517;
  t2598 = 0.642788*t2567;
  t2603 = t2522 + t2598;
  t1546 = 0.642788*t1519;
  t1663 = 0.766044*t1611;
  t1672 = t1546 + t1663;
  t3252 = t443*t3239;
  t3336 = t3322*t1496;
  t3343 = t3252 + t3336;
  t3371 = t443*t3322;
  t3380 = -1.*t3239*t1496;
  t3456 = t3371 + t3380;
  t3359 = -0.766044*t3343;
  t3465 = 0.642788*t3456;
  t3488 = t3359 + t3465;
  t3607 = 0.642788*t3343;
  t3608 = 0.766044*t3456;
  t3610 = t3607 + t3608;
  t436 = Cos(var1[1]);
  t3649 = t1672*t3488;
  t3673 = -1.*t2713*t3610;
  t2882 = t1738*t711*t2713;
  t3491 = t1709*t3488;
  t3509 = t2882 + t3491;
  t3543 = -1.*t2786*t3509;
  t3550 = t1738*t711*t1672;
  t3612 = t1709*t3610;
  t3628 = t3550 + t3612;
  t3648 = t2603*t3628;
  t3685 = t3649 + t3673;
  t3694 = -1.*t711*t1679*t3685;
  t3707 = 0. + t3543 + t3648 + t3694;
  t3723 = 1/t3707;
  t345 = Cos(var1[0]);
  t3742 = Sin(var1[0]);
  t3819 = Sin(var1[1]);
  t3748 = t3610*t2603;
  t3767 = -1.*t3488*t2786;
  t3808 = 0. + t3748 + t3767;
  t4111 = Cos(var1[3]);
  t4087 = Cos(var1[2]);
  t4097 = Sin(var1[3]);
  t4138 = Sin(var1[2]);
  t4163 = Cos(var1[4]);
  t4101 = -1.*t436*t4087*t4097;
  t4158 = -1.*t4111*t436*t4138;
  t4160 = t4101 + t4158;
  t4083 = Sin(var1[4]);
  t4174 = t4111*t436*t4087;
  t4177 = -1.*t436*t4097*t4138;
  t4201 = t4174 + t4177;
  t4232 = Cos(var1[5]);
  t4162 = t4083*t4160;
  t4203 = t4163*t4201;
  t4204 = t4162 + t4203;
  t4082 = Sin(var1[5]);
  t4258 = t4163*t4160;
  t4264 = -1.*t4083*t4201;
  t4282 = t4258 + t4264;
  t4300 = Cos(var1[6]);
  t4209 = -1.*t4082*t4204;
  t4291 = t4232*t4282;
  t4293 = t4209 + t4291;
  t4080 = Sin(var1[6]);
  t4303 = t4232*t4204;
  t4309 = t4082*t4282;
  t4317 = t4303 + t4309;
  t2631 = -1.*t1672*t2603;
  t2789 = t2713*t2786;
  t2805 = 0. + t2631 + t2789;
  t4374 = t345*t4087*t3819;
  t4379 = -1.*t3742*t4138;
  t4384 = t4374 + t4379;
  t4393 = -1.*t4087*t3742;
  t4400 = -1.*t345*t3819*t4138;
  t4409 = t4393 + t4400;
  t4385 = -1.*t4097*t4384;
  t4418 = t4111*t4409;
  t4422 = t4385 + t4418;
  t4425 = t4111*t4384;
  t4435 = t4097*t4409;
  t4437 = t4425 + t4435;
  t4424 = t4083*t4422;
  t4440 = t4163*t4437;
  t4443 = t4424 + t4440;
  t4448 = t4163*t4422;
  t4468 = -1.*t4083*t4437;
  t4471 = t4448 + t4468;
  t4444 = -1.*t4082*t4443;
  t4476 = t4232*t4471;
  t4477 = t4444 + t4476;
  t4481 = t4232*t4443;
  t4493 = t4082*t4471;
  t4494 = t4481 + t4493;
  t3730 = 0. + t3649 + t3673;
  t4527 = t4087*t3742*t3819;
  t4533 = t345*t4138;
  t4537 = t4527 + t4533;
  t4553 = t345*t4087;
  t4554 = -1.*t3742*t3819*t4138;
  t4555 = t4553 + t4554;
  t4543 = -1.*t4097*t4537;
  t4562 = t4111*t4555;
  t4563 = t4543 + t4562;
  t4571 = t4111*t4537;
  t4573 = t4097*t4555;
  t4574 = t4571 + t4573;
  t4566 = t4083*t4563;
  t4580 = t4163*t4574;
  t4583 = t4566 + t4580;
  t4594 = t4163*t4563;
  t4602 = -1.*t4083*t4574;
  t4603 = t4594 + t4602;
  t4590 = -1.*t4082*t4583;
  t4604 = t4232*t4603;
  t4608 = t4590 + t4604;
  t4610 = t4232*t4583;
  t4615 = t4082*t4603;
  t4620 = t4610 + t4615;
  t3926 = -1.*t711*t1679*t3488;
  t3940 = t1738*t711*t2603;
  t3954 = 0. + t3926 + t3940;
  t4297 = t4080*t4293;
  t4330 = t4300*t4317;
  t4335 = t4297 + t4330;
  t4337 = 0.642788*t4335;
  t4345 = t4300*t4293;
  t4346 = -1.*t4080*t4317;
  t4354 = t4345 + t4346;
  t4356 = 0.766044*t4354;
  t4360 = t4337 + t4356;
  t3832 = t711*t1679*t2713;
  t3838 = t1709*t2603;
  t3839 = 0. + t3832 + t3838;
  t4480 = t4080*t4477;
  t4501 = t4300*t4494;
  t4504 = t4480 + t4501;
  t4511 = 0.642788*t4504;
  t4513 = t4300*t4477;
  t4514 = -1.*t4080*t4494;
  t4515 = t4513 + t4514;
  t4516 = 0.766044*t4515;
  t4524 = t4511 + t4516;
  t3864 = -1.*t1738*t711*t2713;
  t3891 = -1.*t1709*t3488;
  t3901 = 0. + t3864 + t3891;
  t4609 = t4080*t4608;
  t4624 = t4300*t4620;
  t4625 = t4609 + t4624;
  t4628 = 0.642788*t4625;
  t4629 = t4300*t4608;
  t4636 = -1.*t4080*t4620;
  t4651 = t4629 + t4636;
  t4652 = 0.766044*t4651;
  t4656 = t4628 + t4652;
  t4035 = t711*t1679*t3610;
  t4038 = -1.*t1738*t711*t2786;
  t4049 = 0. + t4035 + t4038;
  t3986 = -1.*t711*t1679*t1672;
  t3988 = -1.*t1709*t2786;
  t3992 = 0. + t3986 + t3988;
  t4027 = 0. + t3550 + t3612;
  t4706 = -0.766044*t4335;
  t4708 = 0.642788*t4354;
  t4713 = t4706 + t4708;
  t4720 = -0.766044*t4504;
  t4722 = 0.642788*t4515;
  t4724 = t4720 + t4722;
  t4733 = -0.766044*t4625;
  t4741 = 0.642788*t4651;
  t4745 = t4733 + t4741;
  p_output1[0]=0. + t3723*t3808*t3819 - 1.*t2805*t345*t3723*t436 - 1.*t3723*t3730*t3742*t436;
  p_output1[1]=0. + t3723*t3819*t3954 - 1.*t345*t3723*t3839*t436 - 1.*t3723*t3742*t3901*t436;
  p_output1[2]=0. + t3723*t3819*t4049 - 1.*t345*t3723*t3992*t436 - 1.*t3723*t3742*t4027*t436;
  p_output1[3]=0. + t3723*t3808*t4360 + t2805*t3723*t4524 + t3723*t3730*t4656;
  p_output1[4]=0. + t3723*t3954*t4360 + t3723*t3839*t4524 + t3723*t3901*t4656;
  p_output1[5]=0. + t3723*t4049*t4360 + t3723*t3992*t4524 + t3723*t4027*t4656;
  p_output1[6]=0. + t3723*t3808*t4713 + t2805*t3723*t4724 + t3723*t3730*t4745;
  p_output1[7]=0. + t3723*t3954*t4713 + t3723*t3839*t4724 + t3723*t3901*t4745;
  p_output1[8]=0. + t3723*t4049*t4713 + t3723*t3992*t4724 + t3723*t4027*t4745;
}



void R_RightToeBack_to_LeftToeBack_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
