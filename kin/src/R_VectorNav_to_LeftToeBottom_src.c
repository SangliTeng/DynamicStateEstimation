/*
 * Automatically Generated from Mathematica.
 * Wed 23 Oct 2019 10:26:01 GMT-07:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_VectorNav_to_LeftToeBottom_src.h"

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
  double t791;
  double t2803;
  double t2762;
  double t2781;
  double t2806;
  double t2921;
  double t2797;
  double t2879;
  double t2905;
  double t2741;
  double t2936;
  double t2946;
  double t2978;
  double t3050;
  double t2914;
  double t2999;
  double t3018;
  double t2610;
  double t3074;
  double t3153;
  double t3157;
  double t3180;
  double t3033;
  double t3166;
  double t3168;
  double t2602;
  double t3233;
  double t3240;
  double t3267;
  double t556;
  double t91;
  double t2466;
  double t3386;
  double t3398;
  double t3416;
  double t3446;
  double t3472;
  double t3489;
  double t3443;
  double t3497;
  double t3501;
  double t3516;
  double t3540;
  double t3541;
  double t3509;
  double t3546;
  double t3561;
  double t3594;
  double t3598;
  double t3602;
  double t3592;
  double t3613;
  double t3619;
  double t3630;
  double t3631;
  double t3633;
  double t3681;
  double t3685;
  double t3686;
  double t3696;
  double t3700;
  double t3701;
  double t3688;
  double t3706;
  double t3718;
  double t3721;
  double t3724;
  double t3736;
  double t3719;
  double t3739;
  double t3752;
  double t3763;
  double t3764;
  double t3767;
  double t3761;
  double t3769;
  double t3779;
  double t3786;
  double t3788;
  double t3790;
  double t3179;
  double t3295;
  double t3316;
  double t3327;
  double t3328;
  double t3334;
  double t3622;
  double t3637;
  double t3652;
  double t3656;
  double t3658;
  double t3662;
  double t3784;
  double t3802;
  double t3805;
  double t3816;
  double t3817;
  double t3818;
  t791 = Cos(var1[1]);
  t2803 = Cos(var1[3]);
  t2762 = Cos(var1[2]);
  t2781 = Sin(var1[3]);
  t2806 = Sin(var1[2]);
  t2921 = Cos(var1[4]);
  t2797 = -1.*t791*t2762*t2781;
  t2879 = -1.*t2803*t791*t2806;
  t2905 = t2797 + t2879;
  t2741 = Sin(var1[4]);
  t2936 = t2803*t791*t2762;
  t2946 = -1.*t791*t2781*t2806;
  t2978 = t2936 + t2946;
  t3050 = Cos(var1[5]);
  t2914 = t2741*t2905;
  t2999 = t2921*t2978;
  t3018 = t2914 + t2999;
  t2610 = Sin(var1[5]);
  t3074 = t2921*t2905;
  t3153 = -1.*t2741*t2978;
  t3157 = t3074 + t3153;
  t3180 = Cos(var1[6]);
  t3033 = -1.*t2610*t3018;
  t3166 = t3050*t3157;
  t3168 = t3033 + t3166;
  t2602 = Sin(var1[6]);
  t3233 = t3050*t3018;
  t3240 = t2610*t3157;
  t3267 = t3233 + t3240;
  t556 = Cos(var1[0]);
  t91 = Sin(var1[1]);
  t2466 = Sin(var1[0]);
  t3386 = t556*t2762*t91;
  t3398 = -1.*t2466*t2806;
  t3416 = t3386 + t3398;
  t3446 = -1.*t2762*t2466;
  t3472 = -1.*t556*t91*t2806;
  t3489 = t3446 + t3472;
  t3443 = -1.*t2781*t3416;
  t3497 = t2803*t3489;
  t3501 = t3443 + t3497;
  t3516 = t2803*t3416;
  t3540 = t2781*t3489;
  t3541 = t3516 + t3540;
  t3509 = t2741*t3501;
  t3546 = t2921*t3541;
  t3561 = t3509 + t3546;
  t3594 = t2921*t3501;
  t3598 = -1.*t2741*t3541;
  t3602 = t3594 + t3598;
  t3592 = -1.*t2610*t3561;
  t3613 = t3050*t3602;
  t3619 = t3592 + t3613;
  t3630 = t3050*t3561;
  t3631 = t2610*t3602;
  t3633 = t3630 + t3631;
  t3681 = t2762*t2466*t91;
  t3685 = t556*t2806;
  t3686 = t3681 + t3685;
  t3696 = t556*t2762;
  t3700 = -1.*t2466*t91*t2806;
  t3701 = t3696 + t3700;
  t3688 = -1.*t2781*t3686;
  t3706 = t2803*t3701;
  t3718 = t3688 + t3706;
  t3721 = t2803*t3686;
  t3724 = t2781*t3701;
  t3736 = t3721 + t3724;
  t3719 = t2741*t3718;
  t3739 = t2921*t3736;
  t3752 = t3719 + t3739;
  t3763 = t2921*t3718;
  t3764 = -1.*t2741*t3736;
  t3767 = t3763 + t3764;
  t3761 = -1.*t2610*t3752;
  t3769 = t3050*t3767;
  t3779 = t3761 + t3769;
  t3786 = t3050*t3752;
  t3788 = t2610*t3767;
  t3790 = t3786 + t3788;
  t3179 = t2602*t3168;
  t3295 = t3180*t3267;
  t3316 = t3179 + t3295;
  t3327 = t3180*t3168;
  t3328 = -1.*t2602*t3267;
  t3334 = t3327 + t3328;
  t3622 = t2602*t3619;
  t3637 = t3180*t3633;
  t3652 = t3622 + t3637;
  t3656 = t3180*t3619;
  t3658 = -1.*t2602*t3633;
  t3662 = t3656 + t3658;
  t3784 = t2602*t3779;
  t3802 = t3180*t3790;
  t3805 = t3784 + t3802;
  t3816 = t3180*t3779;
  t3817 = -1.*t2602*t3790;
  t3818 = t3816 + t3817;
  p_output1[0]=0. + t91;
  p_output1[1]=0. - 1.*t556*t791;
  p_output1[2]=0. - 1.*t2466*t791;
  p_output1[3]=0. + 0.642788*t3316 + 0.766044*t3334;
  p_output1[4]=0. + 0.642788*t3652 + 0.766044*t3662;
  p_output1[5]=0. + 0.642788*t3805 + 0.766044*t3818;
  p_output1[6]=0. - 0.766044*t3316 + 0.642788*t3334;
  p_output1[7]=0. - 0.766044*t3652 + 0.642788*t3662;
  p_output1[8]=0. - 0.766044*t3805 + 0.642788*t3818;
}



void R_VectorNav_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
