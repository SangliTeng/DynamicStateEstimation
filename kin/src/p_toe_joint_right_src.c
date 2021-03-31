/*
 * Automatically Generated from Mathematica.
 * Wed 12 Feb 2020 15:28:44 GMT-08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_toe_joint_right_src.h"

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
  double t398;
  double t1990;
  double t3005;
  double t2764;
  double t3179;
  double t490;
  double t526;
  double t998;
  double t1397;
  double t1871;
  double t2995;
  double t3184;
  double t3314;
  double t3489;
  double t4007;
  double t4056;
  double t4087;
  double t427;
  double t4473;
  double t4594;
  double t4636;
  double t4732;
  double t4756;
  double t5018;
  double t5116;
  double t5785;
  double t5790;
  double t6101;
  double t6647;
  double t6654;
  double t6830;
  double t6864;
  double t6875;
  double t6894;
  double t6935;
  double t6945;
  double t6947;
  double t6948;
  double t6967;
  double t6968;
  double t6977;
  double t7012;
  double t7030;
  double t7038;
  double t7080;
  double t7104;
  double t7123;
  double t7134;
  double t7174;
  double t7177;
  double t7202;
  double t7233;
  double t7236;
  double t7238;
  double t7243;
  double t7287;
  double t7345;
  double t7397;
  double t7431;
  double t7439;
  double t7445;
  double t7452;
  double t7484;
  double t7495;
  double t7530;
  double t7556;
  double t7598;
  double t7611;
  double t7668;
  double t7674;
  double t7681;
  double t1050;
  double t1436;
  double t1719;
  double t1888;
  double t1898;
  double t3511;
  double t3658;
  double t3672;
  double t3996;
  double t4281;
  double t4375;
  double t4384;
  double t7753;
  double t7759;
  double t7762;
  double t7772;
  double t7773;
  double t7778;
  double t5111;
  double t5663;
  double t5679;
  double t7786;
  double t7787;
  double t7790;
  double t6529;
  double t6581;
  double t6582;
  double t6922;
  double t6939;
  double t6940;
  double t7797;
  double t7798;
  double t7800;
  double t7813;
  double t7823;
  double t7825;
  double t6953;
  double t6961;
  double t6963;
  double t7070;
  double t7083;
  double t7090;
  double t7835;
  double t7840;
  double t7844;
  double t7847;
  double t7849;
  double t7850;
  double t7147;
  double t7155;
  double t7162;
  double t7242;
  double t7245;
  double t7271;
  double t7856;
  double t7862;
  double t7863;
  double t7876;
  double t7877;
  double t7878;
  double t7410;
  double t7413;
  double t7423;
  double t7502;
  double t7543;
  double t7551;
  double t7889;
  double t7897;
  double t7898;
  double t7920;
  double t7922;
  double t7925;
  double t7650;
  double t7655;
  double t7664;
  double t7928;
  double t7929;
  double t7930;
  double t7933;
  double t7934;
  double t7948;
  double t7992;
  double t7996;
  double t7998;
  double t8002;
  double t8003;
  double t8005;
  double t8019;
  double t8022;
  double t8023;
  double t8049;
  double t8053;
  double t8066;
  double t8110;
  double t8113;
  double t8114;
  double t8121;
  double t8128;
  double t8131;
  double t8140;
  double t8144;
  double t8159;
  double t8188;
  double t8192;
  double t8199;
  double t8201;
  double t8204;
  double t8217;
  double t8236;
  double t8238;
  double t8239;
  double t8244;
  double t8245;
  double t8252;
  t398 = Cos(var1[3]);
  t1990 = Cos(var1[5]);
  t3005 = Sin(var1[3]);
  t2764 = Sin(var1[4]);
  t3179 = Sin(var1[5]);
  t490 = Cos(var1[14]);
  t526 = -1.*t490;
  t998 = 1. + t526;
  t1397 = Sin(var1[14]);
  t1871 = Sin(var1[13]);
  t2995 = t398*t1990*t2764;
  t3184 = t3005*t3179;
  t3314 = t2995 + t3184;
  t3489 = Cos(var1[13]);
  t4007 = -1.*t1990*t3005;
  t4056 = t398*t2764*t3179;
  t4087 = t4007 + t4056;
  t427 = Cos(var1[4]);
  t4473 = t1871*t3314;
  t4594 = t3489*t4087;
  t4636 = t4473 + t4594;
  t4732 = Cos(var1[15]);
  t4756 = -1.*t4732;
  t5018 = 1. + t4756;
  t5116 = Sin(var1[15]);
  t5785 = t3489*t3314;
  t5790 = -1.*t1871*t4087;
  t6101 = t5785 + t5790;
  t6647 = t490*t398*t427;
  t6654 = t1397*t4636;
  t6830 = t6647 + t6654;
  t6864 = Cos(var1[16]);
  t6875 = -1.*t6864;
  t6894 = 1. + t6875;
  t6935 = Sin(var1[16]);
  t6945 = t5116*t6101;
  t6947 = t4732*t6830;
  t6948 = t6945 + t6947;
  t6967 = t4732*t6101;
  t6968 = -1.*t5116*t6830;
  t6977 = t6967 + t6968;
  t7012 = Cos(var1[17]);
  t7030 = -1.*t7012;
  t7038 = 1. + t7030;
  t7080 = Sin(var1[17]);
  t7104 = -1.*t6935*t6948;
  t7123 = t6864*t6977;
  t7134 = t7104 + t7123;
  t7174 = t6864*t6948;
  t7177 = t6935*t6977;
  t7202 = t7174 + t7177;
  t7233 = Cos(var1[18]);
  t7236 = -1.*t7233;
  t7238 = 1. + t7236;
  t7243 = Sin(var1[18]);
  t7287 = t7080*t7134;
  t7345 = t7012*t7202;
  t7397 = t7287 + t7345;
  t7431 = t7012*t7134;
  t7439 = -1.*t7080*t7202;
  t7445 = t7431 + t7439;
  t7452 = Cos(var1[19]);
  t7484 = -1.*t7452;
  t7495 = 1. + t7484;
  t7530 = Sin(var1[19]);
  t7556 = -1.*t7243*t7397;
  t7598 = t7233*t7445;
  t7611 = t7556 + t7598;
  t7668 = t7233*t7397;
  t7674 = t7243*t7445;
  t7681 = t7668 + t7674;
  t1050 = -0.049*t998;
  t1436 = -0.135*t1397;
  t1719 = 0. + t1050 + t1436;
  t1888 = 0.135*t1871;
  t1898 = 0. + t1888;
  t3511 = -1.*t3489;
  t3658 = 1. + t3511;
  t3672 = -0.135*t3658;
  t3996 = 0. + t3672;
  t4281 = -0.135*t998;
  t4375 = 0.049*t1397;
  t4384 = 0. + t4281 + t4375;
  t7753 = t1990*t3005*t2764;
  t7759 = -1.*t398*t3179;
  t7762 = t7753 + t7759;
  t7772 = t398*t1990;
  t7773 = t3005*t2764*t3179;
  t7778 = t7772 + t7773;
  t5111 = -0.09*t5018;
  t5663 = 0.049*t5116;
  t5679 = 0. + t5111 + t5663;
  t7786 = t1871*t7762;
  t7787 = t3489*t7778;
  t7790 = t7786 + t7787;
  t6529 = -0.049*t5018;
  t6581 = -0.09*t5116;
  t6582 = 0. + t6529 + t6581;
  t6922 = -0.049*t6894;
  t6939 = -0.21*t6935;
  t6940 = 0. + t6922 + t6939;
  t7797 = t3489*t7762;
  t7798 = -1.*t1871*t7778;
  t7800 = t7797 + t7798;
  t7813 = t490*t427*t3005;
  t7823 = t1397*t7790;
  t7825 = t7813 + t7823;
  t6953 = -0.21*t6894;
  t6961 = 0.049*t6935;
  t6963 = 0. + t6953 + t6961;
  t7070 = -0.2707*t7038;
  t7083 = 0.0016*t7080;
  t7090 = 0. + t7070 + t7083;
  t7835 = t5116*t7800;
  t7840 = t4732*t7825;
  t7844 = t7835 + t7840;
  t7847 = t4732*t7800;
  t7849 = -1.*t5116*t7825;
  t7850 = t7847 + t7849;
  t7147 = -0.0016*t7038;
  t7155 = -0.2707*t7080;
  t7162 = 0. + t7147 + t7155;
  t7242 = 0.0184*t7238;
  t7245 = -0.7055*t7243;
  t7271 = 0. + t7242 + t7245;
  t7856 = -1.*t6935*t7844;
  t7862 = t6864*t7850;
  t7863 = t7856 + t7862;
  t7876 = t6864*t7844;
  t7877 = t6935*t7850;
  t7878 = t7876 + t7877;
  t7410 = -0.7055*t7238;
  t7413 = -0.0184*t7243;
  t7423 = 0. + t7410 + t7413;
  t7502 = -1.1135*t7495;
  t7543 = 0.0216*t7530;
  t7551 = 0. + t7502 + t7543;
  t7889 = t7080*t7863;
  t7897 = t7012*t7878;
  t7898 = t7889 + t7897;
  t7920 = t7012*t7863;
  t7922 = -1.*t7080*t7878;
  t7925 = t7920 + t7922;
  t7650 = -0.0216*t7495;
  t7655 = -1.1135*t7530;
  t7664 = 0. + t7650 + t7655;
  t7928 = -1.*t7243*t7898;
  t7929 = t7233*t7925;
  t7930 = t7928 + t7929;
  t7933 = t7233*t7898;
  t7934 = t7243*t7925;
  t7948 = t7933 + t7934;
  t7992 = t427*t1990*t1871;
  t7996 = t3489*t427*t3179;
  t7998 = t7992 + t7996;
  t8002 = t3489*t427*t1990;
  t8003 = -1.*t427*t1871*t3179;
  t8005 = t8002 + t8003;
  t8019 = -1.*t490*t2764;
  t8022 = t1397*t7998;
  t8023 = t8019 + t8022;
  t8049 = t5116*t8005;
  t8053 = t4732*t8023;
  t8066 = t8049 + t8053;
  t8110 = t4732*t8005;
  t8113 = -1.*t5116*t8023;
  t8114 = t8110 + t8113;
  t8121 = -1.*t6935*t8066;
  t8128 = t6864*t8114;
  t8131 = t8121 + t8128;
  t8140 = t6864*t8066;
  t8144 = t6935*t8114;
  t8159 = t8140 + t8144;
  t8188 = t7080*t8131;
  t8192 = t7012*t8159;
  t8199 = t8188 + t8192;
  t8201 = t7012*t8131;
  t8204 = -1.*t7080*t8159;
  t8217 = t8201 + t8204;
  t8236 = -1.*t7243*t8199;
  t8238 = t7233*t8217;
  t8239 = t8236 + t8238;
  t8244 = t7233*t8199;
  t8245 = t7243*t8217;
  t8252 = t8244 + t8245;
  p_output1[0]=0. + t1898*t3314 + t3996*t4087 + t1719*t398*t427 + t4384*t4636 - 0.1305*(-1.*t1397*t398*t427 + t4636*t490) + t5679*t6101 + t6582*t6830 + t6940*t6948 + t6963*t6977 + t7090*t7134 + t7162*t7202 + t7271*t7397 + t7423*t7445 + t7551*t7611 + t7664*t7681 - 0.0216*(t7530*t7611 + t7452*t7681) - 1.1135*(t7452*t7611 - 1.*t7530*t7681) + var1[0];
  p_output1[1]=0. + t1719*t3005*t427 + t1898*t7762 + t3996*t7778 + t4384*t7790 - 0.1305*(-1.*t1397*t3005*t427 + t490*t7790) + t5679*t7800 + t6582*t7825 + t6940*t7844 + t6963*t7850 + t7090*t7863 + t7162*t7878 + t7271*t7898 + t7423*t7925 + t7551*t7930 + t7664*t7948 - 0.0216*(t7530*t7930 + t7452*t7948) - 1.1135*(t7452*t7930 - 1.*t7530*t7948) + var1[1];
  p_output1[2]=0. - 1.*t1719*t2764 + t1898*t1990*t427 + t3179*t3996*t427 + t4384*t7998 - 0.1305*(t1397*t2764 + t490*t7998) + t5679*t8005 + t6582*t8023 + t6940*t8066 + t6963*t8114 + t7090*t8131 + t7162*t8159 + t7271*t8199 + t7423*t8217 + t7551*t8239 + t7664*t8252 - 0.0216*(t7530*t8239 + t7452*t8252) - 1.1135*(t7452*t8239 - 1.*t7530*t8252) + var1[2];
}



void p_toe_joint_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
