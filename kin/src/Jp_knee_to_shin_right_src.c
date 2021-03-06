/*
 * Automatically Generated from Mathematica.
 * Wed 12 Feb 2020 15:28:31 GMT-08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_knee_to_shin_right_src.h"

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
  double t483;
  double t782;
  double t577;
  double t768;
  double t802;
  double t170;
  double t294;
  double t300;
  double t430;
  double t503;
  double t773;
  double t823;
  double t837;
  double t1016;
  double t1171;
  double t1197;
  double t1307;
  double t142;
  double t1523;
  double t1527;
  double t1545;
  double t1642;
  double t1716;
  double t1720;
  double t1730;
  double t1801;
  double t1841;
  double t1946;
  double t1995;
  double t1999;
  double t2010;
  double t2032;
  double t2043;
  double t2048;
  double t2253;
  double t2687;
  double t2712;
  double t2719;
  double t2904;
  double t2908;
  double t3100;
  double t3118;
  double t3124;
  double t3125;
  double t3333;
  double t3400;
  double t3467;
  double t3510;
  double t3663;
  double t3701;
  double t3755;
  double t351;
  double t436;
  double t474;
  double t507;
  double t514;
  double t1024;
  double t1054;
  double t1143;
  double t1165;
  double t1437;
  double t1440;
  double t1448;
  double t4357;
  double t4364;
  double t4368;
  double t4406;
  double t4591;
  double t4646;
  double t1725;
  double t1772;
  double t1780;
  double t4713;
  double t4808;
  double t4814;
  double t1977;
  double t1982;
  double t1987;
  double t2144;
  double t2359;
  double t2680;
  double t4836;
  double t4878;
  double t4913;
  double t5276;
  double t5318;
  double t5327;
  double t2785;
  double t2821;
  double t2829;
  double t3256;
  double t3337;
  double t3391;
  double t5403;
  double t5489;
  double t5553;
  double t5574;
  double t5611;
  double t5655;
  double t3553;
  double t3562;
  double t3597;
  double t5672;
  double t5707;
  double t5715;
  double t5784;
  double t5806;
  double t5810;
  double t6402;
  double t6404;
  double t6412;
  double t6500;
  double t6509;
  double t6582;
  double t6641;
  double t6693;
  double t6774;
  double t6825;
  double t6842;
  double t6851;
  double t6914;
  double t6994;
  double t7025;
  double t7033;
  double t7034;
  double t7035;
  double t7080;
  double t7104;
  double t7109;
  double t7423;
  double t7429;
  double t7443;
  double t7481;
  double t7500;
  double t7508;
  double t7548;
  double t7551;
  double t7552;
  double t7557;
  double t7564;
  double t7565;
  double t7570;
  double t7579;
  double t7582;
  double t7601;
  double t7604;
  double t7605;
  double t7608;
  double t7612;
  double t7617;
  double t7660;
  double t7661;
  double t7664;
  double t7672;
  double t7686;
  double t7688;
  double t7709;
  double t7711;
  double t7712;
  double t7714;
  double t7715;
  double t7717;
  double t7722;
  double t7723;
  double t7725;
  double t7730;
  double t7734;
  double t7735;
  double t7737;
  double t7739;
  double t7744;
  double t8142;
  double t8148;
  double t8180;
  double t8299;
  double t8300;
  double t8209;
  double t8236;
  double t8253;
  double t8387;
  double t8420;
  double t8445;
  double t8463;
  double t8487;
  double t8505;
  double t8515;
  double t8522;
  double t8527;
  double t8569;
  double t8576;
  double t8591;
  double t8667;
  double t8670;
  double t8672;
  double t8697;
  double t8704;
  double t8901;
  double t8687;
  double t8688;
  double t8920;
  double t8923;
  double t8932;
  double t8978;
  double t8994;
  double t9012;
  double t9072;
  double t9097;
  double t9168;
  double t9276;
  double t9313;
  double t9322;
  double t9759;
  double t9768;
  double t9787;
  double t9678;
  double t9699;
  double t9701;
  double t9798;
  double t9837;
  double t9841;
  double t9888;
  double t9895;
  double t9898;
  double t9926;
  double t9929;
  double t9944;
  double t9964;
  double t9971;
  double t9976;
  double t10036;
  double t10037;
  double t10058;
  double t10064;
  double t10066;
  double t10068;
  double t10070;
  double t10071;
  double t10075;
  double t10077;
  double t10078;
  double t10085;
  double t10086;
  double t10088;
  double t10110;
  double t10111;
  double t10112;
  double t10119;
  double t10121;
  double t10115;
  double t10116;
  double t10129;
  double t10131;
  double t10132;
  double t10134;
  double t10136;
  double t10137;
  double t10140;
  double t10144;
  double t10146;
  double t10148;
  double t10151;
  double t10152;
  double t9753;
  double t9794;
  double t9795;
  double t9797;
  double t9860;
  double t9912;
  double t9952;
  double t9981;
  double t9986;
  double t9990;
  double t9996;
  double t10008;
  double t10011;
  double t10018;
  double t10022;
  double t10026;
  double t4960;
  double t4975;
  double t5006;
  double t10241;
  double t10243;
  double t10245;
  double t10247;
  double t10248;
  double t10249;
  double t10202;
  double t10205;
  double t10215;
  double t10219;
  double t10223;
  double t10275;
  double t10278;
  double t10279;
  double t10282;
  double t10285;
  double t10286;
  double t10297;
  double t10298;
  double t10299;
  double t10301;
  double t10302;
  double t10303;
  double t10320;
  double t10321;
  double t10322;
  double t10324;
  double t10325;
  double t10326;
  double t10338;
  double t10339;
  double t10340;
  double t10343;
  double t10344;
  double t10346;
  double t10367;
  double t10368;
  double t10369;
  double t10373;
  double t10374;
  double t10376;
  double t10377;
  double t10378;
  double t10360;
  double t10361;
  double t10363;
  double t10364;
  double t10365;
  double t10395;
  double t10396;
  double t10397;
  double t10399;
  double t10400;
  double t10401;
  double t10405;
  double t10407;
  double t10408;
  double t10410;
  double t10411;
  double t10412;
  double t10417;
  double t10420;
  double t10421;
  double t10434;
  double t10435;
  double t10436;
  double t10439;
  double t10440;
  double t10441;
  double t10443;
  double t10444;
  double t10448;
  double t10452;
  double t10453;
  double t10454;
  double t10456;
  double t10457;
  double t10458;
  double t10482;
  double t10483;
  double t6107;
  double t10471;
  double t10472;
  double t10473;
  double t10476;
  double t10477;
  double t10494;
  double t10497;
  double t10498;
  double t10503;
  double t10504;
  double t10507;
  double t10510;
  double t10522;
  double t10524;
  double t10527;
  double t10532;
  double t10533;
  double t10536;
  double t10537;
  double t10485;
  double t6110;
  double t6173;
  double t10550;
  double t10551;
  double t10553;
  double t10554;
  double t10555;
  double t10512;
  double t10565;
  double t10566;
  double t10567;
  double t10516;
  double t10541;
  double t10582;
  double t10583;
  double t10585;
  double t10545;
  t483 = Sin(var1[3]);
  t782 = Cos(var1[3]);
  t577 = Cos(var1[5]);
  t768 = Sin(var1[4]);
  t802 = Sin(var1[5]);
  t170 = Cos(var1[14]);
  t294 = -1.*t170;
  t300 = 1. + t294;
  t430 = Sin(var1[14]);
  t503 = Sin(var1[13]);
  t773 = -1.*t577*t483*t768;
  t823 = t782*t802;
  t837 = t773 + t823;
  t1016 = Cos(var1[13]);
  t1171 = -1.*t782*t577;
  t1197 = -1.*t483*t768*t802;
  t1307 = t1171 + t1197;
  t142 = Cos(var1[4]);
  t1523 = t503*t837;
  t1527 = t1016*t1307;
  t1545 = t1523 + t1527;
  t1642 = Cos(var1[15]);
  t1716 = -1.*t1642;
  t1720 = 1. + t1716;
  t1730 = Sin(var1[15]);
  t1801 = t1016*t837;
  t1841 = -1.*t503*t1307;
  t1946 = t1801 + t1841;
  t1995 = -1.*t170*t142*t483;
  t1999 = t430*t1545;
  t2010 = t1995 + t1999;
  t2032 = Cos(var1[16]);
  t2043 = -1.*t2032;
  t2048 = 1. + t2043;
  t2253 = Sin(var1[16]);
  t2687 = t1730*t1946;
  t2712 = t1642*t2010;
  t2719 = t2687 + t2712;
  t2904 = t1642*t1946;
  t2908 = -1.*t1730*t2010;
  t3100 = t2904 + t2908;
  t3118 = Cos(var1[17]);
  t3124 = -1.*t3118;
  t3125 = 1. + t3124;
  t3333 = Sin(var1[17]);
  t3400 = -1.*t2253*t2719;
  t3467 = t2032*t3100;
  t3510 = t3400 + t3467;
  t3663 = t2032*t2719;
  t3701 = t2253*t3100;
  t3755 = t3663 + t3701;
  t351 = -0.049*t300;
  t436 = -0.135*t430;
  t474 = 0. + t351 + t436;
  t507 = 0.135*t503;
  t514 = 0. + t507;
  t1024 = -1.*t1016;
  t1054 = 1. + t1024;
  t1143 = -0.135*t1054;
  t1165 = 0. + t1143;
  t1437 = -0.135*t300;
  t1440 = 0.049*t430;
  t1448 = 0. + t1437 + t1440;
  t4357 = t782*t577*t768;
  t4364 = t483*t802;
  t4368 = t4357 + t4364;
  t4406 = -1.*t577*t483;
  t4591 = t782*t768*t802;
  t4646 = t4406 + t4591;
  t1725 = -0.09*t1720;
  t1772 = 0.049*t1730;
  t1780 = 0. + t1725 + t1772;
  t4713 = t503*t4368;
  t4808 = t1016*t4646;
  t4814 = t4713 + t4808;
  t1977 = -0.049*t1720;
  t1982 = -0.09*t1730;
  t1987 = 0. + t1977 + t1982;
  t2144 = -0.049*t2048;
  t2359 = -0.21*t2253;
  t2680 = 0. + t2144 + t2359;
  t4836 = t1016*t4368;
  t4878 = -1.*t503*t4646;
  t4913 = t4836 + t4878;
  t5276 = t170*t782*t142;
  t5318 = t430*t4814;
  t5327 = t5276 + t5318;
  t2785 = -0.21*t2048;
  t2821 = 0.049*t2253;
  t2829 = 0. + t2785 + t2821;
  t3256 = -0.2707*t3125;
  t3337 = 0.0016*t3333;
  t3391 = 0. + t3256 + t3337;
  t5403 = t1730*t4913;
  t5489 = t1642*t5327;
  t5553 = t5403 + t5489;
  t5574 = t1642*t4913;
  t5611 = -1.*t1730*t5327;
  t5655 = t5574 + t5611;
  t3553 = -0.0016*t3125;
  t3562 = -0.2707*t3333;
  t3597 = 0. + t3553 + t3562;
  t5672 = -1.*t2253*t5553;
  t5707 = t2032*t5655;
  t5715 = t5672 + t5707;
  t5784 = t2032*t5553;
  t5806 = t2253*t5655;
  t5810 = t5784 + t5806;
  t6402 = t782*t142*t577*t503;
  t6404 = t1016*t782*t142*t802;
  t6412 = t6402 + t6404;
  t6500 = t1016*t782*t142*t577;
  t6509 = -1.*t782*t142*t503*t802;
  t6582 = t6500 + t6509;
  t6641 = -1.*t170*t782*t768;
  t6693 = t430*t6412;
  t6774 = t6641 + t6693;
  t6825 = t1730*t6582;
  t6842 = t1642*t6774;
  t6851 = t6825 + t6842;
  t6914 = t1642*t6582;
  t6994 = -1.*t1730*t6774;
  t7025 = t6914 + t6994;
  t7033 = -1.*t2253*t6851;
  t7034 = t2032*t7025;
  t7035 = t7033 + t7034;
  t7080 = t2032*t6851;
  t7104 = t2253*t7025;
  t7109 = t7080 + t7104;
  t7423 = t142*t577*t503*t483;
  t7429 = t1016*t142*t483*t802;
  t7443 = t7423 + t7429;
  t7481 = t1016*t142*t577*t483;
  t7500 = -1.*t142*t503*t483*t802;
  t7508 = t7481 + t7500;
  t7548 = -1.*t170*t483*t768;
  t7551 = t430*t7443;
  t7552 = t7548 + t7551;
  t7557 = t1730*t7508;
  t7564 = t1642*t7552;
  t7565 = t7557 + t7564;
  t7570 = t1642*t7508;
  t7579 = -1.*t1730*t7552;
  t7582 = t7570 + t7579;
  t7601 = -1.*t2253*t7565;
  t7604 = t2032*t7582;
  t7605 = t7601 + t7604;
  t7608 = t2032*t7565;
  t7612 = t2253*t7582;
  t7617 = t7608 + t7612;
  t7660 = -1.*t577*t503*t768;
  t7661 = -1.*t1016*t768*t802;
  t7664 = t7660 + t7661;
  t7672 = -1.*t1016*t577*t768;
  t7686 = t503*t768*t802;
  t7688 = t7672 + t7686;
  t7709 = -1.*t170*t142;
  t7711 = t430*t7664;
  t7712 = t7709 + t7711;
  t7714 = t1730*t7688;
  t7715 = t1642*t7712;
  t7717 = t7714 + t7715;
  t7722 = t1642*t7688;
  t7723 = -1.*t1730*t7712;
  t7725 = t7722 + t7723;
  t7730 = -1.*t2253*t7717;
  t7734 = t2032*t7725;
  t7735 = t7730 + t7734;
  t7737 = t2032*t7717;
  t7739 = t2253*t7725;
  t7744 = t7737 + t7739;
  t8142 = t577*t483;
  t8148 = -1.*t782*t768*t802;
  t8180 = t8142 + t8148;
  t8299 = t503*t8180;
  t8300 = t4836 + t8299;
  t8209 = -1.*t503*t4368;
  t8236 = t1016*t8180;
  t8253 = t8209 + t8236;
  t8387 = t1730*t8253;
  t8420 = t1642*t430*t8300;
  t8445 = t8387 + t8420;
  t8463 = t1642*t8253;
  t8487 = -1.*t430*t1730*t8300;
  t8505 = t8463 + t8487;
  t8515 = -1.*t2253*t8445;
  t8522 = t2032*t8505;
  t8527 = t8515 + t8522;
  t8569 = t2032*t8445;
  t8576 = t2253*t8505;
  t8591 = t8569 + t8576;
  t8667 = t577*t483*t768;
  t8670 = -1.*t782*t802;
  t8672 = t8667 + t8670;
  t8697 = t1016*t8672;
  t8704 = t503*t1307;
  t8901 = t8697 + t8704;
  t8687 = -1.*t503*t8672;
  t8688 = t8687 + t1527;
  t8920 = t1730*t8688;
  t8923 = t1642*t430*t8901;
  t8932 = t8920 + t8923;
  t8978 = t1642*t8688;
  t8994 = -1.*t430*t1730*t8901;
  t9012 = t8978 + t8994;
  t9072 = -1.*t2253*t8932;
  t9097 = t2032*t9012;
  t9168 = t9072 + t9097;
  t9276 = t2032*t8932;
  t9313 = t2253*t9012;
  t9322 = t9276 + t9313;
  t9759 = t1016*t142*t577;
  t9768 = -1.*t142*t503*t802;
  t9787 = t9759 + t9768;
  t9678 = -1.*t142*t577*t503;
  t9699 = -1.*t1016*t142*t802;
  t9701 = t9678 + t9699;
  t9798 = t1730*t9701;
  t9837 = t1642*t430*t9787;
  t9841 = t9798 + t9837;
  t9888 = t1642*t9701;
  t9895 = -1.*t430*t1730*t9787;
  t9898 = t9888 + t9895;
  t9926 = -1.*t2253*t9841;
  t9929 = t2032*t9898;
  t9944 = t9926 + t9929;
  t9964 = t2032*t9841;
  t9971 = t2253*t9898;
  t9976 = t9964 + t9971;
  t10036 = -1.*t1016*t4646;
  t10037 = t8209 + t10036;
  t10058 = t1730*t10037;
  t10064 = t1642*t430*t4913;
  t10066 = t10058 + t10064;
  t10068 = t1642*t10037;
  t10070 = -1.*t430*t1730*t4913;
  t10071 = t10068 + t10070;
  t10075 = -1.*t2253*t10066;
  t10077 = t2032*t10071;
  t10078 = t10075 + t10077;
  t10085 = t2032*t10066;
  t10086 = t2253*t10071;
  t10088 = t10085 + t10086;
  t10110 = t782*t577;
  t10111 = t483*t768*t802;
  t10112 = t10110 + t10111;
  t10119 = -1.*t503*t10112;
  t10121 = t8697 + t10119;
  t10115 = -1.*t1016*t10112;
  t10116 = t8687 + t10115;
  t10129 = t1730*t10116;
  t10131 = t1642*t430*t10121;
  t10132 = t10129 + t10131;
  t10134 = t1642*t10116;
  t10136 = -1.*t430*t1730*t10121;
  t10137 = t10134 + t10136;
  t10140 = -1.*t2253*t10132;
  t10144 = t2032*t10137;
  t10146 = t10140 + t10144;
  t10148 = t2032*t10132;
  t10151 = t2253*t10137;
  t10152 = t10148 + t10151;
  t9753 = t1780*t9701;
  t9794 = -0.1305*t170*t9787;
  t9795 = t1448*t9787;
  t9797 = t430*t1987*t9787;
  t9860 = t2680*t9841;
  t9912 = t2829*t9898;
  t9952 = t3391*t9944;
  t9981 = t3597*t9976;
  t9986 = t3333*t9944;
  t9990 = t3118*t9976;
  t9996 = t9986 + t9990;
  t10008 = -0.0016*t9996;
  t10011 = t3118*t9944;
  t10018 = -1.*t3333*t9976;
  t10022 = t10011 + t10018;
  t10026 = -0.2707*t10022;
  t4960 = -1.*t782*t142*t430;
  t4975 = t170*t4814;
  t5006 = t4960 + t4975;
  t10241 = -1.*t2032*t1730*t5006;
  t10243 = -1.*t1642*t2253*t5006;
  t10245 = t10241 + t10243;
  t10247 = t1642*t2032*t5006;
  t10248 = -1.*t1730*t2253*t5006;
  t10249 = t10247 + t10248;
  t10202 = -0.135*t170;
  t10205 = -0.049*t430;
  t10215 = t10202 + t10205;
  t10219 = 0.049*t170;
  t10223 = t10219 + t436;
  t10275 = t503*t8672;
  t10278 = t1016*t10112;
  t10279 = t10275 + t10278;
  t10282 = -1.*t142*t430*t483;
  t10285 = t170*t10279;
  t10286 = t10282 + t10285;
  t10297 = -1.*t2032*t1730*t10286;
  t10298 = -1.*t1642*t2253*t10286;
  t10299 = t10297 + t10298;
  t10301 = t1642*t2032*t10286;
  t10302 = -1.*t1730*t2253*t10286;
  t10303 = t10301 + t10302;
  t10320 = t142*t577*t503;
  t10321 = t1016*t142*t802;
  t10322 = t10320 + t10321;
  t10324 = t430*t768;
  t10325 = t170*t10322;
  t10326 = t10324 + t10325;
  t10338 = -1.*t2032*t1730*t10326;
  t10339 = -1.*t1642*t2253*t10326;
  t10340 = t10338 + t10339;
  t10343 = t1642*t2032*t10326;
  t10344 = -1.*t1730*t2253*t10326;
  t10346 = t10343 + t10344;
  t10367 = -1.*t1730*t4913;
  t10368 = -1.*t1642*t5327;
  t10369 = t10367 + t10368;
  t10373 = t2253*t10369;
  t10374 = t10373 + t5707;
  t10376 = t2032*t10369;
  t10377 = -1.*t2253*t5655;
  t10378 = t10376 + t10377;
  t10360 = 0.049*t1642;
  t10361 = t10360 + t1982;
  t10363 = -0.09*t1642;
  t10364 = -0.049*t1730;
  t10365 = t10363 + t10364;
  t10395 = t170*t142*t483;
  t10396 = t430*t10279;
  t10397 = t10395 + t10396;
  t10399 = -1.*t1730*t10121;
  t10400 = -1.*t1642*t10397;
  t10401 = t10399 + t10400;
  t10405 = t1642*t10121;
  t10407 = -1.*t1730*t10397;
  t10408 = t10405 + t10407;
  t10410 = t2253*t10401;
  t10411 = t2032*t10408;
  t10412 = t10410 + t10411;
  t10417 = t2032*t10401;
  t10420 = -1.*t2253*t10408;
  t10421 = t10417 + t10420;
  t10434 = -1.*t170*t768;
  t10435 = t430*t10322;
  t10436 = t10434 + t10435;
  t10439 = -1.*t1730*t9787;
  t10440 = -1.*t1642*t10436;
  t10441 = t10439 + t10440;
  t10443 = t1642*t9787;
  t10444 = -1.*t1730*t10436;
  t10448 = t10443 + t10444;
  t10452 = t2253*t10441;
  t10453 = t2032*t10448;
  t10454 = t10452 + t10453;
  t10456 = t2032*t10441;
  t10457 = -1.*t2253*t10448;
  t10458 = t10456 + t10457;
  t10482 = -1.*t2032*t5553;
  t10483 = t10482 + t10377;
  t6107 = t3118*t5715;
  t10471 = -0.21*t2032;
  t10472 = -0.049*t2253;
  t10473 = t10471 + t10472;
  t10476 = 0.049*t2032;
  t10477 = t10476 + t2359;
  t10494 = t1730*t10121;
  t10497 = t1642*t10397;
  t10498 = t10494 + t10497;
  t10503 = -1.*t2253*t10498;
  t10504 = t10503 + t10411;
  t10507 = -1.*t2032*t10498;
  t10510 = t10507 + t10420;
  t10522 = t1730*t9787;
  t10524 = t1642*t10436;
  t10527 = t10522 + t10524;
  t10532 = -1.*t2253*t10527;
  t10533 = t10532 + t10453;
  t10536 = -1.*t2032*t10527;
  t10537 = t10536 + t10457;
  t10485 = -1.*t3333*t5715;
  t6110 = -1.*t3333*t5810;
  t6173 = t6107 + t6110;
  t10550 = 0.0016*t3118;
  t10551 = t10550 + t3562;
  t10553 = -0.2707*t3118;
  t10554 = -0.0016*t3333;
  t10555 = t10553 + t10554;
  t10512 = -1.*t3333*t10504;
  t10565 = t2032*t10498;
  t10566 = t2253*t10408;
  t10567 = t10565 + t10566;
  t10516 = t3118*t10504;
  t10541 = -1.*t3333*t10533;
  t10582 = t2032*t10527;
  t10583 = t2253*t10448;
  t10585 = t10582 + t10583;
  t10545 = t3118*t10533;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1165*t1307 + t1448*t1545 + t1780*t1946 + t1987*t2010 + t2680*t2719 + t2829*t3100 + t3391*t3510 + t3597*t3755 - 0.0016*(t3333*t3510 + t3118*t3755) - 0.2707*(t3118*t3510 - 1.*t3333*t3755) - 1.*t142*t474*t483 - 0.1305*(t1545*t170 + t142*t430*t483) + t514*t837;
  p_output1[10]=t1165*t4646 + t1448*t4814 + t1780*t4913 - 0.1305*t5006 + t4368*t514 + t1987*t5327 + t2680*t5553 + t2829*t5655 + t3391*t5715 + t3597*t5810 - 0.0016*(t3333*t5715 + t3118*t5810) - 0.2707*t6173 + t142*t474*t782;
  p_output1[11]=0;
  p_output1[12]=t1448*t6412 + t1780*t6582 + t1987*t6774 + t2680*t6851 + t2829*t7025 + t3391*t7035 + t3597*t7109 - 0.0016*(t3333*t7035 + t3118*t7109) - 0.2707*(t3118*t7035 - 1.*t3333*t7109) + t142*t514*t577*t782 - 1.*t474*t768*t782 - 0.1305*(t170*t6412 + t430*t768*t782) + t1165*t142*t782*t802;
  p_output1[13]=t142*t483*t514*t577 + t1448*t7443 + t1780*t7508 + t1987*t7552 + t2680*t7565 + t2829*t7582 + t3391*t7605 + t3597*t7617 - 0.0016*(t3333*t7605 + t3118*t7617) - 0.2707*(t3118*t7605 - 1.*t3333*t7617) - 1.*t474*t483*t768 - 0.1305*(t170*t7443 + t430*t483*t768) + t1165*t142*t483*t802;
  p_output1[14]=-1.*t142*t474 + t1448*t7664 - 0.1305*(t142*t430 + t170*t7664) - 1.*t514*t577*t768 + t1780*t7688 + t1987*t7712 + t2680*t7717 + t2829*t7725 + t3391*t7735 + t3597*t7744 - 0.0016*(t3333*t7735 + t3118*t7744) - 0.2707*(t3118*t7735 - 1.*t3333*t7744) - 1.*t1165*t768*t802;
  p_output1[15]=t1165*t4368 + t514*t8180 + t1780*t8253 + t1448*t8300 - 0.1305*t170*t8300 + t1987*t430*t8300 + t2680*t8445 + t2829*t8505 + t3391*t8527 + t3597*t8591 - 0.0016*(t3333*t8527 + t3118*t8591) - 0.2707*(t3118*t8527 - 1.*t3333*t8591);
  p_output1[16]=t1307*t514 + t1165*t8672 + t1780*t8688 + t1448*t8901 - 0.1305*t170*t8901 + t1987*t430*t8901 + t2680*t8932 + t2829*t9012 + t3391*t9168 + t3597*t9322 - 0.0016*(t3333*t9168 + t3118*t9322) - 0.2707*(t3118*t9168 - 1.*t3333*t9322);
  p_output1[17]=t10008 + t10026 + t1165*t142*t577 - 1.*t142*t514*t802 + t9753 + t9794 + t9795 + t9797 + t9860 + t9912 + t9952 + t9981;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=t10037*t1780 + t10066*t2680 + t10071*t2829 - 0.0016*(t10088*t3118 + t10078*t3333) - 0.2707*(t10078*t3118 - 1.*t10088*t3333) + t10078*t3391 + t10088*t3597 + 0.135*t1016*t4368 + t1448*t4913 - 0.1305*t170*t4913 + t1987*t430*t4913 - 0.135*t4646*t503;
  p_output1[40]=t10121*t1448 - 0.1305*t10121*t170 + t10116*t1780 + t10132*t2680 + t10137*t2829 - 0.0016*(t10152*t3118 + t10146*t3333) - 0.2707*(t10146*t3118 - 1.*t10152*t3333) + t10146*t3391 + t10152*t3597 + t10121*t1987*t430 - 0.135*t10112*t503 + 0.135*t1016*t8672;
  p_output1[41]=t10008 + t10026 + 0.135*t1016*t142*t577 - 0.135*t142*t503*t802 + t9753 + t9794 + t9795 + t9797 + t9860 + t9912 + t9952 + t9981;
  p_output1[42]=-0.0016*(t10249*t3118 + t10245*t3333) - 0.2707*(t10245*t3118 - 1.*t10249*t3333) + t10245*t3391 + t10249*t3597 + t10223*t4814 + t1987*t5006 + t1642*t2680*t5006 - 1.*t1730*t2829*t5006 + t10215*t142*t782 - 0.1305*(-1.*t430*t4814 - 1.*t142*t170*t782);
  p_output1[43]=t10223*t10279 + t10286*t1987 + t10286*t1642*t2680 - 1.*t10286*t1730*t2829 - 0.0016*(t10303*t3118 + t10299*t3333) - 0.2707*(t10299*t3118 - 1.*t10303*t3333) + t10299*t3391 + t10303*t3597 - 0.1305*(t1995 - 1.*t10279*t430) + t10215*t142*t483;
  p_output1[44]=t10223*t10322 + t10326*t1987 + t10326*t1642*t2680 - 1.*t10326*t1730*t2829 - 0.0016*(t10346*t3118 + t10340*t3333) - 0.2707*(t10340*t3118 - 1.*t10346*t3333) + t10340*t3391 + t10346*t3597 - 1.*t10215*t768 - 0.1305*(-1.*t10322*t430 + t170*t768);
  p_output1[45]=t10369*t2829 - 0.2707*(t10378*t3118 - 1.*t10374*t3333) - 0.0016*(t10374*t3118 + t10378*t3333) + t10378*t3391 + t10374*t3597 + t10361*t4913 + t10365*t5327 + t2680*t5655;
  p_output1[46]=t10121*t10361 + t10365*t10397 + t10408*t2680 + t10401*t2829 - 0.2707*(t10421*t3118 - 1.*t10412*t3333) - 0.0016*(t10412*t3118 + t10421*t3333) + t10421*t3391 + t10412*t3597;
  p_output1[47]=t10365*t10436 + t10448*t2680 + t10441*t2829 - 0.2707*(t10458*t3118 - 1.*t10454*t3333) - 0.0016*(t10454*t3118 + t10458*t3333) + t10458*t3391 + t10454*t3597 + t10361*t9787;
  p_output1[48]=-0.2707*(t10485 + t10483*t3118) + t10483*t3391 + t10473*t5553 + t10477*t5655 + t3597*t5715 - 0.0016*(t10483*t3333 + t6107);
  p_output1[49]=t10408*t10477 + t10473*t10498 - 0.2707*(t10512 + t10510*t3118) - 0.0016*(t10516 + t10510*t3333) + t10510*t3391 + t10504*t3597;
  p_output1[50]=t10448*t10477 + t10473*t10527 - 0.2707*(t10541 + t10537*t3118) - 0.0016*(t10545 + t10537*t3333) + t10537*t3391 + t10533*t3597;
  p_output1[51]=t10551*t5715 + t10555*t5810 - 0.2707*(t10485 - 1.*t3118*t5810) - 0.0016*t6173;
  p_output1[52]=t10504*t10551 + t10555*t10567 - 0.2707*(t10512 - 1.*t10567*t3118) - 0.0016*(t10516 - 1.*t10567*t3333);
  p_output1[53]=t10533*t10551 + t10555*t10585 - 0.2707*(t10541 - 1.*t10585*t3118) - 0.0016*(t10545 - 1.*t10585*t3333);
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
}



void Jp_knee_to_shin_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
