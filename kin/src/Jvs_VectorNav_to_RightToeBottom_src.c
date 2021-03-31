/*
 * Automatically Generated from Mathematica.
 * Wed 23 Oct 2019 10:33:56 GMT-07:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jvs_VectorNav_to_RightToeBottom_src.h"

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
  double t58;
  double t982;
  double t999;
  double t1060;
  double t1631;
  double t556;
  double t689;
  double t712;
  double t1151;
  double t1865;
  double t1919;
  double t1957;
  double t2081;
  double t2160;
  double t2257;
  double t1298;
  double t1790;
  double t1800;
  double t1803;
  double t2462;
  double t3061;
  double t3136;
  double t3191;
  double t3242;
  double t2287;
  double t3225;
  double t3265;
  double t3313;
  double t3371;
  double t3388;
  double t3496;
  double t2568;
  double t2584;
  double t2603;
  double t2791;
  double t2822;
  double t2659;
  double t2679;
  double t2710;
  double t2722;
  double t2881;
  double t2889;
  double t2895;
  double t2963;
  double t2974;
  double t3573;
  double t3727;
  double t4424;
  double t4438;
  double t4439;
  double t4527;
  double t4545;
  double t4572;
  double t5470;
  double t5473;
  double t5479;
  double t5618;
  double t3345;
  double t3525;
  double t4990;
  double t5059;
  double t5154;
  double t5605;
  double t5629;
  double t5641;
  double t5244;
  double t5275;
  double t5284;
  double t5682;
  double t5707;
  double t5751;
  double t3967;
  double t4256;
  double t4265;
  double t4662;
  double t4902;
  double t4926;
  double t5790;
  double t5814;
  double t6532;
  double t6535;
  double t6555;
  double t6506;
  double t6514;
  double t6524;
  double t6571;
  double t6582;
  double t6607;
  double t6617;
  double t5646;
  double t5768;
  double t6366;
  double t6376;
  double t6392;
  double t6608;
  double t6620;
  double t6632;
  double t6323;
  double t6326;
  double t6328;
  double t6650;
  double t6652;
  double t6653;
  double t6118;
  double t6119;
  double t6141;
  double t6031;
  double t6073;
  double t6082;
  double t6204;
  double t6218;
  double t6247;
  double t6272;
  double t6440;
  double t6441;
  double t6474;
  double t6479;
  double t6665;
  double t6667;
  double t6740;
  double t6746;
  double t6749;
  double t6752;
  double t6756;
  double t6757;
  double t6806;
  double t6809;
  double t6811;
  double t6816;
  double t6637;
  double t6654;
  double t6787;
  double t6788;
  double t6789;
  double t6812;
  double t6819;
  double t6825;
  double t6796;
  double t6797;
  double t6798;
  double t6830;
  double t6831;
  double t6834;
  double t6706;
  double t6707;
  double t6709;
  double t6692;
  double t6694;
  double t6701;
  double t6713;
  double t6718;
  double t6726;
  double t6727;
  double t6770;
  double t6772;
  double t6781;
  double t6783;
  t58 = Cos(var1[7]);
  t982 = Sin(var1[7]);
  t999 = -1.*t982;
  t1060 = 0. + t999;
  t1631 = Cos(var1[8]);
  t556 = -1.*t58;
  t689 = 1. + t556;
  t712 = -0.135*t689;
  t1151 = -0.135*t982;
  t1865 = -1.*t1631;
  t1919 = 1. + t1865;
  t1957 = -0.135*t1919;
  t2081 = Sin(var1[8]);
  t2160 = 0.049*t2081;
  t2257 = 0. + t1957 + t2160;
  t1298 = 0.049*t58;
  t1790 = -1.*t58*t1631;
  t1800 = 0. + t1790;
  t1803 = -0.07996*t1800;
  t2462 = -1.*t982*t2257;
  t3061 = Cos(var1[9]);
  t3136 = -1.*t3061;
  t3191 = 1. + t3136;
  t3242 = Sin(var1[9]);
  t2287 = t58*t2257;
  t3225 = -0.049*t3191;
  t3265 = -0.09*t3242;
  t3313 = 0. + t3225 + t3265;
  t3371 = -0.09*t3191;
  t3388 = 0.049*t3242;
  t3496 = 0. + t3371 + t3388;
  t2568 = -1.*t1631*t982;
  t2584 = 0. + t2568;
  t2603 = 0.03155*t2584;
  t2791 = 0. + t2081;
  t2822 = 0.07996*t2791;
  t2659 = 0.049*t1919;
  t2679 = 0.135*t2081;
  t2710 = 0.135*t982;
  t2722 = t982*t2257;
  t2881 = -0.03155*t1800;
  t2889 = -0.049*t1919;
  t2895 = -0.135*t2081;
  t2963 = 0.135*t689;
  t2974 = -1.*t58*t2257;
  t3573 = t58*t2081*t3313;
  t3727 = -1.*t982*t3496;
  t4424 = t58*t3061*t2081;
  t4438 = -1.*t982*t3242;
  t4439 = t4424 + t4438;
  t4527 = -1.*t3061*t982;
  t4545 = -1.*t58*t2081*t3242;
  t4572 = t4527 + t4545;
  t5470 = Cos(var1[10]);
  t5473 = -1.*t5470;
  t5479 = 1. + t5473;
  t5618 = Sin(var1[10]);
  t3345 = -1.*t982*t2081*t3313;
  t3525 = -1.*t58*t3496;
  t4990 = t3061*t982*t2081;
  t5059 = t58*t3242;
  t5154 = t4990 + t5059;
  t5605 = -0.049*t5479;
  t5629 = -0.21*t5618;
  t5641 = 0. + t5605 + t5629;
  t5244 = t58*t3061;
  t5275 = -1.*t982*t2081*t3242;
  t5284 = t5244 + t5275;
  t5682 = -0.21*t5479;
  t5707 = 0.049*t5618;
  t5751 = 0. + t5682 + t5707;
  t3967 = -1.*t1631*t3313;
  t4256 = t982*t2081*t3313;
  t4265 = t58*t3496;
  t4662 = t1631*t3313;
  t4902 = -1.*t58*t2081*t3313;
  t4926 = t982*t3496;
  t5790 = -1.*t5154*t5641;
  t5814 = -1.*t5284*t5751;
  t6532 = t5470*t5154;
  t6535 = t5284*t5618;
  t6555 = t6532 + t6535;
  t6506 = t5470*t5284;
  t6514 = -1.*t5154*t5618;
  t6524 = t6506 + t6514;
  t6571 = Cos(var1[11]);
  t6582 = -1.*t6571;
  t6607 = 1. + t6582;
  t6617 = Sin(var1[11]);
  t5646 = t4439*t5641;
  t5768 = t4572*t5751;
  t6366 = t5470*t4439;
  t6376 = t4572*t5618;
  t6392 = t6366 + t6376;
  t6608 = -0.0016*t6607;
  t6620 = -0.2707*t6617;
  t6632 = 0. + t6608 + t6620;
  t6323 = t5470*t4572;
  t6326 = -1.*t4439*t5618;
  t6328 = t6323 + t6326;
  t6650 = -0.2707*t6607;
  t6652 = 0.0016*t6617;
  t6653 = 0. + t6650 + t6652;
  t6118 = t1631*t3061*t5470;
  t6119 = -1.*t1631*t3242*t5618;
  t6141 = t6118 + t6119;
  t6031 = -1.*t1631*t5470*t3242;
  t6073 = -1.*t1631*t3061*t5618;
  t6082 = t6031 + t6073;
  t6204 = -1.*t1631*t3061*t5641;
  t6218 = t1631*t3242*t5751;
  t6247 = t5154*t5641;
  t6272 = t5284*t5751;
  t6440 = t1631*t3061*t5641;
  t6441 = -1.*t1631*t3242*t5751;
  t6474 = -1.*t4439*t5641;
  t6479 = -1.*t4572*t5751;
  t6665 = t6392*t6632;
  t6667 = t6328*t6653;
  t6740 = t6571*t6392;
  t6746 = t6328*t6617;
  t6749 = t6740 + t6746;
  t6752 = t6571*t6328;
  t6756 = -1.*t6392*t6617;
  t6757 = t6752 + t6756;
  t6806 = Cos(var1[12]);
  t6809 = -1.*t6806;
  t6811 = 1. + t6809;
  t6816 = Sin(var1[12]);
  t6637 = -1.*t6555*t6632;
  t6654 = -1.*t6524*t6653;
  t6787 = t6571*t6555;
  t6788 = t6524*t6617;
  t6789 = t6787 + t6788;
  t6812 = 0.0184*t6811;
  t6819 = -0.7055*t6816;
  t6825 = 0. + t6812 + t6819;
  t6796 = t6571*t6524;
  t6797 = -1.*t6555*t6617;
  t6798 = t6796 + t6797;
  t6830 = -0.7055*t6811;
  t6831 = -0.0184*t6816;
  t6834 = 0. + t6830 + t6831;
  t6706 = t6571*t6082;
  t6707 = -1.*t6141*t6617;
  t6709 = t6706 + t6707;
  t6692 = t6571*t6141;
  t6694 = t6082*t6617;
  t6701 = t6692 + t6694;
  t6713 = -1.*t6141*t6632;
  t6718 = -1.*t6082*t6653;
  t6726 = t6555*t6632;
  t6727 = t6524*t6653;
  t6770 = t6141*t6632;
  t6772 = t6082*t6653;
  t6781 = -1.*t6392*t6632;
  t6783 = -1.*t6328*t6653;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0.;
  p_output1[22]=0.07996;
  p_output1[23]=0.135;
  p_output1[24]=-0.135 - 0.07996*t1060 + t58*(0. + t712) - 1.*(0. + t1151)*t982;
  p_output1[25]=0. + t1298 + 0.03155*(0. + t58);
  p_output1[26]=0. - 0.03155*t1060 + 0.049*t982;
  p_output1[27]=0. - 0.09*t1631 + t1803 - 1.*t1631*(0. + t1151 + t2462)*t58 - 1.*t1631*(0. + t2287 + t712)*t982;
  p_output1[28]=0. + t2603 + t2081*(0. + t2710 + t2722) + t2822 - 0.09*t2081*t58 - 0.049*t982 - 1.*t1631*(0. + t2659 + t2679)*t982;
  p_output1[29]=0. + t1298 + t2881 + t2081*(0. + t2963 + t2974) - 1.*t1631*(0. + t2889 + t2895)*t58 - 0.09*t2081*t982;
  p_output1[30]=0. + t1803 - 0.21*t1631*t3061 - 0.049*t1631*t3242 - 1.*t1631*(0. + t1151 + t2462 + t3345 + t3525)*t58 - 1.*t1631*(0. + t2287 + t3573 + t3727 + t712)*t982;
  p_output1[31]=0. + t2603 + t2822 + t2081*(0. + t2710 + t2722 + t4256 + t4265) - 0.21*t4439 + 0.049*t4572 - 1.*t1631*(0. + t2659 + t2679 + t3967)*t982;
  p_output1[32]=0. + t2881 + t2081*(0. + t2963 + t2974 + t4902 + t4926) - 0.21*t5154 + 0.049*t5284 - 1.*t1631*(0. + t2889 + t2895 + t4662)*t58;
  p_output1[33]=0. + t1803 - 1.*t1631*t58*(0. + t1151 + t2462 + t3345 + t3525 + t5790 + t5814) + 0.0016*t6082 - 0.2707*t6141 - 1.*t1631*(0. + t2287 + t3573 + t3727 + t5646 + t5768 + t712)*t982;
  p_output1[34]=0. + t2603 + t2822 + t2081*(0. + t2710 + t2722 + t4256 + t4265 + t6247 + t6272) + 0.0016*t6328 - 0.2707*t6392 - 1.*t1631*(0. + t2659 + t2679 + t3967 + t6204 + t6218)*t982;
  p_output1[35]=0. + t2881 - 1.*t1631*t58*(0. + t2889 + t2895 + t4662 + t6440 + t6441) + t2081*(0. + t2963 + t2974 + t4902 + t4926 + t6474 + t6479) + 0.0016*t6524 - 0.2707*t6555;
  p_output1[36]=0. + t1803 - 1.*t1631*t58*(0. + t1151 + t2462 + t3345 + t3525 + t5790 + t5814 + t6637 + t6654) - 0.7055*t6701 - 0.0184*t6709 - 1.*t1631*(0. + t2287 + t3573 + t3727 + t5646 + t5768 + t6665 + t6667 + t712)*t982;
  p_output1[37]=0. + t2603 + t2822 + t2081*(0. + t2710 + t2722 + t4256 + t4265 + t6247 + t6272 + t6726 + t6727) - 0.7055*t6749 - 0.0184*t6757 - 1.*t1631*(0. + t2659 + t2679 + t3967 + t6204 + t6218 + t6713 + t6718)*t982;
  p_output1[38]=0. + t2881 - 1.*t1631*t58*(0. + t2889 + t2895 + t4662 + t6440 + t6441 + t6770 + t6772) + t2081*(0. + t2963 + t2974 + t4902 + t4926 + t6474 + t6479 + t6781 + t6783) - 0.7055*t6789 - 0.0184*t6798;
  p_output1[39]=0. + t1803 + 0.0216*(t6709*t6806 - 1.*t6701*t6816) - 1.1135*(t6701*t6806 + t6709*t6816) - 1.*t1631*t58*(0. + t1151 + t2462 + t3345 + t3525 + t5790 + t5814 + t6637 + t6654 - 1.*t6789*t6825 - 1.*t6798*t6834) - 1.*t1631*(0. + t2287 + t3573 + t3727 + t5646 + t5768 + t6665 + t6667 + t6749*t6825 + t6757*t6834 + t712)*t982;
  p_output1[40]=0. + t2603 + t2822 + 0.0216*(t6757*t6806 - 1.*t6749*t6816) - 1.1135*(t6749*t6806 + t6757*t6816) + t2081*(0. + t2710 + t2722 + t4256 + t4265 + t6247 + t6272 + t6726 + t6727 + t6789*t6825 + t6798*t6834) - 1.*t1631*(0. + t2659 + t2679 + t3967 + t6204 + t6218 + t6713 + t6718 - 1.*t6701*t6825 - 1.*t6709*t6834)*t982;
  p_output1[41]=0. + t2881 + 0.0216*(t6798*t6806 - 1.*t6789*t6816) - 1.1135*(t6789*t6806 + t6798*t6816) - 1.*t1631*t58*(0. + t2889 + t2895 + t4662 + t6440 + t6441 + t6770 + t6772 + t6701*t6825 + t6709*t6834) + t2081*(0. + t2963 + t2974 + t4902 + t4926 + t6474 + t6479 + t6781 + t6783 - 1.*t6749*t6825 - 1.*t6757*t6834);
}



void Jvs_VectorNav_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
