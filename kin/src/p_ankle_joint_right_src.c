/*
 * Automatically Generated from Mathematica.
 * Wed 12 Feb 2020 15:28:38 GMT-08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_ankle_joint_right_src.h"

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
  double t202;
  double t1380;
  double t1398;
  double t1386;
  double t1417;
  double t1215;
  double t1318;
  double t1322;
  double t1331;
  double t1363;
  double t1391;
  double t1419;
  double t1420;
  double t1425;
  double t1445;
  double t1451;
  double t1454;
  double t711;
  double t1591;
  double t1723;
  double t1877;
  double t2210;
  double t2262;
  double t2517;
  double t2646;
  double t3037;
  double t3311;
  double t3335;
  double t4628;
  double t4750;
  double t4762;
  double t5161;
  double t5190;
  double t5407;
  double t5419;
  double t5699;
  double t5707;
  double t5714;
  double t5784;
  double t5832;
  double t5845;
  double t5902;
  double t5949;
  double t5958;
  double t6026;
  double t6057;
  double t6076;
  double t6090;
  double t6212;
  double t6214;
  double t6229;
  double t6296;
  double t6332;
  double t6341;
  double t6360;
  double t6434;
  double t6453;
  double t6454;
  double t6582;
  double t6584;
  double t6585;
  double t1325;
  double t1336;
  double t1348;
  double t1370;
  double t1375;
  double t1429;
  double t1434;
  double t1435;
  double t1439;
  double t1468;
  double t1473;
  double t1481;
  double t6727;
  double t6737;
  double t6740;
  double t6792;
  double t6807;
  double t6825;
  double t2520;
  double t2758;
  double t2971;
  double t6835;
  double t6837;
  double t6845;
  double t4074;
  double t4555;
  double t4607;
  double t5412;
  double t5428;
  double t5676;
  double t6853;
  double t6856;
  double t6860;
  double t6905;
  double t6906;
  double t6907;
  double t5731;
  double t5737;
  double t5773;
  double t6009;
  double t6048;
  double t6053;
  double t6914;
  double t6917;
  double t6928;
  double t6937;
  double t6938;
  double t6943;
  double t6126;
  double t6153;
  double t6205;
  double t6354;
  double t6404;
  double t6405;
  double t6955;
  double t6965;
  double t6966;
  double t6975;
  double t6977;
  double t6993;
  double t6500;
  double t6530;
  double t6553;
  double t7008;
  double t7009;
  double t7011;
  double t7022;
  double t7028;
  double t7034;
  double t7143;
  double t7159;
  double t7165;
  double t7206;
  double t7211;
  double t7214;
  double t7252;
  double t7258;
  double t7280;
  double t7290;
  double t7293;
  double t7301;
  double t7329;
  double t7331;
  double t7350;
  double t7378;
  double t7385;
  double t7405;
  double t7427;
  double t7430;
  double t7481;
  double t7508;
  double t7512;
  double t7514;
  double t7526;
  double t7534;
  double t7536;
  t202 = Cos(var1[3]);
  t1380 = Cos(var1[5]);
  t1398 = Sin(var1[3]);
  t1386 = Sin(var1[4]);
  t1417 = Sin(var1[5]);
  t1215 = Cos(var1[14]);
  t1318 = -1.*t1215;
  t1322 = 1. + t1318;
  t1331 = Sin(var1[14]);
  t1363 = Sin(var1[13]);
  t1391 = t202*t1380*t1386;
  t1419 = t1398*t1417;
  t1420 = t1391 + t1419;
  t1425 = Cos(var1[13]);
  t1445 = -1.*t1380*t1398;
  t1451 = t202*t1386*t1417;
  t1454 = t1445 + t1451;
  t711 = Cos(var1[4]);
  t1591 = t1363*t1420;
  t1723 = t1425*t1454;
  t1877 = t1591 + t1723;
  t2210 = Cos(var1[15]);
  t2262 = -1.*t2210;
  t2517 = 1. + t2262;
  t2646 = Sin(var1[15]);
  t3037 = t1425*t1420;
  t3311 = -1.*t1363*t1454;
  t3335 = t3037 + t3311;
  t4628 = t1215*t202*t711;
  t4750 = t1331*t1877;
  t4762 = t4628 + t4750;
  t5161 = Cos(var1[16]);
  t5190 = -1.*t5161;
  t5407 = 1. + t5190;
  t5419 = Sin(var1[16]);
  t5699 = t2646*t3335;
  t5707 = t2210*t4762;
  t5714 = t5699 + t5707;
  t5784 = t2210*t3335;
  t5832 = -1.*t2646*t4762;
  t5845 = t5784 + t5832;
  t5902 = Cos(var1[17]);
  t5949 = -1.*t5902;
  t5958 = 1. + t5949;
  t6026 = Sin(var1[17]);
  t6057 = -1.*t5419*t5714;
  t6076 = t5161*t5845;
  t6090 = t6057 + t6076;
  t6212 = t5161*t5714;
  t6214 = t5419*t5845;
  t6229 = t6212 + t6214;
  t6296 = Cos(var1[18]);
  t6332 = -1.*t6296;
  t6341 = 1. + t6332;
  t6360 = Sin(var1[18]);
  t6434 = t6026*t6090;
  t6453 = t5902*t6229;
  t6454 = t6434 + t6453;
  t6582 = t5902*t6090;
  t6584 = -1.*t6026*t6229;
  t6585 = t6582 + t6584;
  t1325 = -0.049*t1322;
  t1336 = -0.135*t1331;
  t1348 = 0. + t1325 + t1336;
  t1370 = 0.135*t1363;
  t1375 = 0. + t1370;
  t1429 = -1.*t1425;
  t1434 = 1. + t1429;
  t1435 = -0.135*t1434;
  t1439 = 0. + t1435;
  t1468 = -0.135*t1322;
  t1473 = 0.049*t1331;
  t1481 = 0. + t1468 + t1473;
  t6727 = t1380*t1398*t1386;
  t6737 = -1.*t202*t1417;
  t6740 = t6727 + t6737;
  t6792 = t202*t1380;
  t6807 = t1398*t1386*t1417;
  t6825 = t6792 + t6807;
  t2520 = -0.09*t2517;
  t2758 = 0.049*t2646;
  t2971 = 0. + t2520 + t2758;
  t6835 = t1363*t6740;
  t6837 = t1425*t6825;
  t6845 = t6835 + t6837;
  t4074 = -0.049*t2517;
  t4555 = -0.09*t2646;
  t4607 = 0. + t4074 + t4555;
  t5412 = -0.049*t5407;
  t5428 = -0.21*t5419;
  t5676 = 0. + t5412 + t5428;
  t6853 = t1425*t6740;
  t6856 = -1.*t1363*t6825;
  t6860 = t6853 + t6856;
  t6905 = t1215*t711*t1398;
  t6906 = t1331*t6845;
  t6907 = t6905 + t6906;
  t5731 = -0.21*t5407;
  t5737 = 0.049*t5419;
  t5773 = 0. + t5731 + t5737;
  t6009 = -0.2707*t5958;
  t6048 = 0.0016*t6026;
  t6053 = 0. + t6009 + t6048;
  t6914 = t2646*t6860;
  t6917 = t2210*t6907;
  t6928 = t6914 + t6917;
  t6937 = t2210*t6860;
  t6938 = -1.*t2646*t6907;
  t6943 = t6937 + t6938;
  t6126 = -0.0016*t5958;
  t6153 = -0.2707*t6026;
  t6205 = 0. + t6126 + t6153;
  t6354 = 0.0184*t6341;
  t6404 = -0.7055*t6360;
  t6405 = 0. + t6354 + t6404;
  t6955 = -1.*t5419*t6928;
  t6965 = t5161*t6943;
  t6966 = t6955 + t6965;
  t6975 = t5161*t6928;
  t6977 = t5419*t6943;
  t6993 = t6975 + t6977;
  t6500 = -0.7055*t6341;
  t6530 = -0.0184*t6360;
  t6553 = 0. + t6500 + t6530;
  t7008 = t6026*t6966;
  t7009 = t5902*t6993;
  t7011 = t7008 + t7009;
  t7022 = t5902*t6966;
  t7028 = -1.*t6026*t6993;
  t7034 = t7022 + t7028;
  t7143 = t711*t1380*t1363;
  t7159 = t1425*t711*t1417;
  t7165 = t7143 + t7159;
  t7206 = t1425*t711*t1380;
  t7211 = -1.*t711*t1363*t1417;
  t7214 = t7206 + t7211;
  t7252 = -1.*t1215*t1386;
  t7258 = t1331*t7165;
  t7280 = t7252 + t7258;
  t7290 = t2646*t7214;
  t7293 = t2210*t7280;
  t7301 = t7290 + t7293;
  t7329 = t2210*t7214;
  t7331 = -1.*t2646*t7280;
  t7350 = t7329 + t7331;
  t7378 = -1.*t5419*t7301;
  t7385 = t5161*t7350;
  t7405 = t7378 + t7385;
  t7427 = t5161*t7301;
  t7430 = t5419*t7350;
  t7481 = t7427 + t7430;
  t7508 = t6026*t7405;
  t7512 = t5902*t7481;
  t7514 = t7508 + t7512;
  t7526 = t5902*t7405;
  t7534 = -1.*t6026*t7481;
  t7536 = t7526 + t7534;
  p_output1[0]=0. + t1375*t1420 + t1439*t1454 + t1481*t1877 + t2971*t3335 + t4607*t4762 + t5676*t5714 + t5773*t5845 + t6053*t6090 + t6205*t6229 + t6405*t6454 + t6553*t6585 - 0.7055*(-1.*t6360*t6454 + t6296*t6585) + 0.0184*(t6296*t6454 + t6360*t6585) + t1348*t202*t711 - 0.1305*(t1215*t1877 - 1.*t1331*t202*t711) + var1[0];
  p_output1[1]=0. + t1375*t6740 + t1439*t6825 + t1481*t6845 + t2971*t6860 + t4607*t6907 + t5676*t6928 + t5773*t6943 + t6053*t6966 + t6205*t6993 + t6405*t7011 + t6553*t7034 - 0.7055*(-1.*t6360*t7011 + t6296*t7034) + 0.0184*(t6296*t7011 + t6360*t7034) + t1348*t1398*t711 - 0.1305*(t1215*t6845 - 1.*t1331*t1398*t711) + var1[1];
  p_output1[2]=0. - 1.*t1348*t1386 + t1375*t1380*t711 + t1417*t1439*t711 + t1481*t7165 - 0.1305*(t1331*t1386 + t1215*t7165) + t2971*t7214 + t4607*t7280 + t5676*t7301 + t5773*t7350 + t6053*t7405 + t6205*t7481 + t6405*t7514 + t6553*t7536 - 0.7055*(-1.*t6360*t7514 + t6296*t7536) + 0.0184*(t6296*t7514 + t6360*t7536) + var1[2];
}



void p_ankle_joint_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
