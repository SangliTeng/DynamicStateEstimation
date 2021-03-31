/*
 * Automatically Generated from Mathematica.
 * Wed 23 Oct 2019 10:26:30 GMT-07:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_LeftToeBack_to_RightToeBack_src.h"

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
  double t303;
  double t347;
  double t315;
  double t323;
  double t359;
  double t419;
  double t344;
  double t390;
  double t411;
  double t295;
  double t420;
  double t434;
  double t439;
  double t577;
  double t417;
  double t452;
  double t509;
  double t265;
  double t586;
  double t588;
  double t643;
  double t681;
  double t538;
  double t645;
  double t657;
  double t198;
  double t719;
  double t724;
  double t739;
  double t805;
  double t791;
  double t794;
  double t799;
  double t814;
  double t817;
  double t826;
  double t838;
  double t842;
  double t819;
  double t844;
  double t849;
  double t877;
  double t897;
  double t900;
  double t871;
  double t910;
  double t917;
  double t923;
  double t928;
  double t944;
  double t919;
  double t949;
  double t952;
  double t966;
  double t976;
  double t984;
  double t659;
  double t761;
  double t762;
  double t770;
  double t771;
  double t780;
  double t959;
  double t985;
  double t987;
  double t1000;
  double t1030;
  double t1036;
  double t1203;
  double t1218;
  double t1242;
  double t1271;
  double t1279;
  double t1296;
  double t1249;
  double t1307;
  double t1322;
  double t1357;
  double t1376;
  double t1379;
  double t1348;
  double t1380;
  double t1387;
  double t1406;
  double t1434;
  double t1451;
  double t1404;
  double t1468;
  double t1500;
  double t1555;
  double t1561;
  double t1573;
  double t1113;
  double t1114;
  double t1116;
  double t991;
  double t1044;
  double t1063;
  double t1503;
  double t1579;
  double t1599;
  double t1616;
  double t1633;
  double t1635;
  double t765;
  double t785;
  double t790;
  double t1123;
  double t1129;
  double t1144;
  double t1067;
  double t1157;
  double t180;
  double t1725;
  double t1737;
  double t1757;
  double t1605;
  double t1665;
  double t1684;
  double t1692;
  double t1696;
  double t1705;
  double t1722;
  double t1766;
  double t1769;
  double t1776;
  double t1778;
  double t1787;
  double t1788;
  double t1790;
  double t1796;
  double t186;
  double t1882;
  double t1820;
  double t2163;
  double t2179;
  double t2160;
  double t2224;
  double t2228;
  double t2241;
  double t2178;
  double t2184;
  double t2218;
  double t2245;
  double t2134;
  double t2286;
  double t2289;
  double t2291;
  double t2223;
  double t2260;
  double t2280;
  double t2292;
  double t2132;
  double t2317;
  double t2323;
  double t2329;
  double t2284;
  double t2295;
  double t2302;
  double t2338;
  double t2129;
  double t2369;
  double t2371;
  double t2383;
  double t2308;
  double t2344;
  double t2346;
  double t2384;
  double t1179;
  double t2470;
  double t2476;
  double t2494;
  double t2450;
  double t2452;
  double t2454;
  double t2548;
  double t2553;
  double t2561;
  double t2461;
  double t2496;
  double t2509;
  double t2608;
  double t2623;
  double t2632;
  double t2518;
  double t2575;
  double t2596;
  double t2660;
  double t2662;
  double t2668;
  double t2602;
  double t2637;
  double t2648;
  double t1851;
  double t1860;
  double t1866;
  double t2756;
  double t2779;
  double t2788;
  double t2732;
  double t2733;
  double t2734;
  double t2832;
  double t2834;
  double t2838;
  double t2744;
  double t2790;
  double t2827;
  double t2861;
  double t2863;
  double t2874;
  double t2828;
  double t2841;
  double t2844;
  double t1888;
  double t1892;
  double t1901;
  double t2352;
  double t2386;
  double t2396;
  double t2401;
  double t2403;
  double t2404;
  double t2408;
  double t2442;
  double t2446;
  double t1924;
  double t1930;
  double t1933;
  double t2849;
  double t2895;
  double t2903;
  double t2914;
  double t2916;
  double t2925;
  double t2952;
  double t2961;
  double t2964;
  double t1939;
  double t1943;
  double t1964;
  double t2653;
  double t2670;
  double t2682;
  double t2685;
  double t2686;
  double t2693;
  double t2697;
  double t2701;
  double t2710;
  double t1987;
  double t1995;
  double t2004;
  double t2036;
  double t2039;
  double t2057;
  double t2079;
  double t2097;
  double t2099;
  double t2113;
  double t3032;
  double t3047;
  double t3050;
  double t3094;
  double t3100;
  double t3118;
  double t3063;
  double t3067;
  double t3076;
  double t3300;
  double t3306;
  double t3385;
  double t3396;
  double t3467;
  double t3469;
  double t3502;
  double t3507;
  double t3549;
  double t3551;
  double t3240;
  double t3257;
  double t3275;
  double t3278;
  double t3284;
  double t3310;
  double t3337;
  double t3342;
  double t3351;
  double t3368;
  double t3375;
  double t3400;
  double t3420;
  double t3421;
  double t3436;
  double t3437;
  double t3438;
  double t3473;
  double t3479;
  double t3481;
  double t3486;
  double t3491;
  double t3493;
  double t3510;
  double t3513;
  double t3520;
  double t3531;
  double t3540;
  double t3542;
  double t3553;
  double t3565;
  double t3568;
  double t3597;
  double t3598;
  double t3599;
  double t3903;
  double t3906;
  double t3969;
  double t3970;
  double t4025;
  double t4034;
  double t4104;
  double t4109;
  double t4167;
  double t4171;
  double t3882;
  double t3889;
  double t3971;
  double t3972;
  double t3975;
  double t3912;
  double t3934;
  double t3936;
  double t4009;
  double t4012;
  double t4017;
  double t4042;
  double t4051;
  double t4052;
  double t4061;
  double t4071;
  double t4075;
  double t4128;
  double t4134;
  double t4140;
  double t4148;
  double t4153;
  double t4154;
  double t4174;
  double t4175;
  double t4185;
  double t4188;
  double t4192;
  double t4196;
  double t3845;
  double t3847;
  double t3873;
  double t3876;
  double t3890;
  double t3892;
  double t3893;
  double t3898;
  double t3949;
  double t3956;
  double t3960;
  double t3964;
  double t3967;
  double t3986;
  double t4021;
  double t4060;
  double t4100;
  double t4143;
  double t4156;
  double t4187;
  double t4198;
  double t4212;
  double t4215;
  double t4228;
  double t4234;
  double t4239;
  double t4263;
  double t4266;
  double t4267;
  double t4279;
  double t4285;
  double t4289;
  double t4291;
  double t4292;
  double t4300;
  double t4310;
  double t4314;
  double t4316;
  double t3228;
  double t3238;
  double t3299;
  double t3346;
  double t3377;
  double t3432;
  double t3460;
  double t3485;
  double t3494;
  double t3529;
  double t3545;
  double t3591;
  double t3602;
  double t3604;
  double t3613;
  double t3618;
  double t3769;
  double t3771;
  double t3775;
  double t3777;
  double t3782;
  double t3785;
  double t3787;
  double t3794;
  double t3797;
  double t3810;
  double t3814;
  double t3815;
  double t3822;
  double t3826;
  double t3630;
  double t3631;
  double t3641;
  double t3650;
  double t3662;
  double t3668;
  double t3677;
  double t3702;
  double t3706;
  double t3729;
  double t3734;
  double t3735;
  double t3736;
  double t3739;
  double t3750;
  double t3755;
  double t3759;
  double t3763;
  double t4350;
  double t4354;
  double t4358;
  double t4359;
  double t4362;
  double t4369;
  double t4372;
  double t4375;
  double t4378;
  double t4389;
  double t4392;
  double t4395;
  double t4398;
  double t4399;
  double t4407;
  double t4410;
  double t4230;
  double t4318;
  double t4319;
  double t4445;
  double t4446;
  double t4449;
  double t4333;
  double t4334;
  double t4344;
  t303 = Cos(var1[1]);
  t347 = Cos(var1[3]);
  t315 = Cos(var1[2]);
  t323 = Sin(var1[3]);
  t359 = Sin(var1[2]);
  t419 = Cos(var1[4]);
  t344 = -1.*t303*t315*t323;
  t390 = -1.*t347*t303*t359;
  t411 = t344 + t390;
  t295 = Sin(var1[4]);
  t420 = t347*t303*t315;
  t434 = -1.*t303*t323*t359;
  t439 = t420 + t434;
  t577 = Cos(var1[5]);
  t417 = t295*t411;
  t452 = t419*t439;
  t509 = t417 + t452;
  t265 = Sin(var1[5]);
  t586 = t419*t411;
  t588 = -1.*t295*t439;
  t643 = t586 + t588;
  t681 = Cos(var1[6]);
  t538 = -1.*t265*t509;
  t645 = t577*t643;
  t657 = t538 + t645;
  t198 = Sin(var1[6]);
  t719 = t577*t509;
  t724 = t265*t643;
  t739 = t719 + t724;
  t805 = Sin(var1[0]);
  t791 = Cos(var1[0]);
  t794 = Sin(var1[1]);
  t799 = t791*t315*t794;
  t814 = -1.*t805*t359;
  t817 = t799 + t814;
  t826 = -1.*t315*t805;
  t838 = -1.*t791*t794*t359;
  t842 = t826 + t838;
  t819 = -1.*t323*t817;
  t844 = t347*t842;
  t849 = t819 + t844;
  t877 = t347*t817;
  t897 = t323*t842;
  t900 = t877 + t897;
  t871 = t295*t849;
  t910 = t419*t900;
  t917 = t871 + t910;
  t923 = t419*t849;
  t928 = -1.*t295*t900;
  t944 = t923 + t928;
  t919 = -1.*t265*t917;
  t949 = t577*t944;
  t952 = t919 + t949;
  t966 = t577*t917;
  t976 = t265*t944;
  t984 = t966 + t976;
  t659 = t198*t657;
  t761 = t681*t739;
  t762 = t659 + t761;
  t770 = t681*t657;
  t771 = -1.*t198*t739;
  t780 = t770 + t771;
  t959 = t198*t952;
  t985 = t681*t984;
  t987 = t959 + t985;
  t1000 = t681*t952;
  t1030 = -1.*t198*t984;
  t1036 = t1000 + t1030;
  t1203 = t315*t805*t794;
  t1218 = t791*t359;
  t1242 = t1203 + t1218;
  t1271 = t791*t315;
  t1279 = -1.*t805*t794*t359;
  t1296 = t1271 + t1279;
  t1249 = -1.*t323*t1242;
  t1307 = t347*t1296;
  t1322 = t1249 + t1307;
  t1357 = t347*t1242;
  t1376 = t323*t1296;
  t1379 = t1357 + t1376;
  t1348 = t295*t1322;
  t1380 = t419*t1379;
  t1387 = t1348 + t1380;
  t1406 = t419*t1322;
  t1434 = -1.*t295*t1379;
  t1451 = t1406 + t1434;
  t1404 = -1.*t265*t1387;
  t1468 = t577*t1451;
  t1500 = t1404 + t1468;
  t1555 = t577*t1387;
  t1561 = t265*t1451;
  t1573 = t1555 + t1561;
  t1113 = -0.766044*t762;
  t1114 = 0.642788*t780;
  t1116 = t1113 + t1114;
  t991 = -0.766044*t987;
  t1044 = 0.642788*t1036;
  t1063 = t991 + t1044;
  t1503 = t198*t1500;
  t1579 = t681*t1573;
  t1599 = t1503 + t1579;
  t1616 = t681*t1500;
  t1633 = -1.*t198*t1573;
  t1635 = t1616 + t1633;
  t765 = 0.642788*t762;
  t785 = 0.766044*t780;
  t790 = t765 + t785;
  t1123 = 0.642788*t987;
  t1129 = 0.766044*t1036;
  t1144 = t1123 + t1129;
  t1067 = t790*t1063;
  t1157 = -1.*t1116*t1144;
  t180 = Cos(var1[8]);
  t1725 = -0.766044*t1599;
  t1737 = 0.642788*t1635;
  t1757 = t1725 + t1737;
  t1605 = 0.642788*t1599;
  t1665 = 0.766044*t1635;
  t1684 = t1605 + t1665;
  t1692 = t791*t303*t1116;
  t1696 = t794*t1063;
  t1705 = t1692 + t1696;
  t1722 = -1.*t1684*t1705;
  t1766 = t791*t303*t790;
  t1769 = t794*t1144;
  t1776 = t1766 + t1769;
  t1778 = t1757*t1776;
  t1787 = t1067 + t1157;
  t1788 = -1.*t303*t805*t1787;
  t1790 = 0. + t1722 + t1778 + t1788;
  t1796 = 1/t1790;
  t186 = Sin(var1[7]);
  t1882 = Sin(var1[8]);
  t1820 = Cos(var1[7]);
  t2163 = Cos(var1[9]);
  t2179 = Sin(var1[9]);
  t2160 = Cos(var1[10]);
  t2224 = t1820*t2163;
  t2228 = -1.*t186*t1882*t2179;
  t2241 = t2224 + t2228;
  t2178 = t2163*t186*t1882;
  t2184 = t1820*t2179;
  t2218 = t2178 + t2184;
  t2245 = Sin(var1[10]);
  t2134 = Cos(var1[11]);
  t2286 = t2160*t2241;
  t2289 = -1.*t2218*t2245;
  t2291 = t2286 + t2289;
  t2223 = t2160*t2218;
  t2260 = t2241*t2245;
  t2280 = t2223 + t2260;
  t2292 = Sin(var1[11]);
  t2132 = Cos(var1[12]);
  t2317 = t2134*t2291;
  t2323 = -1.*t2280*t2292;
  t2329 = t2317 + t2323;
  t2284 = t2134*t2280;
  t2295 = t2291*t2292;
  t2302 = t2284 + t2295;
  t2338 = Sin(var1[12]);
  t2129 = Cos(var1[13]);
  t2369 = t2132*t2329;
  t2371 = -1.*t2302*t2338;
  t2383 = t2369 + t2371;
  t2308 = t2132*t2302;
  t2344 = t2329*t2338;
  t2346 = t2308 + t2344;
  t2384 = Sin(var1[13]);
  t1179 = 0. + t1067 + t1157;
  t2470 = -1.*t2163*t186;
  t2476 = -1.*t1820*t1882*t2179;
  t2494 = t2470 + t2476;
  t2450 = t1820*t2163*t1882;
  t2452 = -1.*t186*t2179;
  t2454 = t2450 + t2452;
  t2548 = t2160*t2494;
  t2553 = -1.*t2454*t2245;
  t2561 = t2548 + t2553;
  t2461 = t2160*t2454;
  t2496 = t2494*t2245;
  t2509 = t2461 + t2496;
  t2608 = t2134*t2561;
  t2623 = -1.*t2509*t2292;
  t2632 = t2608 + t2623;
  t2518 = t2134*t2509;
  t2575 = t2561*t2292;
  t2596 = t2518 + t2575;
  t2660 = t2132*t2632;
  t2662 = -1.*t2596*t2338;
  t2668 = t2660 + t2662;
  t2602 = t2132*t2596;
  t2637 = t2632*t2338;
  t2648 = t2602 + t2637;
  t1851 = -1.*t790*t1757;
  t1860 = t1116*t1684;
  t1866 = 0. + t1851 + t1860;
  t2756 = -1.*t180*t2160*t2179;
  t2779 = -1.*t180*t2163*t2245;
  t2788 = t2756 + t2779;
  t2732 = t180*t2163*t2160;
  t2733 = -1.*t180*t2179*t2245;
  t2734 = t2732 + t2733;
  t2832 = t2134*t2788;
  t2834 = -1.*t2734*t2292;
  t2838 = t2832 + t2834;
  t2744 = t2134*t2734;
  t2790 = t2788*t2292;
  t2827 = t2744 + t2790;
  t2861 = t2132*t2838;
  t2863 = -1.*t2827*t2338;
  t2874 = t2861 + t2863;
  t2828 = t2132*t2827;
  t2841 = t2838*t2338;
  t2844 = t2828 + t2841;
  t1888 = t1144*t1757;
  t1892 = -1.*t1063*t1684;
  t1901 = 0. + t1888 + t1892;
  t2352 = t2129*t2346;
  t2386 = t2383*t2384;
  t2396 = t2352 + t2386;
  t2401 = 0.642788*t2396;
  t2403 = t2129*t2383;
  t2404 = -1.*t2346*t2384;
  t2408 = t2403 + t2404;
  t2442 = 0.766044*t2408;
  t2446 = t2401 + t2442;
  t1924 = -1.*t791*t303*t1116;
  t1930 = -1.*t794*t1063;
  t1933 = 0. + t1924 + t1930;
  t2849 = t2129*t2844;
  t2895 = t2874*t2384;
  t2903 = t2849 + t2895;
  t2914 = 0.642788*t2903;
  t2916 = t2129*t2874;
  t2925 = -1.*t2844*t2384;
  t2952 = t2916 + t2925;
  t2961 = 0.766044*t2952;
  t2964 = t2914 + t2961;
  t1939 = -1.*t303*t805*t1063;
  t1943 = t791*t303*t1757;
  t1964 = 0. + t1939 + t1943;
  t2653 = t2129*t2648;
  t2670 = t2668*t2384;
  t2682 = t2653 + t2670;
  t2685 = 0.642788*t2682;
  t2686 = t2129*t2668;
  t2693 = -1.*t2648*t2384;
  t2697 = t2686 + t2693;
  t2701 = 0.766044*t2697;
  t2710 = t2685 + t2701;
  t1987 = t303*t805*t1116;
  t1995 = t794*t1757;
  t2004 = 0. + t1987 + t1995;
  t2036 = 0. + t1766 + t1769;
  t2039 = t303*t805*t1144;
  t2057 = -1.*t791*t303*t1684;
  t2079 = 0. + t2039 + t2057;
  t2097 = -1.*t303*t805*t790;
  t2099 = -1.*t794*t1684;
  t2113 = 0. + t2097 + t2099;
  t3032 = -0.766044*t2396;
  t3047 = 0.642788*t2408;
  t3050 = t3032 + t3047;
  t3094 = -0.766044*t2903;
  t3100 = 0.642788*t2952;
  t3118 = t3094 + t3100;
  t3063 = -0.766044*t2682;
  t3067 = 0.642788*t2697;
  t3076 = t3063 + t3067;
  t3300 = -1.*t2163;
  t3306 = 1. + t3300;
  t3385 = -1.*t2160;
  t3396 = 1. + t3385;
  t3467 = -1.*t2134;
  t3469 = 1. + t3467;
  t3502 = -1.*t2132;
  t3507 = 1. + t3502;
  t3549 = -1.*t2129;
  t3551 = 1. + t3549;
  t3240 = -1.*t180;
  t3257 = 1. + t3240;
  t3275 = -0.135*t3257;
  t3278 = 0.049*t1882;
  t3284 = 0. + t3275 + t3278;
  t3310 = -0.049*t3306;
  t3337 = -0.09*t2179;
  t3342 = 0. + t3310 + t3337;
  t3351 = -0.09*t3306;
  t3368 = 0.049*t2179;
  t3375 = 0. + t3351 + t3368;
  t3400 = -0.049*t3396;
  t3420 = -0.21*t2245;
  t3421 = 0. + t3400 + t3420;
  t3436 = -0.21*t3396;
  t3437 = 0.049*t2245;
  t3438 = 0. + t3436 + t3437;
  t3473 = -0.0016*t3469;
  t3479 = -0.2707*t2292;
  t3481 = 0. + t3473 + t3479;
  t3486 = -0.2707*t3469;
  t3491 = 0.0016*t2292;
  t3493 = 0. + t3486 + t3491;
  t3510 = 0.0184*t3507;
  t3513 = -0.7055*t2338;
  t3520 = 0. + t3510 + t3513;
  t3531 = -0.7055*t3507;
  t3540 = -0.0184*t2338;
  t3542 = 0. + t3531 + t3540;
  t3553 = -0.0216*t3551;
  t3565 = -1.1135*t2384;
  t3568 = 0. + t3553 + t3565;
  t3597 = -1.1135*t3551;
  t3598 = 0.0216*t2384;
  t3599 = 0. + t3597 + t3598;
  t3903 = -1.*t315;
  t3906 = 1. + t3903;
  t3969 = -1.*t347;
  t3970 = 1. + t3969;
  t4025 = -1.*t419;
  t4034 = 1. + t4025;
  t4104 = -1.*t577;
  t4109 = 1. + t4104;
  t4167 = -1.*t681;
  t4171 = 1. + t4167;
  t3882 = -1.*t303;
  t3889 = 1. + t3882;
  t3971 = -0.049*t3970;
  t3972 = -0.21*t323;
  t3975 = 0. + t3971 + t3972;
  t3912 = -0.049*t3906;
  t3934 = -0.09*t359;
  t3936 = 0. + t3912 + t3934;
  t4009 = -0.21*t3970;
  t4012 = 0.049*t323;
  t4017 = 0. + t4009 + t4012;
  t4042 = -0.2707*t4034;
  t4051 = 0.0016*t295;
  t4052 = 0. + t4042 + t4051;
  t4061 = -0.0016*t4034;
  t4071 = -0.2707*t295;
  t4075 = 0. + t4061 + t4071;
  t4128 = 0.0184*t4109;
  t4134 = -0.7055*t265;
  t4140 = 0. + t4128 + t4134;
  t4148 = -0.7055*t4109;
  t4153 = -0.0184*t265;
  t4154 = 0. + t4148 + t4153;
  t4174 = -1.1135*t4171;
  t4175 = 0.0216*t198;
  t4185 = 0. + t4174 + t4175;
  t4188 = -0.0216*t4171;
  t4192 = -1.1135*t198;
  t4196 = 0. + t4188 + t4192;
  t3845 = -1.*t791;
  t3847 = 1. + t3845;
  t3873 = 0.135*t3847;
  t3876 = 0.1305*t791*t303;
  t3890 = 0.135*t3889;
  t3892 = 0.049*t794;
  t3893 = 0. + t3890 + t3892;
  t3898 = t791*t3893;
  t3949 = t791*t794*t3936;
  t3956 = -0.09*t3906;
  t3960 = 0.049*t359;
  t3964 = 0. + t3956 + t3960;
  t3967 = -1.*t805*t3964;
  t3986 = t3975*t817;
  t4021 = t4017*t842;
  t4060 = t4052*t849;
  t4100 = t4075*t900;
  t4143 = t4140*t917;
  t4156 = t4154*t944;
  t4187 = t4185*t952;
  t4198 = t4196*t984;
  t4212 = -0.027251*t987;
  t4215 = -1.200144*t1036;
  t4228 = 0. + t3873 + t3876 + t3898 + t3949 + t3967 + t3986 + t4021 + t4060 + t4100 + t4143 + t4156 + t4187 + t4198 + t4212 + t4215;
  t4234 = -0.049*t3889;
  t4239 = t303*t315*t3975;
  t4263 = 0.004500000000000004*t794;
  t4266 = t303*t3936;
  t4267 = -1.*t303*t4017*t359;
  t4279 = t4052*t411;
  t4285 = t4075*t439;
  t4289 = t4140*t509;
  t4291 = t4154*t643;
  t4292 = t4185*t657;
  t4300 = t4196*t739;
  t4310 = -0.027251*t762;
  t4314 = -1.200144*t780;
  t4316 = 0. + t4234 + t4239 + t4263 + t4266 + t4267 + t4279 + t4285 + t4289 + t4291 + t4292 + t4300 + t4310 + t4314;
  t3228 = 0.135*t186;
  t3238 = -0.1305*t180*t186;
  t3299 = t186*t3284;
  t3346 = t186*t1882*t3342;
  t3377 = t1820*t3375;
  t3432 = t2218*t3421;
  t3460 = t2241*t3438;
  t3485 = t2280*t3481;
  t3494 = t2291*t3493;
  t3529 = t2302*t3520;
  t3545 = t2329*t3542;
  t3591 = t2346*t3568;
  t3602 = t2383*t3599;
  t3604 = -0.027251*t2396;
  t3613 = -1.200144*t2408;
  t3618 = 0. + t3228 + t3238 + t3299 + t3346 + t3377 + t3432 + t3460 + t3485 + t3494 + t3529 + t3545 + t3591 + t3602 + t3604 + t3613;
  t3769 = -0.049*t3257;
  t3771 = -0.004500000000000004*t1882;
  t3775 = t180*t3342;
  t3777 = t180*t2163*t3421;
  t3782 = -1.*t180*t2179*t3438;
  t3785 = t2734*t3481;
  t3787 = t2788*t3493;
  t3794 = t2827*t3520;
  t3797 = t2838*t3542;
  t3810 = t2844*t3568;
  t3814 = t2874*t3599;
  t3815 = -0.027251*t2903;
  t3822 = -1.200144*t2952;
  t3826 = 0. + t3769 + t3771 + t3775 + t3777 + t3782 + t3785 + t3787 + t3794 + t3797 + t3810 + t3814 + t3815 + t3822;
  t3630 = -1.*t1820;
  t3631 = 1. + t3630;
  t3641 = -0.135*t3631;
  t3650 = -0.1305*t1820*t180;
  t3662 = t1820*t3284;
  t3668 = t1820*t1882*t3342;
  t3677 = -1.*t186*t3375;
  t3702 = t2454*t3421;
  t3706 = t2494*t3438;
  t3729 = t2509*t3481;
  t3734 = t2561*t3493;
  t3735 = t2596*t3520;
  t3736 = t2632*t3542;
  t3739 = t2648*t3568;
  t3750 = t2668*t3599;
  t3755 = -0.027251*t2682;
  t3759 = -1.200144*t2697;
  t3763 = 0. + t3641 + t3650 + t3662 + t3668 + t3677 + t3702 + t3706 + t3729 + t3734 + t3735 + t3736 + t3739 + t3750 + t3755 + t3759;
  t4350 = -0.135*t805;
  t4354 = 0.1305*t303*t805;
  t4358 = t805*t3893;
  t4359 = t805*t794*t3936;
  t4362 = t791*t3964;
  t4369 = t3975*t1242;
  t4372 = t4017*t1296;
  t4375 = t4052*t1322;
  t4378 = t4075*t1379;
  t4389 = t4140*t1387;
  t4392 = t4154*t1451;
  t4395 = t4185*t1500;
  t4398 = t4196*t1573;
  t4399 = -0.027251*t1599;
  t4407 = -1.200144*t1635;
  t4410 = 0. + t4350 + t4354 + t4358 + t4359 + t4362 + t4369 + t4372 + t4375 + t4378 + t4389 + t4392 + t4395 + t4398 + t4399 + t4407;
  t4230 = t1116*t4228;
  t4318 = -1.*t4316*t1063;
  t4319 = t4230 + t4318;
  t4445 = t791*t303*t4316;
  t4446 = t794*t4228;
  t4449 = t4445 + t4446;
  t4333 = t790*t4228;
  t4334 = -1.*t4316*t1144;
  t4344 = t4333 + t4334;
  p_output1[0]=0. - 1.*t1179*t1796*t180*t186 - 1.*t1796*t180*t1820*t1866 + t1796*t1882*t1901;
  p_output1[1]=0. - 1.*t1796*t180*t186*t1933 + t1796*t1882*t1964 - 1.*t1796*t180*t1820*t2004;
  p_output1[2]=0. - 1.*t1796*t180*t186*t2036 + t1796*t1882*t2079 - 1.*t1796*t180*t1820*t2113;
  p_output1[3]=0.;
  p_output1[4]=0. + t1179*t1796*t2446 + t1796*t1866*t2710 + t1796*t1901*t2964;
  p_output1[5]=0. + t1796*t1933*t2446 + t1796*t2004*t2710 + t1796*t1964*t2964;
  p_output1[6]=0. + t1796*t2036*t2446 + t1796*t2113*t2710 + t1796*t2079*t2964;
  p_output1[7]=0.;
  p_output1[8]=0. + t1179*t1796*t3050 + t1796*t1866*t3076 + t1796*t1901*t3118;
  p_output1[9]=0. + t1796*t1933*t3050 + t1796*t2004*t3076 + t1796*t1964*t3118;
  p_output1[10]=0. + t1796*t2036*t3050 + t1796*t2113*t3076 + t1796*t2079*t3118;
  p_output1[11]=0.;
  p_output1[12]=t1179*t1796*t3618 + t1796*t1866*t3763 + t1796*t1901*t3826 + t1796*(-1.*t1684*t4319 + t1757*t4344 - 1.*t1787*t4410);
  p_output1[13]=t1796*t1933*t3618 + t1796*t2004*t3763 + t1796*t1964*t3826 + t1796*(t1705*t4410 - 1.*t1757*t4449 - 1.*t303*t4319*t805);
  p_output1[14]=t1796*t2036*t3618 + t1796*t2113*t3763 + t1796*t2079*t3826 + t1796*(-1.*t1776*t4410 + t1684*t4449 + t303*t4344*t805);
  p_output1[15]=0. + (t1722 + t1778 + t1788)*t1796;
}



void H_LeftToeBack_to_RightToeBack_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
