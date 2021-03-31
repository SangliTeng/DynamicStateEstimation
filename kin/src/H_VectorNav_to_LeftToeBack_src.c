/*
 * Automatically Generated from Mathematica.
 * Wed 23 Oct 2019 10:26:06 GMT-07:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_VectorNav_to_LeftToeBack_src.h"

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
  double t229;
  double t1909;
  double t1604;
  double t1663;
  double t1942;
  double t2254;
  double t1697;
  double t2019;
  double t2083;
  double t1465;
  double t2404;
  double t2554;
  double t2709;
  double t2842;
  double t2232;
  double t2730;
  double t2761;
  double t1455;
  double t2932;
  double t2944;
  double t2960;
  double t3089;
  double t2809;
  double t2962;
  double t2970;
  double t1365;
  double t3102;
  double t3333;
  double t3365;
  double t120;
  double t33;
  double t979;
  double t4088;
  double t4149;
  double t4161;
  double t4167;
  double t4175;
  double t4237;
  double t4165;
  double t4255;
  double t4305;
  double t4370;
  double t4393;
  double t4405;
  double t4359;
  double t4420;
  double t4459;
  double t4473;
  double t4507;
  double t4513;
  double t4471;
  double t4522;
  double t4549;
  double t4597;
  double t4685;
  double t4702;
  double t5186;
  double t5197;
  double t5216;
  double t5257;
  double t5266;
  double t5281;
  double t5240;
  double t5285;
  double t5342;
  double t5372;
  double t5394;
  double t5398;
  double t5348;
  double t5401;
  double t5417;
  double t5421;
  double t5442;
  double t5515;
  double t5419;
  double t5520;
  double t5531;
  double t5547;
  double t5548;
  double t5554;
  double t3047;
  double t3400;
  double t3409;
  double t3424;
  double t3468;
  double t3754;
  double t4557;
  double t4712;
  double t4757;
  double t4817;
  double t4851;
  double t4855;
  double t5542;
  double t5561;
  double t5583;
  double t5617;
  double t5619;
  double t5621;
  double t5808;
  double t5810;
  double t5876;
  double t5882;
  double t5895;
  double t5900;
  double t5942;
  double t5943;
  double t5787;
  double t5798;
  double t5837;
  double t5838;
  double t5846;
  double t5848;
  double t5849;
  double t5815;
  double t5820;
  double t5827;
  double t5868;
  double t5872;
  double t5873;
  double t5883;
  double t5884;
  double t5887;
  double t5890;
  double t5891;
  double t5892;
  double t5907;
  double t5908;
  double t5912;
  double t5920;
  double t5933;
  double t5935;
  double t5944;
  double t5946;
  double t5948;
  double t5958;
  double t5959;
  double t5960;
  double t5975;
  double t5982;
  double t5991;
  double t5997;
  double t6010;
  double t6011;
  t229 = Cos(var1[1]);
  t1909 = Cos(var1[3]);
  t1604 = Cos(var1[2]);
  t1663 = Sin(var1[3]);
  t1942 = Sin(var1[2]);
  t2254 = Cos(var1[4]);
  t1697 = -1.*t229*t1604*t1663;
  t2019 = -1.*t1909*t229*t1942;
  t2083 = t1697 + t2019;
  t1465 = Sin(var1[4]);
  t2404 = t1909*t229*t1604;
  t2554 = -1.*t229*t1663*t1942;
  t2709 = t2404 + t2554;
  t2842 = Cos(var1[5]);
  t2232 = t1465*t2083;
  t2730 = t2254*t2709;
  t2761 = t2232 + t2730;
  t1455 = Sin(var1[5]);
  t2932 = t2254*t2083;
  t2944 = -1.*t1465*t2709;
  t2960 = t2932 + t2944;
  t3089 = Cos(var1[6]);
  t2809 = -1.*t1455*t2761;
  t2962 = t2842*t2960;
  t2970 = t2809 + t2962;
  t1365 = Sin(var1[6]);
  t3102 = t2842*t2761;
  t3333 = t1455*t2960;
  t3365 = t3102 + t3333;
  t120 = Cos(var1[0]);
  t33 = Sin(var1[1]);
  t979 = Sin(var1[0]);
  t4088 = t120*t1604*t33;
  t4149 = -1.*t979*t1942;
  t4161 = t4088 + t4149;
  t4167 = -1.*t1604*t979;
  t4175 = -1.*t120*t33*t1942;
  t4237 = t4167 + t4175;
  t4165 = -1.*t1663*t4161;
  t4255 = t1909*t4237;
  t4305 = t4165 + t4255;
  t4370 = t1909*t4161;
  t4393 = t1663*t4237;
  t4405 = t4370 + t4393;
  t4359 = t1465*t4305;
  t4420 = t2254*t4405;
  t4459 = t4359 + t4420;
  t4473 = t2254*t4305;
  t4507 = -1.*t1465*t4405;
  t4513 = t4473 + t4507;
  t4471 = -1.*t1455*t4459;
  t4522 = t2842*t4513;
  t4549 = t4471 + t4522;
  t4597 = t2842*t4459;
  t4685 = t1455*t4513;
  t4702 = t4597 + t4685;
  t5186 = t1604*t979*t33;
  t5197 = t120*t1942;
  t5216 = t5186 + t5197;
  t5257 = t120*t1604;
  t5266 = -1.*t979*t33*t1942;
  t5281 = t5257 + t5266;
  t5240 = -1.*t1663*t5216;
  t5285 = t1909*t5281;
  t5342 = t5240 + t5285;
  t5372 = t1909*t5216;
  t5394 = t1663*t5281;
  t5398 = t5372 + t5394;
  t5348 = t1465*t5342;
  t5401 = t2254*t5398;
  t5417 = t5348 + t5401;
  t5421 = t2254*t5342;
  t5442 = -1.*t1465*t5398;
  t5515 = t5421 + t5442;
  t5419 = -1.*t1455*t5417;
  t5520 = t2842*t5515;
  t5531 = t5419 + t5520;
  t5547 = t2842*t5417;
  t5548 = t1455*t5515;
  t5554 = t5547 + t5548;
  t3047 = t1365*t2970;
  t3400 = t3089*t3365;
  t3409 = t3047 + t3400;
  t3424 = t3089*t2970;
  t3468 = -1.*t1365*t3365;
  t3754 = t3424 + t3468;
  t4557 = t1365*t4549;
  t4712 = t3089*t4702;
  t4757 = t4557 + t4712;
  t4817 = t3089*t4549;
  t4851 = -1.*t1365*t4702;
  t4855 = t4817 + t4851;
  t5542 = t1365*t5531;
  t5561 = t3089*t5554;
  t5583 = t5542 + t5561;
  t5617 = t3089*t5531;
  t5619 = -1.*t1365*t5554;
  t5621 = t5617 + t5619;
  t5808 = -1.*t1909;
  t5810 = 1. + t5808;
  t5876 = -1.*t2254;
  t5882 = 1. + t5876;
  t5895 = -1.*t2842;
  t5900 = 1. + t5895;
  t5942 = -1.*t3089;
  t5943 = 1. + t5942;
  t5787 = -1.*t229;
  t5798 = 1. + t5787;
  t5837 = -1.*t1604;
  t5838 = 1. + t5837;
  t5846 = -0.049*t5838;
  t5848 = -0.09*t1942;
  t5849 = 0. + t5846 + t5848;
  t5815 = -0.049*t5810;
  t5820 = -0.21*t1663;
  t5827 = 0. + t5815 + t5820;
  t5868 = -0.21*t5810;
  t5872 = 0.049*t1663;
  t5873 = 0. + t5868 + t5872;
  t5883 = -0.2707*t5882;
  t5884 = 0.0016*t1465;
  t5887 = 0. + t5883 + t5884;
  t5890 = -0.0016*t5882;
  t5891 = -0.2707*t1465;
  t5892 = 0. + t5890 + t5891;
  t5907 = 0.0184*t5900;
  t5908 = -0.7055*t1455;
  t5912 = 0. + t5907 + t5908;
  t5920 = -0.7055*t5900;
  t5933 = -0.0184*t1455;
  t5935 = 0. + t5920 + t5933;
  t5944 = -1.1135*t5943;
  t5946 = 0.0216*t1365;
  t5948 = 0. + t5944 + t5946;
  t5958 = -0.0216*t5943;
  t5959 = -1.1135*t1365;
  t5960 = 0. + t5958 + t5959;
  t5975 = 0.135*t5798;
  t5982 = 0.049*t33;
  t5991 = 0. + t5975 + t5982;
  t5997 = -0.09*t5838;
  t6010 = 0.049*t1942;
  t6011 = 0. + t5997 + t6010;
  p_output1[0]=0. + t33;
  p_output1[1]=0. - 1.*t120*t229;
  p_output1[2]=0. - 1.*t229*t979;
  p_output1[3]=0.;
  p_output1[4]=0. + 0.642788*t3409 + 0.766044*t3754;
  p_output1[5]=0. + 0.642788*t4757 + 0.766044*t4855;
  p_output1[6]=0. + 0.642788*t5583 + 0.766044*t5621;
  p_output1[7]=0.;
  p_output1[8]=0. - 0.766044*t3409 + 0.642788*t3754;
  p_output1[9]=0. - 0.766044*t4757 + 0.642788*t4855;
  p_output1[10]=0. - 0.766044*t5583 + 0.642788*t5621;
  p_output1[11]=0.;
  p_output1[12]=-0.03155 + 0.004500000000000004*t33 - 0.027251*t3409 - 1.200144*t3754 - 0.049*t5798 + t1604*t229*t5827 + t229*t5849 - 1.*t1942*t229*t5873 + t2083*t5887 + t2709*t5892 + t2761*t5912 + t2960*t5935 + t2970*t5948 + t3365*t5960;
  p_output1[13]=0. + 0.135*(1. - 1.*t120) + 0.1305*t120*t229 - 0.027251*t4757 - 1.200144*t4855 + t4161*t5827 + t120*t33*t5849 + t4237*t5873 + t4305*t5887 + t4405*t5892 + t4459*t5912 + t4513*t5935 + t4549*t5948 + t4702*t5960 + t120*t5991 - 1.*t6011*t979;
  p_output1[14]=0.07996 - 0.027251*t5583 - 1.200144*t5621 + t5216*t5827 + t5281*t5873 + t5342*t5887 + t5398*t5892 + t5417*t5912 + t5515*t5935 + t5531*t5948 + t5554*t5960 + t120*t6011 - 0.135*t979 + 0.1305*t229*t979 + t33*t5849*t979 + t5991*t979;
  p_output1[15]=1.;
}



void H_VectorNav_to_LeftToeBack_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
