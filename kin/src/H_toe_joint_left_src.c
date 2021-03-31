/*
 * Automatically Generated from Mathematica.
 * Wed 12 Feb 2020 15:28:01 GMT-08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_toe_joint_left_src.h"

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
  double t818;
  double t947;
  double t967;
  double t954;
  double t979;
  double t894;
  double t1068;
  double t1070;
  double t1071;
  double t955;
  double t1049;
  double t1056;
  double t1088;
  double t778;
  double t1255;
  double t1273;
  double t1274;
  double t825;
  double t874;
  double t887;
  double t1064;
  double t1101;
  double t1142;
  double t1153;
  double t1177;
  double t1188;
  double t1293;
  double t1416;
  double t1219;
  double t1317;
  double t1334;
  double t465;
  double t1442;
  double t1483;
  double t1485;
  double t1570;
  double t1412;
  double t1506;
  double t1557;
  double t392;
  double t1592;
  double t1657;
  double t1663;
  double t1829;
  double t1569;
  double t1681;
  double t1691;
  double t164;
  double t1860;
  double t1913;
  double t1952;
  double t45;
  double t2190;
  double t2203;
  double t2274;
  double t2168;
  double t2173;
  double t2187;
  double t2486;
  double t2493;
  double t2506;
  double t2162;
  double t2189;
  double t2345;
  double t2367;
  double t2395;
  double t2434;
  double t2440;
  double t2511;
  double t2534;
  double t2718;
  double t2773;
  double t2779;
  double t2551;
  double t2789;
  double t2803;
  double t2815;
  double t2840;
  double t2856;
  double t2027;
  double t2810;
  double t2902;
  double t2903;
  double t3045;
  double t3062;
  double t3063;
  double t3319;
  double t3402;
  double t3403;
  double t3250;
  double t3253;
  double t3255;
  double t3264;
  double t3268;
  double t3269;
  double t3285;
  double t3408;
  double t3409;
  double t3427;
  double t3430;
  double t3435;
  double t3425;
  double t3439;
  double t3483;
  double t3495;
  double t3517;
  double t3518;
  double t3486;
  double t3538;
  double t3545;
  double t3592;
  double t3599;
  double t3622;
  double t1781;
  double t1955;
  double t1956;
  double t2082;
  double t2094;
  double t2097;
  double t3005;
  double t3071;
  double t3155;
  double t3224;
  double t3235;
  double t3238;
  double t3554;
  double t3623;
  double t3627;
  double t3683;
  double t3696;
  double t3700;
  double t4370;
  double t4402;
  double t4663;
  double t4665;
  double t4885;
  double t4888;
  double t5014;
  double t5021;
  double t5171;
  double t5175;
  double t5297;
  double t5312;
  double t3724;
  double t3746;
  double t3754;
  double t4010;
  double t4019;
  double t4147;
  double t4223;
  double t4251;
  double t4337;
  double t4411;
  double t4440;
  double t4445;
  double t4455;
  double t4488;
  double t4540;
  double t4779;
  double t4791;
  double t4800;
  double t4824;
  double t4837;
  double t4849;
  double t4934;
  double t4944;
  double t4954;
  double t4961;
  double t4966;
  double t5008;
  double t5026;
  double t5059;
  double t5083;
  double t5128;
  double t5129;
  double t5135;
  double t5196;
  double t5201;
  double t5202;
  double t5209;
  double t5215;
  double t5223;
  double t5331;
  double t5349;
  double t5352;
  double t5374;
  double t5392;
  double t5417;
  double t3762;
  double t3782;
  double t3784;
  double t3814;
  double t3818;
  double t3826;
  t818 = Cos(var1[3]);
  t947 = Cos(var1[5]);
  t967 = Sin(var1[4]);
  t954 = Sin(var1[3]);
  t979 = Sin(var1[5]);
  t894 = Cos(var1[6]);
  t1068 = t818*t947*t967;
  t1070 = t954*t979;
  t1071 = t1068 + t1070;
  t955 = -1.*t947*t954;
  t1049 = t818*t967*t979;
  t1056 = t955 + t1049;
  t1088 = Sin(var1[6]);
  t778 = Cos(var1[8]);
  t1255 = t894*t1071;
  t1273 = -1.*t1056*t1088;
  t1274 = t1255 + t1273;
  t825 = Cos(var1[4]);
  t874 = Cos(var1[7]);
  t887 = t818*t825*t874;
  t1064 = t894*t1056;
  t1101 = t1071*t1088;
  t1142 = t1064 + t1101;
  t1153 = Sin(var1[7]);
  t1177 = t1142*t1153;
  t1188 = t887 + t1177;
  t1293 = Sin(var1[8]);
  t1416 = Cos(var1[9]);
  t1219 = t778*t1188;
  t1317 = t1274*t1293;
  t1334 = t1219 + t1317;
  t465 = Sin(var1[9]);
  t1442 = t778*t1274;
  t1483 = -1.*t1188*t1293;
  t1485 = t1442 + t1483;
  t1570 = Cos(var1[10]);
  t1412 = -1.*t465*t1334;
  t1506 = t1416*t1485;
  t1557 = t1412 + t1506;
  t392 = Sin(var1[10]);
  t1592 = t1416*t1334;
  t1657 = t465*t1485;
  t1663 = t1592 + t1657;
  t1829 = Cos(var1[11]);
  t1569 = t392*t1557;
  t1681 = t1570*t1663;
  t1691 = t1569 + t1681;
  t164 = Sin(var1[11]);
  t1860 = t1570*t1557;
  t1913 = -1.*t392*t1663;
  t1952 = t1860 + t1913;
  t45 = Cos(var1[12]);
  t2190 = t947*t954*t967;
  t2203 = -1.*t818*t979;
  t2274 = t2190 + t2203;
  t2168 = t818*t947;
  t2173 = t954*t967*t979;
  t2187 = t2168 + t2173;
  t2486 = t894*t2274;
  t2493 = -1.*t2187*t1088;
  t2506 = t2486 + t2493;
  t2162 = t825*t874*t954;
  t2189 = t894*t2187;
  t2345 = t2274*t1088;
  t2367 = t2189 + t2345;
  t2395 = t2367*t1153;
  t2434 = t2162 + t2395;
  t2440 = t778*t2434;
  t2511 = t2506*t1293;
  t2534 = t2440 + t2511;
  t2718 = t778*t2506;
  t2773 = -1.*t2434*t1293;
  t2779 = t2718 + t2773;
  t2551 = -1.*t465*t2534;
  t2789 = t1416*t2779;
  t2803 = t2551 + t2789;
  t2815 = t1416*t2534;
  t2840 = t465*t2779;
  t2856 = t2815 + t2840;
  t2027 = Sin(var1[12]);
  t2810 = t392*t2803;
  t2902 = t1570*t2856;
  t2903 = t2810 + t2902;
  t3045 = t1570*t2803;
  t3062 = -1.*t392*t2856;
  t3063 = t3045 + t3062;
  t3319 = t825*t947*t894;
  t3402 = -1.*t825*t979*t1088;
  t3403 = t3319 + t3402;
  t3250 = -1.*t874*t967;
  t3253 = t825*t894*t979;
  t3255 = t825*t947*t1088;
  t3264 = t3253 + t3255;
  t3268 = t3264*t1153;
  t3269 = t3250 + t3268;
  t3285 = t778*t3269;
  t3408 = t3403*t1293;
  t3409 = t3285 + t3408;
  t3427 = t778*t3403;
  t3430 = -1.*t3269*t1293;
  t3435 = t3427 + t3430;
  t3425 = -1.*t465*t3409;
  t3439 = t1416*t3435;
  t3483 = t3425 + t3439;
  t3495 = t1416*t3409;
  t3517 = t465*t3435;
  t3518 = t3495 + t3517;
  t3486 = t392*t3483;
  t3538 = t1570*t3518;
  t3545 = t3486 + t3538;
  t3592 = t1570*t3483;
  t3599 = -1.*t392*t3518;
  t3622 = t3592 + t3599;
  t1781 = -1.*t164*t1691;
  t1955 = t1829*t1952;
  t1956 = t1781 + t1955;
  t2082 = t1829*t1691;
  t2094 = t164*t1952;
  t2097 = t2082 + t2094;
  t3005 = -1.*t164*t2903;
  t3071 = t1829*t3063;
  t3155 = t3005 + t3071;
  t3224 = t1829*t2903;
  t3235 = t164*t3063;
  t3238 = t3224 + t3235;
  t3554 = -1.*t164*t3545;
  t3623 = t1829*t3622;
  t3627 = t3554 + t3623;
  t3683 = t1829*t3545;
  t3696 = t164*t3622;
  t3700 = t3683 + t3696;
  t4370 = -1.*t874;
  t4402 = 1. + t4370;
  t4663 = -1.*t778;
  t4665 = 1. + t4663;
  t4885 = -1.*t1416;
  t4888 = 1. + t4885;
  t5014 = -1.*t1570;
  t5021 = 1. + t5014;
  t5171 = -1.*t1829;
  t5175 = 1. + t5171;
  t5297 = -1.*t45;
  t5312 = 1. + t5297;
  t3724 = t2027*t1956;
  t3746 = t45*t2097;
  t3754 = t3724 + t3746;
  t4010 = -1.*t894;
  t4019 = 1. + t4010;
  t4147 = 0.135*t4019;
  t4223 = 0. + t4147;
  t4251 = -0.135*t1088;
  t4337 = 0. + t4251;
  t4411 = 0.135*t4402;
  t4440 = 0.049*t1153;
  t4445 = 0. + t4411 + t4440;
  t4455 = -0.049*t4402;
  t4488 = 0.135*t1153;
  t4540 = 0. + t4455 + t4488;
  t4779 = -0.049*t4665;
  t4791 = -0.09*t1293;
  t4800 = 0. + t4779 + t4791;
  t4824 = -0.09*t4665;
  t4837 = 0.049*t1293;
  t4849 = 0. + t4824 + t4837;
  t4934 = -0.049*t4888;
  t4944 = -0.21*t465;
  t4954 = 0. + t4934 + t4944;
  t4961 = -0.21*t4888;
  t4966 = 0.049*t465;
  t5008 = 0. + t4961 + t4966;
  t5026 = -0.2707*t5021;
  t5059 = 0.0016*t392;
  t5083 = 0. + t5026 + t5059;
  t5128 = -0.0016*t5021;
  t5129 = -0.2707*t392;
  t5135 = 0. + t5128 + t5129;
  t5196 = 0.0184*t5175;
  t5201 = -0.7055*t164;
  t5202 = 0. + t5196 + t5201;
  t5209 = -0.7055*t5175;
  t5215 = -0.0184*t164;
  t5223 = 0. + t5209 + t5215;
  t5331 = -1.1135*t5312;
  t5349 = 0.0216*t2027;
  t5352 = 0. + t5331 + t5349;
  t5374 = -0.0216*t5312;
  t5392 = -1.1135*t2027;
  t5417 = 0. + t5374 + t5392;
  t3762 = t2027*t3155;
  t3782 = t45*t3238;
  t3784 = t3762 + t3782;
  t3814 = t2027*t3627;
  t3818 = t45*t3700;
  t3826 = t3814 + t3818;
  p_output1[0]=t2027*t2097 - 1.*t1956*t45;
  p_output1[1]=t2027*t3238 - 1.*t3155*t45;
  p_output1[2]=t2027*t3700 - 1.*t3627*t45;
  p_output1[3]=0.;
  p_output1[4]=t3754;
  p_output1[5]=t3784;
  p_output1[6]=t3826;
  p_output1[7]=0.;
  p_output1[8]=t1153*t818*t825 - 1.*t1142*t874;
  p_output1[9]=-1.*t2367*t874 + t1153*t825*t954;
  p_output1[10]=-1.*t3264*t874 - 1.*t1153*t967;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.0216*t3754 + t1056*t4223 + t1071*t4337 + t1142*t4445 - 1.1135*(-1.*t2027*t2097 + t1956*t45) + t1188*t4800 + t1274*t4849 + t1334*t4954 + t1485*t5008 + t1557*t5083 + t1663*t5135 + t1691*t5202 + t1952*t5223 + t1956*t5352 + t2097*t5417 + t4540*t818*t825 + 0.1305*(-1.*t1153*t818*t825 + t1142*t874) + var1[0];
  p_output1[13]=0. - 0.0216*t3784 + t2187*t4223 + t2274*t4337 + t2367*t4445 - 1.1135*(-1.*t2027*t3238 + t3155*t45) + t2434*t4800 + t2506*t4849 + t2534*t4954 + t2779*t5008 + t2803*t5083 + t2856*t5135 + t2903*t5202 + t3063*t5223 + t3155*t5352 + t3238*t5417 + t4540*t825*t954 + 0.1305*(t2367*t874 - 1.*t1153*t825*t954) + var1[1];
  p_output1[14]=0. - 0.0216*t3826 + t3264*t4445 - 1.1135*(-1.*t2027*t3700 + t3627*t45) + t3269*t4800 + t3403*t4849 + t3409*t4954 + t3435*t5008 + t3483*t5083 + t3518*t5135 + t3545*t5202 + t3622*t5223 + t3627*t5352 + t3700*t5417 + t4337*t825*t947 - 1.*t4540*t967 + 0.1305*(t3264*t874 + t1153*t967) + t4223*t825*t979 + var1[2];
  p_output1[15]=1.;
}



void H_toe_joint_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
