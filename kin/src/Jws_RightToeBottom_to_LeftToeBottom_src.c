/*
 * Automatically Generated from Mathematica.
 * Wed 23 Oct 2019 10:36:56 GMT-07:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jws_RightToeBottom_to_LeftToeBottom_src.h"

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
  double t361;
  double t434;
  double t334;
  double t380;
  double t461;
  double t226;
  double t545;
  double t583;
  double t594;
  double t402;
  double t486;
  double t503;
  double t618;
  double t141;
  double t727;
  double t742;
  double t746;
  double t533;
  double t625;
  double t661;
  double t760;
  double t139;
  double t822;
  double t826;
  double t827;
  double t689;
  double t761;
  double t773;
  double t834;
  double t85;
  double t936;
  double t943;
  double t945;
  double t778;
  double t842;
  double t874;
  double t953;
  double t1177;
  double t1178;
  double t1195;
  double t1096;
  double t1106;
  double t1144;
  double t1292;
  double t1296;
  double t1308;
  double t1154;
  double t1241;
  double t1251;
  double t1355;
  double t1392;
  double t1434;
  double t1281;
  double t1309;
  double t1327;
  double t1571;
  double t1579;
  double t1614;
  double t1329;
  double t1522;
  double t1527;
  double t914;
  double t994;
  double t999;
  double t1012;
  double t1033;
  double t1051;
  double t1542;
  double t1691;
  double t1716;
  double t1763;
  double t1778;
  double t1787;
  double t1981;
  double t2009;
  double t2024;
  double t2053;
  double t2209;
  double t2212;
  double t2250;
  double t2059;
  double t2076;
  double t2086;
  double t2294;
  double t2299;
  double t2302;
  double t2153;
  double t2259;
  double t2281;
  double t2360;
  double t2373;
  double t2417;
  double t2286;
  double t2310;
  double t2338;
  double t1883;
  double t1911;
  double t1961;
  double t1744;
  double t1824;
  double t1827;
  double t2356;
  double t2419;
  double t2467;
  double t2479;
  double t2480;
  double t2520;
  double t1011;
  double t1071;
  double t1078;
  double t2666;
  double t2667;
  double t2670;
  double t2478;
  double t2555;
  double t2595;
  double t2617;
  double t2635;
  double t2636;
  double t2638;
  double t2743;
  double t2753;
  double t2764;
  double t2767;
  double t2819;
  double t2821;
  double t2834;
  double t2835;
  double t2838;
  double t2842;
  double t3016;
  double t3044;
  double t3095;
  double t3116;
  double t3117;
  double t3076;
  double t3088;
  double t3090;
  double t3071;
  double t3314;
  double t1832;
  double t2026;
  double t2050;
  double t3318;
  double t3326;
  double t3216;
  double t3224;
  double t3225;
  double t3150;
  double t3165;
  double t3171;
  double t3333;
  double t3338;
  double t2872;
  double t2906;
  double t2918;
  double t3344;
  double t3354;
  double t3254;
  double t3285;
  double t3296;
  double t3247;
  double t2957;
  double t2964;
  double t2990;
  double t3330;
  double t3341;
  double t3357;
  double t3358;
  double t3372;
  double t3384;
  double t3387;
  double t3389;
  double t3390;
  double t3393;
  double t3407;
  double t3413;
  double t3446;
  double t3448;
  double t3454;
  double t3518;
  double t3533;
  double t3621;
  double t3627;
  double t3547;
  double t3567;
  double t3541;
  double t3603;
  double t3641;
  double t3664;
  double t3666;
  double t3682;
  double t3687;
  double t3693;
  double t3697;
  double t3699;
  double t3739;
  double t3758;
  t361 = Cos(var1[9]);
  t434 = Sin(var1[7]);
  t334 = Cos(var1[7]);
  t380 = Sin(var1[8]);
  t461 = Sin(var1[9]);
  t226 = Cos(var1[10]);
  t545 = -1.*t361*t434;
  t583 = -1.*t334*t380*t461;
  t594 = t545 + t583;
  t402 = t334*t361*t380;
  t486 = -1.*t434*t461;
  t503 = t402 + t486;
  t618 = Sin(var1[10]);
  t141 = Cos(var1[11]);
  t727 = t226*t594;
  t742 = -1.*t503*t618;
  t746 = t727 + t742;
  t533 = t226*t503;
  t625 = t594*t618;
  t661 = t533 + t625;
  t760 = Sin(var1[11]);
  t139 = Cos(var1[12]);
  t822 = t141*t746;
  t826 = -1.*t661*t760;
  t827 = t822 + t826;
  t689 = t141*t661;
  t761 = t746*t760;
  t773 = t689 + t761;
  t834 = Sin(var1[12]);
  t85 = Cos(var1[13]);
  t936 = t139*t827;
  t943 = -1.*t773*t834;
  t945 = t936 + t943;
  t778 = t139*t773;
  t842 = t827*t834;
  t874 = t778 + t842;
  t953 = Sin(var1[13]);
  t1177 = t334*t361;
  t1178 = -1.*t434*t380*t461;
  t1195 = t1177 + t1178;
  t1096 = t361*t434*t380;
  t1106 = t334*t461;
  t1144 = t1096 + t1106;
  t1292 = t226*t1195;
  t1296 = -1.*t1144*t618;
  t1308 = t1292 + t1296;
  t1154 = t226*t1144;
  t1241 = t1195*t618;
  t1251 = t1154 + t1241;
  t1355 = t141*t1308;
  t1392 = -1.*t1251*t760;
  t1434 = t1355 + t1392;
  t1281 = t141*t1251;
  t1309 = t1308*t760;
  t1327 = t1281 + t1309;
  t1571 = t139*t1434;
  t1579 = -1.*t1327*t834;
  t1614 = t1571 + t1579;
  t1329 = t139*t1327;
  t1522 = t1434*t834;
  t1527 = t1329 + t1522;
  t914 = t85*t874;
  t994 = t945*t953;
  t999 = t914 + t994;
  t1012 = t85*t945;
  t1033 = -1.*t874*t953;
  t1051 = t1012 + t1033;
  t1542 = t85*t1527;
  t1691 = t1614*t953;
  t1716 = t1542 + t1691;
  t1763 = t85*t1614;
  t1778 = -1.*t1527*t953;
  t1787 = t1763 + t1778;
  t1981 = 0.642788*t1716;
  t2009 = 0.766044*t1787;
  t2024 = t1981 + t2009;
  t2053 = Cos(var1[8]);
  t2209 = -1.*t2053*t226*t461;
  t2212 = -1.*t2053*t361*t618;
  t2250 = t2209 + t2212;
  t2059 = t2053*t361*t226;
  t2076 = -1.*t2053*t461*t618;
  t2086 = t2059 + t2076;
  t2294 = t141*t2250;
  t2299 = -1.*t2086*t760;
  t2302 = t2294 + t2299;
  t2153 = t141*t2086;
  t2259 = t2250*t760;
  t2281 = t2153 + t2259;
  t2360 = t139*t2302;
  t2373 = -1.*t2281*t834;
  t2417 = t2360 + t2373;
  t2286 = t139*t2281;
  t2310 = t2302*t834;
  t2338 = t2286 + t2310;
  t1883 = -0.766044*t999;
  t1911 = 0.642788*t1051;
  t1961 = t1883 + t1911;
  t1744 = -0.766044*t1716;
  t1824 = 0.642788*t1787;
  t1827 = t1744 + t1824;
  t2356 = t85*t2338;
  t2419 = t2417*t953;
  t2467 = t2356 + t2419;
  t2479 = t85*t2417;
  t2480 = -1.*t2338*t953;
  t2520 = t2479 + t2480;
  t1011 = 0.642788*t999;
  t1071 = 0.766044*t1051;
  t1078 = t1011 + t1071;
  t2666 = 0.642788*t2467;
  t2667 = 0.766044*t2520;
  t2670 = t2666 + t2667;
  t2478 = -0.766044*t2467;
  t2555 = 0.642788*t2520;
  t2595 = t2478 + t2555;
  t2617 = t334*t2053*t2595;
  t2635 = t380*t1961;
  t2636 = t2617 + t2635;
  t2638 = -1.*t2024*t2636;
  t2743 = t334*t2053*t2670;
  t2753 = t380*t1078;
  t2764 = t2743 + t2753;
  t2767 = t1827*t2764;
  t2819 = t2670*t1961;
  t2821 = -1.*t2595*t1078;
  t2834 = t2819 + t2821;
  t2835 = -1.*t2053*t434*t2834;
  t2838 = 0. + t2638 + t2767 + t2835;
  t2842 = 1/t2838;
  t3016 = Cos(var1[0]);
  t3044 = 0. + t3016;
  t3095 = Sin(var1[0]);
  t3116 = -1.*t3095;
  t3117 = 0. + t3116;
  t3076 = -1.*t2670*t1827;
  t3088 = t2595*t2024;
  t3090 = 0. + t3076 + t3088;
  t3071 = 0. + t2819 + t2821;
  t3314 = Cos(var1[1]);
  t1832 = t1078*t1827;
  t2026 = -1.*t1961*t2024;
  t2050 = 0. + t1832 + t2026;
  t3318 = -1.*t3016*t3314;
  t3326 = 0. + t3318;
  t3216 = t2053*t434*t2595;
  t3224 = t380*t1827;
  t3225 = 0. + t3216 + t3224;
  t3150 = -1.*t334*t2053*t2595;
  t3165 = -1.*t380*t1961;
  t3171 = 0. + t3150 + t3165;
  t3333 = -1.*t3314*t3095;
  t3338 = 0. + t3333;
  t2872 = -1.*t2053*t434*t1961;
  t2906 = t334*t2053*t1827;
  t2918 = 0. + t2872 + t2906;
  t3344 = Sin(var1[1]);
  t3354 = 0. + t3344;
  t3254 = -1.*t2053*t434*t2670;
  t3285 = -1.*t380*t2024;
  t3296 = 0. + t3254 + t3285;
  t3247 = 0. + t2743 + t2753;
  t2957 = t2053*t434*t1078;
  t2964 = -1.*t334*t2053*t2024;
  t2990 = 0. + t2957 + t2964;
  t3330 = t3326*t3090*t2842;
  t3341 = t3071*t2842*t3338;
  t3357 = t2050*t2842*t3354;
  t3358 = t3330 + t3341 + t3357;
  t3372 = t3326*t3225*t2842;
  t3384 = t3171*t2842*t3338;
  t3387 = t2918*t2842*t3354;
  t3389 = t3372 + t3384 + t3387;
  t3390 = t3326*t3296*t2842;
  t3393 = t3247*t2842*t3338;
  t3407 = t2990*t2842*t3354;
  t3413 = t3390 + t3393 + t3407;
  t3446 = -1.*t334;
  t3448 = 0. + t3446;
  t3454 = 0. + t434;
  t3518 = t2053*t434;
  t3533 = 0. + t3518;
  t3621 = -1.*t380;
  t3627 = 0. + t3621;
  t3547 = t334*t2053;
  t3567 = 0. + t3547;
  t3541 = t3533*t3071*t2842;
  t3603 = t3567*t3090*t2842;
  t3641 = t3627*t2050*t2842;
  t3664 = t3541 + t3603 + t3641;
  t3666 = t3533*t3171*t2842;
  t3682 = t3627*t2918*t2842;
  t3687 = t3567*t3225*t2842;
  t3693 = t3666 + t3682 + t3687;
  t3697 = t3533*t3247*t2842;
  t3699 = t3627*t2990*t2842;
  t3739 = t3567*t3296*t2842;
  t3758 = t3697 + t3699 + t3739;
  p_output1[0]=0. + t2050*t2842;
  p_output1[1]=0. + t2842*t2918;
  p_output1[2]=0. + t2842*t2990;
  p_output1[3]=0. + t2842*t3044*t3071 + t2842*t3090*t3117;
  p_output1[4]=0. + t2842*t3044*t3171 + t2842*t3117*t3225;
  p_output1[5]=0. + t2842*t3044*t3247 + t2842*t3117*t3296;
  p_output1[6]=t3358;
  p_output1[7]=t3389;
  p_output1[8]=t3413;
  p_output1[9]=t3358;
  p_output1[10]=t3389;
  p_output1[11]=t3413;
  p_output1[12]=t3358;
  p_output1[13]=t3389;
  p_output1[14]=t3413;
  p_output1[15]=t3358;
  p_output1[16]=t3389;
  p_output1[17]=t3413;
  p_output1[18]=t3358;
  p_output1[19]=t3389;
  p_output1[20]=t3413;
  p_output1[21]=0. - 1.*t2050*t2842;
  p_output1[22]=0. - 1.*t2842*t2918;
  p_output1[23]=0. - 1.*t2842*t2990;
  p_output1[24]=0. + t2842*t3071*t3448 + t2842*t3090*t3454;
  p_output1[25]=0. + t2842*t3171*t3448 + t2842*t3225*t3454;
  p_output1[26]=0. + t2842*t3247*t3448 + t2842*t3296*t3454;
  p_output1[27]=t3664;
  p_output1[28]=t3693;
  p_output1[29]=t3758;
  p_output1[30]=t3664;
  p_output1[31]=t3693;
  p_output1[32]=t3758;
  p_output1[33]=t3664;
  p_output1[34]=t3693;
  p_output1[35]=t3758;
  p_output1[36]=t3664;
  p_output1[37]=t3693;
  p_output1[38]=t3758;
  p_output1[39]=t3664;
  p_output1[40]=t3693;
  p_output1[41]=t3758;
}



void Jws_RightToeBottom_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
