/*
 * Automatically Generated from Mathematica.
 * Wed 12 Feb 2020 15:29:08 GMT-08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_LeftToeBack_src.h"

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
  double t988;
  double t906;
  double t1145;
  double t924;
  double t1202;
  double t452;
  double t830;
  double t1596;
  double t1715;
  double t1749;
  double t966;
  double t1293;
  double t1300;
  double t1339;
  double t1359;
  double t1401;
  double t1407;
  double t1597;
  double t1653;
  double t2790;
  double t2874;
  double t2911;
  double t2914;
  double t2795;
  double t2813;
  double t2824;
  double t2947;
  double t3010;
  double t2832;
  double t2959;
  double t3006;
  double t2754;
  double t3021;
  double t3114;
  double t3146;
  double t3270;
  double t3009;
  double t3164;
  double t3187;
  double t2735;
  double t3305;
  double t3332;
  double t3358;
  double t3544;
  double t3209;
  double t3462;
  double t3482;
  double t2659;
  double t3606;
  double t3616;
  double t3632;
  double t3793;
  double t3491;
  double t3679;
  double t3740;
  double t2653;
  double t3797;
  double t3814;
  double t3865;
  double t1942;
  double t1990;
  double t2011;
  double t2161;
  double t2180;
  double t2243;
  double t2272;
  double t2299;
  double t2320;
  double t4123;
  double t4139;
  double t4216;
  double t3987;
  double t4039;
  double t4100;
  double t4101;
  double t4265;
  double t4270;
  double t4332;
  double t4345;
  double t4363;
  double t4329;
  double t4372;
  double t4407;
  double t4460;
  double t4466;
  double t4476;
  double t4442;
  double t4486;
  double t4492;
  double t4504;
  double t4534;
  double t4536;
  double t4496;
  double t4537;
  double t4552;
  double t4566;
  double t4574;
  double t4589;
  double t2451;
  double t2454;
  double t2558;
  double t4735;
  double t4745;
  double t4750;
  double t4660;
  double t4667;
  double t4669;
  double t4729;
  double t4760;
  double t4762;
  double t4788;
  double t4828;
  double t4830;
  double t4787;
  double t4838;
  double t4841;
  double t4882;
  double t4893;
  double t4912;
  double t4850;
  double t4919;
  double t4925;
  double t4958;
  double t4960;
  double t4985;
  double t4933;
  double t4986;
  double t4991;
  double t5022;
  double t5023;
  double t5041;
  double t3768;
  double t3894;
  double t3919;
  double t3932;
  double t3952;
  double t3964;
  double t4563;
  double t4619;
  double t4623;
  double t4631;
  double t4632;
  double t4634;
  double t5012;
  double t5062;
  double t5081;
  double t5099;
  double t5109;
  double t5129;
  t988 = Cos(var1[3]);
  t906 = Cos(var1[5]);
  t1145 = Sin(var1[4]);
  t924 = Sin(var1[3]);
  t1202 = Sin(var1[5]);
  t452 = Cos(var1[7]);
  t830 = Cos(var1[6]);
  t1596 = Sin(var1[6]);
  t1715 = Cos(var1[4]);
  t1749 = Sin(var1[7]);
  t966 = -1.*t906*t924;
  t1293 = t988*t1145*t1202;
  t1300 = t966 + t1293;
  t1339 = t830*t1300;
  t1359 = t988*t906*t1145;
  t1401 = t924*t1202;
  t1407 = t1359 + t1401;
  t1597 = t1407*t1596;
  t1653 = t1339 + t1597;
  t2790 = Cos(var1[8]);
  t2874 = t830*t1407;
  t2911 = -1.*t1300*t1596;
  t2914 = t2874 + t2911;
  t2795 = t988*t1715*t452;
  t2813 = t1653*t1749;
  t2824 = t2795 + t2813;
  t2947 = Sin(var1[8]);
  t3010 = Cos(var1[9]);
  t2832 = t2790*t2824;
  t2959 = t2914*t2947;
  t3006 = t2832 + t2959;
  t2754 = Sin(var1[9]);
  t3021 = t2790*t2914;
  t3114 = -1.*t2824*t2947;
  t3146 = t3021 + t3114;
  t3270 = Cos(var1[10]);
  t3009 = -1.*t2754*t3006;
  t3164 = t3010*t3146;
  t3187 = t3009 + t3164;
  t2735 = Sin(var1[10]);
  t3305 = t3010*t3006;
  t3332 = t2754*t3146;
  t3358 = t3305 + t3332;
  t3544 = Cos(var1[11]);
  t3209 = t2735*t3187;
  t3462 = t3270*t3358;
  t3482 = t3209 + t3462;
  t2659 = Sin(var1[11]);
  t3606 = t3270*t3187;
  t3616 = -1.*t2735*t3358;
  t3632 = t3606 + t3616;
  t3793 = Cos(var1[12]);
  t3491 = -1.*t2659*t3482;
  t3679 = t3544*t3632;
  t3740 = t3491 + t3679;
  t2653 = Sin(var1[12]);
  t3797 = t3544*t3482;
  t3814 = t2659*t3632;
  t3865 = t3797 + t3814;
  t1942 = t988*t906;
  t1990 = t924*t1145*t1202;
  t2011 = t1942 + t1990;
  t2161 = t830*t2011;
  t2180 = t906*t924*t1145;
  t2243 = -1.*t988*t1202;
  t2272 = t2180 + t2243;
  t2299 = t2272*t1596;
  t2320 = t2161 + t2299;
  t4123 = t830*t2272;
  t4139 = -1.*t2011*t1596;
  t4216 = t4123 + t4139;
  t3987 = t1715*t452*t924;
  t4039 = t2320*t1749;
  t4100 = t3987 + t4039;
  t4101 = t2790*t4100;
  t4265 = t4216*t2947;
  t4270 = t4101 + t4265;
  t4332 = t2790*t4216;
  t4345 = -1.*t4100*t2947;
  t4363 = t4332 + t4345;
  t4329 = -1.*t2754*t4270;
  t4372 = t3010*t4363;
  t4407 = t4329 + t4372;
  t4460 = t3010*t4270;
  t4466 = t2754*t4363;
  t4476 = t4460 + t4466;
  t4442 = t2735*t4407;
  t4486 = t3270*t4476;
  t4492 = t4442 + t4486;
  t4504 = t3270*t4407;
  t4534 = -1.*t2735*t4476;
  t4536 = t4504 + t4534;
  t4496 = -1.*t2659*t4492;
  t4537 = t3544*t4536;
  t4552 = t4496 + t4537;
  t4566 = t3544*t4492;
  t4574 = t2659*t4536;
  t4589 = t4566 + t4574;
  t2451 = t1715*t830*t1202;
  t2454 = t1715*t906*t1596;
  t2558 = t2451 + t2454;
  t4735 = t1715*t906*t830;
  t4745 = -1.*t1715*t1202*t1596;
  t4750 = t4735 + t4745;
  t4660 = -1.*t452*t1145;
  t4667 = t2558*t1749;
  t4669 = t4660 + t4667;
  t4729 = t2790*t4669;
  t4760 = t4750*t2947;
  t4762 = t4729 + t4760;
  t4788 = t2790*t4750;
  t4828 = -1.*t4669*t2947;
  t4830 = t4788 + t4828;
  t4787 = -1.*t2754*t4762;
  t4838 = t3010*t4830;
  t4841 = t4787 + t4838;
  t4882 = t3010*t4762;
  t4893 = t2754*t4830;
  t4912 = t4882 + t4893;
  t4850 = t2735*t4841;
  t4919 = t3270*t4912;
  t4925 = t4850 + t4919;
  t4958 = t3270*t4841;
  t4960 = -1.*t2735*t4912;
  t4985 = t4958 + t4960;
  t4933 = -1.*t2659*t4925;
  t4986 = t3544*t4985;
  t4991 = t4933 + t4986;
  t5022 = t3544*t4925;
  t5023 = t2659*t4985;
  t5041 = t5022 + t5023;
  t3768 = t2653*t3740;
  t3894 = t3793*t3865;
  t3919 = t3768 + t3894;
  t3932 = t3793*t3740;
  t3952 = -1.*t2653*t3865;
  t3964 = t3932 + t3952;
  t4563 = t2653*t4552;
  t4619 = t3793*t4589;
  t4623 = t4563 + t4619;
  t4631 = t3793*t4552;
  t4632 = -1.*t2653*t4589;
  t4634 = t4631 + t4632;
  t5012 = t2653*t4991;
  t5062 = t3793*t5041;
  t5081 = t5012 + t5062;
  t5099 = t3793*t4991;
  t5109 = -1.*t2653*t5041;
  t5129 = t5099 + t5109;
  p_output1[0]=-1.*t1653*t452 + t1715*t1749*t988;
  p_output1[1]=-1.*t2320*t452 + t1715*t1749*t924;
  p_output1[2]=-1.*t1145*t1749 - 1.*t2558*t452;
  p_output1[3]=0.642788*t3919 + 0.766044*t3964;
  p_output1[4]=0.642788*t4623 + 0.766044*t4634;
  p_output1[5]=0.642788*t5081 + 0.766044*t5129;
  p_output1[6]=-0.766044*t3919 + 0.642788*t3964;
  p_output1[7]=-0.766044*t4623 + 0.642788*t4634;
  p_output1[8]=-0.766044*t5081 + 0.642788*t5129;
}



void R_LeftToeBack_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
