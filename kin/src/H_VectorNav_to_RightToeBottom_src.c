/*
 * Automatically Generated from Mathematica.
 * Wed 23 Oct 2019 10:25:57 GMT-07:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_VectorNav_to_RightToeBottom_src.h"

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
  double t96;
  double t227;
  double t235;
  double t206;
  double t246;
  double t195;
  double t262;
  double t264;
  double t266;
  double t231;
  double t247;
  double t250;
  double t281;
  double t189;
  double t325;
  double t329;
  double t333;
  double t255;
  double t305;
  double t313;
  double t337;
  double t174;
  double t380;
  double t388;
  double t390;
  double t323;
  double t355;
  double t375;
  double t405;
  double t76;
  double t67;
  double t142;
  double t474;
  double t477;
  double t478;
  double t447;
  double t450;
  double t458;
  double t500;
  double t506;
  double t507;
  double t469;
  double t487;
  double t490;
  double t541;
  double t542;
  double t552;
  double t495;
  double t522;
  double t523;
  double t564;
  double t569;
  double t573;
  double t532;
  double t553;
  double t559;
  double t649;
  double t657;
  double t662;
  double t628;
  double t637;
  double t638;
  double t672;
  double t677;
  double t680;
  double t645;
  double t669;
  double t670;
  double t698;
  double t707;
  double t715;
  double t671;
  double t684;
  double t693;
  double t728;
  double t733;
  double t740;
  double t696;
  double t716;
  double t726;
  double t377;
  double t409;
  double t415;
  double t428;
  double t432;
  double t434;
  double t562;
  double t576;
  double t577;
  double t588;
  double t590;
  double t605;
  double t727;
  double t744;
  double t746;
  double t767;
  double t771;
  double t779;
  double t858;
  double t864;
  double t888;
  double t891;
  double t924;
  double t931;
  double t967;
  double t968;
  double t832;
  double t839;
  double t843;
  double t846;
  double t852;
  double t853;
  double t856;
  double t870;
  double t872;
  double t876;
  double t880;
  double t881;
  double t883;
  double t896;
  double t898;
  double t901;
  double t907;
  double t909;
  double t912;
  double t933;
  double t935;
  double t936;
  double t943;
  double t947;
  double t952;
  double t969;
  double t971;
  double t974;
  double t987;
  double t992;
  double t997;
  double t1022;
  double t1026;
  double t1031;
  double t1045;
  double t1046;
  double t1050;
  t96 = Cos(var1[8]);
  t227 = Cos(var1[10]);
  t235 = Sin(var1[9]);
  t206 = Cos(var1[9]);
  t246 = Sin(var1[10]);
  t195 = Cos(var1[11]);
  t262 = -1.*t96*t227*t235;
  t264 = -1.*t96*t206*t246;
  t266 = t262 + t264;
  t231 = t96*t206*t227;
  t247 = -1.*t96*t235*t246;
  t250 = t231 + t247;
  t281 = Sin(var1[11]);
  t189 = Cos(var1[12]);
  t325 = t195*t266;
  t329 = -1.*t250*t281;
  t333 = t325 + t329;
  t255 = t195*t250;
  t305 = t266*t281;
  t313 = t255 + t305;
  t337 = Sin(var1[12]);
  t174 = Cos(var1[13]);
  t380 = t189*t333;
  t388 = -1.*t313*t337;
  t390 = t380 + t388;
  t323 = t189*t313;
  t355 = t333*t337;
  t375 = t323 + t355;
  t405 = Sin(var1[13]);
  t76 = Cos(var1[7]);
  t67 = Sin(var1[8]);
  t142 = Sin(var1[7]);
  t474 = -1.*t206*t142;
  t477 = -1.*t76*t67*t235;
  t478 = t474 + t477;
  t447 = t76*t206*t67;
  t450 = -1.*t142*t235;
  t458 = t447 + t450;
  t500 = t227*t478;
  t506 = -1.*t458*t246;
  t507 = t500 + t506;
  t469 = t227*t458;
  t487 = t478*t246;
  t490 = t469 + t487;
  t541 = t195*t507;
  t542 = -1.*t490*t281;
  t552 = t541 + t542;
  t495 = t195*t490;
  t522 = t507*t281;
  t523 = t495 + t522;
  t564 = t189*t552;
  t569 = -1.*t523*t337;
  t573 = t564 + t569;
  t532 = t189*t523;
  t553 = t552*t337;
  t559 = t532 + t553;
  t649 = t76*t206;
  t657 = -1.*t142*t67*t235;
  t662 = t649 + t657;
  t628 = t206*t142*t67;
  t637 = t76*t235;
  t638 = t628 + t637;
  t672 = t227*t662;
  t677 = -1.*t638*t246;
  t680 = t672 + t677;
  t645 = t227*t638;
  t669 = t662*t246;
  t670 = t645 + t669;
  t698 = t195*t680;
  t707 = -1.*t670*t281;
  t715 = t698 + t707;
  t671 = t195*t670;
  t684 = t680*t281;
  t693 = t671 + t684;
  t728 = t189*t715;
  t733 = -1.*t693*t337;
  t740 = t728 + t733;
  t696 = t189*t693;
  t716 = t715*t337;
  t726 = t696 + t716;
  t377 = t174*t375;
  t409 = t390*t405;
  t415 = t377 + t409;
  t428 = t174*t390;
  t432 = -1.*t375*t405;
  t434 = t428 + t432;
  t562 = t174*t559;
  t576 = t573*t405;
  t577 = t562 + t576;
  t588 = t174*t573;
  t590 = -1.*t559*t405;
  t605 = t588 + t590;
  t727 = t174*t726;
  t744 = t740*t405;
  t746 = t727 + t744;
  t767 = t174*t740;
  t771 = -1.*t726*t405;
  t779 = t767 + t771;
  t858 = -1.*t227;
  t864 = 1. + t858;
  t888 = -1.*t195;
  t891 = 1. + t888;
  t924 = -1.*t189;
  t931 = 1. + t924;
  t967 = -1.*t174;
  t968 = 1. + t967;
  t832 = -1.*t96;
  t839 = 1. + t832;
  t843 = -1.*t206;
  t846 = 1. + t843;
  t852 = -0.049*t846;
  t853 = -0.09*t235;
  t856 = 0. + t852 + t853;
  t870 = -0.049*t864;
  t872 = -0.21*t246;
  t876 = 0. + t870 + t872;
  t880 = -0.21*t864;
  t881 = 0.049*t246;
  t883 = 0. + t880 + t881;
  t896 = -0.0016*t891;
  t898 = -0.2707*t281;
  t901 = 0. + t896 + t898;
  t907 = -0.2707*t891;
  t909 = 0.0016*t281;
  t912 = 0. + t907 + t909;
  t933 = 0.0184*t931;
  t935 = -0.7055*t337;
  t936 = 0. + t933 + t935;
  t943 = -0.7055*t931;
  t947 = -0.0184*t337;
  t952 = 0. + t943 + t947;
  t969 = -0.0216*t968;
  t971 = -1.1135*t405;
  t974 = 0. + t969 + t971;
  t987 = -1.1135*t968;
  t992 = 0.0216*t405;
  t997 = 0. + t987 + t992;
  t1022 = -0.135*t839;
  t1026 = 0.049*t67;
  t1031 = 0. + t1022 + t1026;
  t1045 = -0.09*t846;
  t1046 = 0.049*t235;
  t1050 = 0. + t1045 + t1046;
  p_output1[0]=0. + t67;
  p_output1[1]=0. - 1.*t76*t96;
  p_output1[2]=0. - 1.*t142*t96;
  p_output1[3]=0.;
  p_output1[4]=0. + 0.642788*t415 + 0.766044*t434;
  p_output1[5]=0. + 0.642788*t577 + 0.766044*t605;
  p_output1[6]=0. + 0.642788*t746 + 0.766044*t779;
  p_output1[7]=0.;
  p_output1[8]=0. - 0.766044*t415 + 0.642788*t434;
  p_output1[9]=0. - 0.766044*t577 + 0.642788*t605;
  p_output1[10]=0. - 0.766044*t746 + 0.642788*t779;
  p_output1[11]=0.;
  p_output1[12]=-0.03155 + 0.0306*t415 - 1.1312*t434 - 0.004500000000000004*t67 - 0.049*t839 + t250*t901 + t266*t912 + t313*t936 + t333*t952 + t856*t96 + t206*t876*t96 - 1.*t235*t883*t96 + t375*t974 + t390*t997;
  p_output1[13]=0. - 1.*t1050*t142 + 0.0306*t577 - 1.1312*t605 - 0.135*(1. - 1.*t76) + t1031*t76 + t67*t76*t856 + t458*t876 + t478*t883 + t490*t901 + t507*t912 + t523*t936 + t552*t952 - 0.1305*t76*t96 + t559*t974 + t573*t997;
  p_output1[14]=0.07996 + 0.135*t142 + t1031*t142 + 0.0306*t746 + t1050*t76 - 1.1312*t779 + t142*t67*t856 + t638*t876 + t662*t883 + t670*t901 + t680*t912 + t693*t936 + t715*t952 - 0.1305*t142*t96 + t726*t974 + t740*t997;
  p_output1[15]=1.;
}



void H_VectorNav_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
