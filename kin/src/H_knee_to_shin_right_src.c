/*
 * Automatically Generated from Mathematica.
 * Wed 12 Feb 2020 15:28:34 GMT-08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_knee_to_shin_right_src.h"

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
  double t444;
  double t657;
  double t436;
  double t530;
  double t700;
  double t939;
  double t607;
  double t856;
  double t886;
  double t435;
  double t1032;
  double t1139;
  double t1166;
  double t1289;
  double t893;
  double t1199;
  double t1211;
  double t376;
  double t1303;
  double t1304;
  double t1340;
  double t1376;
  double t1437;
  double t1448;
  double t1489;
  double t1527;
  double t1568;
  double t1764;
  double t1232;
  double t1684;
  double t1736;
  double t368;
  double t1765;
  double t1772;
  double t1801;
  double t91;
  double t1970;
  double t1978;
  double t1985;
  double t1989;
  double t2062;
  double t2068;
  double t1987;
  double t2074;
  double t2081;
  double t2176;
  double t2263;
  double t2273;
  double t2329;
  double t2389;
  double t2421;
  double t1878;
  double t2131;
  double t2430;
  double t2444;
  double t2501;
  double t2505;
  double t2540;
  double t2728;
  double t2785;
  double t2797;
  double t2842;
  double t2875;
  double t2899;
  double t2941;
  double t2942;
  double t2973;
  double t2821;
  double t2981;
  double t3006;
  double t3034;
  double t3075;
  double t3092;
  double t1748;
  double t1813;
  double t1817;
  double t1887;
  double t1923;
  double t1938;
  double t2454;
  double t2565;
  double t2588;
  double t2642;
  double t2651;
  double t2687;
  double t3023;
  double t3098;
  double t3100;
  double t3115;
  double t3135;
  double t3150;
  double t3500;
  double t3524;
  double t3708;
  double t3716;
  double t3807;
  double t3811;
  double t3893;
  double t3896;
  double t3201;
  double t3202;
  double t3227;
  double t3531;
  double t3544;
  double t3559;
  double t3603;
  double t3606;
  double t3611;
  double t3628;
  double t3636;
  double t3641;
  double t3663;
  double t3694;
  double t3698;
  double t3726;
  double t3737;
  double t3743;
  double t3788;
  double t3794;
  double t3795;
  double t3852;
  double t3853;
  double t3856;
  double t3872;
  double t3883;
  double t3887;
  double t3900;
  double t3906;
  double t3966;
  double t4001;
  double t4023;
  double t4030;
  double t3256;
  double t3284;
  double t3294;
  double t3295;
  double t3334;
  double t3346;
  t444 = Cos(var1[5]);
  t657 = Sin(var1[3]);
  t436 = Cos(var1[3]);
  t530 = Sin(var1[4]);
  t700 = Sin(var1[5]);
  t939 = Sin(var1[13]);
  t607 = t436*t444*t530;
  t856 = t657*t700;
  t886 = t607 + t856;
  t435 = Cos(var1[13]);
  t1032 = -1.*t444*t657;
  t1139 = t436*t530*t700;
  t1166 = t1032 + t1139;
  t1289 = Cos(var1[15]);
  t893 = t435*t886;
  t1199 = -1.*t939*t1166;
  t1211 = t893 + t1199;
  t376 = Sin(var1[15]);
  t1303 = Cos(var1[14]);
  t1304 = Cos(var1[4]);
  t1340 = t1303*t436*t1304;
  t1376 = Sin(var1[14]);
  t1437 = t939*t886;
  t1448 = t435*t1166;
  t1489 = t1437 + t1448;
  t1527 = t1376*t1489;
  t1568 = t1340 + t1527;
  t1764 = Cos(var1[16]);
  t1232 = t376*t1211;
  t1684 = t1289*t1568;
  t1736 = t1232 + t1684;
  t368 = Sin(var1[16]);
  t1765 = t1289*t1211;
  t1772 = -1.*t376*t1568;
  t1801 = t1765 + t1772;
  t91 = Cos(var1[17]);
  t1970 = t444*t657*t530;
  t1978 = -1.*t436*t700;
  t1985 = t1970 + t1978;
  t1989 = t436*t444;
  t2062 = t657*t530*t700;
  t2068 = t1989 + t2062;
  t1987 = t435*t1985;
  t2074 = -1.*t939*t2068;
  t2081 = t1987 + t2074;
  t2176 = t1303*t1304*t657;
  t2263 = t939*t1985;
  t2273 = t435*t2068;
  t2329 = t2263 + t2273;
  t2389 = t1376*t2329;
  t2421 = t2176 + t2389;
  t1878 = Sin(var1[17]);
  t2131 = t376*t2081;
  t2430 = t1289*t2421;
  t2444 = t2131 + t2430;
  t2501 = t1289*t2081;
  t2505 = -1.*t376*t2421;
  t2540 = t2501 + t2505;
  t2728 = t435*t1304*t444;
  t2785 = -1.*t1304*t939*t700;
  t2797 = t2728 + t2785;
  t2842 = -1.*t1303*t530;
  t2875 = t1304*t444*t939;
  t2899 = t435*t1304*t700;
  t2941 = t2875 + t2899;
  t2942 = t1376*t2941;
  t2973 = t2842 + t2942;
  t2821 = t376*t2797;
  t2981 = t1289*t2973;
  t3006 = t2821 + t2981;
  t3034 = t1289*t2797;
  t3075 = -1.*t376*t2973;
  t3092 = t3034 + t3075;
  t1748 = -1.*t368*t1736;
  t1813 = t1764*t1801;
  t1817 = t1748 + t1813;
  t1887 = t1764*t1736;
  t1923 = t368*t1801;
  t1938 = t1887 + t1923;
  t2454 = -1.*t368*t2444;
  t2565 = t1764*t2540;
  t2588 = t2454 + t2565;
  t2642 = t1764*t2444;
  t2651 = t368*t2540;
  t2687 = t2642 + t2651;
  t3023 = -1.*t368*t3006;
  t3098 = t1764*t3092;
  t3100 = t3023 + t3098;
  t3115 = t1764*t3006;
  t3135 = t368*t3092;
  t3150 = t3115 + t3135;
  t3500 = -1.*t1303;
  t3524 = 1. + t3500;
  t3708 = -1.*t1289;
  t3716 = 1. + t3708;
  t3807 = -1.*t1764;
  t3811 = 1. + t3807;
  t3893 = -1.*t91;
  t3896 = 1. + t3893;
  t3201 = t1878*t1817;
  t3202 = t91*t1938;
  t3227 = t3201 + t3202;
  t3531 = -0.049*t3524;
  t3544 = -0.135*t1376;
  t3559 = 0. + t3531 + t3544;
  t3603 = 0.135*t939;
  t3606 = 0. + t3603;
  t3611 = -1.*t435;
  t3628 = 1. + t3611;
  t3636 = -0.135*t3628;
  t3641 = 0. + t3636;
  t3663 = -0.135*t3524;
  t3694 = 0.049*t1376;
  t3698 = 0. + t3663 + t3694;
  t3726 = -0.09*t3716;
  t3737 = 0.049*t376;
  t3743 = 0. + t3726 + t3737;
  t3788 = -0.049*t3716;
  t3794 = -0.09*t376;
  t3795 = 0. + t3788 + t3794;
  t3852 = -0.049*t3811;
  t3853 = -0.21*t368;
  t3856 = 0. + t3852 + t3853;
  t3872 = -0.21*t3811;
  t3883 = 0.049*t368;
  t3887 = 0. + t3872 + t3883;
  t3900 = -0.2707*t3896;
  t3906 = 0.0016*t1878;
  t3966 = 0. + t3900 + t3906;
  t4001 = -0.0016*t3896;
  t4023 = -0.2707*t1878;
  t4030 = 0. + t4001 + t4023;
  t3256 = t1878*t2588;
  t3284 = t91*t2687;
  t3294 = t3256 + t3284;
  t3295 = t1878*t3100;
  t3334 = t91*t3150;
  t3346 = t3295 + t3334;
  p_output1[0]=t1878*t1938 - 1.*t1817*t91;
  p_output1[1]=t1878*t2687 - 1.*t2588*t91;
  p_output1[2]=t1878*t3150 - 1.*t3100*t91;
  p_output1[3]=0.;
  p_output1[4]=t3227;
  p_output1[5]=t3294;
  p_output1[6]=t3346;
  p_output1[7]=0.;
  p_output1[8]=-1.*t1303*t1489 + t1304*t1376*t436;
  p_output1[9]=-1.*t1303*t2329 + t1304*t1376*t657;
  p_output1[10]=-1.*t1303*t2941 - 1.*t1376*t530;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.0016*t3227 + t1166*t3641 + t1489*t3698 + t1211*t3743 + t1568*t3795 + t1736*t3856 + t1801*t3887 + t1817*t3966 + t1938*t4030 + t1304*t3559*t436 - 0.1305*(t1303*t1489 - 1.*t1304*t1376*t436) + t3606*t886 - 0.2707*(-1.*t1878*t1938 + t1817*t91) + var1[0];
  p_output1[13]=0. - 0.0016*t3294 + t1985*t3606 + t2068*t3641 + t2329*t3698 + t2081*t3743 + t2421*t3795 + t2444*t3856 + t2540*t3887 + t2588*t3966 + t2687*t4030 + t1304*t3559*t657 - 0.1305*(t1303*t2329 - 1.*t1304*t1376*t657) - 0.2707*(-1.*t1878*t2687 + t2588*t91) + var1[1];
  p_output1[14]=0. - 0.0016*t3346 + t2941*t3698 + t2797*t3743 + t2973*t3795 + t3006*t3856 + t3092*t3887 + t3100*t3966 + t3150*t4030 + t1304*t3606*t444 - 1.*t3559*t530 - 0.1305*(t1303*t2941 + t1376*t530) + t1304*t3641*t700 - 0.2707*(-1.*t1878*t3150 + t3100*t91) + var1[2];
  p_output1[15]=1.;
}



void H_knee_to_shin_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
