/*
 * Automatically Generated from Mathematica.
 * Wed 23 Oct 2019 10:26:05 GMT-07:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_VectorNav_to_RightToeBack_src.h"

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
  double t1250;
  double t2152;
  double t2516;
  double t3161;
  double t3162;
  double t3238;
  double t3550;
  double t4958;
  double t4967;
  double t5034;
  double t5128;
  double t4685;
  double t4781;
  double t4916;
  double t5182;
  double t5198;
  double t5289;
  double t5346;
  double t5355;
  double t5356;
  double t5376;
  double t5318;
  double t5326;
  double t5337;
  double t5399;
  double t5407;
  double t5417;
  double t5443;
  double t5444;
  double t5445;
  double t5455;
  double t5436;
  double t5439;
  double t5440;
  double t5469;
  double t5474;
  double t5477;
  double t5521;
  double t1259;
  double t1414;
  double t1855;
  double t2183;
  double t2222;
  double t2362;
  double t2619;
  double t2833;
  double t5553;
  double t3549;
  double t3982;
  double t4050;
  double t4432;
  double t4462;
  double t4552;
  double t5569;
  double t5572;
  double t5573;
  double t5581;
  double t5584;
  double t5585;
  double t5095;
  double t5141;
  double t5148;
  double t5299;
  double t5310;
  double t5313;
  double t5591;
  double t5594;
  double t5595;
  double t5605;
  double t5607;
  double t5615;
  double t5362;
  double t5385;
  double t5392;
  double t5418;
  double t5419;
  double t5421;
  double t5619;
  double t5620;
  double t5623;
  double t5628;
  double t5630;
  double t5633;
  double t5449;
  double t5459;
  double t5462;
  double t5479;
  double t5480;
  double t5482;
  double t5639;
  double t5641;
  double t5648;
  double t5656;
  double t5658;
  double t5661;
  double t5542;
  double t5547;
  double t5548;
  double t5554;
  double t5557;
  double t5559;
  double t5697;
  double t5699;
  double t5700;
  double t5707;
  double t5708;
  double t5713;
  double t5715;
  double t5716;
  double t5717;
  double t5720;
  double t5721;
  double t5722;
  double t5726;
  double t5727;
  double t5729;
  double t5734;
  double t5735;
  double t5737;
  double t5745;
  double t5747;
  double t5748;
  double t5752;
  double t5757;
  double t5762;
  t1250 = Cos(var1[8]);
  t2152 = Cos(var1[9]);
  t2516 = Sin(var1[9]);
  t3161 = Cos(var1[10]);
  t3162 = -1.*t3161;
  t3238 = 1. + t3162;
  t3550 = Sin(var1[10]);
  t4958 = Cos(var1[11]);
  t4967 = -1.*t4958;
  t5034 = 1. + t4967;
  t5128 = Sin(var1[11]);
  t4685 = t1250*t2152*t3161;
  t4781 = -1.*t1250*t2516*t3550;
  t4916 = t4685 + t4781;
  t5182 = -1.*t1250*t3161*t2516;
  t5198 = -1.*t1250*t2152*t3550;
  t5289 = t5182 + t5198;
  t5346 = Cos(var1[12]);
  t5355 = -1.*t5346;
  t5356 = 1. + t5355;
  t5376 = Sin(var1[12]);
  t5318 = t4958*t4916;
  t5326 = t5289*t5128;
  t5337 = t5318 + t5326;
  t5399 = t4958*t5289;
  t5407 = -1.*t4916*t5128;
  t5417 = t5399 + t5407;
  t5443 = Cos(var1[13]);
  t5444 = -1.*t5443;
  t5445 = 1. + t5444;
  t5455 = Sin(var1[13]);
  t5436 = t5346*t5337;
  t5439 = t5417*t5376;
  t5440 = t5436 + t5439;
  t5469 = t5346*t5417;
  t5474 = -1.*t5337*t5376;
  t5477 = t5469 + t5474;
  t5521 = Cos(var1[7]);
  t1259 = -1.*t1250;
  t1414 = 1. + t1259;
  t1855 = Sin(var1[8]);
  t2183 = -1.*t2152;
  t2222 = 1. + t2183;
  t2362 = -0.049*t2222;
  t2619 = -0.09*t2516;
  t2833 = 0. + t2362 + t2619;
  t5553 = Sin(var1[7]);
  t3549 = -0.049*t3238;
  t3982 = -0.21*t3550;
  t4050 = 0. + t3549 + t3982;
  t4432 = -0.21*t3238;
  t4462 = 0.049*t3550;
  t4552 = 0. + t4432 + t4462;
  t5569 = t5521*t2152*t1855;
  t5572 = -1.*t5553*t2516;
  t5573 = t5569 + t5572;
  t5581 = -1.*t2152*t5553;
  t5584 = -1.*t5521*t1855*t2516;
  t5585 = t5581 + t5584;
  t5095 = -0.0016*t5034;
  t5141 = -0.2707*t5128;
  t5148 = 0. + t5095 + t5141;
  t5299 = -0.2707*t5034;
  t5310 = 0.0016*t5128;
  t5313 = 0. + t5299 + t5310;
  t5591 = t3161*t5573;
  t5594 = t5585*t3550;
  t5595 = t5591 + t5594;
  t5605 = t3161*t5585;
  t5607 = -1.*t5573*t3550;
  t5615 = t5605 + t5607;
  t5362 = 0.0184*t5356;
  t5385 = -0.7055*t5376;
  t5392 = 0. + t5362 + t5385;
  t5418 = -0.7055*t5356;
  t5419 = -0.0184*t5376;
  t5421 = 0. + t5418 + t5419;
  t5619 = t4958*t5595;
  t5620 = t5615*t5128;
  t5623 = t5619 + t5620;
  t5628 = t4958*t5615;
  t5630 = -1.*t5595*t5128;
  t5633 = t5628 + t5630;
  t5449 = -0.0216*t5445;
  t5459 = -1.1135*t5455;
  t5462 = 0. + t5449 + t5459;
  t5479 = -1.1135*t5445;
  t5480 = 0.0216*t5455;
  t5482 = 0. + t5479 + t5480;
  t5639 = t5346*t5623;
  t5641 = t5633*t5376;
  t5648 = t5639 + t5641;
  t5656 = t5346*t5633;
  t5658 = -1.*t5623*t5376;
  t5661 = t5656 + t5658;
  t5542 = -0.135*t1414;
  t5547 = 0.049*t1855;
  t5548 = 0. + t5542 + t5547;
  t5554 = -0.09*t2222;
  t5557 = 0.049*t2516;
  t5559 = 0. + t5554 + t5557;
  t5697 = t2152*t5553*t1855;
  t5699 = t5521*t2516;
  t5700 = t5697 + t5699;
  t5707 = t5521*t2152;
  t5708 = -1.*t5553*t1855*t2516;
  t5713 = t5707 + t5708;
  t5715 = t3161*t5700;
  t5716 = t5713*t3550;
  t5717 = t5715 + t5716;
  t5720 = t3161*t5713;
  t5721 = -1.*t5700*t3550;
  t5722 = t5720 + t5721;
  t5726 = t4958*t5717;
  t5727 = t5722*t5128;
  t5729 = t5726 + t5727;
  t5734 = t4958*t5722;
  t5735 = -1.*t5717*t5128;
  t5737 = t5734 + t5735;
  t5745 = t5346*t5729;
  t5747 = t5737*t5376;
  t5748 = t5745 + t5747;
  t5752 = t5346*t5737;
  t5757 = -1.*t5729*t5376;
  t5762 = t5752 + t5757;
  p_output1[0]=-0.03155 - 0.049*t1414 - 0.004500000000000004*t1855 + t1250*t2833 + t1250*t2152*t4050 - 1.*t1250*t2516*t4552 + t4916*t5148 + t5289*t5313 + t5337*t5392 + t5417*t5421 + t5440*t5462 - 1.200144*(-1.*t5440*t5455 + t5443*t5477) - 0.027251*(t5440*t5443 + t5455*t5477) + t5477*t5482;
  p_output1[1]=0. - 0.135*(1. - 1.*t5521) - 0.1305*t1250*t5521 + t1855*t2833*t5521 + t5521*t5548 - 1.*t5553*t5559 + t4050*t5573 + t4552*t5585 + t5148*t5595 + t5313*t5615 + t5392*t5623 + t5421*t5633 + t5462*t5648 + t5482*t5661 - 1.200144*(-1.*t5455*t5648 + t5443*t5661) - 0.027251*(t5443*t5648 + t5455*t5661);
  p_output1[2]=0.07996 + 0.135*t5553 - 0.1305*t1250*t5553 + t1855*t2833*t5553 + t5548*t5553 + t5521*t5559 + t4050*t5700 + t4552*t5713 + t5148*t5717 + t5313*t5722 + t5392*t5729 + t5421*t5737 + t5462*t5748 + t5482*t5762 - 1.200144*(-1.*t5455*t5748 + t5443*t5762) - 0.027251*(t5443*t5748 + t5455*t5762);
}



void p_VectorNav_to_RightToeBack_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
