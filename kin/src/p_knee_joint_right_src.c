/*
 * Automatically Generated from Mathematica.
 * Wed 12 Feb 2020 15:28:22 GMT-08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_knee_joint_right_src.h"

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
  double t528;
  double t1654;
  double t2552;
  double t1872;
  double t2752;
  double t792;
  double t903;
  double t923;
  double t1122;
  double t1480;
  double t2360;
  double t2756;
  double t2939;
  double t2949;
  double t3471;
  double t3571;
  double t3586;
  double t777;
  double t4365;
  double t4457;
  double t4548;
  double t4726;
  double t4863;
  double t5050;
  double t5516;
  double t5562;
  double t5571;
  double t5609;
  double t5865;
  double t5899;
  double t5906;
  double t5969;
  double t6046;
  double t6054;
  double t6078;
  double t6140;
  double t6150;
  double t6155;
  double t6240;
  double t6258;
  double t6270;
  double t926;
  double t1151;
  double t1371;
  double t1504;
  double t1596;
  double t3348;
  double t3368;
  double t3373;
  double t3460;
  double t3925;
  double t3949;
  double t4069;
  double t6421;
  double t6424;
  double t6427;
  double t6458;
  double t6466;
  double t6469;
  double t5511;
  double t5523;
  double t5538;
  double t6484;
  double t6486;
  double t6487;
  double t5734;
  double t5757;
  double t5780;
  double t6072;
  double t6081;
  double t6129;
  double t6498;
  double t6516;
  double t6519;
  double t6618;
  double t6622;
  double t6628;
  double t6189;
  double t6195;
  double t6210;
  double t6702;
  double t6732;
  double t6750;
  double t6841;
  double t6843;
  double t6844;
  double t8104;
  double t8213;
  double t8942;
  double t9133;
  double t9136;
  double t9168;
  double t9266;
  double t9276;
  double t9281;
  double t9313;
  double t9321;
  double t9329;
  double t9352;
  double t9379;
  double t9406;
  t528 = Cos(var1[3]);
  t1654 = Cos(var1[5]);
  t2552 = Sin(var1[3]);
  t1872 = Sin(var1[4]);
  t2752 = Sin(var1[5]);
  t792 = Cos(var1[14]);
  t903 = -1.*t792;
  t923 = 1. + t903;
  t1122 = Sin(var1[14]);
  t1480 = Sin(var1[13]);
  t2360 = t528*t1654*t1872;
  t2756 = t2552*t2752;
  t2939 = t2360 + t2756;
  t2949 = Cos(var1[13]);
  t3471 = -1.*t1654*t2552;
  t3571 = t528*t1872*t2752;
  t3586 = t3471 + t3571;
  t777 = Cos(var1[4]);
  t4365 = t1480*t2939;
  t4457 = t2949*t3586;
  t4548 = t4365 + t4457;
  t4726 = Cos(var1[15]);
  t4863 = -1.*t4726;
  t5050 = 1. + t4863;
  t5516 = Sin(var1[15]);
  t5562 = t2949*t2939;
  t5571 = -1.*t1480*t3586;
  t5609 = t5562 + t5571;
  t5865 = t792*t528*t777;
  t5899 = t1122*t4548;
  t5906 = t5865 + t5899;
  t5969 = Cos(var1[16]);
  t6046 = -1.*t5969;
  t6054 = 1. + t6046;
  t6078 = Sin(var1[16]);
  t6140 = t5516*t5609;
  t6150 = t4726*t5906;
  t6155 = t6140 + t6150;
  t6240 = t4726*t5609;
  t6258 = -1.*t5516*t5906;
  t6270 = t6240 + t6258;
  t926 = -0.049*t923;
  t1151 = -0.135*t1122;
  t1371 = 0. + t926 + t1151;
  t1504 = 0.135*t1480;
  t1596 = 0. + t1504;
  t3348 = -1.*t2949;
  t3368 = 1. + t3348;
  t3373 = -0.135*t3368;
  t3460 = 0. + t3373;
  t3925 = -0.135*t923;
  t3949 = 0.049*t1122;
  t4069 = 0. + t3925 + t3949;
  t6421 = t1654*t2552*t1872;
  t6424 = -1.*t528*t2752;
  t6427 = t6421 + t6424;
  t6458 = t528*t1654;
  t6466 = t2552*t1872*t2752;
  t6469 = t6458 + t6466;
  t5511 = -0.09*t5050;
  t5523 = 0.049*t5516;
  t5538 = 0. + t5511 + t5523;
  t6484 = t1480*t6427;
  t6486 = t2949*t6469;
  t6487 = t6484 + t6486;
  t5734 = -0.049*t5050;
  t5757 = -0.09*t5516;
  t5780 = 0. + t5734 + t5757;
  t6072 = -0.049*t6054;
  t6081 = -0.21*t6078;
  t6129 = 0. + t6072 + t6081;
  t6498 = t2949*t6427;
  t6516 = -1.*t1480*t6469;
  t6519 = t6498 + t6516;
  t6618 = t792*t777*t2552;
  t6622 = t1122*t6487;
  t6628 = t6618 + t6622;
  t6189 = -0.21*t6054;
  t6195 = 0.049*t6078;
  t6210 = 0. + t6189 + t6195;
  t6702 = t5516*t6519;
  t6732 = t4726*t6628;
  t6750 = t6702 + t6732;
  t6841 = t4726*t6519;
  t6843 = -1.*t5516*t6628;
  t6844 = t6841 + t6843;
  t8104 = t777*t1654*t1480;
  t8213 = t2949*t777*t2752;
  t8942 = t8104 + t8213;
  t9133 = t2949*t777*t1654;
  t9136 = -1.*t777*t1480*t2752;
  t9168 = t9133 + t9136;
  t9266 = -1.*t792*t1872;
  t9276 = t1122*t8942;
  t9281 = t9266 + t9276;
  t9313 = t5516*t9168;
  t9321 = t4726*t9281;
  t9329 = t9313 + t9321;
  t9352 = t4726*t9168;
  t9379 = -1.*t5516*t9281;
  t9406 = t9352 + t9379;
  p_output1[0]=0. + t1596*t2939 + t3460*t3586 + t4069*t4548 + t5538*t5609 + t5780*t5906 + t6129*t6155 + t6210*t6270 - 0.21*(-1.*t6078*t6155 + t5969*t6270) - 0.049*(t5969*t6155 + t6078*t6270) + t1371*t528*t777 - 0.1305*(-1.*t1122*t528*t777 + t4548*t792) + var1[0];
  p_output1[1]=0. + t1596*t6427 + t3460*t6469 + t4069*t6487 + t5538*t6519 + t5780*t6628 + t6129*t6750 + t6210*t6844 - 0.21*(-1.*t6078*t6750 + t5969*t6844) - 0.049*(t5969*t6750 + t6078*t6844) + t1371*t2552*t777 - 0.1305*(-1.*t1122*t2552*t777 + t6487*t792) + var1[1];
  p_output1[2]=0. - 1.*t1371*t1872 + t1596*t1654*t777 + t2752*t3460*t777 + t4069*t8942 - 0.1305*(t1122*t1872 + t792*t8942) + t5538*t9168 + t5780*t9281 + t6129*t9329 + t6210*t9406 - 0.21*(-1.*t6078*t9329 + t5969*t9406) - 0.049*(t5969*t9329 + t6078*t9406) + var1[2];
}



void p_knee_joint_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
