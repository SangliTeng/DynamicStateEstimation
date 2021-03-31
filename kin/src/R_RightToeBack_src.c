/*
 * Automatically Generated from Mathematica.
 * Wed 12 Feb 2020 15:29:27 GMT-08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RightToeBack_src.h"

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
  double t550;
  double t1022;
  double t1135;
  double t1046;
  double t1182;
  double t682;
  double t798;
  double t925;
  double t969;
  double t1262;
  double t1050;
  double t1225;
  double t1237;
  double t1266;
  double t1267;
  double t1325;
  double t1260;
  double t1478;
  double t1505;
  double t2688;
  double t2500;
  double t2504;
  double t2598;
  double t2476;
  double t2749;
  double t2760;
  double t2769;
  double t2870;
  double t2637;
  double t2794;
  double t2855;
  double t2459;
  double t2877;
  double t2881;
  double t2908;
  double t3112;
  double t2861;
  double t2956;
  double t2993;
  double t2452;
  double t3114;
  double t3136;
  double t3145;
  double t3298;
  double t3072;
  double t3179;
  double t3223;
  double t2439;
  double t3312;
  double t3323;
  double t3344;
  double t3447;
  double t3239;
  double t3352;
  double t3402;
  double t2421;
  double t3534;
  double t3651;
  double t3662;
  double t1546;
  double t1603;
  double t1631;
  double t1754;
  double t1769;
  double t1805;
  double t1716;
  double t1808;
  double t2010;
  double t3826;
  double t3879;
  double t3888;
  double t3898;
  double t3902;
  double t3919;
  double t3895;
  double t3922;
  double t3939;
  double t4020;
  double t4040;
  double t4087;
  double t3961;
  double t4090;
  double t4142;
  double t4166;
  double t4174;
  double t4197;
  double t4154;
  double t4215;
  double t4231;
  double t4237;
  double t4248;
  double t4271;
  double t4235;
  double t4280;
  double t4281;
  double t4302;
  double t4313;
  double t4315;
  double t2130;
  double t2174;
  double t2322;
  double t4414;
  double t4421;
  double t4428;
  double t4444;
  double t4465;
  double t4482;
  double t4434;
  double t4483;
  double t4484;
  double t4491;
  double t4493;
  double t4494;
  double t4489;
  double t4496;
  double t4499;
  double t4516;
  double t4527;
  double t4530;
  double t4505;
  double t4533;
  double t4538;
  double t4559;
  double t4569;
  double t4583;
  double t4542;
  double t4587;
  double t4588;
  double t4600;
  double t4618;
  double t4629;
  double t3407;
  double t3672;
  double t3713;
  double t3733;
  double t3753;
  double t3778;
  double t4301;
  double t4318;
  double t4334;
  double t4371;
  double t4376;
  double t4393;
  double t4599;
  double t4632;
  double t4633;
  double t4657;
  double t4672;
  double t4673;
  t550 = Cos(var1[3]);
  t1022 = Cos(var1[5]);
  t1135 = Sin(var1[3]);
  t1046 = Sin(var1[4]);
  t1182 = Sin(var1[5]);
  t682 = Cos(var1[4]);
  t798 = Sin(var1[14]);
  t925 = Cos(var1[14]);
  t969 = Sin(var1[13]);
  t1262 = Cos(var1[13]);
  t1050 = t550*t1022*t1046;
  t1225 = t1135*t1182;
  t1237 = t1050 + t1225;
  t1266 = -1.*t1022*t1135;
  t1267 = t550*t1046*t1182;
  t1325 = t1266 + t1267;
  t1260 = t969*t1237;
  t1478 = t1262*t1325;
  t1505 = t1260 + t1478;
  t2688 = Cos(var1[15]);
  t2500 = t1262*t1237;
  t2504 = -1.*t969*t1325;
  t2598 = t2500 + t2504;
  t2476 = Sin(var1[15]);
  t2749 = t925*t550*t682;
  t2760 = t798*t1505;
  t2769 = t2749 + t2760;
  t2870 = Cos(var1[16]);
  t2637 = t2476*t2598;
  t2794 = t2688*t2769;
  t2855 = t2637 + t2794;
  t2459 = Sin(var1[16]);
  t2877 = t2688*t2598;
  t2881 = -1.*t2476*t2769;
  t2908 = t2877 + t2881;
  t3112 = Cos(var1[17]);
  t2861 = -1.*t2459*t2855;
  t2956 = t2870*t2908;
  t2993 = t2861 + t2956;
  t2452 = Sin(var1[17]);
  t3114 = t2870*t2855;
  t3136 = t2459*t2908;
  t3145 = t3114 + t3136;
  t3298 = Cos(var1[18]);
  t3072 = t2452*t2993;
  t3179 = t3112*t3145;
  t3223 = t3072 + t3179;
  t2439 = Sin(var1[18]);
  t3312 = t3112*t2993;
  t3323 = -1.*t2452*t3145;
  t3344 = t3312 + t3323;
  t3447 = Cos(var1[19]);
  t3239 = -1.*t2439*t3223;
  t3352 = t3298*t3344;
  t3402 = t3239 + t3352;
  t2421 = Sin(var1[19]);
  t3534 = t3298*t3223;
  t3651 = t2439*t3344;
  t3662 = t3534 + t3651;
  t1546 = t1022*t1135*t1046;
  t1603 = -1.*t550*t1182;
  t1631 = t1546 + t1603;
  t1754 = t550*t1022;
  t1769 = t1135*t1046*t1182;
  t1805 = t1754 + t1769;
  t1716 = t969*t1631;
  t1808 = t1262*t1805;
  t2010 = t1716 + t1808;
  t3826 = t1262*t1631;
  t3879 = -1.*t969*t1805;
  t3888 = t3826 + t3879;
  t3898 = t925*t682*t1135;
  t3902 = t798*t2010;
  t3919 = t3898 + t3902;
  t3895 = t2476*t3888;
  t3922 = t2688*t3919;
  t3939 = t3895 + t3922;
  t4020 = t2688*t3888;
  t4040 = -1.*t2476*t3919;
  t4087 = t4020 + t4040;
  t3961 = -1.*t2459*t3939;
  t4090 = t2870*t4087;
  t4142 = t3961 + t4090;
  t4166 = t2870*t3939;
  t4174 = t2459*t4087;
  t4197 = t4166 + t4174;
  t4154 = t2452*t4142;
  t4215 = t3112*t4197;
  t4231 = t4154 + t4215;
  t4237 = t3112*t4142;
  t4248 = -1.*t2452*t4197;
  t4271 = t4237 + t4248;
  t4235 = -1.*t2439*t4231;
  t4280 = t3298*t4271;
  t4281 = t4235 + t4280;
  t4302 = t3298*t4231;
  t4313 = t2439*t4271;
  t4315 = t4302 + t4313;
  t2130 = t682*t1022*t969;
  t2174 = t1262*t682*t1182;
  t2322 = t2130 + t2174;
  t4414 = t1262*t682*t1022;
  t4421 = -1.*t682*t969*t1182;
  t4428 = t4414 + t4421;
  t4444 = -1.*t925*t1046;
  t4465 = t798*t2322;
  t4482 = t4444 + t4465;
  t4434 = t2476*t4428;
  t4483 = t2688*t4482;
  t4484 = t4434 + t4483;
  t4491 = t2688*t4428;
  t4493 = -1.*t2476*t4482;
  t4494 = t4491 + t4493;
  t4489 = -1.*t2459*t4484;
  t4496 = t2870*t4494;
  t4499 = t4489 + t4496;
  t4516 = t2870*t4484;
  t4527 = t2459*t4494;
  t4530 = t4516 + t4527;
  t4505 = t2452*t4499;
  t4533 = t3112*t4530;
  t4538 = t4505 + t4533;
  t4559 = t3112*t4499;
  t4569 = -1.*t2452*t4530;
  t4583 = t4559 + t4569;
  t4542 = -1.*t2439*t4538;
  t4587 = t3298*t4583;
  t4588 = t4542 + t4587;
  t4600 = t3298*t4538;
  t4618 = t2439*t4583;
  t4629 = t4600 + t4618;
  t3407 = t2421*t3402;
  t3672 = t3447*t3662;
  t3713 = t3407 + t3672;
  t3733 = t3447*t3402;
  t3753 = -1.*t2421*t3662;
  t3778 = t3733 + t3753;
  t4301 = t2421*t4281;
  t4318 = t3447*t4315;
  t4334 = t4301 + t4318;
  t4371 = t3447*t4281;
  t4376 = -1.*t2421*t4315;
  t4393 = t4371 + t4376;
  t4599 = t2421*t4588;
  t4632 = t3447*t4629;
  t4633 = t4599 + t4632;
  t4657 = t3447*t4588;
  t4672 = -1.*t2421*t4629;
  t4673 = t4657 + t4672;
  p_output1[0]=t550*t682*t798 - 1.*t1505*t925;
  p_output1[1]=t1135*t682*t798 - 1.*t2010*t925;
  p_output1[2]=-1.*t1046*t798 - 1.*t2322*t925;
  p_output1[3]=0.642788*t3713 + 0.766044*t3778;
  p_output1[4]=0.642788*t4334 + 0.766044*t4393;
  p_output1[5]=0.642788*t4633 + 0.766044*t4673;
  p_output1[6]=-0.766044*t3713 + 0.642788*t3778;
  p_output1[7]=-0.766044*t4334 + 0.642788*t4393;
  p_output1[8]=-0.766044*t4633 + 0.642788*t4673;
}



void R_RightToeBack_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
