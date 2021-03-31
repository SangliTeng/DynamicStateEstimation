/*
 * Automatically Generated from Mathematica.
 * Wed 23 Oct 2019 10:26:00 GMT-07:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_VectorNav_to_LeftToeBottom_src.h"

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
  double t1030;
  double t2289;
  double t2204;
  double t2256;
  double t2291;
  double t2323;
  double t2288;
  double t2292;
  double t2295;
  double t2140;
  double t2329;
  double t2335;
  double t2339;
  double t2386;
  double t2299;
  double t2356;
  double t2377;
  double t2133;
  double t2426;
  double t2429;
  double t2431;
  double t2452;
  double t2383;
  double t2446;
  double t2447;
  double t2105;
  double t2466;
  double t2475;
  double t2479;
  double t1017;
  double t347;
  double t1694;
  double t2527;
  double t2550;
  double t2551;
  double t2569;
  double t2588;
  double t2595;
  double t2557;
  double t2600;
  double t2601;
  double t2610;
  double t2611;
  double t2624;
  double t2602;
  double t2693;
  double t2701;
  double t2727;
  double t2734;
  double t2741;
  double t2716;
  double t2742;
  double t2748;
  double t2762;
  double t2781;
  double t2786;
  double t2815;
  double t2821;
  double t2843;
  double t2879;
  double t2900;
  double t2905;
  double t2857;
  double t2914;
  double t2921;
  double t2943;
  double t2946;
  double t2948;
  double t2933;
  double t2952;
  double t2953;
  double t2968;
  double t2977;
  double t2978;
  double t2965;
  double t2990;
  double t2999;
  double t3018;
  double t3033;
  double t3037;
  double t2448;
  double t2482;
  double t2483;
  double t2488;
  double t2496;
  double t2500;
  double t2754;
  double t2788;
  double t2795;
  double t2803;
  double t2805;
  double t2806;
  double t3012;
  double t3050;
  double t3074;
  double t3077;
  double t3090;
  double t3098;
  double t3226;
  double t3228;
  double t3312;
  double t3314;
  double t3352;
  double t3372;
  double t3450;
  double t3464;
  double t3192;
  double t3196;
  double t3253;
  double t3265;
  double t3267;
  double t3275;
  double t3279;
  double t3233;
  double t3236;
  double t3240;
  double t3293;
  double t3295;
  double t3299;
  double t3316;
  double t3318;
  double t3327;
  double t3334;
  double t3336;
  double t3349;
  double t3383;
  double t3386;
  double t3398;
  double t3408;
  double t3416;
  double t3443;
  double t3472;
  double t3489;
  double t3491;
  double t3497;
  double t3500;
  double t3501;
  double t3546;
  double t3547;
  double t3561;
  double t3569;
  double t3582;
  double t3586;
  t1030 = Cos(var1[1]);
  t2289 = Cos(var1[3]);
  t2204 = Cos(var1[2]);
  t2256 = Sin(var1[3]);
  t2291 = Sin(var1[2]);
  t2323 = Cos(var1[4]);
  t2288 = -1.*t1030*t2204*t2256;
  t2292 = -1.*t2289*t1030*t2291;
  t2295 = t2288 + t2292;
  t2140 = Sin(var1[4]);
  t2329 = t2289*t1030*t2204;
  t2335 = -1.*t1030*t2256*t2291;
  t2339 = t2329 + t2335;
  t2386 = Cos(var1[5]);
  t2299 = t2140*t2295;
  t2356 = t2323*t2339;
  t2377 = t2299 + t2356;
  t2133 = Sin(var1[5]);
  t2426 = t2323*t2295;
  t2429 = -1.*t2140*t2339;
  t2431 = t2426 + t2429;
  t2452 = Cos(var1[6]);
  t2383 = -1.*t2133*t2377;
  t2446 = t2386*t2431;
  t2447 = t2383 + t2446;
  t2105 = Sin(var1[6]);
  t2466 = t2386*t2377;
  t2475 = t2133*t2431;
  t2479 = t2466 + t2475;
  t1017 = Cos(var1[0]);
  t347 = Sin(var1[1]);
  t1694 = Sin(var1[0]);
  t2527 = t1017*t2204*t347;
  t2550 = -1.*t1694*t2291;
  t2551 = t2527 + t2550;
  t2569 = -1.*t2204*t1694;
  t2588 = -1.*t1017*t347*t2291;
  t2595 = t2569 + t2588;
  t2557 = -1.*t2256*t2551;
  t2600 = t2289*t2595;
  t2601 = t2557 + t2600;
  t2610 = t2289*t2551;
  t2611 = t2256*t2595;
  t2624 = t2610 + t2611;
  t2602 = t2140*t2601;
  t2693 = t2323*t2624;
  t2701 = t2602 + t2693;
  t2727 = t2323*t2601;
  t2734 = -1.*t2140*t2624;
  t2741 = t2727 + t2734;
  t2716 = -1.*t2133*t2701;
  t2742 = t2386*t2741;
  t2748 = t2716 + t2742;
  t2762 = t2386*t2701;
  t2781 = t2133*t2741;
  t2786 = t2762 + t2781;
  t2815 = t2204*t1694*t347;
  t2821 = t1017*t2291;
  t2843 = t2815 + t2821;
  t2879 = t1017*t2204;
  t2900 = -1.*t1694*t347*t2291;
  t2905 = t2879 + t2900;
  t2857 = -1.*t2256*t2843;
  t2914 = t2289*t2905;
  t2921 = t2857 + t2914;
  t2943 = t2289*t2843;
  t2946 = t2256*t2905;
  t2948 = t2943 + t2946;
  t2933 = t2140*t2921;
  t2952 = t2323*t2948;
  t2953 = t2933 + t2952;
  t2968 = t2323*t2921;
  t2977 = -1.*t2140*t2948;
  t2978 = t2968 + t2977;
  t2965 = -1.*t2133*t2953;
  t2990 = t2386*t2978;
  t2999 = t2965 + t2990;
  t3018 = t2386*t2953;
  t3033 = t2133*t2978;
  t3037 = t3018 + t3033;
  t2448 = t2105*t2447;
  t2482 = t2452*t2479;
  t2483 = t2448 + t2482;
  t2488 = t2452*t2447;
  t2496 = -1.*t2105*t2479;
  t2500 = t2488 + t2496;
  t2754 = t2105*t2748;
  t2788 = t2452*t2786;
  t2795 = t2754 + t2788;
  t2803 = t2452*t2748;
  t2805 = -1.*t2105*t2786;
  t2806 = t2803 + t2805;
  t3012 = t2105*t2999;
  t3050 = t2452*t3037;
  t3074 = t3012 + t3050;
  t3077 = t2452*t2999;
  t3090 = -1.*t2105*t3037;
  t3098 = t3077 + t3090;
  t3226 = -1.*t2289;
  t3228 = 1. + t3226;
  t3312 = -1.*t2323;
  t3314 = 1. + t3312;
  t3352 = -1.*t2386;
  t3372 = 1. + t3352;
  t3450 = -1.*t2452;
  t3464 = 1. + t3450;
  t3192 = -1.*t1030;
  t3196 = 1. + t3192;
  t3253 = -1.*t2204;
  t3265 = 1. + t3253;
  t3267 = -0.049*t3265;
  t3275 = -0.09*t2291;
  t3279 = 0. + t3267 + t3275;
  t3233 = -0.049*t3228;
  t3236 = -0.21*t2256;
  t3240 = 0. + t3233 + t3236;
  t3293 = -0.21*t3228;
  t3295 = 0.049*t2256;
  t3299 = 0. + t3293 + t3295;
  t3316 = -0.2707*t3314;
  t3318 = 0.0016*t2140;
  t3327 = 0. + t3316 + t3318;
  t3334 = -0.0016*t3314;
  t3336 = -0.2707*t2140;
  t3349 = 0. + t3334 + t3336;
  t3383 = 0.0184*t3372;
  t3386 = -0.7055*t2133;
  t3398 = 0. + t3383 + t3386;
  t3408 = -0.7055*t3372;
  t3416 = -0.0184*t2133;
  t3443 = 0. + t3408 + t3416;
  t3472 = -1.1135*t3464;
  t3489 = 0.0216*t2105;
  t3491 = 0. + t3472 + t3489;
  t3497 = -0.0216*t3464;
  t3500 = -1.1135*t2105;
  t3501 = 0. + t3497 + t3500;
  t3546 = 0.135*t3196;
  t3547 = 0.049*t347;
  t3561 = 0. + t3546 + t3547;
  t3569 = -0.09*t3265;
  t3582 = 0.049*t2291;
  t3586 = 0. + t3569 + t3582;
  p_output1[0]=0. + t347;
  p_output1[1]=0. - 1.*t1017*t1030;
  p_output1[2]=0. - 1.*t1030*t1694;
  p_output1[3]=0.;
  p_output1[4]=0. + 0.642788*t2483 + 0.766044*t2500;
  p_output1[5]=0. + 0.642788*t2795 + 0.766044*t2806;
  p_output1[6]=0. + 0.642788*t3074 + 0.766044*t3098;
  p_output1[7]=0.;
  p_output1[8]=0. - 0.766044*t2483 + 0.642788*t2500;
  p_output1[9]=0. - 0.766044*t2795 + 0.642788*t2806;
  p_output1[10]=0. - 0.766044*t3074 + 0.642788*t3098;
  p_output1[11]=0.;
  p_output1[12]=-0.03155 + 0.0306*t2483 - 1.1312*t2500 - 0.049*t3196 + t1030*t2204*t3240 + t1030*t3279 - 1.*t1030*t2291*t3299 + t2295*t3327 + t2339*t3349 + t2377*t3398 + t2431*t3443 + 0.004500000000000004*t347 + t2447*t3491 + t2479*t3501;
  p_output1[13]=0. + 0.135*(1. - 1.*t1017) + 0.1305*t1017*t1030 + 0.0306*t2795 - 1.1312*t2806 + t2551*t3240 + t2595*t3299 + t2601*t3327 + t2624*t3349 + t2701*t3398 + t2741*t3443 + t1017*t3279*t347 + t2748*t3491 + t2786*t3501 + t1017*t3561 - 1.*t1694*t3586;
  p_output1[14]=0.07996 - 0.135*t1694 + 0.1305*t1030*t1694 + 0.0306*t3074 - 1.1312*t3098 + t2843*t3240 + t2905*t3299 + t2921*t3327 + t2948*t3349 + t2953*t3398 + t2978*t3443 + t1694*t3279*t347 + t2999*t3491 + t3037*t3501 + t1694*t3561 + t1017*t3586;
  p_output1[15]=1.;
}



void H_VectorNav_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
