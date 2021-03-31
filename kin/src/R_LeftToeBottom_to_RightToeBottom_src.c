/*
 * Automatically Generated from Mathematica.
 * Wed 23 Oct 2019 10:26:21 GMT-07:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_LeftToeBottom_to_RightToeBottom_src.h"

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
  double t646;
  double t462;
  double t573;
  double t649;
  double t774;
  double t629;
  double t700;
  double t710;
  double t413;
  double t786;
  double t814;
  double t818;
  double t880;
  double t714;
  double t828;
  double t838;
  double t378;
  double t909;
  double t915;
  double t924;
  double t1076;
  double t851;
  double t927;
  double t933;
  double t312;
  double t1077;
  double t1083;
  double t1144;
  double t1374;
  double t1317;
  double t1355;
  double t1356;
  double t1375;
  double t1381;
  double t1448;
  double t1491;
  double t1493;
  double t1402;
  double t1514;
  double t1518;
  double t1534;
  double t1541;
  double t1549;
  double t1530;
  double t1601;
  double t1609;
  double t1628;
  double t1646;
  double t1657;
  double t1625;
  double t1696;
  double t1714;
  double t1768;
  double t1811;
  double t1813;
  double t1035;
  double t1151;
  double t1158;
  double t1193;
  double t1202;
  double t1226;
  double t1755;
  double t1818;
  double t1821;
  double t1873;
  double t1916;
  double t1924;
  double t2165;
  double t2185;
  double t2186;
  double t2226;
  double t2252;
  double t2265;
  double t2225;
  double t2266;
  double t2315;
  double t2366;
  double t2407;
  double t2426;
  double t2339;
  double t2433;
  double t2469;
  double t2484;
  double t2492;
  double t2511;
  double t2478;
  double t2540;
  double t2548;
  double t2552;
  double t2556;
  double t2574;
  double t1982;
  double t2012;
  double t2024;
  double t1847;
  double t1948;
  double t1957;
  double t2550;
  double t2588;
  double t2594;
  double t2607;
  double t2612;
  double t2616;
  double t1189;
  double t1295;
  double t1308;
  double t2049;
  double t2051;
  double t2070;
  double t1971;
  double t2095;
  double t178;
  double t2657;
  double t2660;
  double t2663;
  double t2606;
  double t2624;
  double t2626;
  double t2627;
  double t2632;
  double t2638;
  double t2649;
  double t2664;
  double t2665;
  double t2668;
  double t2704;
  double t2707;
  double t2715;
  double t2722;
  double t2723;
  double t304;
  double t2803;
  double t2740;
  double t3172;
  double t3178;
  double t3155;
  double t3199;
  double t3203;
  double t3206;
  double t3175;
  double t3180;
  double t3182;
  double t3207;
  double t3149;
  double t3224;
  double t3230;
  double t3247;
  double t3184;
  double t3219;
  double t3220;
  double t3259;
  double t3129;
  double t3312;
  double t3337;
  double t3350;
  double t3222;
  double t3292;
  double t3301;
  double t3364;
  double t3124;
  double t3413;
  double t3414;
  double t3435;
  double t3307;
  double t3382;
  double t3389;
  double t3439;
  double t2145;
  double t3520;
  double t3524;
  double t3529;
  double t3500;
  double t3505;
  double t3513;
  double t3541;
  double t3549;
  double t3554;
  double t3517;
  double t3531;
  double t3532;
  double t3563;
  double t3579;
  double t3583;
  double t3536;
  double t3555;
  double t3561;
  double t3611;
  double t3614;
  double t3620;
  double t3562;
  double t3592;
  double t3603;
  double t2750;
  double t2766;
  double t2782;
  double t3693;
  double t3694;
  double t3696;
  double t3659;
  double t3663;
  double t3671;
  double t3718;
  double t3720;
  double t3748;
  double t3687;
  double t3700;
  double t3702;
  double t3757;
  double t3759;
  double t3761;
  double t3710;
  double t3749;
  double t3750;
  double t2822;
  double t2848;
  double t2870;
  double t3411;
  double t3457;
  double t3460;
  double t3461;
  double t3464;
  double t3471;
  double t3472;
  double t3483;
  double t3485;
  double t2907;
  double t2911;
  double t2918;
  double t3753;
  double t3771;
  double t3791;
  double t3796;
  double t3809;
  double t3810;
  double t3811;
  double t3824;
  double t3834;
  double t2923;
  double t2927;
  double t2943;
  double t3605;
  double t3627;
  double t3629;
  double t3632;
  double t3636;
  double t3638;
  double t3639;
  double t3649;
  double t3651;
  double t2962;
  double t2963;
  double t2970;
  double t2982;
  double t2996;
  double t3000;
  double t3023;
  double t3075;
  double t3086;
  double t3087;
  double t3887;
  double t3888;
  double t3890;
  double t3916;
  double t3917;
  double t3925;
  double t3902;
  double t3905;
  double t3906;
  t444 = Cos(var1[1]);
  t646 = Cos(var1[3]);
  t462 = Cos(var1[2]);
  t573 = Sin(var1[3]);
  t649 = Sin(var1[2]);
  t774 = Cos(var1[4]);
  t629 = -1.*t444*t462*t573;
  t700 = -1.*t646*t444*t649;
  t710 = t629 + t700;
  t413 = Sin(var1[4]);
  t786 = t646*t444*t462;
  t814 = -1.*t444*t573*t649;
  t818 = t786 + t814;
  t880 = Cos(var1[5]);
  t714 = t413*t710;
  t828 = t774*t818;
  t838 = t714 + t828;
  t378 = Sin(var1[5]);
  t909 = t774*t710;
  t915 = -1.*t413*t818;
  t924 = t909 + t915;
  t1076 = Cos(var1[6]);
  t851 = -1.*t378*t838;
  t927 = t880*t924;
  t933 = t851 + t927;
  t312 = Sin(var1[6]);
  t1077 = t880*t838;
  t1083 = t378*t924;
  t1144 = t1077 + t1083;
  t1374 = Sin(var1[0]);
  t1317 = Cos(var1[0]);
  t1355 = Sin(var1[1]);
  t1356 = t1317*t462*t1355;
  t1375 = -1.*t1374*t649;
  t1381 = t1356 + t1375;
  t1448 = -1.*t462*t1374;
  t1491 = -1.*t1317*t1355*t649;
  t1493 = t1448 + t1491;
  t1402 = -1.*t573*t1381;
  t1514 = t646*t1493;
  t1518 = t1402 + t1514;
  t1534 = t646*t1381;
  t1541 = t573*t1493;
  t1549 = t1534 + t1541;
  t1530 = t413*t1518;
  t1601 = t774*t1549;
  t1609 = t1530 + t1601;
  t1628 = t774*t1518;
  t1646 = -1.*t413*t1549;
  t1657 = t1628 + t1646;
  t1625 = -1.*t378*t1609;
  t1696 = t880*t1657;
  t1714 = t1625 + t1696;
  t1768 = t880*t1609;
  t1811 = t378*t1657;
  t1813 = t1768 + t1811;
  t1035 = t312*t933;
  t1151 = t1076*t1144;
  t1158 = t1035 + t1151;
  t1193 = t1076*t933;
  t1202 = -1.*t312*t1144;
  t1226 = t1193 + t1202;
  t1755 = t312*t1714;
  t1818 = t1076*t1813;
  t1821 = t1755 + t1818;
  t1873 = t1076*t1714;
  t1916 = -1.*t312*t1813;
  t1924 = t1873 + t1916;
  t2165 = t462*t1374*t1355;
  t2185 = t1317*t649;
  t2186 = t2165 + t2185;
  t2226 = t1317*t462;
  t2252 = -1.*t1374*t1355*t649;
  t2265 = t2226 + t2252;
  t2225 = -1.*t573*t2186;
  t2266 = t646*t2265;
  t2315 = t2225 + t2266;
  t2366 = t646*t2186;
  t2407 = t573*t2265;
  t2426 = t2366 + t2407;
  t2339 = t413*t2315;
  t2433 = t774*t2426;
  t2469 = t2339 + t2433;
  t2484 = t774*t2315;
  t2492 = -1.*t413*t2426;
  t2511 = t2484 + t2492;
  t2478 = -1.*t378*t2469;
  t2540 = t880*t2511;
  t2548 = t2478 + t2540;
  t2552 = t880*t2469;
  t2556 = t378*t2511;
  t2574 = t2552 + t2556;
  t1982 = -0.766044*t1158;
  t2012 = 0.642788*t1226;
  t2024 = t1982 + t2012;
  t1847 = -0.766044*t1821;
  t1948 = 0.642788*t1924;
  t1957 = t1847 + t1948;
  t2550 = t312*t2548;
  t2588 = t1076*t2574;
  t2594 = t2550 + t2588;
  t2607 = t1076*t2548;
  t2612 = -1.*t312*t2574;
  t2616 = t2607 + t2612;
  t1189 = 0.642788*t1158;
  t1295 = 0.766044*t1226;
  t1308 = t1189 + t1295;
  t2049 = 0.642788*t1821;
  t2051 = 0.766044*t1924;
  t2070 = t2049 + t2051;
  t1971 = t1308*t1957;
  t2095 = -1.*t2024*t2070;
  t178 = Cos(var1[8]);
  t2657 = -0.766044*t2594;
  t2660 = 0.642788*t2616;
  t2663 = t2657 + t2660;
  t2606 = 0.642788*t2594;
  t2624 = 0.766044*t2616;
  t2626 = t2606 + t2624;
  t2627 = t1317*t444*t2024;
  t2632 = t1355*t1957;
  t2638 = t2627 + t2632;
  t2649 = -1.*t2626*t2638;
  t2664 = t1317*t444*t1308;
  t2665 = t1355*t2070;
  t2668 = t2664 + t2665;
  t2704 = t2663*t2668;
  t2707 = t1971 + t2095;
  t2715 = -1.*t444*t1374*t2707;
  t2722 = 0. + t2649 + t2704 + t2715;
  t2723 = 1/t2722;
  t304 = Sin(var1[7]);
  t2803 = Sin(var1[8]);
  t2740 = Cos(var1[7]);
  t3172 = Cos(var1[9]);
  t3178 = Sin(var1[9]);
  t3155 = Cos(var1[10]);
  t3199 = t2740*t3172;
  t3203 = -1.*t304*t2803*t3178;
  t3206 = t3199 + t3203;
  t3175 = t3172*t304*t2803;
  t3180 = t2740*t3178;
  t3182 = t3175 + t3180;
  t3207 = Sin(var1[10]);
  t3149 = Cos(var1[11]);
  t3224 = t3155*t3206;
  t3230 = -1.*t3182*t3207;
  t3247 = t3224 + t3230;
  t3184 = t3155*t3182;
  t3219 = t3206*t3207;
  t3220 = t3184 + t3219;
  t3259 = Sin(var1[11]);
  t3129 = Cos(var1[12]);
  t3312 = t3149*t3247;
  t3337 = -1.*t3220*t3259;
  t3350 = t3312 + t3337;
  t3222 = t3149*t3220;
  t3292 = t3247*t3259;
  t3301 = t3222 + t3292;
  t3364 = Sin(var1[12]);
  t3124 = Cos(var1[13]);
  t3413 = t3129*t3350;
  t3414 = -1.*t3301*t3364;
  t3435 = t3413 + t3414;
  t3307 = t3129*t3301;
  t3382 = t3350*t3364;
  t3389 = t3307 + t3382;
  t3439 = Sin(var1[13]);
  t2145 = 0. + t1971 + t2095;
  t3520 = -1.*t3172*t304;
  t3524 = -1.*t2740*t2803*t3178;
  t3529 = t3520 + t3524;
  t3500 = t2740*t3172*t2803;
  t3505 = -1.*t304*t3178;
  t3513 = t3500 + t3505;
  t3541 = t3155*t3529;
  t3549 = -1.*t3513*t3207;
  t3554 = t3541 + t3549;
  t3517 = t3155*t3513;
  t3531 = t3529*t3207;
  t3532 = t3517 + t3531;
  t3563 = t3149*t3554;
  t3579 = -1.*t3532*t3259;
  t3583 = t3563 + t3579;
  t3536 = t3149*t3532;
  t3555 = t3554*t3259;
  t3561 = t3536 + t3555;
  t3611 = t3129*t3583;
  t3614 = -1.*t3561*t3364;
  t3620 = t3611 + t3614;
  t3562 = t3129*t3561;
  t3592 = t3583*t3364;
  t3603 = t3562 + t3592;
  t2750 = -1.*t1308*t2663;
  t2766 = t2024*t2626;
  t2782 = 0. + t2750 + t2766;
  t3693 = -1.*t178*t3155*t3178;
  t3694 = -1.*t178*t3172*t3207;
  t3696 = t3693 + t3694;
  t3659 = t178*t3172*t3155;
  t3663 = -1.*t178*t3178*t3207;
  t3671 = t3659 + t3663;
  t3718 = t3149*t3696;
  t3720 = -1.*t3671*t3259;
  t3748 = t3718 + t3720;
  t3687 = t3149*t3671;
  t3700 = t3696*t3259;
  t3702 = t3687 + t3700;
  t3757 = t3129*t3748;
  t3759 = -1.*t3702*t3364;
  t3761 = t3757 + t3759;
  t3710 = t3129*t3702;
  t3749 = t3748*t3364;
  t3750 = t3710 + t3749;
  t2822 = t2070*t2663;
  t2848 = -1.*t1957*t2626;
  t2870 = 0. + t2822 + t2848;
  t3411 = t3124*t3389;
  t3457 = t3435*t3439;
  t3460 = t3411 + t3457;
  t3461 = 0.642788*t3460;
  t3464 = t3124*t3435;
  t3471 = -1.*t3389*t3439;
  t3472 = t3464 + t3471;
  t3483 = 0.766044*t3472;
  t3485 = t3461 + t3483;
  t2907 = -1.*t1317*t444*t2024;
  t2911 = -1.*t1355*t1957;
  t2918 = 0. + t2907 + t2911;
  t3753 = t3124*t3750;
  t3771 = t3761*t3439;
  t3791 = t3753 + t3771;
  t3796 = 0.642788*t3791;
  t3809 = t3124*t3761;
  t3810 = -1.*t3750*t3439;
  t3811 = t3809 + t3810;
  t3824 = 0.766044*t3811;
  t3834 = t3796 + t3824;
  t2923 = -1.*t444*t1374*t1957;
  t2927 = t1317*t444*t2663;
  t2943 = 0. + t2923 + t2927;
  t3605 = t3124*t3603;
  t3627 = t3620*t3439;
  t3629 = t3605 + t3627;
  t3632 = 0.642788*t3629;
  t3636 = t3124*t3620;
  t3638 = -1.*t3603*t3439;
  t3639 = t3636 + t3638;
  t3649 = 0.766044*t3639;
  t3651 = t3632 + t3649;
  t2962 = t444*t1374*t2024;
  t2963 = t1355*t2663;
  t2970 = 0. + t2962 + t2963;
  t2982 = 0. + t2664 + t2665;
  t2996 = t444*t1374*t2070;
  t3000 = -1.*t1317*t444*t2626;
  t3023 = 0. + t2996 + t3000;
  t3075 = -1.*t444*t1374*t1308;
  t3086 = -1.*t1355*t2626;
  t3087 = 0. + t3075 + t3086;
  t3887 = -0.766044*t3460;
  t3888 = 0.642788*t3472;
  t3890 = t3887 + t3888;
  t3916 = -0.766044*t3791;
  t3917 = 0.642788*t3811;
  t3925 = t3916 + t3917;
  t3902 = -0.766044*t3629;
  t3905 = 0.642788*t3639;
  t3906 = t3902 + t3905;
  p_output1[0]=0. - 1.*t178*t2723*t2740*t2782 + t2723*t2803*t2870 - 1.*t178*t2145*t2723*t304;
  p_output1[1]=0. + t2723*t2803*t2943 - 1.*t178*t2723*t2740*t2970 - 1.*t178*t2723*t2918*t304;
  p_output1[2]=0. + t2723*t2803*t3023 - 1.*t178*t2723*t2982*t304 - 1.*t178*t2723*t2740*t3087;
  p_output1[3]=0. + t2145*t2723*t3485 + t2723*t2782*t3651 + t2723*t2870*t3834;
  p_output1[4]=0. + t2723*t2918*t3485 + t2723*t2970*t3651 + t2723*t2943*t3834;
  p_output1[5]=0. + t2723*t2982*t3485 + t2723*t3087*t3651 + t2723*t3023*t3834;
  p_output1[6]=0. + t2145*t2723*t3890 + t2723*t2782*t3906 + t2723*t2870*t3925;
  p_output1[7]=0. + t2723*t2918*t3890 + t2723*t2970*t3906 + t2723*t2943*t3925;
  p_output1[8]=0. + t2723*t2982*t3890 + t2723*t3087*t3906 + t2723*t3023*t3925;
}



void R_LeftToeBottom_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
