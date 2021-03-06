/*
 * Automatically Generated from Mathematica.
 * Wed 23 Oct 2019 10:26:22 GMT-07:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_LeftToeBottom_to_RightToeBottom_src.h"

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
  double t122;
  double t249;
  double t473;
  double t680;
  double t753;
  double t788;
  double t880;
  double t927;
  double t1256;
  double t1286;
  double t1294;
  double t1362;
  double t1143;
  double t1168;
  double t1226;
  double t1406;
  double t1414;
  double t1471;
  double t1847;
  double t1887;
  double t1914;
  double t1946;
  double t1736;
  double t1811;
  double t1821;
  double t2006;
  double t2012;
  double t2016;
  double t2315;
  double t2339;
  double t2372;
  double t2407;
  double t2251;
  double t2270;
  double t2276;
  double t2523;
  double t2540;
  double t2548;
  double t2657;
  double t2704;
  double t2711;
  double t2736;
  double t2606;
  double t2607;
  double t2643;
  double t2835;
  double t2868;
  double t2870;
  double t3461;
  double t3512;
  double t3472;
  double t3483;
  double t3536;
  double t3583;
  double t3493;
  double t3541;
  double t3554;
  double t3453;
  double t3605;
  double t3627;
  double t3632;
  double t3771;
  double t3555;
  double t3657;
  double t3680;
  double t3435;
  double t3790;
  double t3791;
  double t3809;
  double t3848;
  double t3705;
  double t3817;
  double t3824;
  double t3393;
  double t3856;
  double t3872;
  double t3876;
  double t3963;
  double t3933;
  double t3936;
  double t3959;
  double t3991;
  double t3996;
  double t4015;
  double t4017;
  double t4018;
  double t3997;
  double t4019;
  double t4020;
  double t4064;
  double t4065;
  double t4068;
  double t4043;
  double t4074;
  double t4078;
  double t4092;
  double t4099;
  double t4123;
  double t4084;
  double t4137;
  double t4153;
  double t4155;
  double t4157;
  double t4165;
  double t3840;
  double t3887;
  double t3899;
  double t3906;
  double t3912;
  double t3915;
  double t4154;
  double t4168;
  double t4187;
  double t4190;
  double t4192;
  double t4199;
  double t4265;
  double t4270;
  double t4278;
  double t4283;
  double t4294;
  double t4302;
  double t4280;
  double t4307;
  double t4308;
  double t4312;
  double t4316;
  double t4318;
  double t4310;
  double t4321;
  double t4324;
  double t4332;
  double t4336;
  double t4338;
  double t4329;
  double t4342;
  double t4344;
  double t4349;
  double t4353;
  double t4355;
  double t4218;
  double t4219;
  double t4226;
  double t4189;
  double t4205;
  double t4210;
  double t4345;
  double t4363;
  double t4365;
  double t4373;
  double t4376;
  double t4383;
  double t3902;
  double t3917;
  double t3919;
  double t4227;
  double t4246;
  double t4251;
  double t4213;
  double t4257;
  double t391;
  double t403;
  double t470;
  double t498;
  double t517;
  double t802;
  double t893;
  double t908;
  double t1076;
  double t1077;
  double t1089;
  double t1356;
  double t1377;
  double t1401;
  double t1518;
  double t1530;
  double t1601;
  double t4502;
  double t4505;
  double t4510;
  double t4522;
  double t4523;
  double t4525;
  double t1941;
  double t1947;
  double t1982;
  double t2051;
  double t2075;
  double t2155;
  double t4534;
  double t4545;
  double t4552;
  double t4564;
  double t4568;
  double t4569;
  double t2406;
  double t2460;
  double t2462;
  double t2556;
  double t2558;
  double t2575;
  double t4574;
  double t4578;
  double t4591;
  double t4607;
  double t4617;
  double t4618;
  double t2722;
  double t2766;
  double t2772;
  double t2882;
  double t2891;
  double t2917;
  double t4621;
  double t4630;
  double t4644;
  double t4647;
  double t4648;
  double t4649;
  double t4408;
  double t4409;
  double t4411;
  double t4369;
  double t4385;
  double t4388;
  double t4392;
  double t4395;
  double t4396;
  double t4403;
  double t4412;
  double t4418;
  double t4426;
  double t4427;
  double t4428;
  double t4434;
  double t4451;
  double t4466;
  double t4739;
  double t4752;
  double t4758;
  double t4772;
  double t4781;
  double t4788;
  double t4791;
  double t4792;
  double t4794;
  double t4800;
  double t4802;
  double t4803;
  double t4808;
  double t4810;
  double t4811;
  double t4819;
  double t4821;
  double t4824;
  double t4913;
  double t4914;
  double t4948;
  double t4950;
  double t4988;
  double t4989;
  double t5036;
  double t5038;
  double t5068;
  double t5071;
  double t4895;
  double t4897;
  double t4951;
  double t4956;
  double t4961;
  double t4923;
  double t4927;
  double t4928;
  double t4972;
  double t4974;
  double t4976;
  double t4990;
  double t4995;
  double t5013;
  double t5020;
  double t5022;
  double t5027;
  double t5046;
  double t5047;
  double t5048;
  double t5055;
  double t5060;
  double t5063;
  double t5073;
  double t5076;
  double t5081;
  double t5086;
  double t5088;
  double t5093;
  double t4884;
  double t4887;
  double t4892;
  double t4894;
  double t4899;
  double t4905;
  double t4910;
  double t4911;
  double t4932;
  double t4937;
  double t4939;
  double t4940;
  double t4947;
  double t4971;
  double t4978;
  double t5018;
  double t5034;
  double t5053;
  double t5065;
  double t5083;
  double t5094;
  double t5096;
  double t5104;
  double t5105;
  double t5109;
  double t5110;
  double t5112;
  double t5114;
  double t5116;
  double t5122;
  double t5123;
  double t5125;
  double t5126;
  double t5129;
  double t5130;
  double t5133;
  double t5135;
  double t5137;
  double t128;
  double t350;
  double t631;
  double t924;
  double t1094;
  double t1404;
  double t1713;
  double t1988;
  double t2234;
  double t2464;
  double t2594;
  double t2822;
  double t2922;
  double t2927;
  double t2959;
  double t2975;
  double t2990;
  double t3023;
  double t3307;
  double t3312;
  double t3331;
  double t3350;
  double t4721;
  double t4726;
  double t4735;
  double t4736;
  double t4738;
  double t4769;
  double t4789;
  double t4796;
  double t4806;
  double t4816;
  double t4826;
  double t4829;
  double t4832;
  double t4834;
  double t4835;
  double t4839;
  double t4840;
  double t4848;
  double t4856;
  double t4873;
  double t4479;
  double t4483;
  double t4485;
  double t4492;
  double t4494;
  double t4496;
  double t4498;
  double t4515;
  double t4533;
  double t4558;
  double t4571;
  double t4597;
  double t4619;
  double t4645;
  double t4650;
  double t4664;
  double t4665;
  double t4666;
  double t4674;
  double t4676;
  double t4678;
  double t4689;
  double t4700;
  double t4704;
  double t5164;
  double t5168;
  double t5171;
  double t5173;
  double t5177;
  double t5186;
  double t5188;
  double t5192;
  double t5193;
  double t5197;
  double t5201;
  double t5203;
  double t5210;
  double t5211;
  double t5213;
  double t5214;
  double t5107;
  double t5140;
  double t5143;
  double t5258;
  double t5259;
  double t5261;
  double t5152;
  double t5154;
  double t5155;
  t122 = Sin(var1[7]);
  t249 = Cos(var1[8]);
  t473 = Sin(var1[8]);
  t680 = Cos(var1[9]);
  t753 = -1.*t680;
  t788 = 1. + t753;
  t880 = Sin(var1[9]);
  t927 = Cos(var1[7]);
  t1256 = Cos(var1[10]);
  t1286 = -1.*t1256;
  t1294 = 1. + t1286;
  t1362 = Sin(var1[10]);
  t1143 = t680*t122*t473;
  t1168 = t927*t880;
  t1226 = t1143 + t1168;
  t1406 = t927*t680;
  t1414 = -1.*t122*t473*t880;
  t1471 = t1406 + t1414;
  t1847 = Cos(var1[11]);
  t1887 = -1.*t1847;
  t1914 = 1. + t1887;
  t1946 = Sin(var1[11]);
  t1736 = t1256*t1226;
  t1811 = t1471*t1362;
  t1821 = t1736 + t1811;
  t2006 = t1256*t1471;
  t2012 = -1.*t1226*t1362;
  t2016 = t2006 + t2012;
  t2315 = Cos(var1[12]);
  t2339 = -1.*t2315;
  t2372 = 1. + t2339;
  t2407 = Sin(var1[12]);
  t2251 = t1847*t1821;
  t2270 = t2016*t1946;
  t2276 = t2251 + t2270;
  t2523 = t1847*t2016;
  t2540 = -1.*t1821*t1946;
  t2548 = t2523 + t2540;
  t2657 = Cos(var1[13]);
  t2704 = -1.*t2657;
  t2711 = 1. + t2704;
  t2736 = Sin(var1[13]);
  t2606 = t2315*t2276;
  t2607 = t2548*t2407;
  t2643 = t2606 + t2607;
  t2835 = t2315*t2548;
  t2868 = -1.*t2276*t2407;
  t2870 = t2835 + t2868;
  t3461 = Cos(var1[1]);
  t3512 = Cos(var1[3]);
  t3472 = Cos(var1[2]);
  t3483 = Sin(var1[3]);
  t3536 = Sin(var1[2]);
  t3583 = Cos(var1[4]);
  t3493 = -1.*t3461*t3472*t3483;
  t3541 = -1.*t3512*t3461*t3536;
  t3554 = t3493 + t3541;
  t3453 = Sin(var1[4]);
  t3605 = t3512*t3461*t3472;
  t3627 = -1.*t3461*t3483*t3536;
  t3632 = t3605 + t3627;
  t3771 = Cos(var1[5]);
  t3555 = t3453*t3554;
  t3657 = t3583*t3632;
  t3680 = t3555 + t3657;
  t3435 = Sin(var1[5]);
  t3790 = t3583*t3554;
  t3791 = -1.*t3453*t3632;
  t3809 = t3790 + t3791;
  t3848 = Cos(var1[6]);
  t3705 = -1.*t3435*t3680;
  t3817 = t3771*t3809;
  t3824 = t3705 + t3817;
  t3393 = Sin(var1[6]);
  t3856 = t3771*t3680;
  t3872 = t3435*t3809;
  t3876 = t3856 + t3872;
  t3963 = Sin(var1[0]);
  t3933 = Cos(var1[0]);
  t3936 = Sin(var1[1]);
  t3959 = t3933*t3472*t3936;
  t3991 = -1.*t3963*t3536;
  t3996 = t3959 + t3991;
  t4015 = -1.*t3472*t3963;
  t4017 = -1.*t3933*t3936*t3536;
  t4018 = t4015 + t4017;
  t3997 = -1.*t3483*t3996;
  t4019 = t3512*t4018;
  t4020 = t3997 + t4019;
  t4064 = t3512*t3996;
  t4065 = t3483*t4018;
  t4068 = t4064 + t4065;
  t4043 = t3453*t4020;
  t4074 = t3583*t4068;
  t4078 = t4043 + t4074;
  t4092 = t3583*t4020;
  t4099 = -1.*t3453*t4068;
  t4123 = t4092 + t4099;
  t4084 = -1.*t3435*t4078;
  t4137 = t3771*t4123;
  t4153 = t4084 + t4137;
  t4155 = t3771*t4078;
  t4157 = t3435*t4123;
  t4165 = t4155 + t4157;
  t3840 = t3393*t3824;
  t3887 = t3848*t3876;
  t3899 = t3840 + t3887;
  t3906 = t3848*t3824;
  t3912 = -1.*t3393*t3876;
  t3915 = t3906 + t3912;
  t4154 = t3393*t4153;
  t4168 = t3848*t4165;
  t4187 = t4154 + t4168;
  t4190 = t3848*t4153;
  t4192 = -1.*t3393*t4165;
  t4199 = t4190 + t4192;
  t4265 = t3472*t3963*t3936;
  t4270 = t3933*t3536;
  t4278 = t4265 + t4270;
  t4283 = t3933*t3472;
  t4294 = -1.*t3963*t3936*t3536;
  t4302 = t4283 + t4294;
  t4280 = -1.*t3483*t4278;
  t4307 = t3512*t4302;
  t4308 = t4280 + t4307;
  t4312 = t3512*t4278;
  t4316 = t3483*t4302;
  t4318 = t4312 + t4316;
  t4310 = t3453*t4308;
  t4321 = t3583*t4318;
  t4324 = t4310 + t4321;
  t4332 = t3583*t4308;
  t4336 = -1.*t3453*t4318;
  t4338 = t4332 + t4336;
  t4329 = -1.*t3435*t4324;
  t4342 = t3771*t4338;
  t4344 = t4329 + t4342;
  t4349 = t3771*t4324;
  t4353 = t3435*t4338;
  t4355 = t4349 + t4353;
  t4218 = -0.766044*t3899;
  t4219 = 0.642788*t3915;
  t4226 = t4218 + t4219;
  t4189 = -0.766044*t4187;
  t4205 = 0.642788*t4199;
  t4210 = t4189 + t4205;
  t4345 = t3393*t4344;
  t4363 = t3848*t4355;
  t4365 = t4345 + t4363;
  t4373 = t3848*t4344;
  t4376 = -1.*t3393*t4355;
  t4383 = t4373 + t4376;
  t3902 = 0.642788*t3899;
  t3917 = 0.766044*t3915;
  t3919 = t3902 + t3917;
  t4227 = 0.642788*t4187;
  t4246 = 0.766044*t4199;
  t4251 = t4227 + t4246;
  t4213 = t3919*t4210;
  t4257 = -1.*t4226*t4251;
  t391 = -1.*t249;
  t403 = 1. + t391;
  t470 = -0.135*t403;
  t498 = 0.049*t473;
  t517 = 0. + t470 + t498;
  t802 = -0.049*t788;
  t893 = -0.09*t880;
  t908 = 0. + t802 + t893;
  t1076 = -0.09*t788;
  t1077 = 0.049*t880;
  t1089 = 0. + t1076 + t1077;
  t1356 = -0.049*t1294;
  t1377 = -0.21*t1362;
  t1401 = 0. + t1356 + t1377;
  t1518 = -0.21*t1294;
  t1530 = 0.049*t1362;
  t1601 = 0. + t1518 + t1530;
  t4502 = t927*t680*t473;
  t4505 = -1.*t122*t880;
  t4510 = t4502 + t4505;
  t4522 = -1.*t680*t122;
  t4523 = -1.*t927*t473*t880;
  t4525 = t4522 + t4523;
  t1941 = -0.0016*t1914;
  t1947 = -0.2707*t1946;
  t1982 = 0. + t1941 + t1947;
  t2051 = -0.2707*t1914;
  t2075 = 0.0016*t1946;
  t2155 = 0. + t2051 + t2075;
  t4534 = t1256*t4510;
  t4545 = t4525*t1362;
  t4552 = t4534 + t4545;
  t4564 = t1256*t4525;
  t4568 = -1.*t4510*t1362;
  t4569 = t4564 + t4568;
  t2406 = 0.0184*t2372;
  t2460 = -0.7055*t2407;
  t2462 = 0. + t2406 + t2460;
  t2556 = -0.7055*t2372;
  t2558 = -0.0184*t2407;
  t2575 = 0. + t2556 + t2558;
  t4574 = t1847*t4552;
  t4578 = t4569*t1946;
  t4591 = t4574 + t4578;
  t4607 = t1847*t4569;
  t4617 = -1.*t4552*t1946;
  t4618 = t4607 + t4617;
  t2722 = -0.0216*t2711;
  t2766 = -1.1135*t2736;
  t2772 = 0. + t2722 + t2766;
  t2882 = -1.1135*t2711;
  t2891 = 0.0216*t2736;
  t2917 = 0. + t2882 + t2891;
  t4621 = t2315*t4591;
  t4630 = t4618*t2407;
  t4644 = t4621 + t4630;
  t4647 = t2315*t4618;
  t4648 = -1.*t4591*t2407;
  t4649 = t4647 + t4648;
  t4408 = -0.766044*t4365;
  t4409 = 0.642788*t4383;
  t4411 = t4408 + t4409;
  t4369 = 0.642788*t4365;
  t4385 = 0.766044*t4383;
  t4388 = t4369 + t4385;
  t4392 = t3933*t3461*t4226;
  t4395 = t3936*t4210;
  t4396 = t4392 + t4395;
  t4403 = -1.*t4388*t4396;
  t4412 = t3933*t3461*t3919;
  t4418 = t3936*t4251;
  t4426 = t4412 + t4418;
  t4427 = t4411*t4426;
  t4428 = t4213 + t4257;
  t4434 = -1.*t3461*t3963*t4428;
  t4451 = 0. + t4403 + t4427 + t4434;
  t4466 = 1/t4451;
  t4739 = t249*t680*t1256;
  t4752 = -1.*t249*t880*t1362;
  t4758 = t4739 + t4752;
  t4772 = -1.*t249*t1256*t880;
  t4781 = -1.*t249*t680*t1362;
  t4788 = t4772 + t4781;
  t4791 = t1847*t4758;
  t4792 = t4788*t1946;
  t4794 = t4791 + t4792;
  t4800 = t1847*t4788;
  t4802 = -1.*t4758*t1946;
  t4803 = t4800 + t4802;
  t4808 = t2315*t4794;
  t4810 = t4803*t2407;
  t4811 = t4808 + t4810;
  t4819 = t2315*t4803;
  t4821 = -1.*t4794*t2407;
  t4824 = t4819 + t4821;
  t4913 = -1.*t3472;
  t4914 = 1. + t4913;
  t4948 = -1.*t3512;
  t4950 = 1. + t4948;
  t4988 = -1.*t3583;
  t4989 = 1. + t4988;
  t5036 = -1.*t3771;
  t5038 = 1. + t5036;
  t5068 = -1.*t3848;
  t5071 = 1. + t5068;
  t4895 = -1.*t3461;
  t4897 = 1. + t4895;
  t4951 = -0.049*t4950;
  t4956 = -0.21*t3483;
  t4961 = 0. + t4951 + t4956;
  t4923 = -0.049*t4914;
  t4927 = -0.09*t3536;
  t4928 = 0. + t4923 + t4927;
  t4972 = -0.21*t4950;
  t4974 = 0.049*t3483;
  t4976 = 0. + t4972 + t4974;
  t4990 = -0.2707*t4989;
  t4995 = 0.0016*t3453;
  t5013 = 0. + t4990 + t4995;
  t5020 = -0.0016*t4989;
  t5022 = -0.2707*t3453;
  t5027 = 0. + t5020 + t5022;
  t5046 = 0.0184*t5038;
  t5047 = -0.7055*t3435;
  t5048 = 0. + t5046 + t5047;
  t5055 = -0.7055*t5038;
  t5060 = -0.0184*t3435;
  t5063 = 0. + t5055 + t5060;
  t5073 = -1.1135*t5071;
  t5076 = 0.0216*t3393;
  t5081 = 0. + t5073 + t5076;
  t5086 = -0.0216*t5071;
  t5088 = -1.1135*t3393;
  t5093 = 0. + t5086 + t5088;
  t4884 = -1.*t3933;
  t4887 = 1. + t4884;
  t4892 = 0.135*t4887;
  t4894 = 0.1305*t3933*t3461;
  t4899 = 0.135*t4897;
  t4905 = 0.049*t3936;
  t4910 = 0. + t4899 + t4905;
  t4911 = t3933*t4910;
  t4932 = t3933*t3936*t4928;
  t4937 = -0.09*t4914;
  t4939 = 0.049*t3536;
  t4940 = 0. + t4937 + t4939;
  t4947 = -1.*t3963*t4940;
  t4971 = t4961*t3996;
  t4978 = t4976*t4018;
  t5018 = t5013*t4020;
  t5034 = t5027*t4068;
  t5053 = t5048*t4078;
  t5065 = t5063*t4123;
  t5083 = t5081*t4153;
  t5094 = t5093*t4165;
  t5096 = 0.0306*t4187;
  t5104 = -1.1312*t4199;
  t5105 = 0. + t4892 + t4894 + t4911 + t4932 + t4947 + t4971 + t4978 + t5018 + t5034 + t5053 + t5065 + t5083 + t5094 + t5096 + t5104;
  t5109 = -0.049*t4897;
  t5110 = t3461*t3472*t4961;
  t5112 = 0.004500000000000004*t3936;
  t5114 = t3461*t4928;
  t5116 = -1.*t3461*t4976*t3536;
  t5122 = t5013*t3554;
  t5123 = t5027*t3632;
  t5125 = t5048*t3680;
  t5126 = t5063*t3809;
  t5129 = t5081*t3824;
  t5130 = t5093*t3876;
  t5133 = 0.0306*t3899;
  t5135 = -1.1312*t3915;
  t5137 = 0. + t5109 + t5110 + t5112 + t5114 + t5116 + t5122 + t5123 + t5125 + t5126 + t5129 + t5130 + t5133 + t5135;
  t128 = 0.135*t122;
  t350 = -0.1305*t249*t122;
  t631 = t122*t517;
  t924 = t122*t473*t908;
  t1094 = t927*t1089;
  t1404 = t1226*t1401;
  t1713 = t1471*t1601;
  t1988 = t1821*t1982;
  t2234 = t2016*t2155;
  t2464 = t2276*t2462;
  t2594 = t2548*t2575;
  t2822 = t2643*t2772;
  t2922 = t2870*t2917;
  t2927 = t2657*t2643;
  t2959 = t2870*t2736;
  t2975 = t2927 + t2959;
  t2990 = 0.0306*t2975;
  t3023 = t2657*t2870;
  t3307 = -1.*t2643*t2736;
  t3312 = t3023 + t3307;
  t3331 = -1.1312*t3312;
  t3350 = 0. + t128 + t350 + t631 + t924 + t1094 + t1404 + t1713 + t1988 + t2234 + t2464 + t2594 + t2822 + t2922 + t2990 + t3331;
  t4721 = -0.049*t403;
  t4726 = -0.004500000000000004*t473;
  t4735 = t249*t908;
  t4736 = t249*t680*t1401;
  t4738 = -1.*t249*t880*t1601;
  t4769 = t4758*t1982;
  t4789 = t4788*t2155;
  t4796 = t4794*t2462;
  t4806 = t4803*t2575;
  t4816 = t4811*t2772;
  t4826 = t4824*t2917;
  t4829 = t2657*t4811;
  t4832 = t4824*t2736;
  t4834 = t4829 + t4832;
  t4835 = 0.0306*t4834;
  t4839 = t2657*t4824;
  t4840 = -1.*t4811*t2736;
  t4848 = t4839 + t4840;
  t4856 = -1.1312*t4848;
  t4873 = 0. + t4721 + t4726 + t4735 + t4736 + t4738 + t4769 + t4789 + t4796 + t4806 + t4816 + t4826 + t4835 + t4856;
  t4479 = -1.*t927;
  t4483 = 1. + t4479;
  t4485 = -0.135*t4483;
  t4492 = -0.1305*t927*t249;
  t4494 = t927*t517;
  t4496 = t927*t473*t908;
  t4498 = -1.*t122*t1089;
  t4515 = t4510*t1401;
  t4533 = t4525*t1601;
  t4558 = t4552*t1982;
  t4571 = t4569*t2155;
  t4597 = t4591*t2462;
  t4619 = t4618*t2575;
  t4645 = t4644*t2772;
  t4650 = t4649*t2917;
  t4664 = t2657*t4644;
  t4665 = t4649*t2736;
  t4666 = t4664 + t4665;
  t4674 = 0.0306*t4666;
  t4676 = t2657*t4649;
  t4678 = -1.*t4644*t2736;
  t4689 = t4676 + t4678;
  t4700 = -1.1312*t4689;
  t4704 = 0. + t4485 + t4492 + t4494 + t4496 + t4498 + t4515 + t4533 + t4558 + t4571 + t4597 + t4619 + t4645 + t4650 + t4674 + t4700;
  t5164 = -0.135*t3963;
  t5168 = 0.1305*t3461*t3963;
  t5171 = t3963*t4910;
  t5173 = t3963*t3936*t4928;
  t5177 = t3933*t4940;
  t5186 = t4961*t4278;
  t5188 = t4976*t4302;
  t5192 = t5013*t4308;
  t5193 = t5027*t4318;
  t5197 = t5048*t4324;
  t5201 = t5063*t4338;
  t5203 = t5081*t4344;
  t5210 = t5093*t4355;
  t5211 = 0.0306*t4365;
  t5213 = -1.1312*t4383;
  t5214 = 0. + t5164 + t5168 + t5171 + t5173 + t5177 + t5186 + t5188 + t5192 + t5193 + t5197 + t5201 + t5203 + t5210 + t5211 + t5213;
  t5107 = t4226*t5105;
  t5140 = -1.*t5137*t4210;
  t5143 = t5107 + t5140;
  t5258 = t3933*t3461*t5137;
  t5259 = t3936*t5105;
  t5261 = t5258 + t5259;
  t5152 = t3919*t5105;
  t5154 = -1.*t5137*t4251;
  t5155 = t5152 + t5154;
  p_output1[0]=t3350*(0. + t4213 + t4257)*t4466 + (0. + t4226*t4388 - 1.*t3919*t4411)*t4466*t4704 + (0. - 1.*t4210*t4388 + t4251*t4411)*t4466*t4873 + t4466*(-1.*t4388*t5143 + t4411*t5155 - 1.*t4428*t5214);
  p_output1[1]=t3350*(0. - 1.*t3936*t4210 - 1.*t3461*t3933*t4226)*t4466 + (0. + t3461*t3963*t4226 + t3936*t4411)*t4466*t4704 + (0. - 1.*t3461*t3963*t4210 + t3461*t3933*t4411)*t4466*t4873 + t4466*(-1.*t3461*t3963*t5143 + t4396*t5214 - 1.*t4411*t5261);
  p_output1[2]=t3350*(0. + t4412 + t4418)*t4466 + (0. - 1.*t3461*t3919*t3963 - 1.*t3936*t4388)*t4466*t4704 + (0. + t3461*t3963*t4251 - 1.*t3461*t3933*t4388)*t4466*t4873 + t4466*(t3461*t3963*t5155 - 1.*t4426*t5214 + t4388*t5261);
}



void p_LeftToeBottom_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
