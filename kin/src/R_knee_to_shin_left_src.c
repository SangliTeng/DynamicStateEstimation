/*
 * Automatically Generated from Mathematica.
 * Wed 12 Feb 2020 15:27:51 GMT-08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_knee_to_shin_left_src.h"

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
  double t2182;
  double t3350;
  double t4086;
  double t3377;
  double t4678;
  double t3340;
  double t5271;
  double t5585;
  double t6407;
  double t3381;
  double t5063;
  double t5109;
  double t6441;
  double t1567;
  double t6552;
  double t6559;
  double t6571;
  double t2579;
  double t2622;
  double t2625;
  double t5266;
  double t6446;
  double t6513;
  double t6538;
  double t6541;
  double t6542;
  double t6572;
  double t6586;
  double t6543;
  double t6575;
  double t6578;
  double t1205;
  double t6590;
  double t6594;
  double t6595;
  double t1195;
  double t6648;
  double t6649;
  double t6653;
  double t6633;
  double t6638;
  double t6642;
  double t6689;
  double t6690;
  double t6695;
  double t6632;
  double t6643;
  double t6672;
  double t6673;
  double t6674;
  double t6683;
  double t6611;
  double t6687;
  double t6697;
  double t6701;
  double t6711;
  double t6712;
  double t6713;
  double t6766;
  double t6768;
  double t6770;
  double t6745;
  double t6751;
  double t6752;
  double t6756;
  double t6760;
  double t6763;
  double t6765;
  double t6771;
  double t6773;
  double t6796;
  double t6798;
  double t6802;
  double t6580;
  double t6596;
  double t6604;
  double t6612;
  double t6615;
  double t6616;
  double t6708;
  double t6717;
  double t6723;
  double t6728;
  double t6734;
  double t6736;
  double t6793;
  double t6805;
  double t6811;
  double t6816;
  double t6818;
  double t6822;
  t2182 = Cos(var1[3]);
  t3350 = Cos(var1[5]);
  t4086 = Sin(var1[4]);
  t3377 = Sin(var1[3]);
  t4678 = Sin(var1[5]);
  t3340 = Cos(var1[6]);
  t5271 = t2182*t3350*t4086;
  t5585 = t3377*t4678;
  t6407 = t5271 + t5585;
  t3381 = -1.*t3350*t3377;
  t5063 = t2182*t4086*t4678;
  t5109 = t3381 + t5063;
  t6441 = Sin(var1[6]);
  t1567 = Cos(var1[8]);
  t6552 = t3340*t6407;
  t6559 = -1.*t5109*t6441;
  t6571 = t6552 + t6559;
  t2579 = Cos(var1[4]);
  t2622 = Cos(var1[7]);
  t2625 = t2182*t2579*t2622;
  t5266 = t3340*t5109;
  t6446 = t6407*t6441;
  t6513 = t5266 + t6446;
  t6538 = Sin(var1[7]);
  t6541 = t6513*t6538;
  t6542 = t2625 + t6541;
  t6572 = Sin(var1[8]);
  t6586 = Cos(var1[9]);
  t6543 = t1567*t6542;
  t6575 = t6571*t6572;
  t6578 = t6543 + t6575;
  t1205 = Sin(var1[9]);
  t6590 = t1567*t6571;
  t6594 = -1.*t6542*t6572;
  t6595 = t6590 + t6594;
  t1195 = Cos(var1[10]);
  t6648 = t3350*t3377*t4086;
  t6649 = -1.*t2182*t4678;
  t6653 = t6648 + t6649;
  t6633 = t2182*t3350;
  t6638 = t3377*t4086*t4678;
  t6642 = t6633 + t6638;
  t6689 = t3340*t6653;
  t6690 = -1.*t6642*t6441;
  t6695 = t6689 + t6690;
  t6632 = t2579*t2622*t3377;
  t6643 = t3340*t6642;
  t6672 = t6653*t6441;
  t6673 = t6643 + t6672;
  t6674 = t6673*t6538;
  t6683 = t6632 + t6674;
  t6611 = Sin(var1[10]);
  t6687 = t1567*t6683;
  t6697 = t6695*t6572;
  t6701 = t6687 + t6697;
  t6711 = t1567*t6695;
  t6712 = -1.*t6683*t6572;
  t6713 = t6711 + t6712;
  t6766 = t2579*t3350*t3340;
  t6768 = -1.*t2579*t4678*t6441;
  t6770 = t6766 + t6768;
  t6745 = -1.*t2622*t4086;
  t6751 = t2579*t3340*t4678;
  t6752 = t2579*t3350*t6441;
  t6756 = t6751 + t6752;
  t6760 = t6756*t6538;
  t6763 = t6745 + t6760;
  t6765 = t1567*t6763;
  t6771 = t6770*t6572;
  t6773 = t6765 + t6771;
  t6796 = t1567*t6770;
  t6798 = -1.*t6763*t6572;
  t6802 = t6796 + t6798;
  t6580 = -1.*t1205*t6578;
  t6596 = t6586*t6595;
  t6604 = t6580 + t6596;
  t6612 = t6586*t6578;
  t6615 = t1205*t6595;
  t6616 = t6612 + t6615;
  t6708 = -1.*t1205*t6701;
  t6717 = t6586*t6713;
  t6723 = t6708 + t6717;
  t6728 = t6586*t6701;
  t6734 = t1205*t6713;
  t6736 = t6728 + t6734;
  t6793 = -1.*t1205*t6773;
  t6805 = t6586*t6802;
  t6811 = t6793 + t6805;
  t6816 = t6586*t6773;
  t6818 = t1205*t6802;
  t6822 = t6816 + t6818;
  p_output1[0]=-1.*t1195*t6604 + t6611*t6616;
  p_output1[1]=-1.*t1195*t6723 + t6611*t6736;
  p_output1[2]=-1.*t1195*t6811 + t6611*t6822;
  p_output1[3]=t6604*t6611 + t1195*t6616;
  p_output1[4]=t6611*t6723 + t1195*t6736;
  p_output1[5]=t6611*t6811 + t1195*t6822;
  p_output1[6]=-1.*t2622*t6513 + t2182*t2579*t6538;
  p_output1[7]=t2579*t3377*t6538 - 1.*t2622*t6673;
  p_output1[8]=-1.*t4086*t6538 - 1.*t2622*t6756;
}



void R_knee_to_shin_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
