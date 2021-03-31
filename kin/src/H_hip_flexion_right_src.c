/*
 * Automatically Generated from Mathematica.
 * Wed 12 Feb 2020 15:28:19 GMT-08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_hip_flexion_right_src.h"

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
  double t429;
  double t475;
  double t369;
  double t445;
  double t667;
  double t1168;
  double t464;
  double t729;
  double t759;
  double t273;
  double t1465;
  double t1515;
  double t1517;
  double t40;
  double t1738;
  double t1810;
  double t1846;
  double t1883;
  double t2246;
  double t2302;
  double t2313;
  double t2333;
  double t2386;
  double t2388;
  double t840;
  double t1555;
  double t1563;
  double t1853;
  double t1918;
  double t2066;
  double t2112;
  double t2114;
  double t2135;
  double t2316;
  double t2436;
  double t2451;
  double t2473;
  double t2478;
  double t2480;
  double t2512;
  double t2516;
  double t2554;
  double t2707;
  double t2717;
  double t2738;
  double t2774;
  double t2801;
  double t2816;
  double t2820;
  double t2879;
  double t2882;
  double t3668;
  double t3673;
  double t4659;
  double t4687;
  double t2928;
  double t2950;
  double t2964;
  double t3691;
  double t3777;
  double t3986;
  double t4078;
  double t4127;
  double t4422;
  double t4486;
  double t4500;
  double t4509;
  double t4570;
  double t4573;
  double t4590;
  double t4812;
  double t4828;
  double t4859;
  double t4984;
  double t4989;
  double t5049;
  double t2999;
  double t3160;
  double t3164;
  double t3298;
  double t3308;
  double t3309;
  t429 = Cos(var1[5]);
  t475 = Sin(var1[3]);
  t369 = Cos(var1[3]);
  t445 = Sin(var1[4]);
  t667 = Sin(var1[5]);
  t1168 = Sin(var1[13]);
  t464 = t369*t429*t445;
  t729 = t475*t667;
  t759 = t464 + t729;
  t273 = Cos(var1[13]);
  t1465 = -1.*t429*t475;
  t1515 = t369*t445*t667;
  t1517 = t1465 + t1515;
  t40 = Cos(var1[15]);
  t1738 = Sin(var1[15]);
  t1810 = Cos(var1[14]);
  t1846 = Cos(var1[4]);
  t1883 = Sin(var1[14]);
  t2246 = t429*t475*t445;
  t2302 = -1.*t369*t667;
  t2313 = t2246 + t2302;
  t2333 = t369*t429;
  t2386 = t475*t445*t667;
  t2388 = t2333 + t2386;
  t840 = t273*t759;
  t1555 = -1.*t1168*t1517;
  t1563 = t840 + t1555;
  t1853 = t1810*t369*t1846;
  t1918 = t1168*t759;
  t2066 = t273*t1517;
  t2112 = t1918 + t2066;
  t2114 = t1883*t2112;
  t2135 = t1853 + t2114;
  t2316 = t273*t2313;
  t2436 = -1.*t1168*t2388;
  t2451 = t2316 + t2436;
  t2473 = t1810*t1846*t475;
  t2478 = t1168*t2313;
  t2480 = t273*t2388;
  t2512 = t2478 + t2480;
  t2516 = t1883*t2512;
  t2554 = t2473 + t2516;
  t2707 = t273*t1846*t429;
  t2717 = -1.*t1846*t1168*t667;
  t2738 = t2707 + t2717;
  t2774 = -1.*t1810*t445;
  t2801 = t1846*t429*t1168;
  t2816 = t273*t1846*t667;
  t2820 = t2801 + t2816;
  t2879 = t1883*t2820;
  t2882 = t2774 + t2879;
  t3668 = -1.*t1810;
  t3673 = 1. + t3668;
  t4659 = -1.*t40;
  t4687 = 1. + t4659;
  t2928 = t1738*t1563;
  t2950 = t40*t2135;
  t2964 = t2928 + t2950;
  t3691 = -0.049*t3673;
  t3777 = -0.135*t1883;
  t3986 = 0. + t3691 + t3777;
  t4078 = 0.135*t1168;
  t4127 = 0. + t4078;
  t4422 = -1.*t273;
  t4486 = 1. + t4422;
  t4500 = -0.135*t4486;
  t4509 = 0. + t4500;
  t4570 = -0.135*t3673;
  t4573 = 0.049*t1883;
  t4590 = 0. + t4570 + t4573;
  t4812 = -0.09*t4687;
  t4828 = 0.049*t1738;
  t4859 = 0. + t4812 + t4828;
  t4984 = -0.049*t4687;
  t4989 = -0.09*t1738;
  t5049 = 0. + t4984 + t4989;
  t2999 = t1738*t2451;
  t3160 = t40*t2554;
  t3164 = t2999 + t3160;
  t3298 = t1738*t2738;
  t3308 = t40*t2882;
  t3309 = t3298 + t3308;
  p_output1[0]=t1738*t2135 - 1.*t1563*t40;
  p_output1[1]=t1738*t2554 - 1.*t2451*t40;
  p_output1[2]=t1738*t2882 - 1.*t2738*t40;
  p_output1[3]=0.;
  p_output1[4]=t2964;
  p_output1[5]=t3164;
  p_output1[6]=t3309;
  p_output1[7]=0.;
  p_output1[8]=-1.*t1810*t2112 + t1846*t1883*t369;
  p_output1[9]=-1.*t1810*t2512 + t1846*t1883*t475;
  p_output1[10]=-1.*t1810*t2820 - 1.*t1883*t445;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.049*t2964 - 0.135*(t1810*t2112 - 1.*t1846*t1883*t369) + t1846*t369*t3986 - 0.09*(-1.*t1738*t2135 + t1563*t40) + t1517*t4509 + t2112*t4590 + t1563*t4859 + t2135*t5049 + t4127*t759 + var1[0];
  p_output1[13]=0. - 0.049*t3164 - 0.09*(-1.*t1738*t2554 + t2451*t40) + t2313*t4127 + t2388*t4509 + t2512*t4590 + t1846*t3986*t475 - 0.135*(t1810*t2512 - 1.*t1846*t1883*t475) + t2451*t4859 + t2554*t5049 + var1[1];
  p_output1[14]=0. - 0.049*t3309 - 0.09*(-1.*t1738*t2882 + t2738*t40) + t1846*t4127*t429 - 1.*t3986*t445 - 0.135*(t1810*t2820 + t1883*t445) + t2820*t4590 + t2738*t4859 + t2882*t5049 + t1846*t4509*t667 + var1[2];
  p_output1[15]=1.;
}



void H_hip_flexion_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
