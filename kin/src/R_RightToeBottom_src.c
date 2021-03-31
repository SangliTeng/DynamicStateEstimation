/*
 * Automatically Generated from Mathematica.
 * Wed 12 Feb 2020 15:29:13 GMT-08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RightToeBottom_src.h"

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
  double t164;
  double t629;
  double t740;
  double t645;
  double t754;
  double t195;
  double t339;
  double t504;
  double t590;
  double t858;
  double t685;
  double t760;
  double t761;
  double t900;
  double t973;
  double t1056;
  double t769;
  double t1105;
  double t1109;
  double t2019;
  double t1975;
  double t1979;
  double t1985;
  double t1970;
  double t2041;
  double t2094;
  double t2183;
  double t2301;
  double t2003;
  double t2187;
  double t2224;
  double t1926;
  double t2330;
  double t2332;
  double t2340;
  double t2468;
  double t2294;
  double t2348;
  double t2375;
  double t1909;
  double t2479;
  double t2486;
  double t2539;
  double t2581;
  double t2438;
  double t2560;
  double t2564;
  double t1877;
  double t2609;
  double t2644;
  double t2646;
  double t2816;
  double t2570;
  double t2702;
  double t2722;
  double t1840;
  double t2891;
  double t2902;
  double t2931;
  double t1197;
  double t1217;
  double t1280;
  double t1358;
  double t1392;
  double t1405;
  double t1305;
  double t1411;
  double t1443;
  double t3090;
  double t3101;
  double t3109;
  double t3116;
  double t3143;
  double t3156;
  double t3113;
  double t3176;
  double t3181;
  double t3220;
  double t3230;
  double t3255;
  double t3195;
  double t3261;
  double t3275;
  double t3328;
  double t3335;
  double t3365;
  double t3314;
  double t3385;
  double t3388;
  double t3395;
  double t3403;
  double t3434;
  double t3389;
  double t3449;
  double t3466;
  double t3480;
  double t3517;
  double t3563;
  double t1739;
  double t1757;
  double t1775;
  double t3724;
  double t3727;
  double t3742;
  double t3756;
  double t3777;
  double t3799;
  double t3746;
  double t3806;
  double t3812;
  double t3819;
  double t3838;
  double t3849;
  double t3818;
  double t3867;
  double t3870;
  double t3877;
  double t3884;
  double t3885;
  double t3873;
  double t3892;
  double t3917;
  double t3926;
  double t3940;
  double t3955;
  double t3921;
  double t3964;
  double t3976;
  double t3983;
  double t4025;
  double t4037;
  double t2815;
  double t2933;
  double t2954;
  double t2980;
  double t3042;
  double t3049;
  double t3472;
  double t3569;
  double t3577;
  double t3588;
  double t3622;
  double t3630;
  double t3977;
  double t4051;
  double t4052;
  double t4065;
  double t4066;
  double t4076;
  t164 = Cos(var1[3]);
  t629 = Cos(var1[5]);
  t740 = Sin(var1[3]);
  t645 = Sin(var1[4]);
  t754 = Sin(var1[5]);
  t195 = Cos(var1[4]);
  t339 = Sin(var1[14]);
  t504 = Cos(var1[14]);
  t590 = Sin(var1[13]);
  t858 = Cos(var1[13]);
  t685 = t164*t629*t645;
  t760 = t740*t754;
  t761 = t685 + t760;
  t900 = -1.*t629*t740;
  t973 = t164*t645*t754;
  t1056 = t900 + t973;
  t769 = t590*t761;
  t1105 = t858*t1056;
  t1109 = t769 + t1105;
  t2019 = Cos(var1[15]);
  t1975 = t858*t761;
  t1979 = -1.*t590*t1056;
  t1985 = t1975 + t1979;
  t1970 = Sin(var1[15]);
  t2041 = t504*t164*t195;
  t2094 = t339*t1109;
  t2183 = t2041 + t2094;
  t2301 = Cos(var1[16]);
  t2003 = t1970*t1985;
  t2187 = t2019*t2183;
  t2224 = t2003 + t2187;
  t1926 = Sin(var1[16]);
  t2330 = t2019*t1985;
  t2332 = -1.*t1970*t2183;
  t2340 = t2330 + t2332;
  t2468 = Cos(var1[17]);
  t2294 = -1.*t1926*t2224;
  t2348 = t2301*t2340;
  t2375 = t2294 + t2348;
  t1909 = Sin(var1[17]);
  t2479 = t2301*t2224;
  t2486 = t1926*t2340;
  t2539 = t2479 + t2486;
  t2581 = Cos(var1[18]);
  t2438 = t1909*t2375;
  t2560 = t2468*t2539;
  t2564 = t2438 + t2560;
  t1877 = Sin(var1[18]);
  t2609 = t2468*t2375;
  t2644 = -1.*t1909*t2539;
  t2646 = t2609 + t2644;
  t2816 = Cos(var1[19]);
  t2570 = -1.*t1877*t2564;
  t2702 = t2581*t2646;
  t2722 = t2570 + t2702;
  t1840 = Sin(var1[19]);
  t2891 = t2581*t2564;
  t2902 = t1877*t2646;
  t2931 = t2891 + t2902;
  t1197 = t629*t740*t645;
  t1217 = -1.*t164*t754;
  t1280 = t1197 + t1217;
  t1358 = t164*t629;
  t1392 = t740*t645*t754;
  t1405 = t1358 + t1392;
  t1305 = t590*t1280;
  t1411 = t858*t1405;
  t1443 = t1305 + t1411;
  t3090 = t858*t1280;
  t3101 = -1.*t590*t1405;
  t3109 = t3090 + t3101;
  t3116 = t504*t195*t740;
  t3143 = t339*t1443;
  t3156 = t3116 + t3143;
  t3113 = t1970*t3109;
  t3176 = t2019*t3156;
  t3181 = t3113 + t3176;
  t3220 = t2019*t3109;
  t3230 = -1.*t1970*t3156;
  t3255 = t3220 + t3230;
  t3195 = -1.*t1926*t3181;
  t3261 = t2301*t3255;
  t3275 = t3195 + t3261;
  t3328 = t2301*t3181;
  t3335 = t1926*t3255;
  t3365 = t3328 + t3335;
  t3314 = t1909*t3275;
  t3385 = t2468*t3365;
  t3388 = t3314 + t3385;
  t3395 = t2468*t3275;
  t3403 = -1.*t1909*t3365;
  t3434 = t3395 + t3403;
  t3389 = -1.*t1877*t3388;
  t3449 = t2581*t3434;
  t3466 = t3389 + t3449;
  t3480 = t2581*t3388;
  t3517 = t1877*t3434;
  t3563 = t3480 + t3517;
  t1739 = t195*t629*t590;
  t1757 = t858*t195*t754;
  t1775 = t1739 + t1757;
  t3724 = t858*t195*t629;
  t3727 = -1.*t195*t590*t754;
  t3742 = t3724 + t3727;
  t3756 = -1.*t504*t645;
  t3777 = t339*t1775;
  t3799 = t3756 + t3777;
  t3746 = t1970*t3742;
  t3806 = t2019*t3799;
  t3812 = t3746 + t3806;
  t3819 = t2019*t3742;
  t3838 = -1.*t1970*t3799;
  t3849 = t3819 + t3838;
  t3818 = -1.*t1926*t3812;
  t3867 = t2301*t3849;
  t3870 = t3818 + t3867;
  t3877 = t2301*t3812;
  t3884 = t1926*t3849;
  t3885 = t3877 + t3884;
  t3873 = t1909*t3870;
  t3892 = t2468*t3885;
  t3917 = t3873 + t3892;
  t3926 = t2468*t3870;
  t3940 = -1.*t1909*t3885;
  t3955 = t3926 + t3940;
  t3921 = -1.*t1877*t3917;
  t3964 = t2581*t3955;
  t3976 = t3921 + t3964;
  t3983 = t2581*t3917;
  t4025 = t1877*t3955;
  t4037 = t3983 + t4025;
  t2815 = t1840*t2722;
  t2933 = t2816*t2931;
  t2954 = t2815 + t2933;
  t2980 = t2816*t2722;
  t3042 = -1.*t1840*t2931;
  t3049 = t2980 + t3042;
  t3472 = t1840*t3466;
  t3569 = t2816*t3563;
  t3577 = t3472 + t3569;
  t3588 = t2816*t3466;
  t3622 = -1.*t1840*t3563;
  t3630 = t3588 + t3622;
  t3977 = t1840*t3976;
  t4051 = t2816*t4037;
  t4052 = t3977 + t4051;
  t4065 = t2816*t3976;
  t4066 = -1.*t1840*t4037;
  t4076 = t4065 + t4066;
  p_output1[0]=t164*t195*t339 - 1.*t1109*t504;
  p_output1[1]=-1.*t1443*t504 + t195*t339*t740;
  p_output1[2]=-1.*t1775*t504 - 1.*t339*t645;
  p_output1[3]=0.642788*t2954 + 0.766044*t3049;
  p_output1[4]=0.642788*t3577 + 0.766044*t3630;
  p_output1[5]=0.642788*t4052 + 0.766044*t4076;
  p_output1[6]=-0.766044*t2954 + 0.642788*t3049;
  p_output1[7]=-0.766044*t3577 + 0.642788*t3630;
  p_output1[8]=-0.766044*t4052 + 0.642788*t4076;
}



void R_RightToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
