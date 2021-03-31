/*
 * Automatically Generated from Mathematica.
 * Wed 12 Feb 2020 15:27:34 GMT-08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_hip_flexion_left_src.h"

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
  double t2651;
  double t2634;
  double t2655;
  double t2635;
  double t2656;
  double t2024;
  double t2639;
  double t2657;
  double t2664;
  double t2680;
  double t2685;
  double t2687;
  double t2688;
  double t2724;
  double t2728;
  double t2731;
  double t2742;
  double t2709;
  double t2714;
  double t2721;
  double t2754;
  double t2782;
  double t2785;
  double t2790;
  double t2796;
  double t2770;
  double t2777;
  double t2781;
  double t2821;
  double t2823;
  double t2824;
  double t2288;
  double t2548;
  double t2566;
  double t2614;
  double t2695;
  double t2696;
  double t2878;
  double t2880;
  double t2882;
  double t2887;
  double t2893;
  double t2894;
  double t2740;
  double t2744;
  double t2746;
  double t2758;
  double t2759;
  double t2760;
  double t2900;
  double t2901;
  double t2905;
  double t2793;
  double t2809;
  double t2811;
  double t2826;
  double t2827;
  double t2829;
  double t2927;
  double t2931;
  double t2938;
  double t2948;
  double t2950;
  double t2954;
  double t2984;
  double t2987;
  double t2988;
  double t3009;
  double t3014;
  double t3018;
  double t3020;
  double t3022;
  double t3024;
  t2651 = Cos(var1[3]);
  t2634 = Cos(var1[5]);
  t2655 = Sin(var1[4]);
  t2635 = Sin(var1[3]);
  t2656 = Sin(var1[5]);
  t2024 = Cos(var1[6]);
  t2639 = -1.*t2634*t2635;
  t2657 = t2651*t2655*t2656;
  t2664 = t2639 + t2657;
  t2680 = t2651*t2634*t2655;
  t2685 = t2635*t2656;
  t2687 = t2680 + t2685;
  t2688 = Sin(var1[6]);
  t2724 = Cos(var1[7]);
  t2728 = -1.*t2724;
  t2731 = 1. + t2728;
  t2742 = Sin(var1[7]);
  t2709 = t2024*t2664;
  t2714 = t2687*t2688;
  t2721 = t2709 + t2714;
  t2754 = Cos(var1[4]);
  t2782 = Cos(var1[8]);
  t2785 = -1.*t2782;
  t2790 = 1. + t2785;
  t2796 = Sin(var1[8]);
  t2770 = t2651*t2754*t2724;
  t2777 = t2721*t2742;
  t2781 = t2770 + t2777;
  t2821 = t2024*t2687;
  t2823 = -1.*t2664*t2688;
  t2824 = t2821 + t2823;
  t2288 = -1.*t2024;
  t2548 = 1. + t2288;
  t2566 = 0.135*t2548;
  t2614 = 0. + t2566;
  t2695 = -0.135*t2688;
  t2696 = 0. + t2695;
  t2878 = t2651*t2634;
  t2880 = t2635*t2655*t2656;
  t2882 = t2878 + t2880;
  t2887 = t2634*t2635*t2655;
  t2893 = -1.*t2651*t2656;
  t2894 = t2887 + t2893;
  t2740 = 0.135*t2731;
  t2744 = 0.049*t2742;
  t2746 = 0. + t2740 + t2744;
  t2758 = -0.049*t2731;
  t2759 = 0.135*t2742;
  t2760 = 0. + t2758 + t2759;
  t2900 = t2024*t2882;
  t2901 = t2894*t2688;
  t2905 = t2900 + t2901;
  t2793 = -0.049*t2790;
  t2809 = -0.09*t2796;
  t2811 = 0. + t2793 + t2809;
  t2826 = -0.09*t2790;
  t2827 = 0.049*t2796;
  t2829 = 0. + t2826 + t2827;
  t2927 = t2754*t2724*t2635;
  t2931 = t2905*t2742;
  t2938 = t2927 + t2931;
  t2948 = t2024*t2894;
  t2950 = -1.*t2882*t2688;
  t2954 = t2948 + t2950;
  t2984 = t2754*t2024*t2656;
  t2987 = t2754*t2634*t2688;
  t2988 = t2984 + t2987;
  t3009 = -1.*t2724*t2655;
  t3014 = t2988*t2742;
  t3018 = t3009 + t3014;
  t3020 = t2754*t2634*t2024;
  t3022 = -1.*t2754*t2656*t2688;
  t3024 = t3020 + t3022;
  p_output1[0]=0. + t2614*t2664 + t2687*t2696 + t2721*t2746 + 0.135*(t2721*t2724 - 1.*t2651*t2742*t2754) + t2651*t2754*t2760 + t2781*t2811 - 0.09*(-1.*t2781*t2796 + t2782*t2824) - 0.049*(t2781*t2782 + t2796*t2824) + t2824*t2829 + var1[0];
  p_output1[1]=0. + t2635*t2754*t2760 + t2614*t2882 + t2696*t2894 + t2746*t2905 + 0.135*(-1.*t2635*t2742*t2754 + t2724*t2905) + t2811*t2938 + t2829*t2954 - 0.09*(-1.*t2796*t2938 + t2782*t2954) - 0.049*(t2782*t2938 + t2796*t2954) + var1[1];
  p_output1[2]=0. + t2614*t2656*t2754 + t2634*t2696*t2754 - 1.*t2655*t2760 + t2746*t2988 + 0.135*(t2655*t2742 + t2724*t2988) + t2811*t3018 + t2829*t3024 - 0.09*(-1.*t2796*t3018 + t2782*t3024) - 0.049*(t2782*t3018 + t2796*t3024) + var1[2];
}



void p_hip_flexion_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
