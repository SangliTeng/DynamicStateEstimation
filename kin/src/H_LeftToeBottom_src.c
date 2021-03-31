/*
 * Automatically Generated from Mathematica.
 * Wed 12 Feb 2020 15:28:53 GMT-08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_LeftToeBottom_src.h"

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
  double t589;
  double t230;
  double t593;
  double t456;
  double t611;
  double t15;
  double t56;
  double t807;
  double t849;
  double t901;
  double t561;
  double t649;
  double t681;
  double t704;
  double t727;
  double t737;
  double t766;
  double t809;
  double t819;
  double t1583;
  double t1655;
  double t1673;
  double t1680;
  double t1589;
  double t1614;
  double t1635;
  double t1728;
  double t1802;
  double t1638;
  double t1756;
  double t1767;
  double t1561;
  double t1821;
  double t1879;
  double t1889;
  double t1940;
  double t1788;
  double t1893;
  double t1900;
  double t1549;
  double t1964;
  double t1987;
  double t2015;
  double t2075;
  double t1914;
  double t2035;
  double t2037;
  double t1544;
  double t2080;
  double t2087;
  double t2088;
  double t2154;
  double t2063;
  double t2113;
  double t2128;
  double t1538;
  double t2160;
  double t2162;
  double t2171;
  double t942;
  double t957;
  double t971;
  double t1048;
  double t1049;
  double t1052;
  double t1194;
  double t1196;
  double t1233;
  double t2417;
  double t2445;
  double t2472;
  double t2303;
  double t2345;
  double t2372;
  double t2407;
  double t2478;
  double t2488;
  double t2491;
  double t2496;
  double t2512;
  double t2490;
  double t2531;
  double t2542;
  double t2567;
  double t2575;
  double t2583;
  double t2563;
  double t2586;
  double t2595;
  double t2601;
  double t2603;
  double t2617;
  double t2597;
  double t2628;
  double t2648;
  double t2686;
  double t2692;
  double t2706;
  double t1450;
  double t1459;
  double t1491;
  double t2845;
  double t2861;
  double t2862;
  double t2799;
  double t2800;
  double t2823;
  double t2840;
  double t2926;
  double t2936;
  double t2944;
  double t2953;
  double t2963;
  double t2941;
  double t2970;
  double t2972;
  double t2986;
  double t3050;
  double t3066;
  double t2982;
  double t3091;
  double t3093;
  double t3170;
  double t3175;
  double t3183;
  double t3127;
  double t3212;
  double t3218;
  double t3288;
  double t3293;
  double t3303;
  double t2147;
  double t2172;
  double t2175;
  double t2213;
  double t2228;
  double t2254;
  double t2660;
  double t2708;
  double t2710;
  double t2743;
  double t2750;
  double t2758;
  double t3283;
  double t3306;
  double t3308;
  double t3319;
  double t3394;
  double t3433;
  double t3770;
  double t3780;
  double t3924;
  double t3928;
  double t3994;
  double t3998;
  double t4022;
  double t4031;
  double t4097;
  double t4107;
  double t4144;
  double t4149;
  double t3628;
  double t3647;
  double t3654;
  double t3664;
  double t3673;
  double t3681;
  double t3785;
  double t3802;
  double t3811;
  double t3827;
  double t3858;
  double t3898;
  double t3934;
  double t3937;
  double t3946;
  double t3959;
  double t3968;
  double t3981;
  double t3999;
  double t4003;
  double t4006;
  double t4011;
  double t4015;
  double t4017;
  double t4034;
  double t4038;
  double t4042;
  double t4073;
  double t4081;
  double t4083;
  double t4108;
  double t4121;
  double t4122;
  double t4135;
  double t4136;
  double t4140;
  double t4166;
  double t4174;
  double t4186;
  double t4199;
  double t4206;
  double t4219;
  t589 = Cos(var1[3]);
  t230 = Cos(var1[5]);
  t593 = Sin(var1[4]);
  t456 = Sin(var1[3]);
  t611 = Sin(var1[5]);
  t15 = Cos(var1[7]);
  t56 = Cos(var1[6]);
  t807 = Sin(var1[6]);
  t849 = Cos(var1[4]);
  t901 = Sin(var1[7]);
  t561 = -1.*t230*t456;
  t649 = t589*t593*t611;
  t681 = t561 + t649;
  t704 = t56*t681;
  t727 = t589*t230*t593;
  t737 = t456*t611;
  t766 = t727 + t737;
  t809 = t766*t807;
  t819 = t704 + t809;
  t1583 = Cos(var1[8]);
  t1655 = t56*t766;
  t1673 = -1.*t681*t807;
  t1680 = t1655 + t1673;
  t1589 = t589*t849*t15;
  t1614 = t819*t901;
  t1635 = t1589 + t1614;
  t1728 = Sin(var1[8]);
  t1802 = Cos(var1[9]);
  t1638 = t1583*t1635;
  t1756 = t1680*t1728;
  t1767 = t1638 + t1756;
  t1561 = Sin(var1[9]);
  t1821 = t1583*t1680;
  t1879 = -1.*t1635*t1728;
  t1889 = t1821 + t1879;
  t1940 = Cos(var1[10]);
  t1788 = -1.*t1561*t1767;
  t1893 = t1802*t1889;
  t1900 = t1788 + t1893;
  t1549 = Sin(var1[10]);
  t1964 = t1802*t1767;
  t1987 = t1561*t1889;
  t2015 = t1964 + t1987;
  t2075 = Cos(var1[11]);
  t1914 = t1549*t1900;
  t2035 = t1940*t2015;
  t2037 = t1914 + t2035;
  t1544 = Sin(var1[11]);
  t2080 = t1940*t1900;
  t2087 = -1.*t1549*t2015;
  t2088 = t2080 + t2087;
  t2154 = Cos(var1[12]);
  t2063 = -1.*t1544*t2037;
  t2113 = t2075*t2088;
  t2128 = t2063 + t2113;
  t1538 = Sin(var1[12]);
  t2160 = t2075*t2037;
  t2162 = t1544*t2088;
  t2171 = t2160 + t2162;
  t942 = t589*t230;
  t957 = t456*t593*t611;
  t971 = t942 + t957;
  t1048 = t56*t971;
  t1049 = t230*t456*t593;
  t1052 = -1.*t589*t611;
  t1194 = t1049 + t1052;
  t1196 = t1194*t807;
  t1233 = t1048 + t1196;
  t2417 = t56*t1194;
  t2445 = -1.*t971*t807;
  t2472 = t2417 + t2445;
  t2303 = t849*t15*t456;
  t2345 = t1233*t901;
  t2372 = t2303 + t2345;
  t2407 = t1583*t2372;
  t2478 = t2472*t1728;
  t2488 = t2407 + t2478;
  t2491 = t1583*t2472;
  t2496 = -1.*t2372*t1728;
  t2512 = t2491 + t2496;
  t2490 = -1.*t1561*t2488;
  t2531 = t1802*t2512;
  t2542 = t2490 + t2531;
  t2567 = t1802*t2488;
  t2575 = t1561*t2512;
  t2583 = t2567 + t2575;
  t2563 = t1549*t2542;
  t2586 = t1940*t2583;
  t2595 = t2563 + t2586;
  t2601 = t1940*t2542;
  t2603 = -1.*t1549*t2583;
  t2617 = t2601 + t2603;
  t2597 = -1.*t1544*t2595;
  t2628 = t2075*t2617;
  t2648 = t2597 + t2628;
  t2686 = t2075*t2595;
  t2692 = t1544*t2617;
  t2706 = t2686 + t2692;
  t1450 = t849*t56*t611;
  t1459 = t849*t230*t807;
  t1491 = t1450 + t1459;
  t2845 = t849*t230*t56;
  t2861 = -1.*t849*t611*t807;
  t2862 = t2845 + t2861;
  t2799 = -1.*t15*t593;
  t2800 = t1491*t901;
  t2823 = t2799 + t2800;
  t2840 = t1583*t2823;
  t2926 = t2862*t1728;
  t2936 = t2840 + t2926;
  t2944 = t1583*t2862;
  t2953 = -1.*t2823*t1728;
  t2963 = t2944 + t2953;
  t2941 = -1.*t1561*t2936;
  t2970 = t1802*t2963;
  t2972 = t2941 + t2970;
  t2986 = t1802*t2936;
  t3050 = t1561*t2963;
  t3066 = t2986 + t3050;
  t2982 = t1549*t2972;
  t3091 = t1940*t3066;
  t3093 = t2982 + t3091;
  t3170 = t1940*t2972;
  t3175 = -1.*t1549*t3066;
  t3183 = t3170 + t3175;
  t3127 = -1.*t1544*t3093;
  t3212 = t2075*t3183;
  t3218 = t3127 + t3212;
  t3288 = t2075*t3093;
  t3293 = t1544*t3183;
  t3303 = t3288 + t3293;
  t2147 = t1538*t2128;
  t2172 = t2154*t2171;
  t2175 = t2147 + t2172;
  t2213 = t2154*t2128;
  t2228 = -1.*t1538*t2171;
  t2254 = t2213 + t2228;
  t2660 = t1538*t2648;
  t2708 = t2154*t2706;
  t2710 = t2660 + t2708;
  t2743 = t2154*t2648;
  t2750 = -1.*t1538*t2706;
  t2758 = t2743 + t2750;
  t3283 = t1538*t3218;
  t3306 = t2154*t3303;
  t3308 = t3283 + t3306;
  t3319 = t2154*t3218;
  t3394 = -1.*t1538*t3303;
  t3433 = t3319 + t3394;
  t3770 = -1.*t15;
  t3780 = 1. + t3770;
  t3924 = -1.*t1583;
  t3928 = 1. + t3924;
  t3994 = -1.*t1802;
  t3998 = 1. + t3994;
  t4022 = -1.*t1940;
  t4031 = 1. + t4022;
  t4097 = -1.*t2075;
  t4107 = 1. + t4097;
  t4144 = -1.*t2154;
  t4149 = 1. + t4144;
  t3628 = -1.*t56;
  t3647 = 1. + t3628;
  t3654 = 0.135*t3647;
  t3664 = 0. + t3654;
  t3673 = -0.135*t807;
  t3681 = 0. + t3673;
  t3785 = 0.135*t3780;
  t3802 = 0.049*t901;
  t3811 = 0. + t3785 + t3802;
  t3827 = -0.049*t3780;
  t3858 = 0.135*t901;
  t3898 = 0. + t3827 + t3858;
  t3934 = -0.049*t3928;
  t3937 = -0.09*t1728;
  t3946 = 0. + t3934 + t3937;
  t3959 = -0.09*t3928;
  t3968 = 0.049*t1728;
  t3981 = 0. + t3959 + t3968;
  t3999 = -0.049*t3998;
  t4003 = -0.21*t1561;
  t4006 = 0. + t3999 + t4003;
  t4011 = -0.21*t3998;
  t4015 = 0.049*t1561;
  t4017 = 0. + t4011 + t4015;
  t4034 = -0.2707*t4031;
  t4038 = 0.0016*t1549;
  t4042 = 0. + t4034 + t4038;
  t4073 = -0.0016*t4031;
  t4081 = -0.2707*t1549;
  t4083 = 0. + t4073 + t4081;
  t4108 = 0.0184*t4107;
  t4121 = -0.7055*t1544;
  t4122 = 0. + t4108 + t4121;
  t4135 = -0.7055*t4107;
  t4136 = -0.0184*t1544;
  t4140 = 0. + t4135 + t4136;
  t4166 = -1.1135*t4149;
  t4174 = 0.0216*t1538;
  t4186 = 0. + t4166 + t4174;
  t4199 = -0.0216*t4149;
  t4206 = -1.1135*t1538;
  t4219 = 0. + t4199 + t4206;
  p_output1[0]=-1.*t15*t819 + t589*t849*t901;
  p_output1[1]=-1.*t1233*t15 + t456*t849*t901;
  p_output1[2]=-1.*t1491*t15 - 1.*t593*t901;
  p_output1[3]=0.;
  p_output1[4]=0.642788*t2175 + 0.766044*t2254;
  p_output1[5]=0.642788*t2710 + 0.766044*t2758;
  p_output1[6]=0.642788*t3308 + 0.766044*t3433;
  p_output1[7]=0.;
  p_output1[8]=-0.766044*t2175 + 0.642788*t2254;
  p_output1[9]=-0.766044*t2710 + 0.642788*t2758;
  p_output1[10]=-0.766044*t3308 + 0.642788*t3433;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.0306*t2175 - 1.1312*t2254 + t1635*t3946 + t1680*t3981 + t1767*t4006 + t1889*t4017 + t1900*t4042 + t2015*t4083 + t2037*t4122 + t2088*t4140 + t2128*t4186 + t2171*t4219 + t3664*t681 + t3681*t766 + t3811*t819 + t3898*t589*t849 + 0.1305*(t15*t819 - 1.*t589*t849*t901) + var1[0];
  p_output1[13]=0. + 0.0306*t2710 - 1.1312*t2758 + t1194*t3681 + t1233*t3811 + t2372*t3946 + t2472*t3981 + t2488*t4006 + t2512*t4017 + t2542*t4042 + t2583*t4083 + t2595*t4122 + t2617*t4140 + t2648*t4186 + t2706*t4219 + t3898*t456*t849 + 0.1305*(t1233*t15 - 1.*t456*t849*t901) + t3664*t971 + var1[1];
  p_output1[14]=0. + 0.0306*t3308 - 1.1312*t3433 + t1491*t3811 + t2823*t3946 + t2862*t3981 + t2936*t4006 + t2963*t4017 + t2972*t4042 + t3066*t4083 + t3093*t4122 + t3183*t4140 + t3218*t4186 + t3303*t4219 - 1.*t3898*t593 + t230*t3681*t849 + t3664*t611*t849 + 0.1305*(t1491*t15 + t593*t901) + var1[2];
  p_output1[15]=1.;
}



void H_LeftToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
