/*
 * Automatically Generated from Mathematica.
 * Wed 23 Oct 2019 10:26:25 GMT-07:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RightToeBack_to_LeftToeBack_src.h"

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
  double t201;
  double t310;
  double t348;
  double t280;
  double t370;
  double t190;
  double t461;
  double t465;
  double t478;
  double t343;
  double t373;
  double t402;
  double t480;
  double t188;
  double t519;
  double t529;
  double t536;
  double t431;
  double t493;
  double t508;
  double t552;
  double t170;
  double t583;
  double t613;
  double t615;
  double t513;
  double t562;
  double t568;
  double t619;
  double t749;
  double t695;
  double t732;
  double t796;
  double t808;
  double t847;
  double t747;
  double t764;
  double t773;
  double t872;
  double t881;
  double t926;
  double t775;
  double t852;
  double t853;
  double t967;
  double t975;
  double t981;
  double t862;
  double t935;
  double t943;
  double t1031;
  double t1033;
  double t1060;
  double t956;
  double t1003;
  double t1009;
  double t575;
  double t627;
  double t630;
  double t661;
  double t662;
  double t668;
  double t1026;
  double t1077;
  double t1092;
  double t1100;
  double t1103;
  double t1110;
  double t1268;
  double t1275;
  double t1281;
  double t1201;
  double t1248;
  double t1253;
  double t1330;
  double t1345;
  double t1349;
  double t1311;
  double t1314;
  double t1318;
  double t1397;
  double t1421;
  double t1431;
  double t1328;
  double t1378;
  double t1392;
  double t1496;
  double t1498;
  double t1511;
  double t1395;
  double t1463;
  double t1471;
  double t1546;
  double t1590;
  double t1594;
  double t1490;
  double t1512;
  double t1513;
  double t1093;
  double t1121;
  double t1126;
  double t650;
  double t677;
  double t678;
  double t1540;
  double t1612;
  double t1640;
  double t1666;
  double t1690;
  double t1708;
  double t1663;
  double t1709;
  double t1740;
  double t1868;
  double t1875;
  double t1890;
  double t62;
  double t1931;
  double t1938;
  double t1287;
  double t1741;
  double t1805;
  double t1837;
  double t1862;
  double t1910;
  double t1917;
  double t1928;
  double t1959;
  double t1978;
  double t1979;
  double t1981;
  double t10;
  double t2041;
  double t2091;
  double t2060;
  double t2067;
  double t2082;
  double t2347;
  double t2337;
  double t2340;
  double t2351;
  double t2396;
  double t2343;
  double t2361;
  double t2391;
  double t2335;
  double t2400;
  double t2405;
  double t2424;
  double t2451;
  double t2393;
  double t2432;
  double t2444;
  double t2331;
  double t2455;
  double t2459;
  double t2471;
  double t2499;
  double t2445;
  double t2475;
  double t2480;
  double t2313;
  double t2502;
  double t2504;
  double t2506;
  double t1135;
  double t1282;
  double t1283;
  double t2567;
  double t2568;
  double t2579;
  double t2581;
  double t2585;
  double t2589;
  double t2580;
  double t2591;
  double t2597;
  double t2603;
  double t2610;
  double t2628;
  double t2601;
  double t2631;
  double t2640;
  double t2671;
  double t2673;
  double t2689;
  double t2669;
  double t2691;
  double t2709;
  double t2748;
  double t2760;
  double t2761;
  double t2020;
  double t2882;
  double t2891;
  double t2894;
  double t2920;
  double t2928;
  double t2941;
  double t2913;
  double t2946;
  double t2967;
  double t2987;
  double t2989;
  double t2991;
  double t2985;
  double t2994;
  double t2995;
  double t3003;
  double t3006;
  double t3017;
  double t2997;
  double t3018;
  double t3022;
  double t3028;
  double t3029;
  double t3033;
  double t2243;
  double t2246;
  double t2249;
  double t2485;
  double t2508;
  double t2510;
  double t2517;
  double t2527;
  double t2538;
  double t2542;
  double t2549;
  double t2555;
  double t2170;
  double t2177;
  double t2193;
  double t2713;
  double t2764;
  double t2789;
  double t2808;
  double t2820;
  double t2821;
  double t2824;
  double t2831;
  double t2840;
  double t2200;
  double t2208;
  double t2214;
  double t3025;
  double t3034;
  double t3052;
  double t3061;
  double t3065;
  double t3069;
  double t3072;
  double t3079;
  double t3081;
  double t2299;
  double t2305;
  double t2306;
  double t2261;
  double t2268;
  double t2275;
  double t2288;
  double t3134;
  double t3137;
  double t3153;
  double t3170;
  double t3171;
  double t3174;
  double t3189;
  double t3197;
  double t3198;
  double t3388;
  double t3397;
  double t3478;
  double t3482;
  double t3535;
  double t3538;
  double t3621;
  double t3622;
  double t3688;
  double t3691;
  double t3362;
  double t3365;
  double t3424;
  double t3428;
  double t3442;
  double t3491;
  double t3494;
  double t3495;
  double t3509;
  double t3511;
  double t3523;
  double t3543;
  double t3550;
  double t3574;
  double t3595;
  double t3609;
  double t3610;
  double t3628;
  double t3648;
  double t3649;
  double t3667;
  double t3673;
  double t3684;
  double t3707;
  double t3708;
  double t3711;
  double t3743;
  double t3748;
  double t3767;
  double t3341;
  double t3351;
  double t3356;
  double t3359;
  double t3367;
  double t3369;
  double t3371;
  double t3380;
  double t3445;
  double t3462;
  double t3465;
  double t3476;
  double t3477;
  double t3506;
  double t3534;
  double t3588;
  double t3612;
  double t3665;
  double t3686;
  double t3724;
  double t3781;
  double t3784;
  double t3788;
  double t3791;
  double t3804;
  double t3819;
  double t3821;
  double t3832;
  double t3843;
  double t3858;
  double t3864;
  double t3870;
  double t3872;
  double t3891;
  double t3899;
  double t3901;
  double t3909;
  double t3910;
  double t4136;
  double t4145;
  double t4227;
  double t4229;
  double t4275;
  double t4288;
  double t4325;
  double t4328;
  double t4117;
  double t4120;
  double t4189;
  double t4195;
  double t4197;
  double t4199;
  double t4201;
  double t4150;
  double t4160;
  double t4163;
  double t4204;
  double t4209;
  double t4211;
  double t4231;
  double t4232;
  double t4235;
  double t4249;
  double t4256;
  double t4258;
  double t4291;
  double t4297;
  double t4303;
  double t4311;
  double t4317;
  double t4320;
  double t4335;
  double t4337;
  double t4345;
  double t4354;
  double t4370;
  double t4371;
  double t4423;
  double t4424;
  double t4437;
  double t4444;
  double t4448;
  double t4450;
  double t3986;
  double t3988;
  double t3992;
  double t4014;
  double t4023;
  double t4027;
  double t4032;
  double t4035;
  double t4038;
  double t4053;
  double t4055;
  double t4056;
  double t4069;
  double t4072;
  double t4080;
  double t4086;
  double t3801;
  double t3923;
  double t3931;
  double t4127;
  double t4177;
  double t4183;
  double t4203;
  double t4213;
  double t4237;
  double t4264;
  double t4309;
  double t4323;
  double t4346;
  double t4374;
  double t4384;
  double t4385;
  double t4397;
  double t4404;
  double t4414;
  double t4418;
  double t4421;
  double t4440;
  double t4443;
  double t4459;
  double t4468;
  double t4471;
  double t4476;
  double t4477;
  double t4480;
  double t4481;
  double t4493;
  double t4494;
  double t4501;
  double t4504;
  double t4507;
  double t4511;
  double t4513;
  double t4514;
  double t4515;
  double t4524;
  double t4526;
  double t4527;
  double t4528;
  double t4530;
  double t4532;
  double t4533;
  double t4537;
  double t4539;
  double t4540;
  double t4543;
  double t4547;
  double t4563;
  double t4566;
  double t4569;
  double t3955;
  double t3961;
  double t3974;
  t201 = Cos(var1[8]);
  t310 = Cos(var1[10]);
  t348 = Sin(var1[9]);
  t280 = Cos(var1[9]);
  t370 = Sin(var1[10]);
  t190 = Cos(var1[11]);
  t461 = -1.*t201*t310*t348;
  t465 = -1.*t201*t280*t370;
  t478 = t461 + t465;
  t343 = t201*t280*t310;
  t373 = -1.*t201*t348*t370;
  t402 = t343 + t373;
  t480 = Sin(var1[11]);
  t188 = Cos(var1[12]);
  t519 = t190*t478;
  t529 = -1.*t402*t480;
  t536 = t519 + t529;
  t431 = t190*t402;
  t493 = t478*t480;
  t508 = t431 + t493;
  t552 = Sin(var1[12]);
  t170 = Cos(var1[13]);
  t583 = t188*t536;
  t613 = -1.*t508*t552;
  t615 = t583 + t613;
  t513 = t188*t508;
  t562 = t536*t552;
  t568 = t513 + t562;
  t619 = Sin(var1[13]);
  t749 = Cos(var1[7]);
  t695 = Sin(var1[7]);
  t732 = Sin(var1[8]);
  t796 = t749*t280;
  t808 = -1.*t695*t732*t348;
  t847 = t796 + t808;
  t747 = t280*t695*t732;
  t764 = t749*t348;
  t773 = t747 + t764;
  t872 = t310*t847;
  t881 = -1.*t773*t370;
  t926 = t872 + t881;
  t775 = t310*t773;
  t852 = t847*t370;
  t853 = t775 + t852;
  t967 = t190*t926;
  t975 = -1.*t853*t480;
  t981 = t967 + t975;
  t862 = t190*t853;
  t935 = t926*t480;
  t943 = t862 + t935;
  t1031 = t188*t981;
  t1033 = -1.*t943*t552;
  t1060 = t1031 + t1033;
  t956 = t188*t943;
  t1003 = t981*t552;
  t1009 = t956 + t1003;
  t575 = t170*t568;
  t627 = t615*t619;
  t630 = t575 + t627;
  t661 = t170*t615;
  t662 = -1.*t568*t619;
  t668 = t661 + t662;
  t1026 = t170*t1009;
  t1077 = t1060*t619;
  t1092 = t1026 + t1077;
  t1100 = t170*t1060;
  t1103 = -1.*t1009*t619;
  t1110 = t1100 + t1103;
  t1268 = 0.642788*t1092;
  t1275 = 0.766044*t1110;
  t1281 = t1268 + t1275;
  t1201 = -0.766044*t630;
  t1248 = 0.642788*t668;
  t1253 = t1201 + t1248;
  t1330 = -1.*t280*t695;
  t1345 = -1.*t749*t732*t348;
  t1349 = t1330 + t1345;
  t1311 = t749*t280*t732;
  t1314 = -1.*t695*t348;
  t1318 = t1311 + t1314;
  t1397 = t310*t1349;
  t1421 = -1.*t1318*t370;
  t1431 = t1397 + t1421;
  t1328 = t310*t1318;
  t1378 = t1349*t370;
  t1392 = t1328 + t1378;
  t1496 = t190*t1431;
  t1498 = -1.*t1392*t480;
  t1511 = t1496 + t1498;
  t1395 = t190*t1392;
  t1463 = t1431*t480;
  t1471 = t1395 + t1463;
  t1546 = t188*t1511;
  t1590 = -1.*t1471*t552;
  t1594 = t1546 + t1590;
  t1490 = t188*t1471;
  t1512 = t1511*t552;
  t1513 = t1490 + t1512;
  t1093 = -0.766044*t1092;
  t1121 = 0.642788*t1110;
  t1126 = t1093 + t1121;
  t650 = 0.642788*t630;
  t677 = 0.766044*t668;
  t678 = t650 + t677;
  t1540 = t170*t1513;
  t1612 = t1594*t619;
  t1640 = t1540 + t1612;
  t1666 = t170*t1594;
  t1690 = -1.*t1513*t619;
  t1708 = t1666 + t1690;
  t1663 = -0.766044*t1640;
  t1709 = 0.642788*t1708;
  t1740 = t1663 + t1709;
  t1868 = 0.642788*t1640;
  t1875 = 0.766044*t1708;
  t1890 = t1868 + t1875;
  t62 = Cos(var1[1]);
  t1931 = t678*t1740;
  t1938 = -1.*t1253*t1890;
  t1287 = t749*t201*t1253;
  t1741 = t732*t1740;
  t1805 = t1287 + t1741;
  t1837 = -1.*t1281*t1805;
  t1862 = t749*t201*t678;
  t1910 = t732*t1890;
  t1917 = t1862 + t1910;
  t1928 = t1126*t1917;
  t1959 = t1931 + t1938;
  t1978 = -1.*t201*t695*t1959;
  t1979 = 0. + t1837 + t1928 + t1978;
  t1981 = 1/t1979;
  t10 = Cos(var1[0]);
  t2041 = Sin(var1[0]);
  t2091 = Sin(var1[1]);
  t2060 = t1890*t1126;
  t2067 = -1.*t1740*t1281;
  t2082 = 0. + t2060 + t2067;
  t2347 = Cos(var1[3]);
  t2337 = Cos(var1[2]);
  t2340 = Sin(var1[3]);
  t2351 = Sin(var1[2]);
  t2396 = Cos(var1[4]);
  t2343 = -1.*t62*t2337*t2340;
  t2361 = -1.*t2347*t62*t2351;
  t2391 = t2343 + t2361;
  t2335 = Sin(var1[4]);
  t2400 = t2347*t62*t2337;
  t2405 = -1.*t62*t2340*t2351;
  t2424 = t2400 + t2405;
  t2451 = Cos(var1[5]);
  t2393 = t2335*t2391;
  t2432 = t2396*t2424;
  t2444 = t2393 + t2432;
  t2331 = Sin(var1[5]);
  t2455 = t2396*t2391;
  t2459 = -1.*t2335*t2424;
  t2471 = t2455 + t2459;
  t2499 = Cos(var1[6]);
  t2445 = -1.*t2331*t2444;
  t2475 = t2451*t2471;
  t2480 = t2445 + t2475;
  t2313 = Sin(var1[6]);
  t2502 = t2451*t2444;
  t2504 = t2331*t2471;
  t2506 = t2502 + t2504;
  t1135 = -1.*t678*t1126;
  t1282 = t1253*t1281;
  t1283 = 0. + t1135 + t1282;
  t2567 = t10*t2337*t2091;
  t2568 = -1.*t2041*t2351;
  t2579 = t2567 + t2568;
  t2581 = -1.*t2337*t2041;
  t2585 = -1.*t10*t2091*t2351;
  t2589 = t2581 + t2585;
  t2580 = -1.*t2340*t2579;
  t2591 = t2347*t2589;
  t2597 = t2580 + t2591;
  t2603 = t2347*t2579;
  t2610 = t2340*t2589;
  t2628 = t2603 + t2610;
  t2601 = t2335*t2597;
  t2631 = t2396*t2628;
  t2640 = t2601 + t2631;
  t2671 = t2396*t2597;
  t2673 = -1.*t2335*t2628;
  t2689 = t2671 + t2673;
  t2669 = -1.*t2331*t2640;
  t2691 = t2451*t2689;
  t2709 = t2669 + t2691;
  t2748 = t2451*t2640;
  t2760 = t2331*t2689;
  t2761 = t2748 + t2760;
  t2020 = 0. + t1931 + t1938;
  t2882 = t2337*t2041*t2091;
  t2891 = t10*t2351;
  t2894 = t2882 + t2891;
  t2920 = t10*t2337;
  t2928 = -1.*t2041*t2091*t2351;
  t2941 = t2920 + t2928;
  t2913 = -1.*t2340*t2894;
  t2946 = t2347*t2941;
  t2967 = t2913 + t2946;
  t2987 = t2347*t2894;
  t2989 = t2340*t2941;
  t2991 = t2987 + t2989;
  t2985 = t2335*t2967;
  t2994 = t2396*t2991;
  t2995 = t2985 + t2994;
  t3003 = t2396*t2967;
  t3006 = -1.*t2335*t2991;
  t3017 = t3003 + t3006;
  t2997 = -1.*t2331*t2995;
  t3018 = t2451*t3017;
  t3022 = t2997 + t3018;
  t3028 = t2451*t2995;
  t3029 = t2331*t3017;
  t3033 = t3028 + t3029;
  t2243 = -1.*t201*t695*t1740;
  t2246 = t749*t201*t1126;
  t2249 = 0. + t2243 + t2246;
  t2485 = t2313*t2480;
  t2508 = t2499*t2506;
  t2510 = t2485 + t2508;
  t2517 = 0.642788*t2510;
  t2527 = t2499*t2480;
  t2538 = -1.*t2313*t2506;
  t2542 = t2527 + t2538;
  t2549 = 0.766044*t2542;
  t2555 = t2517 + t2549;
  t2170 = t201*t695*t1253;
  t2177 = t732*t1126;
  t2193 = 0. + t2170 + t2177;
  t2713 = t2313*t2709;
  t2764 = t2499*t2761;
  t2789 = t2713 + t2764;
  t2808 = 0.642788*t2789;
  t2820 = t2499*t2709;
  t2821 = -1.*t2313*t2761;
  t2824 = t2820 + t2821;
  t2831 = 0.766044*t2824;
  t2840 = t2808 + t2831;
  t2200 = -1.*t749*t201*t1253;
  t2208 = -1.*t732*t1740;
  t2214 = 0. + t2200 + t2208;
  t3025 = t2313*t3022;
  t3034 = t2499*t3033;
  t3052 = t3025 + t3034;
  t3061 = 0.642788*t3052;
  t3065 = t2499*t3022;
  t3069 = -1.*t2313*t3033;
  t3072 = t3065 + t3069;
  t3079 = 0.766044*t3072;
  t3081 = t3061 + t3079;
  t2299 = t201*t695*t1890;
  t2305 = -1.*t749*t201*t1281;
  t2306 = 0. + t2299 + t2305;
  t2261 = -1.*t201*t695*t678;
  t2268 = -1.*t732*t1281;
  t2275 = 0. + t2261 + t2268;
  t2288 = 0. + t1862 + t1910;
  t3134 = -0.766044*t2510;
  t3137 = 0.642788*t2542;
  t3153 = t3134 + t3137;
  t3170 = -0.766044*t2789;
  t3171 = 0.642788*t2824;
  t3174 = t3170 + t3171;
  t3189 = -0.766044*t3052;
  t3197 = 0.642788*t3072;
  t3198 = t3189 + t3197;
  t3388 = -1.*t280;
  t3397 = 1. + t3388;
  t3478 = -1.*t310;
  t3482 = 1. + t3478;
  t3535 = -1.*t190;
  t3538 = 1. + t3535;
  t3621 = -1.*t188;
  t3622 = 1. + t3621;
  t3688 = -1.*t170;
  t3691 = 1. + t3688;
  t3362 = -1.*t201;
  t3365 = 1. + t3362;
  t3424 = -0.049*t3397;
  t3428 = -0.09*t348;
  t3442 = 0. + t3424 + t3428;
  t3491 = -0.049*t3482;
  t3494 = -0.21*t370;
  t3495 = 0. + t3491 + t3494;
  t3509 = -0.21*t3482;
  t3511 = 0.049*t370;
  t3523 = 0. + t3509 + t3511;
  t3543 = -0.0016*t3538;
  t3550 = -0.2707*t480;
  t3574 = 0. + t3543 + t3550;
  t3595 = -0.2707*t3538;
  t3609 = 0.0016*t480;
  t3610 = 0. + t3595 + t3609;
  t3628 = 0.0184*t3622;
  t3648 = -0.7055*t552;
  t3649 = 0. + t3628 + t3648;
  t3667 = -0.7055*t3622;
  t3673 = -0.0184*t552;
  t3684 = 0. + t3667 + t3673;
  t3707 = -0.0216*t3691;
  t3708 = -1.1135*t619;
  t3711 = 0. + t3707 + t3708;
  t3743 = -1.1135*t3691;
  t3748 = 0.0216*t619;
  t3767 = 0. + t3743 + t3748;
  t3341 = -1.*t749;
  t3351 = 1. + t3341;
  t3356 = -0.135*t3351;
  t3359 = -0.1305*t749*t201;
  t3367 = -0.135*t3365;
  t3369 = 0.049*t732;
  t3371 = 0. + t3367 + t3369;
  t3380 = t749*t3371;
  t3445 = t749*t732*t3442;
  t3462 = -0.09*t3397;
  t3465 = 0.049*t348;
  t3476 = 0. + t3462 + t3465;
  t3477 = -1.*t695*t3476;
  t3506 = t1318*t3495;
  t3534 = t1349*t3523;
  t3588 = t1392*t3574;
  t3612 = t1431*t3610;
  t3665 = t1471*t3649;
  t3686 = t1511*t3684;
  t3724 = t1513*t3711;
  t3781 = t1594*t3767;
  t3784 = -0.027251*t1640;
  t3788 = -1.200144*t1708;
  t3791 = 0. + t3356 + t3359 + t3380 + t3445 + t3477 + t3506 + t3534 + t3588 + t3612 + t3665 + t3686 + t3724 + t3781 + t3784 + t3788;
  t3804 = -0.049*t3365;
  t3819 = -0.004500000000000004*t732;
  t3821 = t201*t3442;
  t3832 = t201*t280*t3495;
  t3843 = -1.*t201*t348*t3523;
  t3858 = t402*t3574;
  t3864 = t478*t3610;
  t3870 = t508*t3649;
  t3872 = t536*t3684;
  t3891 = t568*t3711;
  t3899 = t615*t3767;
  t3901 = -0.027251*t630;
  t3909 = -1.200144*t668;
  t3910 = 0. + t3804 + t3819 + t3821 + t3832 + t3843 + t3858 + t3864 + t3870 + t3872 + t3891 + t3899 + t3901 + t3909;
  t4136 = -1.*t2347;
  t4145 = 1. + t4136;
  t4227 = -1.*t2396;
  t4229 = 1. + t4227;
  t4275 = -1.*t2451;
  t4288 = 1. + t4275;
  t4325 = -1.*t2499;
  t4328 = 1. + t4325;
  t4117 = -1.*t62;
  t4120 = 1. + t4117;
  t4189 = -1.*t2337;
  t4195 = 1. + t4189;
  t4197 = -0.049*t4195;
  t4199 = -0.09*t2351;
  t4201 = 0. + t4197 + t4199;
  t4150 = -0.049*t4145;
  t4160 = -0.21*t2340;
  t4163 = 0. + t4150 + t4160;
  t4204 = -0.21*t4145;
  t4209 = 0.049*t2340;
  t4211 = 0. + t4204 + t4209;
  t4231 = -0.2707*t4229;
  t4232 = 0.0016*t2335;
  t4235 = 0. + t4231 + t4232;
  t4249 = -0.0016*t4229;
  t4256 = -0.2707*t2335;
  t4258 = 0. + t4249 + t4256;
  t4291 = 0.0184*t4288;
  t4297 = -0.7055*t2331;
  t4303 = 0. + t4291 + t4297;
  t4311 = -0.7055*t4288;
  t4317 = -0.0184*t2331;
  t4320 = 0. + t4311 + t4317;
  t4335 = -1.1135*t4328;
  t4337 = 0.0216*t2313;
  t4345 = 0. + t4335 + t4337;
  t4354 = -0.0216*t4328;
  t4370 = -1.1135*t2313;
  t4371 = 0. + t4354 + t4370;
  t4423 = 0.135*t4120;
  t4424 = 0.049*t2091;
  t4437 = 0. + t4423 + t4424;
  t4444 = -0.09*t4195;
  t4448 = 0.049*t2351;
  t4450 = 0. + t4444 + t4448;
  t3986 = 0.135*t695;
  t3988 = -0.1305*t201*t695;
  t3992 = t695*t3371;
  t4014 = t695*t732*t3442;
  t4023 = t749*t3476;
  t4027 = t773*t3495;
  t4032 = t847*t3523;
  t4035 = t853*t3574;
  t4038 = t926*t3610;
  t4053 = t943*t3649;
  t4055 = t981*t3684;
  t4056 = t1009*t3711;
  t4069 = t1060*t3767;
  t4072 = -0.027251*t1092;
  t4080 = -1.200144*t1110;
  t4086 = 0. + t3986 + t3988 + t3992 + t4014 + t4023 + t4027 + t4032 + t4035 + t4038 + t4053 + t4055 + t4056 + t4069 + t4072 + t4080;
  t3801 = t1253*t3791;
  t3923 = -1.*t3910*t1740;
  t3931 = t3801 + t3923;
  t4127 = -0.049*t4120;
  t4177 = t62*t2337*t4163;
  t4183 = 0.004500000000000004*t2091;
  t4203 = t62*t4201;
  t4213 = -1.*t62*t4211*t2351;
  t4237 = t4235*t2391;
  t4264 = t4258*t2424;
  t4309 = t4303*t2444;
  t4323 = t4320*t2471;
  t4346 = t4345*t2480;
  t4374 = t4371*t2506;
  t4384 = -0.027251*t2510;
  t4385 = -1.200144*t2542;
  t4397 = 0. + t4127 + t4177 + t4183 + t4203 + t4213 + t4237 + t4264 + t4309 + t4323 + t4346 + t4374 + t4384 + t4385;
  t4404 = -1.*t10;
  t4414 = 1. + t4404;
  t4418 = 0.135*t4414;
  t4421 = 0.1305*t10*t62;
  t4440 = t10*t4437;
  t4443 = t10*t2091*t4201;
  t4459 = -1.*t2041*t4450;
  t4468 = t4163*t2579;
  t4471 = t4211*t2589;
  t4476 = t4235*t2597;
  t4477 = t4258*t2628;
  t4480 = t4303*t2640;
  t4481 = t4320*t2689;
  t4493 = t4345*t2709;
  t4494 = t4371*t2761;
  t4501 = -0.027251*t2789;
  t4504 = -1.200144*t2824;
  t4507 = 0. + t4418 + t4421 + t4440 + t4443 + t4459 + t4468 + t4471 + t4476 + t4477 + t4480 + t4481 + t4493 + t4494 + t4501 + t4504;
  t4511 = -0.135*t2041;
  t4513 = 0.1305*t62*t2041;
  t4514 = t2041*t4437;
  t4515 = t2041*t2091*t4201;
  t4524 = t10*t4450;
  t4526 = t4163*t2894;
  t4527 = t4211*t2941;
  t4528 = t4235*t2967;
  t4530 = t4258*t2991;
  t4532 = t4303*t2995;
  t4533 = t4320*t3017;
  t4537 = t4345*t3022;
  t4539 = t4371*t3033;
  t4540 = -0.027251*t3052;
  t4543 = -1.200144*t3072;
  t4547 = 0. + t4511 + t4513 + t4514 + t4515 + t4524 + t4526 + t4527 + t4528 + t4530 + t4532 + t4533 + t4537 + t4539 + t4540 + t4543;
  t4563 = t749*t201*t3910;
  t4566 = t732*t3791;
  t4569 = t4563 + t4566;
  t3955 = t678*t3791;
  t3961 = -1.*t3910*t1890;
  t3974 = t3955 + t3961;
  p_output1[0]=0. + t1981*t2082*t2091 - 1.*t10*t1283*t1981*t62 - 1.*t1981*t2020*t2041*t62;
  p_output1[1]=0. + t1981*t2091*t2249 - 1.*t10*t1981*t2193*t62 - 1.*t1981*t2041*t2214*t62;
  p_output1[2]=0. + t1981*t2091*t2306 - 1.*t10*t1981*t2275*t62 - 1.*t1981*t2041*t2288*t62;
  p_output1[3]=0.;
  p_output1[4]=0. + t1981*t2082*t2555 + t1283*t1981*t2840 + t1981*t2020*t3081;
  p_output1[5]=0. + t1981*t2249*t2555 + t1981*t2193*t2840 + t1981*t2214*t3081;
  p_output1[6]=0. + t1981*t2306*t2555 + t1981*t2275*t2840 + t1981*t2288*t3081;
  p_output1[7]=0.;
  p_output1[8]=0. + t1981*t2082*t3153 + t1283*t1981*t3174 + t1981*t2020*t3198;
  p_output1[9]=0. + t1981*t2249*t3153 + t1981*t2193*t3174 + t1981*t2214*t3198;
  p_output1[10]=0. + t1981*t2306*t3153 + t1981*t2275*t3174 + t1981*t2288*t3198;
  p_output1[11]=0.;
  p_output1[12]=t1981*(-1.*t1281*t3931 + t1126*t3974 - 1.*t1959*t4086) + t1981*t2082*t4397 + t1283*t1981*t4507 + t1981*t2020*t4547;
  p_output1[13]=t1981*t2249*t4397 + t1981*t2193*t4507 + t1981*t2214*t4547 + t1981*(t1805*t4086 - 1.*t1126*t4569 - 1.*t201*t3931*t695);
  p_output1[14]=t1981*t2306*t4397 + t1981*t2275*t4507 + t1981*t2288*t4547 + t1981*(-1.*t1917*t4086 + t1281*t4569 + t201*t3974*t695);
  p_output1[15]=0. + (t1837 + t1928 + t1978)*t1981;
}



void H_RightToeBack_to_LeftToeBack_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
