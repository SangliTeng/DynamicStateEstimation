/*
 * Automatically Generated from Mathematica.
 * Wed 23 Oct 2019 10:26:08 GMT-07:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_VectorNav_to_LeftToeBack_src.h"

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
  double t103;
  double t681;
  double t968;
  double t1157;
  double t1436;
  double t1981;
  double t3979;
  double t5029;
  double t5181;
  double t5186;
  double t5372;
  double t5548;
  double t5599;
  double t5626;
  double t5891;
  double t5920;
  double t5948;
  double t5959;
  double t5965;
  double t5966;
  double t5974;
  double t6010;
  double t6052;
  double t6058;
  double t6101;
  double t6108;
  double t6119;
  double t6148;
  double t6152;
  double t6156;
  double t6167;
  double t6172;
  double t6181;
  double t6182;
  double t6198;
  double t6203;
  double t6204;
  double t6291;
  double t288;
  double t345;
  double t2945;
  double t3399;
  double t3666;
  double t3800;
  double t4066;
  double t4119;
  double t1702;
  double t2344;
  double t2425;
  double t6352;
  double t4370;
  double t4448;
  double t4598;
  double t5261;
  double t5515;
  double t5531;
  double t6380;
  double t6386;
  double t6397;
  double t6401;
  double t6406;
  double t6409;
  double t5673;
  double t5707;
  double t5806;
  double t5972;
  double t5979;
  double t5992;
  double t6420;
  double t6422;
  double t6423;
  double t6427;
  double t6430;
  double t6431;
  double t6067;
  double t6095;
  double t6100;
  double t6162;
  double t6169;
  double t6171;
  double t6439;
  double t6447;
  double t6448;
  double t6459;
  double t6468;
  double t6471;
  double t6192;
  double t6193;
  double t6197;
  double t6481;
  double t6487;
  double t6493;
  double t6504;
  double t6510;
  double t6511;
  double t6323;
  double t6325;
  double t6333;
  double t6359;
  double t6373;
  double t6374;
  double t6575;
  double t6576;
  double t6578;
  double t6584;
  double t6588;
  double t6593;
  double t6595;
  double t6598;
  double t6599;
  double t6604;
  double t6605;
  double t6606;
  double t6611;
  double t6621;
  double t6622;
  double t6625;
  double t6626;
  double t6628;
  double t6636;
  double t6638;
  double t6639;
  double t6642;
  double t6643;
  double t6645;
  t103 = Cos(var1[1]);
  t681 = Cos(var1[2]);
  t968 = Cos(var1[3]);
  t1157 = -1.*t968;
  t1436 = 1. + t1157;
  t1981 = Sin(var1[3]);
  t3979 = Sin(var1[2]);
  t5029 = Cos(var1[4]);
  t5181 = -1.*t5029;
  t5186 = 1. + t5181;
  t5372 = Sin(var1[4]);
  t5548 = -1.*t103*t681*t1981;
  t5599 = -1.*t968*t103*t3979;
  t5626 = t5548 + t5599;
  t5891 = t968*t103*t681;
  t5920 = -1.*t103*t1981*t3979;
  t5948 = t5891 + t5920;
  t5959 = Cos(var1[5]);
  t5965 = -1.*t5959;
  t5966 = 1. + t5965;
  t5974 = Sin(var1[5]);
  t6010 = t5372*t5626;
  t6052 = t5029*t5948;
  t6058 = t6010 + t6052;
  t6101 = t5029*t5626;
  t6108 = -1.*t5372*t5948;
  t6119 = t6101 + t6108;
  t6148 = Cos(var1[6]);
  t6152 = -1.*t6148;
  t6156 = 1. + t6152;
  t6167 = Sin(var1[6]);
  t6172 = -1.*t5974*t6058;
  t6181 = t5959*t6119;
  t6182 = t6172 + t6181;
  t6198 = t5959*t6058;
  t6203 = t5974*t6119;
  t6204 = t6198 + t6203;
  t6291 = Cos(var1[0]);
  t288 = -1.*t103;
  t345 = 1. + t288;
  t2945 = Sin(var1[1]);
  t3399 = -1.*t681;
  t3666 = 1. + t3399;
  t3800 = -0.049*t3666;
  t4066 = -0.09*t3979;
  t4119 = 0. + t3800 + t4066;
  t1702 = -0.049*t1436;
  t2344 = -0.21*t1981;
  t2425 = 0. + t1702 + t2344;
  t6352 = Sin(var1[0]);
  t4370 = -0.21*t1436;
  t4448 = 0.049*t1981;
  t4598 = 0. + t4370 + t4448;
  t5261 = -0.2707*t5186;
  t5515 = 0.0016*t5372;
  t5531 = 0. + t5261 + t5515;
  t6380 = t6291*t681*t2945;
  t6386 = -1.*t6352*t3979;
  t6397 = t6380 + t6386;
  t6401 = -1.*t681*t6352;
  t6406 = -1.*t6291*t2945*t3979;
  t6409 = t6401 + t6406;
  t5673 = -0.0016*t5186;
  t5707 = -0.2707*t5372;
  t5806 = 0. + t5673 + t5707;
  t5972 = 0.0184*t5966;
  t5979 = -0.7055*t5974;
  t5992 = 0. + t5972 + t5979;
  t6420 = -1.*t1981*t6397;
  t6422 = t968*t6409;
  t6423 = t6420 + t6422;
  t6427 = t968*t6397;
  t6430 = t1981*t6409;
  t6431 = t6427 + t6430;
  t6067 = -0.7055*t5966;
  t6095 = -0.0184*t5974;
  t6100 = 0. + t6067 + t6095;
  t6162 = -1.1135*t6156;
  t6169 = 0.0216*t6167;
  t6171 = 0. + t6162 + t6169;
  t6439 = t5372*t6423;
  t6447 = t5029*t6431;
  t6448 = t6439 + t6447;
  t6459 = t5029*t6423;
  t6468 = -1.*t5372*t6431;
  t6471 = t6459 + t6468;
  t6192 = -0.0216*t6156;
  t6193 = -1.1135*t6167;
  t6197 = 0. + t6192 + t6193;
  t6481 = -1.*t5974*t6448;
  t6487 = t5959*t6471;
  t6493 = t6481 + t6487;
  t6504 = t5959*t6448;
  t6510 = t5974*t6471;
  t6511 = t6504 + t6510;
  t6323 = 0.135*t345;
  t6325 = 0.049*t2945;
  t6333 = 0. + t6323 + t6325;
  t6359 = -0.09*t3666;
  t6373 = 0.049*t3979;
  t6374 = 0. + t6359 + t6373;
  t6575 = t681*t6352*t2945;
  t6576 = t6291*t3979;
  t6578 = t6575 + t6576;
  t6584 = t6291*t681;
  t6588 = -1.*t6352*t2945*t3979;
  t6593 = t6584 + t6588;
  t6595 = -1.*t1981*t6578;
  t6598 = t968*t6593;
  t6599 = t6595 + t6598;
  t6604 = t968*t6578;
  t6605 = t1981*t6593;
  t6606 = t6604 + t6605;
  t6611 = t5372*t6599;
  t6621 = t5029*t6606;
  t6622 = t6611 + t6621;
  t6625 = t5029*t6599;
  t6626 = -1.*t5372*t6606;
  t6628 = t6625 + t6626;
  t6636 = -1.*t5974*t6622;
  t6638 = t5959*t6628;
  t6639 = t6636 + t6638;
  t6642 = t5959*t6622;
  t6643 = t5974*t6628;
  t6645 = t6642 + t6643;
  p_output1[0]=-0.03155 + 0.004500000000000004*t2945 - 0.049*t345 + t103*t4119 - 1.*t103*t3979*t4598 + t5531*t5626 + t5806*t5948 + t5992*t6058 + t6100*t6119 + t6171*t6182 + t6197*t6204 - 0.027251*(t6167*t6182 + t6148*t6204) - 1.200144*(t6148*t6182 - 1.*t6167*t6204) + t103*t2425*t681;
  p_output1[1]=0. + 0.135*(1. - 1.*t6291) + 0.1305*t103*t6291 + t2945*t4119*t6291 + t6291*t6333 - 1.*t6352*t6374 + t2425*t6397 + t4598*t6409 + t5531*t6423 + t5806*t6431 + t5992*t6448 + t6100*t6471 + t6171*t6493 + t6197*t6511 - 0.027251*(t6167*t6493 + t6148*t6511) - 1.200144*(t6148*t6493 - 1.*t6167*t6511);
  p_output1[2]=0.07996 - 0.135*t6352 + 0.1305*t103*t6352 + t2945*t4119*t6352 + t6333*t6352 + t6291*t6374 + t2425*t6578 + t4598*t6593 + t5531*t6599 + t5806*t6606 + t5992*t6622 + t6100*t6628 + t6171*t6639 + t6197*t6645 - 0.027251*(t6167*t6639 + t6148*t6645) - 1.200144*(t6148*t6639 - 1.*t6167*t6645);
}



void p_VectorNav_to_LeftToeBack_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
