/*
 * Automatically Generated from Mathematica.
 * Wed 23 Oct 2019 10:26:11 GMT-07:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_VectorNav_to_RightToeFront_src.h"

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
  double t420;
  double t1564;
  double t1787;
  double t2049;
  double t2137;
  double t2146;
  double t2191;
  double t3129;
  double t3173;
  double t3195;
  double t3256;
  double t2925;
  double t2961;
  double t3125;
  double t3616;
  double t3617;
  double t3898;
  double t4525;
  double t4764;
  double t4860;
  double t4919;
  double t4242;
  double t4333;
  double t4501;
  double t5147;
  double t5169;
  double t5178;
  double t5252;
  double t5263;
  double t5269;
  double t5468;
  double t5236;
  double t5245;
  double t5250;
  double t6100;
  double t6162;
  double t6309;
  double t6566;
  double t451;
  double t710;
  double t1124;
  double t1701;
  double t1703;
  double t1741;
  double t1862;
  double t1949;
  double t6715;
  double t2185;
  double t2194;
  double t2473;
  double t2683;
  double t2808;
  double t2828;
  double t6763;
  double t6764;
  double t6765;
  double t6773;
  double t6777;
  double t6778;
  double t3199;
  double t3322;
  double t3522;
  double t4044;
  double t4095;
  double t4183;
  double t6780;
  double t6787;
  double t6788;
  double t6802;
  double t6804;
  double t6806;
  double t4896;
  double t4968;
  double t5079;
  double t5180;
  double t5189;
  double t5207;
  double t6824;
  double t6830;
  double t6835;
  double t6845;
  double t6846;
  double t6847;
  double t5332;
  double t5947;
  double t6046;
  double t6312;
  double t6334;
  double t6345;
  double t6852;
  double t6853;
  double t6854;
  double t6859;
  double t6860;
  double t6862;
  double t6651;
  double t6657;
  double t6685;
  double t6729;
  double t6735;
  double t6746;
  double t6966;
  double t6983;
  double t6990;
  double t6996;
  double t7004;
  double t7010;
  double t7025;
  double t7027;
  double t7030;
  double t7034;
  double t7035;
  double t7038;
  double t7041;
  double t7046;
  double t7047;
  double t7053;
  double t7057;
  double t7059;
  double t7067;
  double t7068;
  double t7069;
  double t7072;
  double t7078;
  double t7080;
  t420 = Cos(var1[8]);
  t1564 = Cos(var1[9]);
  t1787 = Sin(var1[9]);
  t2049 = Cos(var1[10]);
  t2137 = -1.*t2049;
  t2146 = 1. + t2137;
  t2191 = Sin(var1[10]);
  t3129 = Cos(var1[11]);
  t3173 = -1.*t3129;
  t3195 = 1. + t3173;
  t3256 = Sin(var1[11]);
  t2925 = t420*t1564*t2049;
  t2961 = -1.*t420*t1787*t2191;
  t3125 = t2925 + t2961;
  t3616 = -1.*t420*t2049*t1787;
  t3617 = -1.*t420*t1564*t2191;
  t3898 = t3616 + t3617;
  t4525 = Cos(var1[12]);
  t4764 = -1.*t4525;
  t4860 = 1. + t4764;
  t4919 = Sin(var1[12]);
  t4242 = t3129*t3125;
  t4333 = t3898*t3256;
  t4501 = t4242 + t4333;
  t5147 = t3129*t3898;
  t5169 = -1.*t3125*t3256;
  t5178 = t5147 + t5169;
  t5252 = Cos(var1[13]);
  t5263 = -1.*t5252;
  t5269 = 1. + t5263;
  t5468 = Sin(var1[13]);
  t5236 = t4525*t4501;
  t5245 = t5178*t4919;
  t5250 = t5236 + t5245;
  t6100 = t4525*t5178;
  t6162 = -1.*t4501*t4919;
  t6309 = t6100 + t6162;
  t6566 = Cos(var1[7]);
  t451 = -1.*t420;
  t710 = 1. + t451;
  t1124 = Sin(var1[8]);
  t1701 = -1.*t1564;
  t1703 = 1. + t1701;
  t1741 = -0.049*t1703;
  t1862 = -0.09*t1787;
  t1949 = 0. + t1741 + t1862;
  t6715 = Sin(var1[7]);
  t2185 = -0.049*t2146;
  t2194 = -0.21*t2191;
  t2473 = 0. + t2185 + t2194;
  t2683 = -0.21*t2146;
  t2808 = 0.049*t2191;
  t2828 = 0. + t2683 + t2808;
  t6763 = t6566*t1564*t1124;
  t6764 = -1.*t6715*t1787;
  t6765 = t6763 + t6764;
  t6773 = -1.*t1564*t6715;
  t6777 = -1.*t6566*t1124*t1787;
  t6778 = t6773 + t6777;
  t3199 = -0.0016*t3195;
  t3322 = -0.2707*t3256;
  t3522 = 0. + t3199 + t3322;
  t4044 = -0.2707*t3195;
  t4095 = 0.0016*t3256;
  t4183 = 0. + t4044 + t4095;
  t6780 = t2049*t6765;
  t6787 = t6778*t2191;
  t6788 = t6780 + t6787;
  t6802 = t2049*t6778;
  t6804 = -1.*t6765*t2191;
  t6806 = t6802 + t6804;
  t4896 = 0.0184*t4860;
  t4968 = -0.7055*t4919;
  t5079 = 0. + t4896 + t4968;
  t5180 = -0.7055*t4860;
  t5189 = -0.0184*t4919;
  t5207 = 0. + t5180 + t5189;
  t6824 = t3129*t6788;
  t6830 = t6806*t3256;
  t6835 = t6824 + t6830;
  t6845 = t3129*t6806;
  t6846 = -1.*t6788*t3256;
  t6847 = t6845 + t6846;
  t5332 = -0.0216*t5269;
  t5947 = -1.1135*t5468;
  t6046 = 0. + t5332 + t5947;
  t6312 = -1.1135*t5269;
  t6334 = 0.0216*t5468;
  t6345 = 0. + t6312 + t6334;
  t6852 = t4525*t6835;
  t6853 = t6847*t4919;
  t6854 = t6852 + t6853;
  t6859 = t4525*t6847;
  t6860 = -1.*t6835*t4919;
  t6862 = t6859 + t6860;
  t6651 = -0.135*t710;
  t6657 = 0.049*t1124;
  t6685 = 0. + t6651 + t6657;
  t6729 = -0.09*t1703;
  t6735 = 0.049*t1787;
  t6746 = 0. + t6729 + t6735;
  t6966 = t1564*t6715*t1124;
  t6983 = t6566*t1787;
  t6990 = t6966 + t6983;
  t6996 = t6566*t1564;
  t7004 = -1.*t6715*t1124*t1787;
  t7010 = t6996 + t7004;
  t7025 = t2049*t6990;
  t7027 = t7010*t2191;
  t7030 = t7025 + t7027;
  t7034 = t2049*t7010;
  t7035 = -1.*t6990*t2191;
  t7038 = t7034 + t7035;
  t7041 = t3129*t7030;
  t7046 = t7038*t3256;
  t7047 = t7041 + t7046;
  t7053 = t3129*t7038;
  t7057 = -1.*t7030*t3256;
  t7059 = t7053 + t7057;
  t7067 = t4525*t7047;
  t7068 = t7059*t4919;
  t7069 = t7067 + t7068;
  t7072 = t4525*t7059;
  t7078 = -1.*t7047*t4919;
  t7080 = t7072 + t7078;
  p_output1[0]=-0.03155 - 0.004500000000000004*t1124 + t3125*t3522 + t3898*t4183 + t1949*t420 + t1564*t2473*t420 - 1.*t1787*t2828*t420 + t4501*t5079 + t5178*t5207 + t5250*t6046 - 1.062256*(-1.*t5250*t5468 + t5252*t6309) + 0.088451*(t5250*t5252 + t5468*t6309) + t6309*t6345 - 0.049*t710;
  p_output1[1]=0. - 0.135*(1. - 1.*t6566) + t1124*t1949*t6566 - 0.1305*t420*t6566 + t6566*t6685 - 1.*t6715*t6746 + t2473*t6765 + t2828*t6778 + t3522*t6788 + t4183*t6806 + t5079*t6835 + t5207*t6847 + t6046*t6854 + t6345*t6862 - 1.062256*(-1.*t5468*t6854 + t5252*t6862) + 0.088451*(t5252*t6854 + t5468*t6862);
  p_output1[2]=0.07996 + 0.135*t6715 + t1124*t1949*t6715 - 0.1305*t420*t6715 + t6685*t6715 + t6566*t6746 + t2473*t6990 + t2828*t7010 + t3522*t7030 + t4183*t7038 + t5079*t7047 + t5207*t7059 + t6046*t7069 + t6345*t7080 - 1.062256*(-1.*t5468*t7069 + t5252*t7080) + 0.088451*(t5252*t7069 + t5468*t7080);
}



void p_VectorNav_to_RightToeFront_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
