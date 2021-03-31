/*
 * Automatically Generated from Mathematica.
 * Wed 23 Oct 2019 10:33:54 GMT-07:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jvb_VectorNav_to_RightToeBottom_src.h"

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
  double t886;
  double t1024;
  double t1719;
  double t930;
  double t1168;
  double t1550;
  double t868;
  double t1730;
  double t1803;
  double t1907;
  double t2421;
  double t1621;
  double t1915;
  double t1929;
  double t459;
  double t2433;
  double t2437;
  double t2553;
  double t2875;
  double t2287;
  double t2699;
  double t2720;
  double t314;
  double t2942;
  double t3198;
  double t3215;
  double t52;
  double t305;
  double t3556;
  double t5431;
  double t5441;
  double t5398;
  double t5407;
  double t5449;
  double t5456;
  double t5459;
  double t5463;
  double t5479;
  double t5483;
  double t5491;
  double t5506;
  double t5329;
  double t5349;
  double t5415;
  double t5421;
  double t5477;
  double t5513;
  double t5519;
  double t5532;
  double t5545;
  double t5558;
  double t5572;
  double t5573;
  double t5185;
  double t5237;
  double t5368;
  double t5387;
  double t5521;
  double t5586;
  double t5602;
  double t5622;
  double t5629;
  double t5636;
  double t5641;
  double t5642;
  double t4907;
  double t2859;
  double t3225;
  double t3300;
  double t3496;
  double t3677;
  double t3901;
  double t3908;
  double t4090;
  double t4265;
  double t4566;
  double t4809;
  double t4976;
  double t4985;
  double t5039;
  double t5159;
  double t5243;
  double t5300;
  double t5610;
  double t5646;
  double t5657;
  double t5662;
  double t5665;
  double t5677;
  double t5679;
  double t5683;
  double t5693;
  double t5698;
  double t5701;
  double t5790;
  double t5793;
  double t5802;
  double t5789;
  double t5812;
  double t5831;
  double t5834;
  double t5835;
  double t5833;
  double t5837;
  double t5838;
  double t5863;
  double t5865;
  double t5866;
  double t4340;
  double t4449;
  double t4811;
  double t4972;
  double t5702;
  double t5705;
  double t5850;
  double t5869;
  double t5872;
  double t5884;
  double t5885;
  double t5886;
  double t5895;
  double t5897;
  double t5903;
  double t5909;
  double t5917;
  double t5738;
  double t5741;
  double t5751;
  double t5752;
  double t5754;
  double t5769;
  double t5773;
  double t5774;
  double t5775;
  double t5777;
  double t5970;
  double t5713;
  double t5736;
  double t5761;
  double t5763;
  double t5764;
  double t5937;
  double t5939;
  double t5942;
  double t5984;
  double t5991;
  double t5928;
  double t5933;
  double t5952;
  double t5778;
  t886 = Cos(var1[13]);
  t1024 = Sin(var1[13]);
  t1719 = Cos(var1[12]);
  t930 = 0.642788*t886;
  t1168 = -0.766044*t1024;
  t1550 = t930 + t1168;
  t868 = Sin(var1[12]);
  t1730 = -0.766044*t886;
  t1803 = -0.642788*t1024;
  t1907 = t1730 + t1803;
  t2421 = Cos(var1[11]);
  t1621 = -1.*t868*t1550;
  t1915 = t1719*t1907;
  t1929 = 0. + t1621 + t1915;
  t459 = Sin(var1[11]);
  t2433 = t1719*t1550;
  t2437 = t868*t1907;
  t2553 = 0. + t2433 + t2437;
  t2875 = Cos(var1[10]);
  t2287 = t459*t1929;
  t2699 = t2421*t2553;
  t2720 = 0. + t2287 + t2699;
  t314 = Sin(var1[10]);
  t2942 = t2421*t1929;
  t3198 = -1.*t459*t2553;
  t3215 = 0. + t2942 + t3198;
  t52 = Cos(var1[8]);
  t305 = Cos(var1[9]);
  t3556 = Sin(var1[9]);
  t5431 = -1.*t886;
  t5441 = 1. + t5431;
  t5398 = -1.*t1719;
  t5407 = 1. + t5398;
  t5449 = -0.0216*t5441;
  t5456 = 0.0306*t886;
  t5459 = 0.01770000000000005*t1024;
  t5463 = 0. + t5449 + t5456 + t5459;
  t5479 = -1.1135*t5441;
  t5483 = -1.1312*t886;
  t5491 = 0.052199999999999996*t1024;
  t5506 = 0. + t5479 + t5483 + t5491;
  t5329 = -1.*t2421;
  t5349 = 1. + t5329;
  t5415 = -0.7055*t5407;
  t5421 = -0.0184*t868;
  t5477 = t868*t5463;
  t5513 = t1719*t5506;
  t5519 = 0. + t5415 + t5421 + t5477 + t5513;
  t5532 = 0.0184*t5407;
  t5545 = -0.7055*t868;
  t5558 = t1719*t5463;
  t5572 = -1.*t868*t5506;
  t5573 = 0. + t5532 + t5545 + t5558 + t5572;
  t5185 = -1.*t2875;
  t5237 = 1. + t5185;
  t5368 = -0.0016*t5349;
  t5387 = -0.2707*t459;
  t5521 = -1.*t459*t5519;
  t5586 = t2421*t5573;
  t5602 = 0. + t5368 + t5387 + t5521 + t5586;
  t5622 = -0.2707*t5349;
  t5629 = 0.0016*t459;
  t5636 = t2421*t5519;
  t5641 = t459*t5573;
  t5642 = 0. + t5622 + t5629 + t5636 + t5641;
  t4907 = Sin(var1[8]);
  t2859 = -1.*t314*t2720;
  t3225 = t2875*t3215;
  t3300 = 0. + t2859 + t3225;
  t3496 = t305*t3300;
  t3677 = t2875*t2720;
  t3901 = t314*t3215;
  t3908 = 0. + t3677 + t3901;
  t4090 = -1.*t3556*t3908;
  t4265 = 0. + t3496 + t4090;
  t4566 = -1.*t52;
  t4809 = 1. + t4566;
  t4976 = -1.*t305;
  t4985 = 1. + t4976;
  t5039 = -0.049*t4985;
  t5159 = -0.09*t3556;
  t5243 = -0.21*t5237;
  t5300 = 0.049*t314;
  t5610 = t314*t5602;
  t5646 = t2875*t5642;
  t5657 = 0. + t5243 + t5300 + t5610 + t5646;
  t5662 = -1.*t3556*t5657;
  t5665 = -0.049*t5237;
  t5677 = -0.21*t314;
  t5679 = t2875*t5602;
  t5683 = -1.*t314*t5642;
  t5693 = 0. + t5665 + t5677 + t5679 + t5683;
  t5698 = t305*t5693;
  t5701 = 0. + t5039 + t5159 + t5662 + t5698;
  t5790 = 0.766044*t886;
  t5793 = 0.642788*t1024;
  t5802 = t5790 + t5793;
  t5789 = t868*t1550;
  t5812 = t1719*t5802;
  t5831 = 0. + t5789 + t5812;
  t5834 = -1.*t868*t5802;
  t5835 = 0. + t2433 + t5834;
  t5833 = -1.*t459*t5831;
  t5837 = t2421*t5835;
  t5838 = 0. + t5833 + t5837;
  t5863 = t2421*t5831;
  t5865 = t459*t5835;
  t5866 = 0. + t5863 + t5865;
  t4340 = t52*t4265;
  t4449 = 0. + t4340;
  t4811 = -0.049*t4809;
  t4972 = -0.004500000000000004*t4907;
  t5702 = t52*t5701;
  t5705 = 0. + t4811 + t4972 + t5702;
  t5850 = t314*t5838;
  t5869 = t2875*t5866;
  t5872 = 0. + t5850 + t5869;
  t5884 = -1.*t3556*t5872;
  t5885 = t2875*t5838;
  t5886 = -1.*t314*t5866;
  t5895 = 0. + t5885 + t5886;
  t5897 = t305*t5895;
  t5903 = 0. + t5884 + t5897;
  t5909 = t52*t5903;
  t5917 = 0. + t5909;
  t5738 = -0.135*t4809;
  t5741 = -0.1305*t52;
  t5751 = 0.049*t4907;
  t5752 = t4907*t5701;
  t5754 = 0. + t5738 + t5741 + t5751 + t5752;
  t5769 = -0.09*t4985;
  t5773 = 0.049*t3556;
  t5774 = t305*t5657;
  t5775 = t3556*t5693;
  t5777 = 0. + t5769 + t5773 + t5774 + t5775;
  t5970 = 0. + t4907;
  t5713 = t4907*t4265;
  t5736 = 0. + t5713;
  t5761 = t3556*t3300;
  t5763 = t305*t3908;
  t5764 = 0. + t5761 + t5763;
  t5937 = t305*t5872;
  t5939 = t3556*t5895;
  t5942 = 0. + t5937 + t5939;
  t5984 = -1.*t52;
  t5991 = 0. + t5984;
  t5928 = t4907*t5903;
  t5933 = 0. + t5928;
  t5952 = -1.*t5777*t5942;
  t5778 = t5764*t5777;
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
  p_output1[21]=0. + (t4449*t5705 + t5736*t5754 + t5778)*t5917 + t4449*(-1.*t5705*t5917 - 1.*t5754*t5933 + t5952);
  p_output1[22]=0.135*t5942 + (-1.*t4449*t5705 - 1.*t5736*t5754 - 1.*t5764*t5777)*t5970 + t4449*(0. + t5705*t5970 + t5754*t5991);
  p_output1[23]=0.135*t5764 + (t5705*t5917 + t5754*t5933 + t5777*t5942)*t5970 + t5917*(0. - 1.*t5705*t5970 - 1.*t5754*t5991);
  p_output1[24]=-0.049 + (0. + t4265*t5701 + t5778)*t5942 + t5764*(0. - 1.*t5701*t5903 + t5952);
  p_output1[25]=0. + 0.1305*t5764 - 0.135*t5903;
  p_output1[26]=0. - 0.135*t4265 - 0.1305*t5942;
  p_output1[27]=0.;
  p_output1[28]=0. - 1.*t3908*t5657 - 1.*t3300*t5693 + 0.049*t5872 - 0.09*t5895;
  p_output1[29]=0. - 0.09*t3300 + 0.049*t3908 + t5657*t5872 + t5693*t5895;
  p_output1[30]=0.;
  p_output1[31]=0. - 1.*t3215*t5602 - 1.*t2720*t5642 - 0.21*t5838 + 0.049*t5866;
  p_output1[32]=0. + 0.049*t2720 - 0.21*t3215 + t5602*t5838 + t5642*t5866;
  p_output1[33]=0.;
  p_output1[34]=0. - 1.*t2553*t5519 - 1.*t1929*t5573 + 0.0016*t5831 - 0.2707*t5835;
  p_output1[35]=0. - 0.2707*t1929 + 0.0016*t2553 + t5519*t5831 + t5573*t5835;
  p_output1[36]=0.;
  p_output1[37]=0. - 0.7055*t1550 - 1.*t1907*t5463 - 1.*t1550*t5506 - 0.0184*t5802;
  p_output1[38]=0. - 0.0184*t1550 - 0.7055*t1907 + t1550*t5463 + t5506*t5802;
  p_output1[39]=0.;
  p_output1[40]=0.05136484440000011;
  p_output1[41]=0.019994554799999897;
}



void Jvb_VectorNav_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
