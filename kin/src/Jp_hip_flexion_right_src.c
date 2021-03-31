/*
 * Automatically Generated from Mathematica.
 * Wed 12 Feb 2020 15:28:18 GMT-08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_hip_flexion_right_src.h"

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
  double t682;
  double t734;
  double t721;
  double t725;
  double t735;
  double t620;
  double t626;
  double t628;
  double t642;
  double t684;
  double t733;
  double t739;
  double t743;
  double t767;
  double t1015;
  double t1159;
  double t1161;
  double t537;
  double t1515;
  double t1560;
  double t1566;
  double t1617;
  double t1864;
  double t1879;
  double t1905;
  double t2066;
  double t2086;
  double t2098;
  double t2703;
  double t2738;
  double t2739;
  double t630;
  double t650;
  double t663;
  double t697;
  double t717;
  double t771;
  double t775;
  double t830;
  double t1009;
  double t1234;
  double t1265;
  double t1335;
  double t4127;
  double t4422;
  double t4444;
  double t4483;
  double t4513;
  double t4545;
  double t1883;
  double t1993;
  double t2006;
  double t4643;
  double t4659;
  double t4683;
  double t2386;
  double t2554;
  double t2697;
  double t4717;
  double t4880;
  double t4884;
  double t5230;
  double t5279;
  double t5502;
  double t5969;
  double t6282;
  double t6300;
  double t6546;
  double t6550;
  double t6558;
  double t7472;
  double t7528;
  double t7720;
  double t9266;
  double t9276;
  double t9280;
  double t9285;
  double t9296;
  double t9301;
  double t9348;
  double t9349;
  double t9351;
  double t9509;
  double t9511;
  double t9512;
  double t9515;
  double t9517;
  double t9519;
  double t9545;
  double t9557;
  double t9563;
  double t9608;
  double t9614;
  double t9620;
  double t9635;
  double t9638;
  double t9626;
  double t9627;
  double t9629;
  double t9663;
  double t9664;
  double t9666;
  double t9678;
  double t9680;
  double t9681;
  double t9671;
  double t9673;
  double t9729;
  double t9730;
  double t9731;
  double t9712;
  double t9722;
  double t9723;
  double t9771;
  double t9772;
  double t9801;
  double t9802;
  double t9803;
  double t9811;
  double t9815;
  double t9805;
  double t9806;
  double t9727;
  double t9733;
  double t9734;
  double t9735;
  double t9737;
  double t9738;
  double t9741;
  double t9742;
  double t9743;
  double t9745;
  double t9746;
  double t9748;
  double t5136;
  double t5159;
  double t5164;
  double t9840;
  double t9841;
  double t9844;
  double t9848;
  double t9849;
  double t9860;
  double t9864;
  double t9868;
  double t9870;
  double t9872;
  double t9873;
  double t9885;
  double t9886;
  double t9887;
  double t9889;
  double t9890;
  double t9891;
  double t5538;
  double t5544;
  double t5547;
  double t9902;
  double t9903;
  double t9905;
  double t9906;
  double t9908;
  double t9923;
  double t9924;
  double t9925;
  double t9945;
  double t9946;
  double t9947;
  t682 = Sin(var1[3]);
  t734 = Cos(var1[3]);
  t721 = Cos(var1[5]);
  t725 = Sin(var1[4]);
  t735 = Sin(var1[5]);
  t620 = Cos(var1[14]);
  t626 = -1.*t620;
  t628 = 1. + t626;
  t642 = Sin(var1[14]);
  t684 = Sin(var1[13]);
  t733 = -1.*t721*t682*t725;
  t739 = t734*t735;
  t743 = t733 + t739;
  t767 = Cos(var1[13]);
  t1015 = -1.*t734*t721;
  t1159 = -1.*t682*t725*t735;
  t1161 = t1015 + t1159;
  t537 = Cos(var1[4]);
  t1515 = t684*t743;
  t1560 = t767*t1161;
  t1566 = t1515 + t1560;
  t1617 = Cos(var1[15]);
  t1864 = -1.*t1617;
  t1879 = 1. + t1864;
  t1905 = Sin(var1[15]);
  t2066 = t767*t743;
  t2086 = -1.*t684*t1161;
  t2098 = t2066 + t2086;
  t2703 = -1.*t620*t537*t682;
  t2738 = t642*t1566;
  t2739 = t2703 + t2738;
  t630 = -0.049*t628;
  t650 = -0.135*t642;
  t663 = 0. + t630 + t650;
  t697 = 0.135*t684;
  t717 = 0. + t697;
  t771 = -1.*t767;
  t775 = 1. + t771;
  t830 = -0.135*t775;
  t1009 = 0. + t830;
  t1234 = -0.135*t628;
  t1265 = 0.049*t642;
  t1335 = 0. + t1234 + t1265;
  t4127 = t734*t721*t725;
  t4422 = t682*t735;
  t4444 = t4127 + t4422;
  t4483 = -1.*t721*t682;
  t4513 = t734*t725*t735;
  t4545 = t4483 + t4513;
  t1883 = -0.09*t1879;
  t1993 = 0.049*t1905;
  t2006 = 0. + t1883 + t1993;
  t4643 = t684*t4444;
  t4659 = t767*t4545;
  t4683 = t4643 + t4659;
  t2386 = -0.049*t1879;
  t2554 = -0.09*t1905;
  t2697 = 0. + t2386 + t2554;
  t4717 = t767*t4444;
  t4880 = -1.*t684*t4545;
  t4884 = t4717 + t4880;
  t5230 = t620*t734*t537;
  t5279 = t642*t4683;
  t5502 = t5230 + t5279;
  t5969 = t734*t537*t721*t684;
  t6282 = t767*t734*t537*t735;
  t6300 = t5969 + t6282;
  t6546 = t767*t734*t537*t721;
  t6550 = -1.*t734*t537*t684*t735;
  t6558 = t6546 + t6550;
  t7472 = -1.*t620*t734*t725;
  t7528 = t642*t6300;
  t7720 = t7472 + t7528;
  t9266 = t537*t721*t684*t682;
  t9276 = t767*t537*t682*t735;
  t9280 = t9266 + t9276;
  t9285 = t767*t537*t721*t682;
  t9296 = -1.*t537*t684*t682*t735;
  t9301 = t9285 + t9296;
  t9348 = -1.*t620*t682*t725;
  t9349 = t642*t9280;
  t9351 = t9348 + t9349;
  t9509 = -1.*t721*t684*t725;
  t9511 = -1.*t767*t725*t735;
  t9512 = t9509 + t9511;
  t9515 = -1.*t767*t721*t725;
  t9517 = t684*t725*t735;
  t9519 = t9515 + t9517;
  t9545 = -1.*t620*t537;
  t9557 = t642*t9512;
  t9563 = t9545 + t9557;
  t9608 = t721*t682;
  t9614 = -1.*t734*t725*t735;
  t9620 = t9608 + t9614;
  t9635 = t684*t9620;
  t9638 = t4717 + t9635;
  t9626 = -1.*t684*t4444;
  t9627 = t767*t9620;
  t9629 = t9626 + t9627;
  t9663 = t721*t682*t725;
  t9664 = -1.*t734*t735;
  t9666 = t9663 + t9664;
  t9678 = t767*t9666;
  t9680 = t684*t1161;
  t9681 = t9678 + t9680;
  t9671 = -1.*t684*t9666;
  t9673 = t9671 + t1560;
  t9729 = t767*t537*t721;
  t9730 = -1.*t537*t684*t735;
  t9731 = t9729 + t9730;
  t9712 = -1.*t537*t721*t684;
  t9722 = -1.*t767*t537*t735;
  t9723 = t9712 + t9722;
  t9771 = -1.*t767*t4545;
  t9772 = t9626 + t9771;
  t9801 = t734*t721;
  t9802 = t682*t725*t735;
  t9803 = t9801 + t9802;
  t9811 = -1.*t684*t9803;
  t9815 = t9678 + t9811;
  t9805 = -1.*t767*t9803;
  t9806 = t9671 + t9805;
  t9727 = t2006*t9723;
  t9733 = -0.135*t620*t9731;
  t9734 = t1335*t9731;
  t9735 = t642*t2697*t9731;
  t9737 = t1905*t9723;
  t9738 = t1617*t642*t9731;
  t9741 = t9737 + t9738;
  t9742 = -0.049*t9741;
  t9743 = t1617*t9723;
  t9745 = -1.*t642*t1905*t9731;
  t9746 = t9743 + t9745;
  t9748 = -0.09*t9746;
  t5136 = -1.*t734*t537*t642;
  t5159 = t620*t4683;
  t5164 = t5136 + t5159;
  t9840 = -0.135*t620;
  t9841 = -0.049*t642;
  t9844 = t9840 + t9841;
  t9848 = 0.049*t620;
  t9849 = t9848 + t650;
  t9860 = t684*t9666;
  t9864 = t767*t9803;
  t9868 = t9860 + t9864;
  t9870 = -1.*t537*t642*t682;
  t9872 = t620*t9868;
  t9873 = t9870 + t9872;
  t9885 = t537*t721*t684;
  t9886 = t767*t537*t735;
  t9887 = t9885 + t9886;
  t9889 = t642*t725;
  t9890 = t620*t9887;
  t9891 = t9889 + t9890;
  t5538 = t1617*t4884;
  t5544 = -1.*t1905*t5502;
  t5547 = t5538 + t5544;
  t9902 = 0.049*t1617;
  t9903 = t9902 + t2554;
  t9905 = -0.09*t1617;
  t9906 = -0.049*t1905;
  t9908 = t9905 + t9906;
  t9923 = t620*t537*t682;
  t9924 = t642*t9868;
  t9925 = t9923 + t9924;
  t9945 = -1.*t620*t725;
  t9946 = t642*t9887;
  t9947 = t9945 + t9946;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1009*t1161 + t1335*t1566 + t2006*t2098 + t2697*t2739 - 0.049*(t1905*t2098 + t1617*t2739) - 0.09*(t1617*t2098 - 1.*t1905*t2739) - 1.*t537*t663*t682 - 0.135*(t1566*t620 + t537*t642*t682) + t717*t743;
  p_output1[10]=t1009*t4545 + t1335*t4683 + t2006*t4884 - 0.135*t5164 + t2697*t5502 - 0.049*(t1905*t4884 + t1617*t5502) - 0.09*t5547 + t4444*t717 + t537*t663*t734;
  p_output1[11]=0;
  p_output1[12]=t1335*t6300 + t2006*t6558 + t537*t717*t721*t734 - 1.*t663*t725*t734 - 0.135*(t620*t6300 + t642*t725*t734) + t1009*t537*t734*t735 + t2697*t7720 - 0.049*(t1905*t6558 + t1617*t7720) - 0.09*(t1617*t6558 - 1.*t1905*t7720);
  p_output1[13]=t537*t682*t717*t721 - 1.*t663*t682*t725 + t1009*t537*t682*t735 + t1335*t9280 - 0.135*(t642*t682*t725 + t620*t9280) + t2006*t9301 + t2697*t9351 - 0.049*(t1905*t9301 + t1617*t9351) - 0.09*(t1617*t9301 - 1.*t1905*t9351);
  p_output1[14]=-1.*t537*t663 - 1.*t717*t721*t725 - 1.*t1009*t725*t735 + t1335*t9512 - 0.135*(t537*t642 + t620*t9512) + t2006*t9519 + t2697*t9563 - 0.049*(t1905*t9519 + t1617*t9563) - 0.09*(t1617*t9519 - 1.*t1905*t9563);
  p_output1[15]=t1009*t4444 + t717*t9620 + t2006*t9629 + t1335*t9638 - 0.135*t620*t9638 + t2697*t642*t9638 - 0.049*(t1905*t9629 + t1617*t642*t9638) - 0.09*(t1617*t9629 - 1.*t1905*t642*t9638);
  p_output1[16]=t1161*t717 + t1009*t9666 + t2006*t9673 + t1335*t9681 - 0.135*t620*t9681 + t2697*t642*t9681 - 0.049*(t1905*t9673 + t1617*t642*t9681) - 0.09*(t1617*t9673 - 1.*t1905*t642*t9681);
  p_output1[17]=t1009*t537*t721 - 1.*t537*t717*t735 + t9727 + t9733 + t9734 + t9735 + t9742 + t9748;
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
  p_output1[39]=t1335*t4884 - 0.135*t4884*t620 + t2697*t4884*t642 - 0.135*t4545*t684 + 0.135*t4444*t767 + t2006*t9772 - 0.09*(-1.*t1905*t4884*t642 + t1617*t9772) - 0.049*(t1617*t4884*t642 + t1905*t9772);
  p_output1[40]=0.135*t767*t9666 - 0.135*t684*t9803 + t2006*t9806 + t1335*t9815 - 0.135*t620*t9815 + t2697*t642*t9815 - 0.049*(t1905*t9806 + t1617*t642*t9815) - 0.09*(t1617*t9806 - 1.*t1905*t642*t9815);
  p_output1[41]=-0.135*t537*t684*t735 + 0.135*t537*t721*t767 + t9727 + t9733 + t9734 + t9735 + t9742 + t9748;
  p_output1[42]=-0.049*t1617*t5164 + 0.09*t1905*t5164 + t2697*t5164 - 0.135*(-1.*t4683*t642 - 1.*t537*t620*t734) + t537*t734*t9844 + t4683*t9849;
  p_output1[43]=t537*t682*t9844 + t9849*t9868 - 0.135*(t2703 - 1.*t642*t9868) - 0.049*t1617*t9873 + 0.09*t1905*t9873 + t2697*t9873;
  p_output1[44]=-1.*t725*t9844 + t9849*t9887 - 0.135*(t620*t725 - 1.*t642*t9887) - 0.049*t1617*t9891 + 0.09*t1905*t9891 + t2697*t9891;
  p_output1[45]=-0.09*(-1.*t1905*t4884 - 1.*t1617*t5502) - 0.049*t5547 + t4884*t9903 + t5502*t9908;
  p_output1[46]=t9815*t9903 + t9908*t9925 - 0.09*(-1.*t1905*t9815 - 1.*t1617*t9925) - 0.049*(t1617*t9815 - 1.*t1905*t9925);
  p_output1[47]=t9731*t9903 + t9908*t9947 - 0.09*(-1.*t1905*t9731 - 1.*t1617*t9947) - 0.049*(t1617*t9731 - 1.*t1905*t9947);
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
}



void Jp_hip_flexion_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
