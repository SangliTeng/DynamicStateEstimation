/*
 * Automatically Generated from Mathematica.
 * Wed 23 Oct 2019 10:26:31 GMT-07:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_LeftToeBack_to_RightToeBack_src.h"

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
  double t709;
  double t785;
  double t719;
  double t724;
  double t842;
  double t929;
  double t767;
  double t845;
  double t877;
  double t708;
  double t957;
  double t959;
  double t964;
  double t1000;
  double t905;
  double t966;
  double t976;
  double t524;
  double t1043;
  double t1067;
  double t1113;
  double t1342;
  double t985;
  double t1123;
  double t1129;
  double t430;
  double t1357;
  double t1376;
  double t1390;
  double t1692;
  double t1599;
  double t1616;
  double t1660;
  double t1695;
  double t1696;
  double t1723;
  double t1725;
  double t1769;
  double t1702;
  double t1781;
  double t1791;
  double t1862;
  double t1864;
  double t1919;
  double t1860;
  double t1922;
  double t1987;
  double t2015;
  double t2021;
  double t2033;
  double t1995;
  double t2035;
  double t2042;
  double t2088;
  double t2144;
  double t2161;
  double t1203;
  double t1405;
  double t1406;
  double t1427;
  double t1486;
  double t1522;
  double t2049;
  double t2192;
  double t2210;
  double t2224;
  double t2226;
  double t2260;
  double t2468;
  double t2494;
  double t2510;
  double t2548;
  double t2595;
  double t2645;
  double t2529;
  double t2650;
  double t2670;
  double t2726;
  double t2762;
  double t2775;
  double t2697;
  double t2788;
  double t2798;
  double t2850;
  double t2903;
  double t2911;
  double t2812;
  double t2916;
  double t2933;
  double t2956;
  double t2964;
  double t2965;
  double t2321;
  double t2329;
  double t2394;
  double t2222;
  double t2286;
  double t2310;
  double t2942;
  double t2983;
  double t2988;
  double t3012;
  double t3019;
  double t3056;
  double t1422;
  double t1572;
  double t1579;
  double t2396;
  double t2403;
  double t2442;
  double t2317;
  double t2448;
  double t176;
  double t3166;
  double t3172;
  double t3173;
  double t2999;
  double t3067;
  double t3076;
  double t3094;
  double t3100;
  double t3121;
  double t3150;
  double t3194;
  double t3220;
  double t3228;
  double t3275;
  double t3284;
  double t3310;
  double t3342;
  double t3368;
  double t230;
  double t3481;
  double t3436;
  double t3814;
  double t3827;
  double t3787;
  double t3898;
  double t3934;
  double t3936;
  double t3815;
  double t3837;
  double t3871;
  double t3956;
  double t3775;
  double t3991;
  double t4012;
  double t4021;
  double t3890;
  double t3962;
  double t3975;
  double t4042;
  double t3765;
  double t4071;
  double t4072;
  double t4075;
  double t3986;
  double t4051;
  double t4052;
  double t4100;
  double t3759;
  double t4140;
  double t4143;
  double t4154;
  double t4062;
  double t4128;
  double t4134;
  double t4156;
  double t2466;
  double t4263;
  double t4278;
  double t4279;
  double t4230;
  double t4234;
  double t4239;
  double t4291;
  double t4292;
  double t4300;
  double t4257;
  double t4280;
  double t4285;
  double t4345;
  double t4350;
  double t4354;
  double t4289;
  double t4310;
  double t4314;
  double t4369;
  double t4372;
  double t4375;
  double t4333;
  double t4357;
  double t4359;
  double t3446;
  double t3449;
  double t3460;
  double t4461;
  double t4462;
  double t4464;
  double t4432;
  double t4434;
  double t4438;
  double t4495;
  double t4514;
  double t4521;
  double t4456;
  double t4467;
  double t4469;
  double t4535;
  double t4537;
  double t4541;
  double t4488;
  double t4523;
  double t4529;
  double t3486;
  double t3491;
  double t3493;
  double t4137;
  double t4174;
  double t4175;
  double t4185;
  double t4187;
  double t4188;
  double t4192;
  double t4196;
  double t4198;
  double t3514;
  double t3520;
  double t3529;
  double t4534;
  double t4542;
  double t4543;
  double t4552;
  double t4557;
  double t4567;
  double t4570;
  double t4576;
  double t4587;
  double t3545;
  double t3568;
  double t3587;
  double t4362;
  double t4378;
  double t4386;
  double t4389;
  double t4395;
  double t4407;
  double t4415;
  double t4418;
  double t4429;
  double t3598;
  double t3602;
  double t3604;
  double t3650;
  double t3672;
  double t3675;
  double t3706;
  double t3734;
  double t3735;
  double t3736;
  double t4638;
  double t4639;
  double t4640;
  double t4670;
  double t4672;
  double t4675;
  double t4657;
  double t4658;
  double t4665;
  t709 = Cos(var1[1]);
  t785 = Cos(var1[3]);
  t719 = Cos(var1[2]);
  t724 = Sin(var1[3]);
  t842 = Sin(var1[2]);
  t929 = Cos(var1[4]);
  t767 = -1.*t709*t719*t724;
  t845 = -1.*t785*t709*t842;
  t877 = t767 + t845;
  t708 = Sin(var1[4]);
  t957 = t785*t709*t719;
  t959 = -1.*t709*t724*t842;
  t964 = t957 + t959;
  t1000 = Cos(var1[5]);
  t905 = t708*t877;
  t966 = t929*t964;
  t976 = t905 + t966;
  t524 = Sin(var1[5]);
  t1043 = t929*t877;
  t1067 = -1.*t708*t964;
  t1113 = t1043 + t1067;
  t1342 = Cos(var1[6]);
  t985 = -1.*t524*t976;
  t1123 = t1000*t1113;
  t1129 = t985 + t1123;
  t430 = Sin(var1[6]);
  t1357 = t1000*t976;
  t1376 = t524*t1113;
  t1390 = t1357 + t1376;
  t1692 = Sin(var1[0]);
  t1599 = Cos(var1[0]);
  t1616 = Sin(var1[1]);
  t1660 = t1599*t719*t1616;
  t1695 = -1.*t1692*t842;
  t1696 = t1660 + t1695;
  t1723 = -1.*t719*t1692;
  t1725 = -1.*t1599*t1616*t842;
  t1769 = t1723 + t1725;
  t1702 = -1.*t724*t1696;
  t1781 = t785*t1769;
  t1791 = t1702 + t1781;
  t1862 = t785*t1696;
  t1864 = t724*t1769;
  t1919 = t1862 + t1864;
  t1860 = t708*t1791;
  t1922 = t929*t1919;
  t1987 = t1860 + t1922;
  t2015 = t929*t1791;
  t2021 = -1.*t708*t1919;
  t2033 = t2015 + t2021;
  t1995 = -1.*t524*t1987;
  t2035 = t1000*t2033;
  t2042 = t1995 + t2035;
  t2088 = t1000*t1987;
  t2144 = t524*t2033;
  t2161 = t2088 + t2144;
  t1203 = t430*t1129;
  t1405 = t1342*t1390;
  t1406 = t1203 + t1405;
  t1427 = t1342*t1129;
  t1486 = -1.*t430*t1390;
  t1522 = t1427 + t1486;
  t2049 = t430*t2042;
  t2192 = t1342*t2161;
  t2210 = t2049 + t2192;
  t2224 = t1342*t2042;
  t2226 = -1.*t430*t2161;
  t2260 = t2224 + t2226;
  t2468 = t719*t1692*t1616;
  t2494 = t1599*t842;
  t2510 = t2468 + t2494;
  t2548 = t1599*t719;
  t2595 = -1.*t1692*t1616*t842;
  t2645 = t2548 + t2595;
  t2529 = -1.*t724*t2510;
  t2650 = t785*t2645;
  t2670 = t2529 + t2650;
  t2726 = t785*t2510;
  t2762 = t724*t2645;
  t2775 = t2726 + t2762;
  t2697 = t708*t2670;
  t2788 = t929*t2775;
  t2798 = t2697 + t2788;
  t2850 = t929*t2670;
  t2903 = -1.*t708*t2775;
  t2911 = t2850 + t2903;
  t2812 = -1.*t524*t2798;
  t2916 = t1000*t2911;
  t2933 = t2812 + t2916;
  t2956 = t1000*t2798;
  t2964 = t524*t2911;
  t2965 = t2956 + t2964;
  t2321 = -0.766044*t1406;
  t2329 = 0.642788*t1522;
  t2394 = t2321 + t2329;
  t2222 = -0.766044*t2210;
  t2286 = 0.642788*t2260;
  t2310 = t2222 + t2286;
  t2942 = t430*t2933;
  t2983 = t1342*t2965;
  t2988 = t2942 + t2983;
  t3012 = t1342*t2933;
  t3019 = -1.*t430*t2965;
  t3056 = t3012 + t3019;
  t1422 = 0.642788*t1406;
  t1572 = 0.766044*t1522;
  t1579 = t1422 + t1572;
  t2396 = 0.642788*t2210;
  t2403 = 0.766044*t2260;
  t2442 = t2396 + t2403;
  t2317 = t1579*t2310;
  t2448 = -1.*t2394*t2442;
  t176 = Cos(var1[8]);
  t3166 = -0.766044*t2988;
  t3172 = 0.642788*t3056;
  t3173 = t3166 + t3172;
  t2999 = 0.642788*t2988;
  t3067 = 0.766044*t3056;
  t3076 = t2999 + t3067;
  t3094 = t1599*t709*t2394;
  t3100 = t1616*t2310;
  t3121 = t3094 + t3100;
  t3150 = -1.*t3076*t3121;
  t3194 = t1599*t709*t1579;
  t3220 = t1616*t2442;
  t3228 = t3194 + t3220;
  t3275 = t3173*t3228;
  t3284 = t2317 + t2448;
  t3310 = -1.*t709*t1692*t3284;
  t3342 = 0. + t3150 + t3275 + t3310;
  t3368 = 1/t3342;
  t230 = Sin(var1[7]);
  t3481 = Sin(var1[8]);
  t3436 = Cos(var1[7]);
  t3814 = Cos(var1[9]);
  t3827 = Sin(var1[9]);
  t3787 = Cos(var1[10]);
  t3898 = t3436*t3814;
  t3934 = -1.*t230*t3481*t3827;
  t3936 = t3898 + t3934;
  t3815 = t3814*t230*t3481;
  t3837 = t3436*t3827;
  t3871 = t3815 + t3837;
  t3956 = Sin(var1[10]);
  t3775 = Cos(var1[11]);
  t3991 = t3787*t3936;
  t4012 = -1.*t3871*t3956;
  t4021 = t3991 + t4012;
  t3890 = t3787*t3871;
  t3962 = t3936*t3956;
  t3975 = t3890 + t3962;
  t4042 = Sin(var1[11]);
  t3765 = Cos(var1[12]);
  t4071 = t3775*t4021;
  t4072 = -1.*t3975*t4042;
  t4075 = t4071 + t4072;
  t3986 = t3775*t3975;
  t4051 = t4021*t4042;
  t4052 = t3986 + t4051;
  t4100 = Sin(var1[12]);
  t3759 = Cos(var1[13]);
  t4140 = t3765*t4075;
  t4143 = -1.*t4052*t4100;
  t4154 = t4140 + t4143;
  t4062 = t3765*t4052;
  t4128 = t4075*t4100;
  t4134 = t4062 + t4128;
  t4156 = Sin(var1[13]);
  t2466 = 0. + t2317 + t2448;
  t4263 = -1.*t3814*t230;
  t4278 = -1.*t3436*t3481*t3827;
  t4279 = t4263 + t4278;
  t4230 = t3436*t3814*t3481;
  t4234 = -1.*t230*t3827;
  t4239 = t4230 + t4234;
  t4291 = t3787*t4279;
  t4292 = -1.*t4239*t3956;
  t4300 = t4291 + t4292;
  t4257 = t3787*t4239;
  t4280 = t4279*t3956;
  t4285 = t4257 + t4280;
  t4345 = t3775*t4300;
  t4350 = -1.*t4285*t4042;
  t4354 = t4345 + t4350;
  t4289 = t3775*t4285;
  t4310 = t4300*t4042;
  t4314 = t4289 + t4310;
  t4369 = t3765*t4354;
  t4372 = -1.*t4314*t4100;
  t4375 = t4369 + t4372;
  t4333 = t3765*t4314;
  t4357 = t4354*t4100;
  t4359 = t4333 + t4357;
  t3446 = -1.*t1579*t3173;
  t3449 = t2394*t3076;
  t3460 = 0. + t3446 + t3449;
  t4461 = -1.*t176*t3787*t3827;
  t4462 = -1.*t176*t3814*t3956;
  t4464 = t4461 + t4462;
  t4432 = t176*t3814*t3787;
  t4434 = -1.*t176*t3827*t3956;
  t4438 = t4432 + t4434;
  t4495 = t3775*t4464;
  t4514 = -1.*t4438*t4042;
  t4521 = t4495 + t4514;
  t4456 = t3775*t4438;
  t4467 = t4464*t4042;
  t4469 = t4456 + t4467;
  t4535 = t3765*t4521;
  t4537 = -1.*t4469*t4100;
  t4541 = t4535 + t4537;
  t4488 = t3765*t4469;
  t4523 = t4521*t4100;
  t4529 = t4488 + t4523;
  t3486 = t2442*t3173;
  t3491 = -1.*t2310*t3076;
  t3493 = 0. + t3486 + t3491;
  t4137 = t3759*t4134;
  t4174 = t4154*t4156;
  t4175 = t4137 + t4174;
  t4185 = 0.642788*t4175;
  t4187 = t3759*t4154;
  t4188 = -1.*t4134*t4156;
  t4192 = t4187 + t4188;
  t4196 = 0.766044*t4192;
  t4198 = t4185 + t4196;
  t3514 = -1.*t1599*t709*t2394;
  t3520 = -1.*t1616*t2310;
  t3529 = 0. + t3514 + t3520;
  t4534 = t3759*t4529;
  t4542 = t4541*t4156;
  t4543 = t4534 + t4542;
  t4552 = 0.642788*t4543;
  t4557 = t3759*t4541;
  t4567 = -1.*t4529*t4156;
  t4570 = t4557 + t4567;
  t4576 = 0.766044*t4570;
  t4587 = t4552 + t4576;
  t3545 = -1.*t709*t1692*t2310;
  t3568 = t1599*t709*t3173;
  t3587 = 0. + t3545 + t3568;
  t4362 = t3759*t4359;
  t4378 = t4375*t4156;
  t4386 = t4362 + t4378;
  t4389 = 0.642788*t4386;
  t4395 = t3759*t4375;
  t4407 = -1.*t4359*t4156;
  t4415 = t4395 + t4407;
  t4418 = 0.766044*t4415;
  t4429 = t4389 + t4418;
  t3598 = t709*t1692*t2394;
  t3602 = t1616*t3173;
  t3604 = 0. + t3598 + t3602;
  t3650 = 0. + t3194 + t3220;
  t3672 = t709*t1692*t2442;
  t3675 = -1.*t1599*t709*t3076;
  t3706 = 0. + t3672 + t3675;
  t3734 = -1.*t709*t1692*t1579;
  t3735 = -1.*t1616*t3076;
  t3736 = 0. + t3734 + t3735;
  t4638 = -0.766044*t4175;
  t4639 = 0.642788*t4192;
  t4640 = t4638 + t4639;
  t4670 = -0.766044*t4543;
  t4672 = 0.642788*t4570;
  t4675 = t4670 + t4672;
  t4657 = -0.766044*t4386;
  t4658 = 0.642788*t4415;
  t4665 = t4657 + t4658;
  p_output1[0]=0. - 1.*t176*t230*t2466*t3368 - 1.*t176*t3368*t3436*t3460 + t3368*t3481*t3493;
  p_output1[1]=0. - 1.*t176*t230*t3368*t3529 + t3368*t3481*t3587 - 1.*t176*t3368*t3436*t3604;
  p_output1[2]=0. - 1.*t176*t230*t3368*t3650 + t3368*t3481*t3706 - 1.*t176*t3368*t3436*t3736;
  p_output1[3]=0. + t2466*t3368*t4198 + t3368*t3460*t4429 + t3368*t3493*t4587;
  p_output1[4]=0. + t3368*t3529*t4198 + t3368*t3604*t4429 + t3368*t3587*t4587;
  p_output1[5]=0. + t3368*t3650*t4198 + t3368*t3736*t4429 + t3368*t3706*t4587;
  p_output1[6]=0. + t2466*t3368*t4640 + t3368*t3460*t4665 + t3368*t3493*t4675;
  p_output1[7]=0. + t3368*t3529*t4640 + t3368*t3604*t4665 + t3368*t3587*t4675;
  p_output1[8]=0. + t3368*t3650*t4640 + t3368*t3736*t4665 + t3368*t3706*t4675;
}



void R_LeftToeBack_to_RightToeBack_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
