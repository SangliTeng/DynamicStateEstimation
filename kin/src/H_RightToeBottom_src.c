/*
 * Automatically Generated from Mathematica.
 * Wed 12 Feb 2020 15:29:12 GMT-08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RightToeBottom_src.h"

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
  double t23;
  double t196;
  double t538;
  double t378;
  double t568;
  double t34;
  double t59;
  double t141;
  double t150;
  double t733;
  double t530;
  double t590;
  double t640;
  double t741;
  double t760;
  double t832;
  double t647;
  double t837;
  double t885;
  double t1758;
  double t1739;
  double t1746;
  double t1750;
  double t1711;
  double t1793;
  double t1797;
  double t1831;
  double t1945;
  double t1757;
  double t1877;
  double t1893;
  double t1686;
  double t1947;
  double t1962;
  double t1975;
  double t2038;
  double t1944;
  double t2019;
  double t2028;
  double t1657;
  double t2047;
  double t2052;
  double t2063;
  double t2153;
  double t2037;
  double t2082;
  double t2106;
  double t1602;
  double t2167;
  double t2178;
  double t2184;
  double t2325;
  double t2116;
  double t2224;
  double t2294;
  double t1568;
  double t2332;
  double t2348;
  double t2374;
  double t983;
  double t1019;
  double t1028;
  double t1181;
  double t1196;
  double t1279;
  double t1056;
  double t1306;
  double t1317;
  double t2581;
  double t2626;
  double t2632;
  double t2655;
  double t2669;
  double t2689;
  double t2646;
  double t2713;
  double t2752;
  double t2771;
  double t2820;
  double t2848;
  double t2757;
  double t2889;
  double t2891;
  double t2949;
  double t2977;
  double t3001;
  double t2931;
  double t3005;
  double t3016;
  double t3053;
  double t3059;
  double t3067;
  double t3047;
  double t3081;
  double t3090;
  double t3105;
  double t3109;
  double t3111;
  double t1443;
  double t1479;
  double t1488;
  double t3195;
  double t3196;
  double t3220;
  double t3239;
  double t3241;
  double t3246;
  double t3230;
  double t3255;
  double t3269;
  double t3366;
  double t3378;
  double t3389;
  double t3338;
  double t3394;
  double t3434;
  double t3449;
  double t3466;
  double t3473;
  double t3437;
  double t3480;
  double t3572;
  double t3648;
  double t3657;
  double t3692;
  double t3645;
  double t3695;
  double t3706;
  double t3742;
  double t3756;
  double t3762;
  double t2319;
  double t2378;
  double t2407;
  double t2468;
  double t2531;
  double t2560;
  double t3101;
  double t3112;
  double t3113;
  double t3149;
  double t3162;
  double t3176;
  double t3724;
  double t3777;
  double t3812;
  double t3827;
  double t3831;
  double t3838;
  double t4002;
  double t4018;
  double t4227;
  double t4256;
  double t4404;
  double t4405;
  double t4550;
  double t4553;
  double t4661;
  double t4679;
  double t4731;
  double t4747;
  double t4025;
  double t4037;
  double t4046;
  double t4057;
  double t4066;
  double t4114;
  double t4117;
  double t4125;
  double t4163;
  double t4176;
  double t4196;
  double t4208;
  double t4312;
  double t4321;
  double t4341;
  double t4380;
  double t4386;
  double t4391;
  double t4461;
  double t4468;
  double t4486;
  double t4532;
  double t4536;
  double t4537;
  double t4565;
  double t4581;
  double t4596;
  double t4603;
  double t4608;
  double t4612;
  double t4681;
  double t4685;
  double t4687;
  double t4705;
  double t4709;
  double t4716;
  double t4770;
  double t4775;
  double t4779;
  double t4791;
  double t4798;
  double t4800;
  t23 = Cos(var1[3]);
  t196 = Cos(var1[5]);
  t538 = Sin(var1[3]);
  t378 = Sin(var1[4]);
  t568 = Sin(var1[5]);
  t34 = Cos(var1[4]);
  t59 = Sin(var1[14]);
  t141 = Cos(var1[14]);
  t150 = Sin(var1[13]);
  t733 = Cos(var1[13]);
  t530 = t23*t196*t378;
  t590 = t538*t568;
  t640 = t530 + t590;
  t741 = -1.*t196*t538;
  t760 = t23*t378*t568;
  t832 = t741 + t760;
  t647 = t150*t640;
  t837 = t733*t832;
  t885 = t647 + t837;
  t1758 = Cos(var1[15]);
  t1739 = t733*t640;
  t1746 = -1.*t150*t832;
  t1750 = t1739 + t1746;
  t1711 = Sin(var1[15]);
  t1793 = t141*t23*t34;
  t1797 = t59*t885;
  t1831 = t1793 + t1797;
  t1945 = Cos(var1[16]);
  t1757 = t1711*t1750;
  t1877 = t1758*t1831;
  t1893 = t1757 + t1877;
  t1686 = Sin(var1[16]);
  t1947 = t1758*t1750;
  t1962 = -1.*t1711*t1831;
  t1975 = t1947 + t1962;
  t2038 = Cos(var1[17]);
  t1944 = -1.*t1686*t1893;
  t2019 = t1945*t1975;
  t2028 = t1944 + t2019;
  t1657 = Sin(var1[17]);
  t2047 = t1945*t1893;
  t2052 = t1686*t1975;
  t2063 = t2047 + t2052;
  t2153 = Cos(var1[18]);
  t2037 = t1657*t2028;
  t2082 = t2038*t2063;
  t2106 = t2037 + t2082;
  t1602 = Sin(var1[18]);
  t2167 = t2038*t2028;
  t2178 = -1.*t1657*t2063;
  t2184 = t2167 + t2178;
  t2325 = Cos(var1[19]);
  t2116 = -1.*t1602*t2106;
  t2224 = t2153*t2184;
  t2294 = t2116 + t2224;
  t1568 = Sin(var1[19]);
  t2332 = t2153*t2106;
  t2348 = t1602*t2184;
  t2374 = t2332 + t2348;
  t983 = t196*t538*t378;
  t1019 = -1.*t23*t568;
  t1028 = t983 + t1019;
  t1181 = t23*t196;
  t1196 = t538*t378*t568;
  t1279 = t1181 + t1196;
  t1056 = t150*t1028;
  t1306 = t733*t1279;
  t1317 = t1056 + t1306;
  t2581 = t733*t1028;
  t2626 = -1.*t150*t1279;
  t2632 = t2581 + t2626;
  t2655 = t141*t34*t538;
  t2669 = t59*t1317;
  t2689 = t2655 + t2669;
  t2646 = t1711*t2632;
  t2713 = t1758*t2689;
  t2752 = t2646 + t2713;
  t2771 = t1758*t2632;
  t2820 = -1.*t1711*t2689;
  t2848 = t2771 + t2820;
  t2757 = -1.*t1686*t2752;
  t2889 = t1945*t2848;
  t2891 = t2757 + t2889;
  t2949 = t1945*t2752;
  t2977 = t1686*t2848;
  t3001 = t2949 + t2977;
  t2931 = t1657*t2891;
  t3005 = t2038*t3001;
  t3016 = t2931 + t3005;
  t3053 = t2038*t2891;
  t3059 = -1.*t1657*t3001;
  t3067 = t3053 + t3059;
  t3047 = -1.*t1602*t3016;
  t3081 = t2153*t3067;
  t3090 = t3047 + t3081;
  t3105 = t2153*t3016;
  t3109 = t1602*t3067;
  t3111 = t3105 + t3109;
  t1443 = t34*t196*t150;
  t1479 = t733*t34*t568;
  t1488 = t1443 + t1479;
  t3195 = t733*t34*t196;
  t3196 = -1.*t34*t150*t568;
  t3220 = t3195 + t3196;
  t3239 = -1.*t141*t378;
  t3241 = t59*t1488;
  t3246 = t3239 + t3241;
  t3230 = t1711*t3220;
  t3255 = t1758*t3246;
  t3269 = t3230 + t3255;
  t3366 = t1758*t3220;
  t3378 = -1.*t1711*t3246;
  t3389 = t3366 + t3378;
  t3338 = -1.*t1686*t3269;
  t3394 = t1945*t3389;
  t3434 = t3338 + t3394;
  t3449 = t1945*t3269;
  t3466 = t1686*t3389;
  t3473 = t3449 + t3466;
  t3437 = t1657*t3434;
  t3480 = t2038*t3473;
  t3572 = t3437 + t3480;
  t3648 = t2038*t3434;
  t3657 = -1.*t1657*t3473;
  t3692 = t3648 + t3657;
  t3645 = -1.*t1602*t3572;
  t3695 = t2153*t3692;
  t3706 = t3645 + t3695;
  t3742 = t2153*t3572;
  t3756 = t1602*t3692;
  t3762 = t3742 + t3756;
  t2319 = t1568*t2294;
  t2378 = t2325*t2374;
  t2407 = t2319 + t2378;
  t2468 = t2325*t2294;
  t2531 = -1.*t1568*t2374;
  t2560 = t2468 + t2531;
  t3101 = t1568*t3090;
  t3112 = t2325*t3111;
  t3113 = t3101 + t3112;
  t3149 = t2325*t3090;
  t3162 = -1.*t1568*t3111;
  t3176 = t3149 + t3162;
  t3724 = t1568*t3706;
  t3777 = t2325*t3762;
  t3812 = t3724 + t3777;
  t3827 = t2325*t3706;
  t3831 = -1.*t1568*t3762;
  t3838 = t3827 + t3831;
  t4002 = -1.*t141;
  t4018 = 1. + t4002;
  t4227 = -1.*t1758;
  t4256 = 1. + t4227;
  t4404 = -1.*t1945;
  t4405 = 1. + t4404;
  t4550 = -1.*t2038;
  t4553 = 1. + t4550;
  t4661 = -1.*t2153;
  t4679 = 1. + t4661;
  t4731 = -1.*t2325;
  t4747 = 1. + t4731;
  t4025 = -0.049*t4018;
  t4037 = -0.135*t59;
  t4046 = 0. + t4025 + t4037;
  t4057 = 0.135*t150;
  t4066 = 0. + t4057;
  t4114 = -1.*t733;
  t4117 = 1. + t4114;
  t4125 = -0.135*t4117;
  t4163 = 0. + t4125;
  t4176 = -0.135*t4018;
  t4196 = 0.049*t59;
  t4208 = 0. + t4176 + t4196;
  t4312 = -0.09*t4256;
  t4321 = 0.049*t1711;
  t4341 = 0. + t4312 + t4321;
  t4380 = -0.049*t4256;
  t4386 = -0.09*t1711;
  t4391 = 0. + t4380 + t4386;
  t4461 = -0.049*t4405;
  t4468 = -0.21*t1686;
  t4486 = 0. + t4461 + t4468;
  t4532 = -0.21*t4405;
  t4536 = 0.049*t1686;
  t4537 = 0. + t4532 + t4536;
  t4565 = -0.2707*t4553;
  t4581 = 0.0016*t1657;
  t4596 = 0. + t4565 + t4581;
  t4603 = -0.0016*t4553;
  t4608 = -0.2707*t1657;
  t4612 = 0. + t4603 + t4608;
  t4681 = 0.0184*t4679;
  t4685 = -0.7055*t1602;
  t4687 = 0. + t4681 + t4685;
  t4705 = -0.7055*t4679;
  t4709 = -0.0184*t1602;
  t4716 = 0. + t4705 + t4709;
  t4770 = -1.1135*t4747;
  t4775 = 0.0216*t1568;
  t4779 = 0. + t4770 + t4775;
  t4791 = -0.0216*t4747;
  t4798 = -1.1135*t1568;
  t4800 = 0. + t4791 + t4798;
  p_output1[0]=t23*t34*t59 - 1.*t141*t885;
  p_output1[1]=-1.*t1317*t141 + t34*t538*t59;
  p_output1[2]=-1.*t141*t1488 - 1.*t378*t59;
  p_output1[3]=0.;
  p_output1[4]=0.642788*t2407 + 0.766044*t2560;
  p_output1[5]=0.642788*t3113 + 0.766044*t3176;
  p_output1[6]=0.642788*t3812 + 0.766044*t3838;
  p_output1[7]=0.;
  p_output1[8]=-0.766044*t2407 + 0.642788*t2560;
  p_output1[9]=-0.766044*t3113 + 0.642788*t3176;
  p_output1[10]=-0.766044*t3812 + 0.642788*t3838;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.0306*t2407 - 1.1312*t2560 + t23*t34*t4046 + t1750*t4341 + t1831*t4391 + t1893*t4486 + t1975*t4537 + t2028*t4596 + t2063*t4612 + t2106*t4687 + t2184*t4716 + t2294*t4779 + t2374*t4800 + t4066*t640 + t4163*t832 + t4208*t885 - 0.1305*(-1.*t23*t34*t59 + t141*t885) + var1[0];
  p_output1[13]=0. + 0.0306*t3113 - 1.1312*t3176 + t1028*t4066 + t1279*t4163 + t1317*t4208 + t2632*t4341 + t2689*t4391 + t2752*t4486 + t2848*t4537 + t2891*t4596 + t3001*t4612 + t3016*t4687 + t3067*t4716 + t3090*t4779 + t3111*t4800 + t34*t4046*t538 - 0.1305*(t1317*t141 - 1.*t34*t538*t59) + var1[1];
  p_output1[14]=0. + 0.0306*t3812 - 1.1312*t3838 - 1.*t378*t4046 + t196*t34*t4066 + t1488*t4208 + t3220*t4341 + t3246*t4391 + t3269*t4486 + t3389*t4537 + t3434*t4596 + t3473*t4612 + t3572*t4687 + t3692*t4716 + t3706*t4779 + t3762*t4800 + t34*t4163*t568 - 0.1305*(t141*t1488 + t378*t59) + var1[2];
  p_output1[15]=1.;
}



void H_RightToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
