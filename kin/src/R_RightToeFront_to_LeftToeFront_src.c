/*
 * Automatically Generated from Mathematica.
 * Wed 23 Oct 2019 10:26:36 GMT-07:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RightToeFront_to_LeftToeFront_src.h"

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
  double t543;
  double t693;
  double t743;
  double t646;
  double t779;
  double t472;
  double t888;
  double t993;
  double t1051;
  double t700;
  double t809;
  double t824;
  double t1064;
  double t195;
  double t1103;
  double t1125;
  double t1150;
  double t841;
  double t1086;
  double t1096;
  double t1158;
  double t102;
  double t1345;
  double t1369;
  double t1402;
  double t1102;
  double t1262;
  double t1274;
  double t1428;
  double t1697;
  double t1638;
  double t1640;
  double t1785;
  double t1806;
  double t1818;
  double t1688;
  double t1698;
  double t1750;
  double t1955;
  double t2009;
  double t2011;
  double t1777;
  double t1872;
  double t1880;
  double t2121;
  double t2122;
  double t2152;
  double t1949;
  double t2032;
  double t2074;
  double t2191;
  double t2246;
  double t2271;
  double t2075;
  double t2164;
  double t2185;
  double t1323;
  double t1442;
  double t1447;
  double t1499;
  double t1551;
  double t1584;
  double t2187;
  double t2294;
  double t2295;
  double t2333;
  double t2336;
  double t2358;
  double t2469;
  double t2485;
  double t2521;
  double t2444;
  double t2445;
  double t2453;
  double t2714;
  double t2731;
  double t2734;
  double t2621;
  double t2627;
  double t2672;
  double t2834;
  double t2842;
  double t2847;
  double t2673;
  double t2743;
  double t2813;
  double t2909;
  double t2918;
  double t2922;
  double t2821;
  double t2888;
  double t2892;
  double t2991;
  double t2993;
  double t2997;
  double t2907;
  double t2937;
  double t2944;
  double t2327;
  double t2382;
  double t2413;
  double t1489;
  double t1617;
  double t1625;
  double t2980;
  double t3010;
  double t3073;
  double t3097;
  double t3115;
  double t3139;
  double t3089;
  double t3181;
  double t3186;
  double t3320;
  double t3350;
  double t3406;
  double t91;
  double t3464;
  double t3475;
  double t2578;
  double t3204;
  double t3267;
  double t3293;
  double t3303;
  double t3419;
  double t3431;
  double t3441;
  double t3492;
  double t3509;
  double t3517;
  double t3519;
  double t81;
  double t3530;
  double t3584;
  double t3553;
  double t3564;
  double t3578;
  double t3899;
  double t3877;
  double t3888;
  double t3926;
  double t3987;
  double t3894;
  double t3942;
  double t3973;
  double t3865;
  double t3996;
  double t3997;
  double t3999;
  double t4032;
  double t3974;
  double t4006;
  double t4015;
  double t3861;
  double t4040;
  double t4054;
  double t4057;
  double t4105;
  double t4024;
  double t4063;
  double t4095;
  double t3858;
  double t4106;
  double t4110;
  double t4112;
  double t2427;
  double t2534;
  double t2564;
  double t4162;
  double t4176;
  double t4177;
  double t4182;
  double t4191;
  double t4193;
  double t4180;
  double t4195;
  double t4198;
  double t4201;
  double t4203;
  double t4211;
  double t4199;
  double t4213;
  double t4218;
  double t4223;
  double t4236;
  double t4240;
  double t4221;
  double t4241;
  double t4244;
  double t4249;
  double t4256;
  double t4262;
  double t3528;
  double t4324;
  double t4327;
  double t4329;
  double t4342;
  double t4360;
  double t4364;
  double t4341;
  double t4366;
  double t4382;
  double t4400;
  double t4401;
  double t4416;
  double t4390;
  double t4417;
  double t4428;
  double t4440;
  double t4441;
  double t4452;
  double t4435;
  double t4470;
  double t4472;
  double t4490;
  double t4494;
  double t4517;
  double t3710;
  double t3718;
  double t3725;
  double t4102;
  double t4126;
  double t4135;
  double t4136;
  double t4146;
  double t4147;
  double t4150;
  double t4151;
  double t4157;
  double t3619;
  double t3621;
  double t3622;
  double t4247;
  double t4264;
  double t4273;
  double t4293;
  double t4297;
  double t4301;
  double t4302;
  double t4304;
  double t4308;
  double t3645;
  double t3659;
  double t3673;
  double t4482;
  double t4542;
  double t4559;
  double t4568;
  double t4573;
  double t4592;
  double t4606;
  double t4614;
  double t4630;
  double t3818;
  double t3823;
  double t3836;
  double t3748;
  double t3776;
  double t3779;
  double t3797;
  double t4684;
  double t4687;
  double t4688;
  double t4700;
  double t4701;
  double t4704;
  double t4712;
  double t4718;
  double t4719;
  t543 = Cos(var1[8]);
  t693 = Cos(var1[10]);
  t743 = Sin(var1[9]);
  t646 = Cos(var1[9]);
  t779 = Sin(var1[10]);
  t472 = Cos(var1[11]);
  t888 = -1.*t543*t693*t743;
  t993 = -1.*t543*t646*t779;
  t1051 = t888 + t993;
  t700 = t543*t646*t693;
  t809 = -1.*t543*t743*t779;
  t824 = t700 + t809;
  t1064 = Sin(var1[11]);
  t195 = Cos(var1[12]);
  t1103 = t472*t1051;
  t1125 = -1.*t824*t1064;
  t1150 = t1103 + t1125;
  t841 = t472*t824;
  t1086 = t1051*t1064;
  t1096 = t841 + t1086;
  t1158 = Sin(var1[12]);
  t102 = Cos(var1[13]);
  t1345 = t195*t1150;
  t1369 = -1.*t1096*t1158;
  t1402 = t1345 + t1369;
  t1102 = t195*t1096;
  t1262 = t1150*t1158;
  t1274 = t1102 + t1262;
  t1428 = Sin(var1[13]);
  t1697 = Cos(var1[7]);
  t1638 = Sin(var1[7]);
  t1640 = Sin(var1[8]);
  t1785 = t1697*t646;
  t1806 = -1.*t1638*t1640*t743;
  t1818 = t1785 + t1806;
  t1688 = t646*t1638*t1640;
  t1698 = t1697*t743;
  t1750 = t1688 + t1698;
  t1955 = t693*t1818;
  t2009 = -1.*t1750*t779;
  t2011 = t1955 + t2009;
  t1777 = t693*t1750;
  t1872 = t1818*t779;
  t1880 = t1777 + t1872;
  t2121 = t472*t2011;
  t2122 = -1.*t1880*t1064;
  t2152 = t2121 + t2122;
  t1949 = t472*t1880;
  t2032 = t2011*t1064;
  t2074 = t1949 + t2032;
  t2191 = t195*t2152;
  t2246 = -1.*t2074*t1158;
  t2271 = t2191 + t2246;
  t2075 = t195*t2074;
  t2164 = t2152*t1158;
  t2185 = t2075 + t2164;
  t1323 = t102*t1274;
  t1442 = t1402*t1428;
  t1447 = t1323 + t1442;
  t1499 = t102*t1402;
  t1551 = -1.*t1274*t1428;
  t1584 = t1499 + t1551;
  t2187 = t102*t2185;
  t2294 = t2271*t1428;
  t2295 = t2187 + t2294;
  t2333 = t102*t2271;
  t2336 = -1.*t2185*t1428;
  t2358 = t2333 + t2336;
  t2469 = 0.642788*t2295;
  t2485 = 0.766044*t2358;
  t2521 = t2469 + t2485;
  t2444 = -0.766044*t1447;
  t2445 = 0.642788*t1584;
  t2453 = t2444 + t2445;
  t2714 = -1.*t646*t1638;
  t2731 = -1.*t1697*t1640*t743;
  t2734 = t2714 + t2731;
  t2621 = t1697*t646*t1640;
  t2627 = -1.*t1638*t743;
  t2672 = t2621 + t2627;
  t2834 = t693*t2734;
  t2842 = -1.*t2672*t779;
  t2847 = t2834 + t2842;
  t2673 = t693*t2672;
  t2743 = t2734*t779;
  t2813 = t2673 + t2743;
  t2909 = t472*t2847;
  t2918 = -1.*t2813*t1064;
  t2922 = t2909 + t2918;
  t2821 = t472*t2813;
  t2888 = t2847*t1064;
  t2892 = t2821 + t2888;
  t2991 = t195*t2922;
  t2993 = -1.*t2892*t1158;
  t2997 = t2991 + t2993;
  t2907 = t195*t2892;
  t2937 = t2922*t1158;
  t2944 = t2907 + t2937;
  t2327 = -0.766044*t2295;
  t2382 = 0.642788*t2358;
  t2413 = t2327 + t2382;
  t1489 = 0.642788*t1447;
  t1617 = 0.766044*t1584;
  t1625 = t1489 + t1617;
  t2980 = t102*t2944;
  t3010 = t2997*t1428;
  t3073 = t2980 + t3010;
  t3097 = t102*t2997;
  t3115 = -1.*t2944*t1428;
  t3139 = t3097 + t3115;
  t3089 = -0.766044*t3073;
  t3181 = 0.642788*t3139;
  t3186 = t3089 + t3181;
  t3320 = 0.642788*t3073;
  t3350 = 0.766044*t3139;
  t3406 = t3320 + t3350;
  t91 = Cos(var1[1]);
  t3464 = t1625*t3186;
  t3475 = -1.*t2453*t3406;
  t2578 = t1697*t543*t2453;
  t3204 = t1640*t3186;
  t3267 = t2578 + t3204;
  t3293 = -1.*t2521*t3267;
  t3303 = t1697*t543*t1625;
  t3419 = t1640*t3406;
  t3431 = t3303 + t3419;
  t3441 = t2413*t3431;
  t3492 = t3464 + t3475;
  t3509 = -1.*t543*t1638*t3492;
  t3517 = 0. + t3293 + t3441 + t3509;
  t3519 = 1/t3517;
  t81 = Cos(var1[0]);
  t3530 = Sin(var1[0]);
  t3584 = Sin(var1[1]);
  t3553 = t3406*t2413;
  t3564 = -1.*t3186*t2521;
  t3578 = 0. + t3553 + t3564;
  t3899 = Cos(var1[3]);
  t3877 = Cos(var1[2]);
  t3888 = Sin(var1[3]);
  t3926 = Sin(var1[2]);
  t3987 = Cos(var1[4]);
  t3894 = -1.*t91*t3877*t3888;
  t3942 = -1.*t3899*t91*t3926;
  t3973 = t3894 + t3942;
  t3865 = Sin(var1[4]);
  t3996 = t3899*t91*t3877;
  t3997 = -1.*t91*t3888*t3926;
  t3999 = t3996 + t3997;
  t4032 = Cos(var1[5]);
  t3974 = t3865*t3973;
  t4006 = t3987*t3999;
  t4015 = t3974 + t4006;
  t3861 = Sin(var1[5]);
  t4040 = t3987*t3973;
  t4054 = -1.*t3865*t3999;
  t4057 = t4040 + t4054;
  t4105 = Cos(var1[6]);
  t4024 = -1.*t3861*t4015;
  t4063 = t4032*t4057;
  t4095 = t4024 + t4063;
  t3858 = Sin(var1[6]);
  t4106 = t4032*t4015;
  t4110 = t3861*t4057;
  t4112 = t4106 + t4110;
  t2427 = -1.*t1625*t2413;
  t2534 = t2453*t2521;
  t2564 = 0. + t2427 + t2534;
  t4162 = t81*t3877*t3584;
  t4176 = -1.*t3530*t3926;
  t4177 = t4162 + t4176;
  t4182 = -1.*t3877*t3530;
  t4191 = -1.*t81*t3584*t3926;
  t4193 = t4182 + t4191;
  t4180 = -1.*t3888*t4177;
  t4195 = t3899*t4193;
  t4198 = t4180 + t4195;
  t4201 = t3899*t4177;
  t4203 = t3888*t4193;
  t4211 = t4201 + t4203;
  t4199 = t3865*t4198;
  t4213 = t3987*t4211;
  t4218 = t4199 + t4213;
  t4223 = t3987*t4198;
  t4236 = -1.*t3865*t4211;
  t4240 = t4223 + t4236;
  t4221 = -1.*t3861*t4218;
  t4241 = t4032*t4240;
  t4244 = t4221 + t4241;
  t4249 = t4032*t4218;
  t4256 = t3861*t4240;
  t4262 = t4249 + t4256;
  t3528 = 0. + t3464 + t3475;
  t4324 = t3877*t3530*t3584;
  t4327 = t81*t3926;
  t4329 = t4324 + t4327;
  t4342 = t81*t3877;
  t4360 = -1.*t3530*t3584*t3926;
  t4364 = t4342 + t4360;
  t4341 = -1.*t3888*t4329;
  t4366 = t3899*t4364;
  t4382 = t4341 + t4366;
  t4400 = t3899*t4329;
  t4401 = t3888*t4364;
  t4416 = t4400 + t4401;
  t4390 = t3865*t4382;
  t4417 = t3987*t4416;
  t4428 = t4390 + t4417;
  t4440 = t3987*t4382;
  t4441 = -1.*t3865*t4416;
  t4452 = t4440 + t4441;
  t4435 = -1.*t3861*t4428;
  t4470 = t4032*t4452;
  t4472 = t4435 + t4470;
  t4490 = t4032*t4428;
  t4494 = t3861*t4452;
  t4517 = t4490 + t4494;
  t3710 = -1.*t543*t1638*t3186;
  t3718 = t1697*t543*t2413;
  t3725 = 0. + t3710 + t3718;
  t4102 = t3858*t4095;
  t4126 = t4105*t4112;
  t4135 = t4102 + t4126;
  t4136 = 0.642788*t4135;
  t4146 = t4105*t4095;
  t4147 = -1.*t3858*t4112;
  t4150 = t4146 + t4147;
  t4151 = 0.766044*t4150;
  t4157 = t4136 + t4151;
  t3619 = t543*t1638*t2453;
  t3621 = t1640*t2413;
  t3622 = 0. + t3619 + t3621;
  t4247 = t3858*t4244;
  t4264 = t4105*t4262;
  t4273 = t4247 + t4264;
  t4293 = 0.642788*t4273;
  t4297 = t4105*t4244;
  t4301 = -1.*t3858*t4262;
  t4302 = t4297 + t4301;
  t4304 = 0.766044*t4302;
  t4308 = t4293 + t4304;
  t3645 = -1.*t1697*t543*t2453;
  t3659 = -1.*t1640*t3186;
  t3673 = 0. + t3645 + t3659;
  t4482 = t3858*t4472;
  t4542 = t4105*t4517;
  t4559 = t4482 + t4542;
  t4568 = 0.642788*t4559;
  t4573 = t4105*t4472;
  t4592 = -1.*t3858*t4517;
  t4606 = t4573 + t4592;
  t4614 = 0.766044*t4606;
  t4630 = t4568 + t4614;
  t3818 = t543*t1638*t3406;
  t3823 = -1.*t1697*t543*t2521;
  t3836 = 0. + t3818 + t3823;
  t3748 = -1.*t543*t1638*t1625;
  t3776 = -1.*t1640*t2521;
  t3779 = 0. + t3748 + t3776;
  t3797 = 0. + t3303 + t3419;
  t4684 = -0.766044*t4135;
  t4687 = 0.642788*t4150;
  t4688 = t4684 + t4687;
  t4700 = -0.766044*t4273;
  t4701 = 0.642788*t4302;
  t4704 = t4700 + t4701;
  t4712 = -0.766044*t4559;
  t4718 = 0.642788*t4606;
  t4719 = t4712 + t4718;
  p_output1[0]=0. + t3519*t3578*t3584 - 1.*t3519*t3528*t3530*t91 - 1.*t2564*t3519*t81*t91;
  p_output1[1]=0. + t3519*t3584*t3725 - 1.*t3519*t3530*t3673*t91 - 1.*t3519*t3622*t81*t91;
  p_output1[2]=0. + t3519*t3584*t3836 - 1.*t3519*t3530*t3797*t91 - 1.*t3519*t3779*t81*t91;
  p_output1[3]=0. + t3519*t3578*t4157 + t2564*t3519*t4308 + t3519*t3528*t4630;
  p_output1[4]=0. + t3519*t3725*t4157 + t3519*t3622*t4308 + t3519*t3673*t4630;
  p_output1[5]=0. + t3519*t3836*t4157 + t3519*t3779*t4308 + t3519*t3797*t4630;
  p_output1[6]=0. + t3519*t3578*t4688 + t2564*t3519*t4704 + t3519*t3528*t4719;
  p_output1[7]=0. + t3519*t3725*t4688 + t3519*t3622*t4704 + t3519*t3673*t4719;
  p_output1[8]=0. + t3519*t3836*t4688 + t3519*t3779*t4704 + t3519*t3797*t4719;
}



void R_RightToeFront_to_LeftToeFront_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
