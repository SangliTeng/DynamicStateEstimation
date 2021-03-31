/*
 * Automatically Generated from Mathematica.
 * Wed 23 Oct 2019 10:26:09 GMT-07:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_VectorNav_to_RightToeFront_src.h"

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
  double t180;
  double t549;
  double t1142;
  double t543;
  double t1181;
  double t529;
  double t1400;
  double t1426;
  double t1428;
  double t927;
  double t1297;
  double t1300;
  double t1429;
  double t500;
  double t1594;
  double t1800;
  double t1805;
  double t1321;
  double t1506;
  double t1527;
  double t1820;
  double t397;
  double t1890;
  double t2037;
  double t2127;
  double t1577;
  double t1834;
  double t1836;
  double t2283;
  double t141;
  double t17;
  double t262;
  double t3232;
  double t3262;
  double t3291;
  double t2923;
  double t3036;
  double t3214;
  double t3429;
  double t3431;
  double t3452;
  double t3216;
  double t3301;
  double t3323;
  double t3508;
  double t3524;
  double t3530;
  double t3371;
  double t3454;
  double t3465;
  double t3660;
  double t3667;
  double t3682;
  double t3480;
  double t3535;
  double t3564;
  double t4333;
  double t4345;
  double t4496;
  double t4242;
  double t4243;
  double t4286;
  double t4771;
  double t4777;
  double t4879;
  double t4300;
  double t4636;
  double t4642;
  double t4950;
  double t4962;
  double t4968;
  double t4764;
  double t4919;
  double t4935;
  double t5015;
  double t5137;
  double t5227;
  double t4947;
  double t4977;
  double t4995;
  double t1857;
  double t2365;
  double t2406;
  double t2510;
  double t2721;
  double t2729;
  double t3607;
  double t3689;
  double t3745;
  double t4003;
  double t4006;
  double t4070;
  double t5012;
  double t5250;
  double t5302;
  double t5513;
  double t5577;
  double t5739;
  double t6155;
  double t6160;
  double t6265;
  double t6286;
  double t6339;
  double t6340;
  double t6419;
  double t6424;
  double t6084;
  double t6092;
  double t6103;
  double t6109;
  double t6119;
  double t6139;
  double t6145;
  double t6162;
  double t6164;
  double t6168;
  double t6183;
  double t6190;
  double t6197;
  double t6288;
  double t6299;
  double t6309;
  double t6317;
  double t6325;
  double t6334;
  double t6345;
  double t6359;
  double t6363;
  double t6376;
  double t6380;
  double t6395;
  double t6427;
  double t6435;
  double t6442;
  double t6467;
  double t6478;
  double t6487;
  double t6556;
  double t6558;
  double t6562;
  double t6569;
  double t6573;
  double t6575;
  t180 = Cos(var1[8]);
  t549 = Cos(var1[10]);
  t1142 = Sin(var1[9]);
  t543 = Cos(var1[9]);
  t1181 = Sin(var1[10]);
  t529 = Cos(var1[11]);
  t1400 = -1.*t180*t549*t1142;
  t1426 = -1.*t180*t543*t1181;
  t1428 = t1400 + t1426;
  t927 = t180*t543*t549;
  t1297 = -1.*t180*t1142*t1181;
  t1300 = t927 + t1297;
  t1429 = Sin(var1[11]);
  t500 = Cos(var1[12]);
  t1594 = t529*t1428;
  t1800 = -1.*t1300*t1429;
  t1805 = t1594 + t1800;
  t1321 = t529*t1300;
  t1506 = t1428*t1429;
  t1527 = t1321 + t1506;
  t1820 = Sin(var1[12]);
  t397 = Cos(var1[13]);
  t1890 = t500*t1805;
  t2037 = -1.*t1527*t1820;
  t2127 = t1890 + t2037;
  t1577 = t500*t1527;
  t1834 = t1805*t1820;
  t1836 = t1577 + t1834;
  t2283 = Sin(var1[13]);
  t141 = Cos(var1[7]);
  t17 = Sin(var1[8]);
  t262 = Sin(var1[7]);
  t3232 = -1.*t543*t262;
  t3262 = -1.*t141*t17*t1142;
  t3291 = t3232 + t3262;
  t2923 = t141*t543*t17;
  t3036 = -1.*t262*t1142;
  t3214 = t2923 + t3036;
  t3429 = t549*t3291;
  t3431 = -1.*t3214*t1181;
  t3452 = t3429 + t3431;
  t3216 = t549*t3214;
  t3301 = t3291*t1181;
  t3323 = t3216 + t3301;
  t3508 = t529*t3452;
  t3524 = -1.*t3323*t1429;
  t3530 = t3508 + t3524;
  t3371 = t529*t3323;
  t3454 = t3452*t1429;
  t3465 = t3371 + t3454;
  t3660 = t500*t3530;
  t3667 = -1.*t3465*t1820;
  t3682 = t3660 + t3667;
  t3480 = t500*t3465;
  t3535 = t3530*t1820;
  t3564 = t3480 + t3535;
  t4333 = t141*t543;
  t4345 = -1.*t262*t17*t1142;
  t4496 = t4333 + t4345;
  t4242 = t543*t262*t17;
  t4243 = t141*t1142;
  t4286 = t4242 + t4243;
  t4771 = t549*t4496;
  t4777 = -1.*t4286*t1181;
  t4879 = t4771 + t4777;
  t4300 = t549*t4286;
  t4636 = t4496*t1181;
  t4642 = t4300 + t4636;
  t4950 = t529*t4879;
  t4962 = -1.*t4642*t1429;
  t4968 = t4950 + t4962;
  t4764 = t529*t4642;
  t4919 = t4879*t1429;
  t4935 = t4764 + t4919;
  t5015 = t500*t4968;
  t5137 = -1.*t4935*t1820;
  t5227 = t5015 + t5137;
  t4947 = t500*t4935;
  t4977 = t4968*t1820;
  t4995 = t4947 + t4977;
  t1857 = t397*t1836;
  t2365 = t2127*t2283;
  t2406 = t1857 + t2365;
  t2510 = t397*t2127;
  t2721 = -1.*t1836*t2283;
  t2729 = t2510 + t2721;
  t3607 = t397*t3564;
  t3689 = t3682*t2283;
  t3745 = t3607 + t3689;
  t4003 = t397*t3682;
  t4006 = -1.*t3564*t2283;
  t4070 = t4003 + t4006;
  t5012 = t397*t4995;
  t5250 = t5227*t2283;
  t5302 = t5012 + t5250;
  t5513 = t397*t5227;
  t5577 = -1.*t4995*t2283;
  t5739 = t5513 + t5577;
  t6155 = -1.*t549;
  t6160 = 1. + t6155;
  t6265 = -1.*t529;
  t6286 = 1. + t6265;
  t6339 = -1.*t500;
  t6340 = 1. + t6339;
  t6419 = -1.*t397;
  t6424 = 1. + t6419;
  t6084 = -1.*t180;
  t6092 = 1. + t6084;
  t6103 = -1.*t543;
  t6109 = 1. + t6103;
  t6119 = -0.049*t6109;
  t6139 = -0.09*t1142;
  t6145 = 0. + t6119 + t6139;
  t6162 = -0.049*t6160;
  t6164 = -0.21*t1181;
  t6168 = 0. + t6162 + t6164;
  t6183 = -0.21*t6160;
  t6190 = 0.049*t1181;
  t6197 = 0. + t6183 + t6190;
  t6288 = -0.0016*t6286;
  t6299 = -0.2707*t1429;
  t6309 = 0. + t6288 + t6299;
  t6317 = -0.2707*t6286;
  t6325 = 0.0016*t1429;
  t6334 = 0. + t6317 + t6325;
  t6345 = 0.0184*t6340;
  t6359 = -0.7055*t1820;
  t6363 = 0. + t6345 + t6359;
  t6376 = -0.7055*t6340;
  t6380 = -0.0184*t1820;
  t6395 = 0. + t6376 + t6380;
  t6427 = -0.0216*t6424;
  t6435 = -1.1135*t2283;
  t6442 = 0. + t6427 + t6435;
  t6467 = -1.1135*t6424;
  t6478 = 0.0216*t2283;
  t6487 = 0. + t6467 + t6478;
  t6556 = -0.135*t6092;
  t6558 = 0.049*t17;
  t6562 = 0. + t6556 + t6558;
  t6569 = -0.09*t6109;
  t6573 = 0.049*t1142;
  t6575 = 0. + t6569 + t6573;
  p_output1[0]=0. + t17;
  p_output1[1]=0. - 1.*t141*t180;
  p_output1[2]=0. - 1.*t180*t262;
  p_output1[3]=0.;
  p_output1[4]=0. + 0.642788*t2406 + 0.766044*t2729;
  p_output1[5]=0. + 0.642788*t3745 + 0.766044*t4070;
  p_output1[6]=0. + 0.642788*t5302 + 0.766044*t5739;
  p_output1[7]=0.;
  p_output1[8]=0. - 0.766044*t2406 + 0.642788*t2729;
  p_output1[9]=0. - 0.766044*t3745 + 0.642788*t4070;
  p_output1[10]=0. - 0.766044*t5302 + 0.642788*t5739;
  p_output1[11]=0.;
  p_output1[12]=-0.03155 - 0.004500000000000004*t17 + 0.088451*t2406 - 1.062256*t2729 - 0.049*t6092 + t180*t6145 + t180*t543*t6168 - 1.*t1142*t180*t6197 + t1300*t6309 + t1428*t6334 + t1527*t6363 + t1805*t6395 + t1836*t6442 + t2127*t6487;
  p_output1[13]=0. - 0.135*(1. - 1.*t141) - 0.1305*t141*t180 + 0.088451*t3745 - 1.062256*t4070 + t141*t17*t6145 + t3214*t6168 + t3291*t6197 + t3323*t6309 + t3452*t6334 + t3465*t6363 + t3530*t6395 + t3564*t6442 + t3682*t6487 + t141*t6562 - 1.*t262*t6575;
  p_output1[14]=0.07996 + 0.135*t262 - 0.1305*t180*t262 + 0.088451*t5302 - 1.062256*t5739 + t17*t262*t6145 + t4286*t6168 + t4496*t6197 + t4642*t6309 + t4879*t6334 + t4935*t6363 + t4968*t6395 + t4995*t6442 + t5227*t6487 + t262*t6562 + t141*t6575;
  p_output1[15]=1.;
}



void H_VectorNav_to_RightToeFront_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
