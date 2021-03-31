/*
 * Automatically Generated from Mathematica.
 * Wed 23 Oct 2019 10:33:49 GMT-07:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jvb_VectorNav_to_LeftToeBottom_src.h"

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
  double t424;
  double t659;
  double t973;
  double t630;
  double t665;
  double t685;
  double t419;
  double t1188;
  double t1199;
  double t1442;
  double t1675;
  double t807;
  double t1459;
  double t1572;
  double t406;
  double t1747;
  double t1755;
  double t1775;
  double t1883;
  double t1645;
  double t1785;
  double t1863;
  double t396;
  double t1899;
  double t1979;
  double t2013;
  double t196;
  double t2379;
  double t2413;
  double t2438;
  double t2371;
  double t2440;
  double t2456;
  double t2524;
  double t2529;
  double t2470;
  double t2535;
  double t2537;
  double t2566;
  double t2578;
  double t2589;
  double t2250;
  double t2767;
  double t2773;
  double t2730;
  double t2732;
  double t2814;
  double t2815;
  double t2819;
  double t2821;
  double t2846;
  double t2847;
  double t2857;
  double t2866;
  double t2690;
  double t2704;
  double t2749;
  double t2761;
  double t2841;
  double t2868;
  double t2891;
  double t2912;
  double t2917;
  double t2936;
  double t2937;
  double t2940;
  double t2670;
  double t2684;
  double t2717;
  double t2727;
  double t2905;
  double t2944;
  double t2956;
  double t2969;
  double t2970;
  double t2995;
  double t2998;
  double t3002;
  double t149;
  double t2620;
  double t2621;
  double t2622;
  double t2556;
  double t2604;
  double t2605;
  double t2649;
  double t2653;
  double t3037;
  double t3039;
  double t3045;
  double t3058;
  double t3066;
  double t2685;
  double t2687;
  double t2960;
  double t3007;
  double t3016;
  double t3122;
  double t3090;
  double t3095;
  double t3099;
  double t3113;
  double t3117;
  double t3125;
  double t3126;
  double t3127;
  double t3133;
  double t3145;
  double t3102;
  double t3105;
  double t2657;
  double t3021;
  double t3028;
  double t3074;
  double t3080;
  double t2149;
  double t2227;
  double t2230;
  double t1881;
  double t2023;
  double t2030;
  double t3121;
  double t3123;
  double t3151;
  double t3152;
  double t2079;
  double t2319;
  double t2336;
  double t2337;
  double t2367;
  double t3190;
  double t3196;
  double t3201;
  double t3205;
  double t3207;
  double t3228;
  double t3239;
  double t3241;
  double t3286;
  double t2616;
  double t2624;
  double t2632;
  double t3159;
  double t3189;
  double t3317;
  double t3322;
  double t3260;
  double t3261;
  double t3081;
  double t3243;
  t424 = Cos(var1[6]);
  t659 = Sin(var1[6]);
  t973 = Cos(var1[5]);
  t630 = 0.642788*t424;
  t665 = -0.766044*t659;
  t685 = t630 + t665;
  t419 = Sin(var1[5]);
  t1188 = 0.766044*t424;
  t1199 = 0.642788*t659;
  t1442 = t1188 + t1199;
  t1675 = Cos(var1[4]);
  t807 = t419*t685;
  t1459 = t973*t1442;
  t1572 = 0. + t807 + t1459;
  t406 = Sin(var1[4]);
  t1747 = t973*t685;
  t1755 = -1.*t419*t1442;
  t1775 = 0. + t1747 + t1755;
  t1883 = Sin(var1[3]);
  t1645 = -1.*t406*t1572;
  t1785 = t1675*t1775;
  t1863 = 0. + t1645 + t1785;
  t396 = Cos(var1[3]);
  t1899 = t1675*t1572;
  t1979 = t406*t1775;
  t2013 = 0. + t1899 + t1979;
  t196 = Cos(var1[2]);
  t2379 = -0.766044*t424;
  t2413 = -0.642788*t659;
  t2438 = t2379 + t2413;
  t2371 = -1.*t419*t685;
  t2440 = t973*t2438;
  t2456 = 0. + t2371 + t2440;
  t2524 = t419*t2438;
  t2529 = 0. + t1747 + t2524;
  t2470 = t406*t2456;
  t2535 = t1675*t2529;
  t2537 = 0. + t2470 + t2535;
  t2566 = t1675*t2456;
  t2578 = -1.*t406*t2529;
  t2589 = 0. + t2566 + t2578;
  t2250 = Sin(var1[2]);
  t2767 = -1.*t424;
  t2773 = 1. + t2767;
  t2730 = -1.*t973;
  t2732 = 1. + t2730;
  t2814 = -0.0216*t2773;
  t2815 = 0.0306*t424;
  t2819 = 0.01770000000000005*t659;
  t2821 = 0. + t2814 + t2815 + t2819;
  t2846 = -1.1135*t2773;
  t2847 = -1.1312*t424;
  t2857 = 0.052199999999999996*t659;
  t2866 = 0. + t2846 + t2847 + t2857;
  t2690 = -1.*t1675;
  t2704 = 1. + t2690;
  t2749 = -0.7055*t2732;
  t2761 = -0.0184*t419;
  t2841 = t419*t2821;
  t2868 = t973*t2866;
  t2891 = 0. + t2749 + t2761 + t2841 + t2868;
  t2912 = 0.0184*t2732;
  t2917 = -0.7055*t419;
  t2936 = t973*t2821;
  t2937 = -1.*t419*t2866;
  t2940 = 0. + t2912 + t2917 + t2936 + t2937;
  t2670 = -1.*t396;
  t2684 = 1. + t2670;
  t2717 = -0.0016*t2704;
  t2727 = -0.2707*t406;
  t2905 = -1.*t406*t2891;
  t2944 = t1675*t2940;
  t2956 = 0. + t2717 + t2727 + t2905 + t2944;
  t2969 = -0.2707*t2704;
  t2970 = 0.0016*t406;
  t2995 = t1675*t2891;
  t2998 = t406*t2940;
  t3002 = 0. + t2969 + t2970 + t2995 + t2998;
  t149 = Cos(var1[1]);
  t2620 = -1.*t1883*t2537;
  t2621 = t396*t2589;
  t2622 = 0. + t2620 + t2621;
  t2556 = t396*t2537;
  t2604 = t1883*t2589;
  t2605 = 0. + t2556 + t2604;
  t2649 = -1.*t196;
  t2653 = 1. + t2649;
  t3037 = -0.049*t2684;
  t3039 = -0.21*t1883;
  t3045 = t396*t2956;
  t3058 = -1.*t1883*t3002;
  t3066 = 0. + t3037 + t3039 + t3045 + t3058;
  t2685 = -0.21*t2684;
  t2687 = 0.049*t1883;
  t2960 = t1883*t2956;
  t3007 = t396*t3002;
  t3016 = 0. + t2685 + t2687 + t2960 + t3007;
  t3122 = Sin(var1[1]);
  t3090 = t196*t2622;
  t3095 = -1.*t2605*t2250;
  t3099 = 0. + t3090 + t3095;
  t3113 = -1.*t149;
  t3117 = 1. + t3113;
  t3125 = -0.049*t2653;
  t3126 = t196*t3066;
  t3127 = -0.09*t2250;
  t3133 = -1.*t3016*t2250;
  t3145 = 0. + t3125 + t3126 + t3127 + t3133;
  t3102 = t149*t3099;
  t3105 = 0. + t3102;
  t2657 = -0.09*t2653;
  t3021 = t196*t3016;
  t3028 = 0.049*t2250;
  t3074 = t3066*t2250;
  t3080 = 0. + t2657 + t3021 + t3028 + t3074;
  t2149 = t1883*t1863;
  t2227 = t396*t2013;
  t2230 = 0. + t2149 + t2227;
  t1881 = t396*t1863;
  t2023 = -1.*t1883*t2013;
  t2030 = 0. + t1881 + t2023;
  t3121 = -0.049*t3117;
  t3123 = 0.004500000000000004*t3122;
  t3151 = t149*t3145;
  t3152 = 0. + t3121 + t3123 + t3151;
  t2079 = t196*t2030;
  t2319 = -1.*t2230*t2250;
  t2336 = 0. + t2079 + t2319;
  t2337 = t149*t2336;
  t2367 = 0. + t2337;
  t3190 = 0.135*t3117;
  t3196 = 0.1305*t149;
  t3201 = 0.049*t3122;
  t3205 = t3122*t3145;
  t3207 = 0. + t3190 + t3196 + t3201 + t3205;
  t3228 = t196*t2230;
  t3239 = t2030*t2250;
  t3241 = 0. + t3228 + t3239;
  t3286 = 0. + t3122;
  t2616 = t196*t2605;
  t2624 = t2622*t2250;
  t2632 = 0. + t2616 + t2624;
  t3159 = t3122*t3099;
  t3189 = 0. + t3159;
  t3317 = -1.*t149;
  t3322 = 0. + t3317;
  t3260 = t3122*t2336;
  t3261 = 0. + t3260;
  t3081 = t2632*t3080;
  t3243 = -1.*t3080*t3241;
  p_output1[0]=0. + t2367*(t3081 + t3105*t3152 + t3189*t3207) + t3105*(-1.*t2367*t3152 + t3243 - 1.*t3207*t3261);
  p_output1[1]=-0.135*t3241 + (-1.*t2632*t3080 - 1.*t3105*t3152 - 1.*t3189*t3207)*t3286 + t3105*(0. + t3152*t3286 + t3207*t3322);
  p_output1[2]=-0.135*t2632 + (t2367*t3152 + t3080*t3241 + t3207*t3261)*t3286 + t2367*(0. - 1.*t3152*t3286 - 1.*t3207*t3322);
  p_output1[3]=-0.049 + (0. + t3081 + t3099*t3145)*t3241 + t2632*(0. - 1.*t2336*t3145 + t3243);
  p_output1[4]=0. + 0.135*t2336 - 0.1305*t2632;
  p_output1[5]=0. + 0.135*t3099 + 0.1305*t3241;
  p_output1[6]=0.;
  p_output1[7]=0. - 0.09*t2030 + 0.049*t2230 - 1.*t2605*t3016 - 1.*t2622*t3066;
  p_output1[8]=0. + 0.049*t2605 - 0.09*t2622 + t2230*t3016 + t2030*t3066;
  p_output1[9]=0.;
  p_output1[10]=0. - 0.21*t1863 + 0.049*t2013 - 1.*t2589*t2956 - 1.*t2537*t3002;
  p_output1[11]=0. + 0.049*t2537 - 0.21*t2589 + t1863*t2956 + t2013*t3002;
  p_output1[12]=0.;
  p_output1[13]=0. + 0.0016*t1572 - 0.2707*t1775 - 1.*t2529*t2891 - 1.*t2456*t2940;
  p_output1[14]=0. - 0.2707*t2456 + 0.0016*t2529 + t1572*t2891 + t1775*t2940;
  p_output1[15]=0.;
  p_output1[16]=0. - 0.0184*t1442 - 1.*t2438*t2821 - 0.7055*t685 - 1.*t2866*t685;
  p_output1[17]=0. - 0.7055*t2438 + t1442*t2866 - 0.0184*t685 + t2821*t685;
  p_output1[18]=0.;
  p_output1[19]=0.05136484440000011;
  p_output1[20]=0.019994554799999897;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
}



void Jvb_VectorNav_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
