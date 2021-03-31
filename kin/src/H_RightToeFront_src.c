/*
 * Automatically Generated from Mathematica.
 * Wed 12 Feb 2020 15:29:17 GMT-08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RightToeFront_src.h"

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
  double t102;
  double t361;
  double t499;
  double t419;
  double t547;
  double t166;
  double t194;
  double t332;
  double t349;
  double t610;
  double t432;
  double t560;
  double t580;
  double t644;
  double t666;
  double t675;
  double t606;
  double t732;
  double t767;
  double t1344;
  double t1318;
  double t1319;
  double t1328;
  double t1313;
  double t1366;
  double t1375;
  double t1410;
  double t1486;
  double t1343;
  double t1415;
  double t1458;
  double t1301;
  double t1491;
  double t1500;
  double t1511;
  double t1580;
  double t1471;
  double t1555;
  double t1566;
  double t1275;
  double t1594;
  double t1654;
  double t1659;
  double t1737;
  double t1574;
  double t1677;
  double t1713;
  double t1224;
  double t1790;
  double t1820;
  double t1854;
  double t1882;
  double t1729;
  double t1861;
  double t1872;
  double t1220;
  double t1900;
  double t1918;
  double t1922;
  double t839;
  double t850;
  double t860;
  double t952;
  double t960;
  double t981;
  double t914;
  double t995;
  double t1021;
  double t2098;
  double t2117;
  double t2134;
  double t2141;
  double t2142;
  double t2149;
  double t2140;
  double t2173;
  double t2186;
  double t2231;
  double t2273;
  double t2326;
  double t2222;
  double t2335;
  double t2354;
  double t2364;
  double t2370;
  double t2396;
  double t2357;
  double t2414;
  double t2420;
  double t2475;
  double t2488;
  double t2490;
  double t2422;
  double t2498;
  double t2501;
  double t2516;
  double t2520;
  double t2524;
  double t1140;
  double t1143;
  double t1157;
  double t2652;
  double t2674;
  double t2679;
  double t2683;
  double t2696;
  double t2707;
  double t2681;
  double t2726;
  double t2736;
  double t2745;
  double t2753;
  double t2755;
  double t2740;
  double t2759;
  double t2784;
  double t2835;
  double t2839;
  double t2847;
  double t2833;
  double t2864;
  double t2866;
  double t2887;
  double t2913;
  double t2926;
  double t2879;
  double t2942;
  double t2964;
  double t2992;
  double t3040;
  double t3050;
  double t1873;
  double t1929;
  double t1952;
  double t1986;
  double t1993;
  double t2030;
  double t2510;
  double t2533;
  double t2549;
  double t2572;
  double t2584;
  double t2589;
  double t2979;
  double t3057;
  double t3060;
  double t3084;
  double t3113;
  double t3117;
  double t3278;
  double t3287;
  double t3487;
  double t3488;
  double t3550;
  double t3583;
  double t3738;
  double t3741;
  double t3810;
  double t3819;
  double t3862;
  double t3863;
  double t3293;
  double t3298;
  double t3309;
  double t3335;
  double t3336;
  double t3362;
  double t3373;
  double t3386;
  double t3391;
  double t3430;
  double t3468;
  double t3479;
  double t3489;
  double t3496;
  double t3498;
  double t3540;
  double t3543;
  double t3548;
  double t3584;
  double t3586;
  double t3608;
  double t3625;
  double t3629;
  double t3647;
  double t3749;
  double t3754;
  double t3761;
  double t3782;
  double t3788;
  double t3789;
  double t3821;
  double t3833;
  double t3846;
  double t3851;
  double t3853;
  double t3856;
  double t3868;
  double t3872;
  double t3887;
  double t3907;
  double t3918;
  double t3935;
  t102 = Cos(var1[3]);
  t361 = Cos(var1[5]);
  t499 = Sin(var1[3]);
  t419 = Sin(var1[4]);
  t547 = Sin(var1[5]);
  t166 = Cos(var1[4]);
  t194 = Sin(var1[14]);
  t332 = Cos(var1[14]);
  t349 = Sin(var1[13]);
  t610 = Cos(var1[13]);
  t432 = t102*t361*t419;
  t560 = t499*t547;
  t580 = t432 + t560;
  t644 = -1.*t361*t499;
  t666 = t102*t419*t547;
  t675 = t644 + t666;
  t606 = t349*t580;
  t732 = t610*t675;
  t767 = t606 + t732;
  t1344 = Cos(var1[15]);
  t1318 = t610*t580;
  t1319 = -1.*t349*t675;
  t1328 = t1318 + t1319;
  t1313 = Sin(var1[15]);
  t1366 = t332*t102*t166;
  t1375 = t194*t767;
  t1410 = t1366 + t1375;
  t1486 = Cos(var1[16]);
  t1343 = t1313*t1328;
  t1415 = t1344*t1410;
  t1458 = t1343 + t1415;
  t1301 = Sin(var1[16]);
  t1491 = t1344*t1328;
  t1500 = -1.*t1313*t1410;
  t1511 = t1491 + t1500;
  t1580 = Cos(var1[17]);
  t1471 = -1.*t1301*t1458;
  t1555 = t1486*t1511;
  t1566 = t1471 + t1555;
  t1275 = Sin(var1[17]);
  t1594 = t1486*t1458;
  t1654 = t1301*t1511;
  t1659 = t1594 + t1654;
  t1737 = Cos(var1[18]);
  t1574 = t1275*t1566;
  t1677 = t1580*t1659;
  t1713 = t1574 + t1677;
  t1224 = Sin(var1[18]);
  t1790 = t1580*t1566;
  t1820 = -1.*t1275*t1659;
  t1854 = t1790 + t1820;
  t1882 = Cos(var1[19]);
  t1729 = -1.*t1224*t1713;
  t1861 = t1737*t1854;
  t1872 = t1729 + t1861;
  t1220 = Sin(var1[19]);
  t1900 = t1737*t1713;
  t1918 = t1224*t1854;
  t1922 = t1900 + t1918;
  t839 = t361*t499*t419;
  t850 = -1.*t102*t547;
  t860 = t839 + t850;
  t952 = t102*t361;
  t960 = t499*t419*t547;
  t981 = t952 + t960;
  t914 = t349*t860;
  t995 = t610*t981;
  t1021 = t914 + t995;
  t2098 = t610*t860;
  t2117 = -1.*t349*t981;
  t2134 = t2098 + t2117;
  t2141 = t332*t166*t499;
  t2142 = t194*t1021;
  t2149 = t2141 + t2142;
  t2140 = t1313*t2134;
  t2173 = t1344*t2149;
  t2186 = t2140 + t2173;
  t2231 = t1344*t2134;
  t2273 = -1.*t1313*t2149;
  t2326 = t2231 + t2273;
  t2222 = -1.*t1301*t2186;
  t2335 = t1486*t2326;
  t2354 = t2222 + t2335;
  t2364 = t1486*t2186;
  t2370 = t1301*t2326;
  t2396 = t2364 + t2370;
  t2357 = t1275*t2354;
  t2414 = t1580*t2396;
  t2420 = t2357 + t2414;
  t2475 = t1580*t2354;
  t2488 = -1.*t1275*t2396;
  t2490 = t2475 + t2488;
  t2422 = -1.*t1224*t2420;
  t2498 = t1737*t2490;
  t2501 = t2422 + t2498;
  t2516 = t1737*t2420;
  t2520 = t1224*t2490;
  t2524 = t2516 + t2520;
  t1140 = t166*t361*t349;
  t1143 = t610*t166*t547;
  t1157 = t1140 + t1143;
  t2652 = t610*t166*t361;
  t2674 = -1.*t166*t349*t547;
  t2679 = t2652 + t2674;
  t2683 = -1.*t332*t419;
  t2696 = t194*t1157;
  t2707 = t2683 + t2696;
  t2681 = t1313*t2679;
  t2726 = t1344*t2707;
  t2736 = t2681 + t2726;
  t2745 = t1344*t2679;
  t2753 = -1.*t1313*t2707;
  t2755 = t2745 + t2753;
  t2740 = -1.*t1301*t2736;
  t2759 = t1486*t2755;
  t2784 = t2740 + t2759;
  t2835 = t1486*t2736;
  t2839 = t1301*t2755;
  t2847 = t2835 + t2839;
  t2833 = t1275*t2784;
  t2864 = t1580*t2847;
  t2866 = t2833 + t2864;
  t2887 = t1580*t2784;
  t2913 = -1.*t1275*t2847;
  t2926 = t2887 + t2913;
  t2879 = -1.*t1224*t2866;
  t2942 = t1737*t2926;
  t2964 = t2879 + t2942;
  t2992 = t1737*t2866;
  t3040 = t1224*t2926;
  t3050 = t2992 + t3040;
  t1873 = t1220*t1872;
  t1929 = t1882*t1922;
  t1952 = t1873 + t1929;
  t1986 = t1882*t1872;
  t1993 = -1.*t1220*t1922;
  t2030 = t1986 + t1993;
  t2510 = t1220*t2501;
  t2533 = t1882*t2524;
  t2549 = t2510 + t2533;
  t2572 = t1882*t2501;
  t2584 = -1.*t1220*t2524;
  t2589 = t2572 + t2584;
  t2979 = t1220*t2964;
  t3057 = t1882*t3050;
  t3060 = t2979 + t3057;
  t3084 = t1882*t2964;
  t3113 = -1.*t1220*t3050;
  t3117 = t3084 + t3113;
  t3278 = -1.*t332;
  t3287 = 1. + t3278;
  t3487 = -1.*t1344;
  t3488 = 1. + t3487;
  t3550 = -1.*t1486;
  t3583 = 1. + t3550;
  t3738 = -1.*t1580;
  t3741 = 1. + t3738;
  t3810 = -1.*t1737;
  t3819 = 1. + t3810;
  t3862 = -1.*t1882;
  t3863 = 1. + t3862;
  t3293 = -0.049*t3287;
  t3298 = -0.135*t194;
  t3309 = 0. + t3293 + t3298;
  t3335 = 0.135*t349;
  t3336 = 0. + t3335;
  t3362 = -1.*t610;
  t3373 = 1. + t3362;
  t3386 = -0.135*t3373;
  t3391 = 0. + t3386;
  t3430 = -0.135*t3287;
  t3468 = 0.049*t194;
  t3479 = 0. + t3430 + t3468;
  t3489 = -0.09*t3488;
  t3496 = 0.049*t1313;
  t3498 = 0. + t3489 + t3496;
  t3540 = -0.049*t3488;
  t3543 = -0.09*t1313;
  t3548 = 0. + t3540 + t3543;
  t3584 = -0.049*t3583;
  t3586 = -0.21*t1301;
  t3608 = 0. + t3584 + t3586;
  t3625 = -0.21*t3583;
  t3629 = 0.049*t1301;
  t3647 = 0. + t3625 + t3629;
  t3749 = -0.2707*t3741;
  t3754 = 0.0016*t1275;
  t3761 = 0. + t3749 + t3754;
  t3782 = -0.0016*t3741;
  t3788 = -0.2707*t1275;
  t3789 = 0. + t3782 + t3788;
  t3821 = 0.0184*t3819;
  t3833 = -0.7055*t1224;
  t3846 = 0. + t3821 + t3833;
  t3851 = -0.7055*t3819;
  t3853 = -0.0184*t1224;
  t3856 = 0. + t3851 + t3853;
  t3868 = -1.1135*t3863;
  t3872 = 0.0216*t1220;
  t3887 = 0. + t3868 + t3872;
  t3907 = -0.0216*t3863;
  t3918 = -1.1135*t1220;
  t3935 = 0. + t3907 + t3918;
  p_output1[0]=t102*t166*t194 - 1.*t332*t767;
  p_output1[1]=-1.*t1021*t332 + t166*t194*t499;
  p_output1[2]=-1.*t1157*t332 - 1.*t194*t419;
  p_output1[3]=0.;
  p_output1[4]=0.642788*t1952 + 0.766044*t2030;
  p_output1[5]=0.642788*t2549 + 0.766044*t2589;
  p_output1[6]=0.642788*t3060 + 0.766044*t3117;
  p_output1[7]=0.;
  p_output1[8]=-0.766044*t1952 + 0.642788*t2030;
  p_output1[9]=-0.766044*t2549 + 0.642788*t2589;
  p_output1[10]=-0.766044*t3060 + 0.642788*t3117;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.088451*t1952 - 1.062256*t2030 + t102*t166*t3309 + t1328*t3498 + t1410*t3548 + t1458*t3608 + t1511*t3647 + t1566*t3761 + t1659*t3789 + t1713*t3846 + t1854*t3856 + t1872*t3887 + t1922*t3935 + t3336*t580 + t3391*t675 + t3479*t767 - 0.1305*(-1.*t102*t166*t194 + t332*t767) + var1[0];
  p_output1[13]=0. + 0.088451*t2549 - 1.062256*t2589 + t1021*t3479 + t2134*t3498 + t2149*t3548 + t2186*t3608 + t2326*t3647 + t2354*t3761 + t2396*t3789 + t2420*t3846 + t2490*t3856 + t2501*t3887 + t2524*t3935 + t166*t3309*t499 - 0.1305*(t1021*t332 - 1.*t166*t194*t499) + t3336*t860 + t3391*t981 + var1[1];
  p_output1[14]=0. + 0.088451*t3060 - 1.062256*t3117 + t1157*t3479 + t2679*t3498 + t2707*t3548 + t2736*t3608 + t166*t3336*t361 + t2755*t3647 + t2784*t3761 + t2847*t3789 + t2866*t3846 + t2926*t3856 + t2964*t3887 + t3050*t3935 - 1.*t3309*t419 - 0.1305*(t1157*t332 + t194*t419) + t166*t3391*t547 + var1[2];
  p_output1[15]=1.;
}



void H_RightToeFront_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
