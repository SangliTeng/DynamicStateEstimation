/*
 * Automatically Generated from Mathematica.
 * Wed 23 Oct 2019 10:36:49 GMT-07:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jws_LeftToeBottom_to_RightToeBottom_src.h"

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
  double t356;
  double t478;
  double t255;
  double t417;
  double t483;
  double t513;
  double t475;
  double t485;
  double t496;
  double t210;
  double t540;
  double t561;
  double t638;
  double t729;
  double t509;
  double t681;
  double t690;
  double t196;
  double t733;
  double t741;
  double t748;
  double t783;
  double t720;
  double t749;
  double t750;
  double t88;
  double t784;
  double t788;
  double t807;
  double t938;
  double t756;
  double t821;
  double t860;
  double t64;
  double t960;
  double t963;
  double t970;
  double t1149;
  double t1157;
  double t1179;
  double t1212;
  double t1226;
  double t1239;
  double t1191;
  double t1244;
  double t1254;
  double t1269;
  double t1270;
  double t1286;
  double t1256;
  double t1293;
  double t1304;
  double t1321;
  double t1453;
  double t1503;
  double t1305;
  double t1533;
  double t1562;
  double t1624;
  double t1639;
  double t1667;
  double t885;
  double t977;
  double t1014;
  double t1084;
  double t1109;
  double t1114;
  double t1602;
  double t1675;
  double t1676;
  double t1690;
  double t1724;
  double t1727;
  double t1796;
  double t1817;
  double t1853;
  double t1894;
  double t1900;
  double t1915;
  double t1916;
  double t1973;
  double t1977;
  double t1987;
  double t1958;
  double t2035;
  double t2085;
  double t2097;
  double t2152;
  double t2182;
  double t2091;
  double t2188;
  double t2189;
  double t2227;
  double t2229;
  double t2246;
  double t1779;
  double t1789;
  double t1794;
  double t1684;
  double t1728;
  double t1752;
  double t2223;
  double t2255;
  double t2256;
  double t2293;
  double t2296;
  double t2329;
  double t1032;
  double t1121;
  double t1136;
  double t2382;
  double t2383;
  double t2403;
  double t2261;
  double t2333;
  double t2336;
  double t2339;
  double t2367;
  double t2374;
  double t2380;
  double t2415;
  double t2422;
  double t2423;
  double t2431;
  double t2435;
  double t2440;
  double t2442;
  double t2445;
  double t2450;
  double t2454;
  double t2544;
  double t2550;
  double t2562;
  double t2558;
  double t2568;
  double t2570;
  double t2586;
  double t1762;
  double t1867;
  double t1891;
  double t2786;
  double t2788;
  double t2654;
  double t2660;
  double t2661;
  double t2820;
  double t2831;
  double t2468;
  double t2472;
  double t2482;
  double t2795;
  double t2804;
  double t2693;
  double t2694;
  double t2697;
  double t2755;
  double t2519;
  double t2524;
  double t2531;
  double t2770;
  double t2773;
  double t2777;
  double t2792;
  double t2811;
  double t2839;
  double t2863;
  double t2865;
  double t2867;
  double t2869;
  double t2886;
  double t2890;
  double t2937;
  double t2947;
  double t2970;
  double t3065;
  double t3093;
  double t3107;
  double t3132;
  double t3145;
  double t3258;
  double t3259;
  double t3261;
  double t3290;
  double t3291;
  double t3279;
  double t3288;
  double t3266;
  double t3289;
  double t3299;
  double t3314;
  double t3320;
  double t3329;
  double t3343;
  double t3347;
  double t3373;
  double t3375;
  double t3390;
  double t3391;
  t356 = Cos(var1[2]);
  t478 = Sin(var1[0]);
  t255 = Cos(var1[0]);
  t417 = Sin(var1[1]);
  t483 = Sin(var1[2]);
  t513 = Cos(var1[3]);
  t475 = t255*t356*t417;
  t485 = -1.*t478*t483;
  t496 = t475 + t485;
  t210 = Sin(var1[3]);
  t540 = -1.*t356*t478;
  t561 = -1.*t255*t417*t483;
  t638 = t540 + t561;
  t729 = Cos(var1[4]);
  t509 = -1.*t210*t496;
  t681 = t513*t638;
  t690 = t509 + t681;
  t196 = Sin(var1[4]);
  t733 = t513*t496;
  t741 = t210*t638;
  t748 = t733 + t741;
  t783 = Cos(var1[5]);
  t720 = t196*t690;
  t749 = t729*t748;
  t750 = t720 + t749;
  t88 = Sin(var1[5]);
  t784 = t729*t690;
  t788 = -1.*t196*t748;
  t807 = t784 + t788;
  t938 = Cos(var1[6]);
  t756 = -1.*t88*t750;
  t821 = t783*t807;
  t860 = t756 + t821;
  t64 = Sin(var1[6]);
  t960 = t783*t750;
  t963 = t88*t807;
  t970 = t960 + t963;
  t1149 = t356*t478*t417;
  t1157 = t255*t483;
  t1179 = t1149 + t1157;
  t1212 = t255*t356;
  t1226 = -1.*t478*t417*t483;
  t1239 = t1212 + t1226;
  t1191 = -1.*t210*t1179;
  t1244 = t513*t1239;
  t1254 = t1191 + t1244;
  t1269 = t513*t1179;
  t1270 = t210*t1239;
  t1286 = t1269 + t1270;
  t1256 = t196*t1254;
  t1293 = t729*t1286;
  t1304 = t1256 + t1293;
  t1321 = t729*t1254;
  t1453 = -1.*t196*t1286;
  t1503 = t1321 + t1453;
  t1305 = -1.*t88*t1304;
  t1533 = t783*t1503;
  t1562 = t1305 + t1533;
  t1624 = t783*t1304;
  t1639 = t88*t1503;
  t1667 = t1624 + t1639;
  t885 = t64*t860;
  t977 = t938*t970;
  t1014 = t885 + t977;
  t1084 = t938*t860;
  t1109 = -1.*t64*t970;
  t1114 = t1084 + t1109;
  t1602 = t64*t1562;
  t1675 = t938*t1667;
  t1676 = t1602 + t1675;
  t1690 = t938*t1562;
  t1724 = -1.*t64*t1667;
  t1727 = t1690 + t1724;
  t1796 = 0.642788*t1676;
  t1817 = 0.766044*t1727;
  t1853 = t1796 + t1817;
  t1894 = Cos(var1[1]);
  t1900 = -1.*t1894*t356*t210;
  t1915 = -1.*t513*t1894*t483;
  t1916 = t1900 + t1915;
  t1973 = t513*t1894*t356;
  t1977 = -1.*t1894*t210*t483;
  t1987 = t1973 + t1977;
  t1958 = t196*t1916;
  t2035 = t729*t1987;
  t2085 = t1958 + t2035;
  t2097 = t729*t1916;
  t2152 = -1.*t196*t1987;
  t2182 = t2097 + t2152;
  t2091 = -1.*t88*t2085;
  t2188 = t783*t2182;
  t2189 = t2091 + t2188;
  t2227 = t783*t2085;
  t2229 = t88*t2182;
  t2246 = t2227 + t2229;
  t1779 = -0.766044*t1014;
  t1789 = 0.642788*t1114;
  t1794 = t1779 + t1789;
  t1684 = -0.766044*t1676;
  t1728 = 0.642788*t1727;
  t1752 = t1684 + t1728;
  t2223 = t64*t2189;
  t2255 = t938*t2246;
  t2256 = t2223 + t2255;
  t2293 = t938*t2189;
  t2296 = -1.*t64*t2246;
  t2329 = t2293 + t2296;
  t1032 = 0.642788*t1014;
  t1121 = 0.766044*t1114;
  t1136 = t1032 + t1121;
  t2382 = 0.642788*t2256;
  t2383 = 0.766044*t2329;
  t2403 = t2382 + t2383;
  t2261 = -0.766044*t2256;
  t2333 = 0.642788*t2329;
  t2336 = t2261 + t2333;
  t2339 = t255*t1894*t2336;
  t2367 = t417*t1794;
  t2374 = t2339 + t2367;
  t2380 = -1.*t1853*t2374;
  t2415 = t255*t1894*t2403;
  t2422 = t417*t1136;
  t2423 = t2415 + t2422;
  t2431 = t1752*t2423;
  t2435 = t2403*t1794;
  t2440 = -1.*t2336*t1136;
  t2442 = t2435 + t2440;
  t2445 = -1.*t1894*t478*t2442;
  t2450 = 0. + t2380 + t2431 + t2445;
  t2454 = 1/t2450;
  t2544 = -1.*t255;
  t2550 = 0. + t2544;
  t2562 = 0. + t478;
  t2558 = 0. + t2435 + t2440;
  t2568 = -1.*t2403*t1752;
  t2570 = t2336*t1853;
  t2586 = 0. + t2568 + t2570;
  t1762 = t1136*t1752;
  t1867 = -1.*t1794*t1853;
  t1891 = 0. + t1762 + t1867;
  t2786 = t1894*t478;
  t2788 = 0. + t2786;
  t2654 = -1.*t255*t1894*t2336;
  t2660 = -1.*t417*t1794;
  t2661 = 0. + t2654 + t2660;
  t2820 = -1.*t417;
  t2831 = 0. + t2820;
  t2468 = -1.*t1894*t478*t1794;
  t2472 = t255*t1894*t1752;
  t2482 = 0. + t2468 + t2472;
  t2795 = t255*t1894;
  t2804 = 0. + t2795;
  t2693 = t1894*t478*t2336;
  t2694 = t417*t1752;
  t2697 = 0. + t2693 + t2694;
  t2755 = 0. + t2415 + t2422;
  t2519 = t1894*t478*t1136;
  t2524 = -1.*t255*t1894*t1853;
  t2531 = 0. + t2519 + t2524;
  t2770 = -1.*t1894*t478*t2403;
  t2773 = -1.*t417*t1853;
  t2777 = 0. + t2770 + t2773;
  t2792 = t2788*t2558*t2454;
  t2811 = t2804*t2586*t2454;
  t2839 = t2831*t1891*t2454;
  t2863 = t2792 + t2811 + t2839;
  t2865 = t2788*t2661*t2454;
  t2867 = t2831*t2482*t2454;
  t2869 = t2804*t2697*t2454;
  t2886 = t2865 + t2867 + t2869;
  t2890 = t2788*t2755*t2454;
  t2937 = t2831*t2531*t2454;
  t2947 = t2804*t2777*t2454;
  t2970 = t2890 + t2937 + t2947;
  t3065 = Cos(var1[7]);
  t3093 = 0. + t3065;
  t3107 = Sin(var1[7]);
  t3132 = -1.*t3107;
  t3145 = 0. + t3132;
  t3258 = Cos(var1[8]);
  t3259 = -1.*t3258*t3107;
  t3261 = 0. + t3259;
  t3290 = Sin(var1[8]);
  t3291 = 0. + t3290;
  t3279 = -1.*t3065*t3258;
  t3288 = 0. + t3279;
  t3266 = t3261*t2558*t2454;
  t3289 = t3288*t2586*t2454;
  t3299 = t3291*t1891*t2454;
  t3314 = t3266 + t3289 + t3299;
  t3320 = t3261*t2661*t2454;
  t3329 = t3291*t2482*t2454;
  t3343 = t3288*t2697*t2454;
  t3347 = t3320 + t3329 + t3343;
  t3373 = t3261*t2755*t2454;
  t3375 = t3291*t2531*t2454;
  t3390 = t3288*t2777*t2454;
  t3391 = t3373 + t3375 + t3390;
  p_output1[0]=0. - 1.*t1891*t2454;
  p_output1[1]=0. - 1.*t2454*t2482;
  p_output1[2]=0. - 1.*t2454*t2531;
  p_output1[3]=0. + t2454*t2550*t2558 + t2454*t2562*t2586;
  p_output1[4]=0. + t2454*t2550*t2661 + t2454*t2562*t2697;
  p_output1[5]=0. + t2454*t2550*t2755 + t2454*t2562*t2777;
  p_output1[6]=t2863;
  p_output1[7]=t2886;
  p_output1[8]=t2970;
  p_output1[9]=t2863;
  p_output1[10]=t2886;
  p_output1[11]=t2970;
  p_output1[12]=t2863;
  p_output1[13]=t2886;
  p_output1[14]=t2970;
  p_output1[15]=t2863;
  p_output1[16]=t2886;
  p_output1[17]=t2970;
  p_output1[18]=t2863;
  p_output1[19]=t2886;
  p_output1[20]=t2970;
  p_output1[21]=0. + t1891*t2454;
  p_output1[22]=0. + t2454*t2482;
  p_output1[23]=0. + t2454*t2531;
  p_output1[24]=0. + t2454*t2558*t3093 + t2454*t2586*t3145;
  p_output1[25]=0. + t2454*t2661*t3093 + t2454*t2697*t3145;
  p_output1[26]=0. + t2454*t2755*t3093 + t2454*t2777*t3145;
  p_output1[27]=t3314;
  p_output1[28]=t3347;
  p_output1[29]=t3391;
  p_output1[30]=t3314;
  p_output1[31]=t3347;
  p_output1[32]=t3391;
  p_output1[33]=t3314;
  p_output1[34]=t3347;
  p_output1[35]=t3391;
  p_output1[36]=t3314;
  p_output1[37]=t3347;
  p_output1[38]=t3391;
  p_output1[39]=t3314;
  p_output1[40]=t3347;
  p_output1[41]=t3391;
}



void Jws_LeftToeBottom_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
