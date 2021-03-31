/*
 * Automatically Generated from Mathematica.
 * Wed 23 Oct 2019 10:26:14 GMT-07:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_VectorNav_to_LeftToeFront_src.h"

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
  double t63;
  double t453;
  double t650;
  double t678;
  double t846;
  double t865;
  double t1578;
  double t2150;
  double t2267;
  double t2330;
  double t2547;
  double t2813;
  double t2846;
  double t2937;
  double t3378;
  double t3396;
  double t3881;
  double t3938;
  double t3969;
  double t4021;
  double t4085;
  double t4185;
  double t4196;
  double t4231;
  double t4975;
  double t5005;
  double t5016;
  double t5043;
  double t5051;
  double t5062;
  double t5138;
  double t5174;
  double t5185;
  double t5199;
  double t5866;
  double t5927;
  double t6053;
  double t6432;
  double t112;
  double t308;
  double t1112;
  double t1346;
  double t1382;
  double t1483;
  double t1587;
  double t1599;
  double t852;
  double t922;
  double t936;
  double t6690;
  double t1676;
  double t1707;
  double t1919;
  double t2482;
  double t2691;
  double t2794;
  double t6853;
  double t6866;
  double t6905;
  double t6912;
  double t6913;
  double t6931;
  double t3032;
  double t3167;
  double t3186;
  double t4027;
  double t4117;
  double t4132;
  double t6977;
  double t6992;
  double t7027;
  double t7041;
  double t7072;
  double t7092;
  double t4740;
  double t4874;
  double t4898;
  double t5069;
  double t5160;
  double t5170;
  double t7110;
  double t7111;
  double t7117;
  double t7136;
  double t7146;
  double t7151;
  double t5229;
  double t5450;
  double t5791;
  double t7154;
  double t7158;
  double t7162;
  double t7174;
  double t7204;
  double t7207;
  double t6524;
  double t6535;
  double t6541;
  double t6753;
  double t6778;
  double t6840;
  double t7282;
  double t7283;
  double t7292;
  double t7310;
  double t7317;
  double t7325;
  double t7343;
  double t7355;
  double t7359;
  double t7393;
  double t7414;
  double t7425;
  double t7445;
  double t7457;
  double t7472;
  double t7482;
  double t7497;
  double t7509;
  double t7524;
  double t7528;
  double t7536;
  double t7542;
  double t7543;
  double t7549;
  t63 = Cos(var1[1]);
  t453 = Cos(var1[2]);
  t650 = Cos(var1[3]);
  t678 = -1.*t650;
  t846 = 1. + t678;
  t865 = Sin(var1[3]);
  t1578 = Sin(var1[2]);
  t2150 = Cos(var1[4]);
  t2267 = -1.*t2150;
  t2330 = 1. + t2267;
  t2547 = Sin(var1[4]);
  t2813 = -1.*t63*t453*t865;
  t2846 = -1.*t650*t63*t1578;
  t2937 = t2813 + t2846;
  t3378 = t650*t63*t453;
  t3396 = -1.*t63*t865*t1578;
  t3881 = t3378 + t3396;
  t3938 = Cos(var1[5]);
  t3969 = -1.*t3938;
  t4021 = 1. + t3969;
  t4085 = Sin(var1[5]);
  t4185 = t2547*t2937;
  t4196 = t2150*t3881;
  t4231 = t4185 + t4196;
  t4975 = t2150*t2937;
  t5005 = -1.*t2547*t3881;
  t5016 = t4975 + t5005;
  t5043 = Cos(var1[6]);
  t5051 = -1.*t5043;
  t5062 = 1. + t5051;
  t5138 = Sin(var1[6]);
  t5174 = -1.*t4085*t4231;
  t5185 = t3938*t5016;
  t5199 = t5174 + t5185;
  t5866 = t3938*t4231;
  t5927 = t4085*t5016;
  t6053 = t5866 + t5927;
  t6432 = Cos(var1[0]);
  t112 = -1.*t63;
  t308 = 1. + t112;
  t1112 = Sin(var1[1]);
  t1346 = -1.*t453;
  t1382 = 1. + t1346;
  t1483 = -0.049*t1382;
  t1587 = -0.09*t1578;
  t1599 = 0. + t1483 + t1587;
  t852 = -0.049*t846;
  t922 = -0.21*t865;
  t936 = 0. + t852 + t922;
  t6690 = Sin(var1[0]);
  t1676 = -0.21*t846;
  t1707 = 0.049*t865;
  t1919 = 0. + t1676 + t1707;
  t2482 = -0.2707*t2330;
  t2691 = 0.0016*t2547;
  t2794 = 0. + t2482 + t2691;
  t6853 = t6432*t453*t1112;
  t6866 = -1.*t6690*t1578;
  t6905 = t6853 + t6866;
  t6912 = -1.*t453*t6690;
  t6913 = -1.*t6432*t1112*t1578;
  t6931 = t6912 + t6913;
  t3032 = -0.0016*t2330;
  t3167 = -0.2707*t2547;
  t3186 = 0. + t3032 + t3167;
  t4027 = 0.0184*t4021;
  t4117 = -0.7055*t4085;
  t4132 = 0. + t4027 + t4117;
  t6977 = -1.*t865*t6905;
  t6992 = t650*t6931;
  t7027 = t6977 + t6992;
  t7041 = t650*t6905;
  t7072 = t865*t6931;
  t7092 = t7041 + t7072;
  t4740 = -0.7055*t4021;
  t4874 = -0.0184*t4085;
  t4898 = 0. + t4740 + t4874;
  t5069 = -1.1135*t5062;
  t5160 = 0.0216*t5138;
  t5170 = 0. + t5069 + t5160;
  t7110 = t2547*t7027;
  t7111 = t2150*t7092;
  t7117 = t7110 + t7111;
  t7136 = t2150*t7027;
  t7146 = -1.*t2547*t7092;
  t7151 = t7136 + t7146;
  t5229 = -0.0216*t5062;
  t5450 = -1.1135*t5138;
  t5791 = 0. + t5229 + t5450;
  t7154 = -1.*t4085*t7117;
  t7158 = t3938*t7151;
  t7162 = t7154 + t7158;
  t7174 = t3938*t7117;
  t7204 = t4085*t7151;
  t7207 = t7174 + t7204;
  t6524 = 0.135*t308;
  t6535 = 0.049*t1112;
  t6541 = 0. + t6524 + t6535;
  t6753 = -0.09*t1382;
  t6778 = 0.049*t1578;
  t6840 = 0. + t6753 + t6778;
  t7282 = t453*t6690*t1112;
  t7283 = t6432*t1578;
  t7292 = t7282 + t7283;
  t7310 = t6432*t453;
  t7317 = -1.*t6690*t1112*t1578;
  t7325 = t7310 + t7317;
  t7343 = -1.*t865*t7292;
  t7355 = t650*t7325;
  t7359 = t7343 + t7355;
  t7393 = t650*t7292;
  t7414 = t865*t7325;
  t7425 = t7393 + t7414;
  t7445 = t2547*t7359;
  t7457 = t2150*t7425;
  t7472 = t7445 + t7457;
  t7482 = t2150*t7359;
  t7497 = -1.*t2547*t7425;
  t7509 = t7482 + t7497;
  t7524 = -1.*t4085*t7472;
  t7528 = t3938*t7509;
  t7536 = t7524 + t7528;
  t7542 = t3938*t7472;
  t7543 = t4085*t7509;
  t7549 = t7542 + t7543;
  p_output1[0]=-0.03155 + 0.004500000000000004*t1112 + t2794*t2937 - 0.049*t308 + t3186*t3881 + t4132*t4231 + t4898*t5016 + t5170*t5199 + t5791*t6053 + 0.088451*(t5138*t5199 + t5043*t6053) - 1.062256*(t5043*t5199 - 1.*t5138*t6053) + t1599*t63 - 1.*t1578*t1919*t63 + t453*t63*t936;
  p_output1[1]=0. + 0.135*(1. - 1.*t6432) + t1112*t1599*t6432 + 0.1305*t63*t6432 + t6432*t6541 - 1.*t6690*t6840 + t1919*t6931 + t2794*t7027 + t3186*t7092 + t4132*t7117 + t4898*t7151 + t5170*t7162 + t5791*t7207 + 0.088451*(t5138*t7162 + t5043*t7207) - 1.062256*(t5043*t7162 - 1.*t5138*t7207) + t6905*t936;
  p_output1[2]=0.07996 - 0.135*t6690 + t1112*t1599*t6690 + 0.1305*t63*t6690 + t6541*t6690 + t6432*t6840 + t1919*t7325 + t2794*t7359 + t3186*t7425 + t4132*t7472 + t4898*t7509 + t5170*t7536 + t5791*t7549 + 0.088451*(t5138*t7536 + t5043*t7549) - 1.062256*(t5043*t7536 - 1.*t5138*t7549) + t7292*t936;
}



void p_VectorNav_to_LeftToeFront_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
