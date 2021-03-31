/*
 * Automatically Generated from Mathematica.
 * Wed 12 Feb 2020 15:29:01 GMT-08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_LeftToeFront_src.h"

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
  double t244;
  double t183;
  double t259;
  double t190;
  double t374;
  double t21;
  double t73;
  double t655;
  double t787;
  double t796;
  double t223;
  double t454;
  double t463;
  double t510;
  double t518;
  double t584;
  double t588;
  double t758;
  double t774;
  double t1505;
  double t1623;
  double t1632;
  double t1641;
  double t1525;
  double t1567;
  double t1600;
  double t1647;
  double t1698;
  double t1619;
  double t1658;
  double t1672;
  double t1475;
  double t1705;
  double t1708;
  double t1709;
  double t1803;
  double t1685;
  double t1724;
  double t1794;
  double t1472;
  double t1830;
  double t1838;
  double t1852;
  double t1931;
  double t1799;
  double t1890;
  double t1892;
  double t1448;
  double t1981;
  double t1992;
  double t1996;
  double t2029;
  double t1929;
  double t2008;
  double t2016;
  double t1446;
  double t2031;
  double t2054;
  double t2096;
  double t836;
  double t862;
  double t869;
  double t875;
  double t880;
  double t883;
  double t936;
  double t950;
  double t977;
  double t2351;
  double t2352;
  double t2361;
  double t2250;
  double t2277;
  double t2283;
  double t2284;
  double t2388;
  double t2398;
  double t2443;
  double t2462;
  double t2517;
  double t2436;
  double t2519;
  double t2537;
  double t2636;
  double t2643;
  double t2657;
  double t2619;
  double t2661;
  double t2670;
  double t2705;
  double t2723;
  double t2758;
  double t2685;
  double t2768;
  double t2770;
  double t2811;
  double t2827;
  double t2854;
  double t1184;
  double t1201;
  double t1205;
  double t3061;
  double t3068;
  double t3074;
  double t2993;
  double t2999;
  double t3014;
  double t3054;
  double t3086;
  double t3115;
  double t3161;
  double t3163;
  double t3191;
  double t3125;
  double t3225;
  double t3232;
  double t3265;
  double t3266;
  double t3267;
  double t3244;
  double t3277;
  double t3282;
  double t3301;
  double t3304;
  double t3340;
  double t3300;
  double t3344;
  double t3350;
  double t3367;
  double t3377;
  double t3381;
  double t2022;
  double t2109;
  double t2133;
  double t2158;
  double t2165;
  double t2182;
  double t2775;
  double t2886;
  double t2894;
  double t2922;
  double t2950;
  double t2974;
  double t3364;
  double t3407;
  double t3446;
  double t3458;
  double t3463;
  double t3478;
  double t3696;
  double t3713;
  double t3897;
  double t3916;
  double t4013;
  double t4041;
  double t4171;
  double t4179;
  double t4349;
  double t4361;
  double t4417;
  double t4426;
  double t3598;
  double t3602;
  double t3617;
  double t3625;
  double t3649;
  double t3652;
  double t3716;
  double t3729;
  double t3755;
  double t3774;
  double t3790;
  double t3791;
  double t3943;
  double t3985;
  double t3986;
  double t3993;
  double t3997;
  double t4003;
  double t4050;
  double t4053;
  double t4062;
  double t4071;
  double t4077;
  double t4086;
  double t4224;
  double t4268;
  double t4283;
  double t4328;
  double t4333;
  double t4342;
  double t4365;
  double t4370;
  double t4387;
  double t4397;
  double t4402;
  double t4406;
  double t4431;
  double t4441;
  double t4459;
  double t4470;
  double t4472;
  double t4479;
  t244 = Cos(var1[3]);
  t183 = Cos(var1[5]);
  t259 = Sin(var1[4]);
  t190 = Sin(var1[3]);
  t374 = Sin(var1[5]);
  t21 = Cos(var1[7]);
  t73 = Cos(var1[6]);
  t655 = Sin(var1[6]);
  t787 = Cos(var1[4]);
  t796 = Sin(var1[7]);
  t223 = -1.*t183*t190;
  t454 = t244*t259*t374;
  t463 = t223 + t454;
  t510 = t73*t463;
  t518 = t244*t183*t259;
  t584 = t190*t374;
  t588 = t518 + t584;
  t758 = t588*t655;
  t774 = t510 + t758;
  t1505 = Cos(var1[8]);
  t1623 = t73*t588;
  t1632 = -1.*t463*t655;
  t1641 = t1623 + t1632;
  t1525 = t244*t787*t21;
  t1567 = t774*t796;
  t1600 = t1525 + t1567;
  t1647 = Sin(var1[8]);
  t1698 = Cos(var1[9]);
  t1619 = t1505*t1600;
  t1658 = t1641*t1647;
  t1672 = t1619 + t1658;
  t1475 = Sin(var1[9]);
  t1705 = t1505*t1641;
  t1708 = -1.*t1600*t1647;
  t1709 = t1705 + t1708;
  t1803 = Cos(var1[10]);
  t1685 = -1.*t1475*t1672;
  t1724 = t1698*t1709;
  t1794 = t1685 + t1724;
  t1472 = Sin(var1[10]);
  t1830 = t1698*t1672;
  t1838 = t1475*t1709;
  t1852 = t1830 + t1838;
  t1931 = Cos(var1[11]);
  t1799 = t1472*t1794;
  t1890 = t1803*t1852;
  t1892 = t1799 + t1890;
  t1448 = Sin(var1[11]);
  t1981 = t1803*t1794;
  t1992 = -1.*t1472*t1852;
  t1996 = t1981 + t1992;
  t2029 = Cos(var1[12]);
  t1929 = -1.*t1448*t1892;
  t2008 = t1931*t1996;
  t2016 = t1929 + t2008;
  t1446 = Sin(var1[12]);
  t2031 = t1931*t1892;
  t2054 = t1448*t1996;
  t2096 = t2031 + t2054;
  t836 = t244*t183;
  t862 = t190*t259*t374;
  t869 = t836 + t862;
  t875 = t73*t869;
  t880 = t183*t190*t259;
  t883 = -1.*t244*t374;
  t936 = t880 + t883;
  t950 = t936*t655;
  t977 = t875 + t950;
  t2351 = t73*t936;
  t2352 = -1.*t869*t655;
  t2361 = t2351 + t2352;
  t2250 = t787*t21*t190;
  t2277 = t977*t796;
  t2283 = t2250 + t2277;
  t2284 = t1505*t2283;
  t2388 = t2361*t1647;
  t2398 = t2284 + t2388;
  t2443 = t1505*t2361;
  t2462 = -1.*t2283*t1647;
  t2517 = t2443 + t2462;
  t2436 = -1.*t1475*t2398;
  t2519 = t1698*t2517;
  t2537 = t2436 + t2519;
  t2636 = t1698*t2398;
  t2643 = t1475*t2517;
  t2657 = t2636 + t2643;
  t2619 = t1472*t2537;
  t2661 = t1803*t2657;
  t2670 = t2619 + t2661;
  t2705 = t1803*t2537;
  t2723 = -1.*t1472*t2657;
  t2758 = t2705 + t2723;
  t2685 = -1.*t1448*t2670;
  t2768 = t1931*t2758;
  t2770 = t2685 + t2768;
  t2811 = t1931*t2670;
  t2827 = t1448*t2758;
  t2854 = t2811 + t2827;
  t1184 = t787*t73*t374;
  t1201 = t787*t183*t655;
  t1205 = t1184 + t1201;
  t3061 = t787*t183*t73;
  t3068 = -1.*t787*t374*t655;
  t3074 = t3061 + t3068;
  t2993 = -1.*t21*t259;
  t2999 = t1205*t796;
  t3014 = t2993 + t2999;
  t3054 = t1505*t3014;
  t3086 = t3074*t1647;
  t3115 = t3054 + t3086;
  t3161 = t1505*t3074;
  t3163 = -1.*t3014*t1647;
  t3191 = t3161 + t3163;
  t3125 = -1.*t1475*t3115;
  t3225 = t1698*t3191;
  t3232 = t3125 + t3225;
  t3265 = t1698*t3115;
  t3266 = t1475*t3191;
  t3267 = t3265 + t3266;
  t3244 = t1472*t3232;
  t3277 = t1803*t3267;
  t3282 = t3244 + t3277;
  t3301 = t1803*t3232;
  t3304 = -1.*t1472*t3267;
  t3340 = t3301 + t3304;
  t3300 = -1.*t1448*t3282;
  t3344 = t1931*t3340;
  t3350 = t3300 + t3344;
  t3367 = t1931*t3282;
  t3377 = t1448*t3340;
  t3381 = t3367 + t3377;
  t2022 = t1446*t2016;
  t2109 = t2029*t2096;
  t2133 = t2022 + t2109;
  t2158 = t2029*t2016;
  t2165 = -1.*t1446*t2096;
  t2182 = t2158 + t2165;
  t2775 = t1446*t2770;
  t2886 = t2029*t2854;
  t2894 = t2775 + t2886;
  t2922 = t2029*t2770;
  t2950 = -1.*t1446*t2854;
  t2974 = t2922 + t2950;
  t3364 = t1446*t3350;
  t3407 = t2029*t3381;
  t3446 = t3364 + t3407;
  t3458 = t2029*t3350;
  t3463 = -1.*t1446*t3381;
  t3478 = t3458 + t3463;
  t3696 = -1.*t21;
  t3713 = 1. + t3696;
  t3897 = -1.*t1505;
  t3916 = 1. + t3897;
  t4013 = -1.*t1698;
  t4041 = 1. + t4013;
  t4171 = -1.*t1803;
  t4179 = 1. + t4171;
  t4349 = -1.*t1931;
  t4361 = 1. + t4349;
  t4417 = -1.*t2029;
  t4426 = 1. + t4417;
  t3598 = -1.*t73;
  t3602 = 1. + t3598;
  t3617 = 0.135*t3602;
  t3625 = 0. + t3617;
  t3649 = -0.135*t655;
  t3652 = 0. + t3649;
  t3716 = 0.135*t3713;
  t3729 = 0.049*t796;
  t3755 = 0. + t3716 + t3729;
  t3774 = -0.049*t3713;
  t3790 = 0.135*t796;
  t3791 = 0. + t3774 + t3790;
  t3943 = -0.049*t3916;
  t3985 = -0.09*t1647;
  t3986 = 0. + t3943 + t3985;
  t3993 = -0.09*t3916;
  t3997 = 0.049*t1647;
  t4003 = 0. + t3993 + t3997;
  t4050 = -0.049*t4041;
  t4053 = -0.21*t1475;
  t4062 = 0. + t4050 + t4053;
  t4071 = -0.21*t4041;
  t4077 = 0.049*t1475;
  t4086 = 0. + t4071 + t4077;
  t4224 = -0.2707*t4179;
  t4268 = 0.0016*t1472;
  t4283 = 0. + t4224 + t4268;
  t4328 = -0.0016*t4179;
  t4333 = -0.2707*t1472;
  t4342 = 0. + t4328 + t4333;
  t4365 = 0.0184*t4361;
  t4370 = -0.7055*t1448;
  t4387 = 0. + t4365 + t4370;
  t4397 = -0.7055*t4361;
  t4402 = -0.0184*t1448;
  t4406 = 0. + t4397 + t4402;
  t4431 = -1.1135*t4426;
  t4441 = 0.0216*t1446;
  t4459 = 0. + t4431 + t4441;
  t4470 = -0.0216*t4426;
  t4472 = -1.1135*t1446;
  t4479 = 0. + t4470 + t4472;
  p_output1[0]=-1.*t21*t774 + t244*t787*t796;
  p_output1[1]=t190*t787*t796 - 1.*t21*t977;
  p_output1[2]=-1.*t1205*t21 - 1.*t259*t796;
  p_output1[3]=0.;
  p_output1[4]=0.642788*t2133 + 0.766044*t2182;
  p_output1[5]=0.642788*t2894 + 0.766044*t2974;
  p_output1[6]=0.642788*t3446 + 0.766044*t3478;
  p_output1[7]=0.;
  p_output1[8]=-0.766044*t2133 + 0.642788*t2182;
  p_output1[9]=-0.766044*t2894 + 0.642788*t2974;
  p_output1[10]=-0.766044*t3446 + 0.642788*t3478;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.088451*t2133 - 1.062256*t2182 + t1600*t3986 + t1641*t4003 + t1672*t4062 + t1709*t4086 + t1794*t4283 + t1852*t4342 + t1892*t4387 + t1996*t4406 + t2016*t4459 + t2096*t4479 + t3625*t463 + t3652*t588 + t3755*t774 + t244*t3791*t787 + 0.1305*(t21*t774 - 1.*t244*t787*t796) + var1[0];
  p_output1[13]=0. + 0.088451*t2894 - 1.062256*t2974 + t2283*t3986 + t2361*t4003 + t2398*t4062 + t2517*t4086 + t2537*t4283 + t2657*t4342 + t2670*t4387 + t2758*t4406 + t2770*t4459 + t2854*t4479 + t190*t3791*t787 + t3625*t869 + t3652*t936 + t3755*t977 + 0.1305*(-1.*t190*t787*t796 + t21*t977) + var1[1];
  p_output1[14]=0. + 0.088451*t3446 - 1.062256*t3478 + t1205*t3755 - 1.*t259*t3791 + t3014*t3986 + t3074*t4003 + t3115*t4062 + t3191*t4086 + t3232*t4283 + t3267*t4342 + t3282*t4387 + t3340*t4406 + t3350*t4459 + t3381*t4479 + t183*t3652*t787 + t3625*t374*t787 + 0.1305*(t1205*t21 + t259*t796) + var1[2];
  p_output1[15]=1.;
}



void H_LeftToeFront_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
