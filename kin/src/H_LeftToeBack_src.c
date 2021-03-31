/*
 * Automatically Generated from Mathematica.
 * Wed 12 Feb 2020 15:29:07 GMT-08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_LeftToeBack_src.h"

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
  double t312;
  double t300;
  double t314;
  double t301;
  double t381;
  double t199;
  double t280;
  double t626;
  double t722;
  double t736;
  double t309;
  double t442;
  double t470;
  double t557;
  double t564;
  double t572;
  double t574;
  double t628;
  double t669;
  double t1426;
  double t1597;
  double t1608;
  double t1653;
  double t1442;
  double t1454;
  double t1483;
  double t1689;
  double t1743;
  double t1484;
  double t1693;
  double t1710;
  double t1394;
  double t1749;
  double t1762;
  double t1773;
  double t1823;
  double t1723;
  double t1781;
  double t1791;
  double t1363;
  double t1827;
  double t1942;
  double t1969;
  double t2045;
  double t1816;
  double t1990;
  double t2006;
  double t1336;
  double t2055;
  double t2074;
  double t2093;
  double t2194;
  double t2012;
  double t2145;
  double t2180;
  double t1320;
  double t2211;
  double t2215;
  double t2232;
  double t831;
  double t861;
  double t876;
  double t906;
  double t924;
  double t944;
  double t966;
  double t988;
  double t1025;
  double t2405;
  double t2431;
  double t2444;
  double t2362;
  double t2376;
  double t2383;
  double t2401;
  double t2454;
  double t2494;
  double t2536;
  double t2548;
  double t2558;
  double t2530;
  double t2582;
  double t2627;
  double t2650;
  double t2653;
  double t2656;
  double t2649;
  double t2659;
  double t2666;
  double t2690;
  double t2729;
  double t2735;
  double t2673;
  double t2754;
  double t2761;
  double t2781;
  double t2782;
  double t2785;
  double t1156;
  double t1188;
  double t1211;
  double t2895;
  double t2907;
  double t2914;
  double t2858;
  double t2874;
  double t2876;
  double t2885;
  double t2916;
  double t2920;
  double t2957;
  double t2975;
  double t3006;
  double t2928;
  double t3009;
  double t3010;
  double t3044;
  double t3070;
  double t3091;
  double t3021;
  double t3114;
  double t3120;
  double t3146;
  double t3158;
  double t3164;
  double t3145;
  double t3171;
  double t3187;
  double t3243;
  double t3250;
  double t3256;
  double t2188;
  double t2249;
  double t2295;
  double t2324;
  double t2328;
  double t2336;
  double t2767;
  double t2790;
  double t2795;
  double t2813;
  double t2814;
  double t2824;
  double t3209;
  double t3270;
  double t3280;
  double t3311;
  double t3317;
  double t3331;
  double t3731;
  double t3736;
  double t3920;
  double t3930;
  double t4047;
  double t4049;
  double t4146;
  double t4151;
  double t4298;
  double t4330;
  double t4411;
  double t4418;
  double t3559;
  double t3596;
  double t3611;
  double t3616;
  double t3639;
  double t3679;
  double t3740;
  double t3744;
  double t3776;
  double t3797;
  double t3814;
  double t3859;
  double t3932;
  double t3952;
  double t3960;
  double t3975;
  double t3987;
  double t4007;
  double t4068;
  double t4094;
  double t4096;
  double t4101;
  double t4112;
  double t4123;
  double t4161;
  double t4194;
  double t4195;
  double t4216;
  double t4243;
  double t4265;
  double t4332;
  double t4345;
  double t4363;
  double t4377;
  double t4379;
  double t4400;
  double t4425;
  double t4460;
  double t4476;
  double t4492;
  double t4501;
  double t4504;
  t312 = Cos(var1[3]);
  t300 = Cos(var1[5]);
  t314 = Sin(var1[4]);
  t301 = Sin(var1[3]);
  t381 = Sin(var1[5]);
  t199 = Cos(var1[7]);
  t280 = Cos(var1[6]);
  t626 = Sin(var1[6]);
  t722 = Cos(var1[4]);
  t736 = Sin(var1[7]);
  t309 = -1.*t300*t301;
  t442 = t312*t314*t381;
  t470 = t309 + t442;
  t557 = t280*t470;
  t564 = t312*t300*t314;
  t572 = t301*t381;
  t574 = t564 + t572;
  t628 = t574*t626;
  t669 = t557 + t628;
  t1426 = Cos(var1[8]);
  t1597 = t280*t574;
  t1608 = -1.*t470*t626;
  t1653 = t1597 + t1608;
  t1442 = t312*t722*t199;
  t1454 = t669*t736;
  t1483 = t1442 + t1454;
  t1689 = Sin(var1[8]);
  t1743 = Cos(var1[9]);
  t1484 = t1426*t1483;
  t1693 = t1653*t1689;
  t1710 = t1484 + t1693;
  t1394 = Sin(var1[9]);
  t1749 = t1426*t1653;
  t1762 = -1.*t1483*t1689;
  t1773 = t1749 + t1762;
  t1823 = Cos(var1[10]);
  t1723 = -1.*t1394*t1710;
  t1781 = t1743*t1773;
  t1791 = t1723 + t1781;
  t1363 = Sin(var1[10]);
  t1827 = t1743*t1710;
  t1942 = t1394*t1773;
  t1969 = t1827 + t1942;
  t2045 = Cos(var1[11]);
  t1816 = t1363*t1791;
  t1990 = t1823*t1969;
  t2006 = t1816 + t1990;
  t1336 = Sin(var1[11]);
  t2055 = t1823*t1791;
  t2074 = -1.*t1363*t1969;
  t2093 = t2055 + t2074;
  t2194 = Cos(var1[12]);
  t2012 = -1.*t1336*t2006;
  t2145 = t2045*t2093;
  t2180 = t2012 + t2145;
  t1320 = Sin(var1[12]);
  t2211 = t2045*t2006;
  t2215 = t1336*t2093;
  t2232 = t2211 + t2215;
  t831 = t312*t300;
  t861 = t301*t314*t381;
  t876 = t831 + t861;
  t906 = t280*t876;
  t924 = t300*t301*t314;
  t944 = -1.*t312*t381;
  t966 = t924 + t944;
  t988 = t966*t626;
  t1025 = t906 + t988;
  t2405 = t280*t966;
  t2431 = -1.*t876*t626;
  t2444 = t2405 + t2431;
  t2362 = t722*t199*t301;
  t2376 = t1025*t736;
  t2383 = t2362 + t2376;
  t2401 = t1426*t2383;
  t2454 = t2444*t1689;
  t2494 = t2401 + t2454;
  t2536 = t1426*t2444;
  t2548 = -1.*t2383*t1689;
  t2558 = t2536 + t2548;
  t2530 = -1.*t1394*t2494;
  t2582 = t1743*t2558;
  t2627 = t2530 + t2582;
  t2650 = t1743*t2494;
  t2653 = t1394*t2558;
  t2656 = t2650 + t2653;
  t2649 = t1363*t2627;
  t2659 = t1823*t2656;
  t2666 = t2649 + t2659;
  t2690 = t1823*t2627;
  t2729 = -1.*t1363*t2656;
  t2735 = t2690 + t2729;
  t2673 = -1.*t1336*t2666;
  t2754 = t2045*t2735;
  t2761 = t2673 + t2754;
  t2781 = t2045*t2666;
  t2782 = t1336*t2735;
  t2785 = t2781 + t2782;
  t1156 = t722*t280*t381;
  t1188 = t722*t300*t626;
  t1211 = t1156 + t1188;
  t2895 = t722*t300*t280;
  t2907 = -1.*t722*t381*t626;
  t2914 = t2895 + t2907;
  t2858 = -1.*t199*t314;
  t2874 = t1211*t736;
  t2876 = t2858 + t2874;
  t2885 = t1426*t2876;
  t2916 = t2914*t1689;
  t2920 = t2885 + t2916;
  t2957 = t1426*t2914;
  t2975 = -1.*t2876*t1689;
  t3006 = t2957 + t2975;
  t2928 = -1.*t1394*t2920;
  t3009 = t1743*t3006;
  t3010 = t2928 + t3009;
  t3044 = t1743*t2920;
  t3070 = t1394*t3006;
  t3091 = t3044 + t3070;
  t3021 = t1363*t3010;
  t3114 = t1823*t3091;
  t3120 = t3021 + t3114;
  t3146 = t1823*t3010;
  t3158 = -1.*t1363*t3091;
  t3164 = t3146 + t3158;
  t3145 = -1.*t1336*t3120;
  t3171 = t2045*t3164;
  t3187 = t3145 + t3171;
  t3243 = t2045*t3120;
  t3250 = t1336*t3164;
  t3256 = t3243 + t3250;
  t2188 = t1320*t2180;
  t2249 = t2194*t2232;
  t2295 = t2188 + t2249;
  t2324 = t2194*t2180;
  t2328 = -1.*t1320*t2232;
  t2336 = t2324 + t2328;
  t2767 = t1320*t2761;
  t2790 = t2194*t2785;
  t2795 = t2767 + t2790;
  t2813 = t2194*t2761;
  t2814 = -1.*t1320*t2785;
  t2824 = t2813 + t2814;
  t3209 = t1320*t3187;
  t3270 = t2194*t3256;
  t3280 = t3209 + t3270;
  t3311 = t2194*t3187;
  t3317 = -1.*t1320*t3256;
  t3331 = t3311 + t3317;
  t3731 = -1.*t199;
  t3736 = 1. + t3731;
  t3920 = -1.*t1426;
  t3930 = 1. + t3920;
  t4047 = -1.*t1743;
  t4049 = 1. + t4047;
  t4146 = -1.*t1823;
  t4151 = 1. + t4146;
  t4298 = -1.*t2045;
  t4330 = 1. + t4298;
  t4411 = -1.*t2194;
  t4418 = 1. + t4411;
  t3559 = -1.*t280;
  t3596 = 1. + t3559;
  t3611 = 0.135*t3596;
  t3616 = 0. + t3611;
  t3639 = -0.135*t626;
  t3679 = 0. + t3639;
  t3740 = 0.135*t3736;
  t3744 = 0.049*t736;
  t3776 = 0. + t3740 + t3744;
  t3797 = -0.049*t3736;
  t3814 = 0.135*t736;
  t3859 = 0. + t3797 + t3814;
  t3932 = -0.049*t3930;
  t3952 = -0.09*t1689;
  t3960 = 0. + t3932 + t3952;
  t3975 = -0.09*t3930;
  t3987 = 0.049*t1689;
  t4007 = 0. + t3975 + t3987;
  t4068 = -0.049*t4049;
  t4094 = -0.21*t1394;
  t4096 = 0. + t4068 + t4094;
  t4101 = -0.21*t4049;
  t4112 = 0.049*t1394;
  t4123 = 0. + t4101 + t4112;
  t4161 = -0.2707*t4151;
  t4194 = 0.0016*t1363;
  t4195 = 0. + t4161 + t4194;
  t4216 = -0.0016*t4151;
  t4243 = -0.2707*t1363;
  t4265 = 0. + t4216 + t4243;
  t4332 = 0.0184*t4330;
  t4345 = -0.7055*t1336;
  t4363 = 0. + t4332 + t4345;
  t4377 = -0.7055*t4330;
  t4379 = -0.0184*t1336;
  t4400 = 0. + t4377 + t4379;
  t4425 = -1.1135*t4418;
  t4460 = 0.0216*t1320;
  t4476 = 0. + t4425 + t4460;
  t4492 = -0.0216*t4418;
  t4501 = -1.1135*t1320;
  t4504 = 0. + t4492 + t4501;
  p_output1[0]=-1.*t199*t669 + t312*t722*t736;
  p_output1[1]=-1.*t1025*t199 + t301*t722*t736;
  p_output1[2]=-1.*t1211*t199 - 1.*t314*t736;
  p_output1[3]=0.;
  p_output1[4]=0.642788*t2295 + 0.766044*t2336;
  p_output1[5]=0.642788*t2795 + 0.766044*t2824;
  p_output1[6]=0.642788*t3280 + 0.766044*t3331;
  p_output1[7]=0.;
  p_output1[8]=-0.766044*t2295 + 0.642788*t2336;
  p_output1[9]=-0.766044*t2795 + 0.642788*t2824;
  p_output1[10]=-0.766044*t3280 + 0.642788*t3331;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.027251*t2295 - 1.200144*t2336 + t1483*t3960 + t1653*t4007 + t1710*t4096 + t1773*t4123 + t1791*t4195 + t1969*t4265 + t2006*t4363 + t2093*t4400 + t2180*t4476 + t2232*t4504 + t3616*t470 + t3679*t574 + t3776*t669 + t312*t3859*t722 + 0.1305*(t199*t669 - 1.*t312*t722*t736) + var1[0];
  p_output1[13]=0. - 0.027251*t2795 - 1.200144*t2824 + t1025*t3776 + t2383*t3960 + t2444*t4007 + t2494*t4096 + t2558*t4123 + t2627*t4195 + t2656*t4265 + t2666*t4363 + t2735*t4400 + t2761*t4476 + t2785*t4504 + t301*t3859*t722 + 0.1305*(t1025*t199 - 1.*t301*t722*t736) + t3616*t876 + t3679*t966 + var1[1];
  p_output1[14]=0. - 0.027251*t3280 - 1.200144*t3331 + t1211*t3776 - 1.*t314*t3859 + t2876*t3960 + t2914*t4007 + t2920*t4096 + t3006*t4123 + t3010*t4195 + t3091*t4265 + t3120*t4363 + t3164*t4400 + t3187*t4476 + t3256*t4504 + t300*t3679*t722 + t3616*t381*t722 + 0.1305*(t1211*t199 + t314*t736) + var1[2];
  p_output1[15]=1.;
}



void H_LeftToeBack_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
