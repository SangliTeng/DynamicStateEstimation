/*
 * Automatically Generated from Mathematica.
 * Wed 23 Oct 2019 10:25:58 GMT-07:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_VectorNav_to_RightToeBottom_src.h"

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
  double t441;
  double t680;
  double t716;
  double t662;
  double t740;
  double t628;
  double t799;
  double t806;
  double t812;
  double t696;
  double t752;
  double t767;
  double t814;
  double t588;
  double t842;
  double t852;
  double t872;
  double t784;
  double t822;
  double t840;
  double t881;
  double t553;
  double t919;
  double t935;
  double t943;
  double t841;
  double t896;
  double t902;
  double t947;
  double t380;
  double t162;
  double t495;
  double t1031;
  double t1045;
  double t1054;
  double t1005;
  double t1014;
  double t1016;
  double t1091;
  double t1095;
  double t1109;
  double t1026;
  double t1055;
  double t1075;
  double t1129;
  double t1130;
  double t1148;
  double t1084;
  double t1111;
  double t1115;
  double t1170;
  double t1172;
  double t1190;
  double t1126;
  double t1150;
  double t1164;
  double t1239;
  double t1247;
  double t1254;
  double t1229;
  double t1230;
  double t1235;
  double t1271;
  double t1273;
  double t1294;
  double t1238;
  double t1260;
  double t1262;
  double t1306;
  double t1308;
  double t1309;
  double t1264;
  double t1297;
  double t1303;
  double t1338;
  double t1339;
  double t1341;
  double t1304;
  double t1317;
  double t1331;
  double t907;
  double t956;
  double t969;
  double t987;
  double t997;
  double t998;
  double t1169;
  double t1199;
  double t1208;
  double t1218;
  double t1222;
  double t1223;
  double t1334;
  double t1345;
  double t1346;
  double t1352;
  double t1359;
  double t1360;
  t441 = Cos(var1[8]);
  t680 = Cos(var1[10]);
  t716 = Sin(var1[9]);
  t662 = Cos(var1[9]);
  t740 = Sin(var1[10]);
  t628 = Cos(var1[11]);
  t799 = -1.*t441*t680*t716;
  t806 = -1.*t441*t662*t740;
  t812 = t799 + t806;
  t696 = t441*t662*t680;
  t752 = -1.*t441*t716*t740;
  t767 = t696 + t752;
  t814 = Sin(var1[11]);
  t588 = Cos(var1[12]);
  t842 = t628*t812;
  t852 = -1.*t767*t814;
  t872 = t842 + t852;
  t784 = t628*t767;
  t822 = t812*t814;
  t840 = t784 + t822;
  t881 = Sin(var1[12]);
  t553 = Cos(var1[13]);
  t919 = t588*t872;
  t935 = -1.*t840*t881;
  t943 = t919 + t935;
  t841 = t588*t840;
  t896 = t872*t881;
  t902 = t841 + t896;
  t947 = Sin(var1[13]);
  t380 = Cos(var1[7]);
  t162 = Sin(var1[8]);
  t495 = Sin(var1[7]);
  t1031 = -1.*t662*t495;
  t1045 = -1.*t380*t162*t716;
  t1054 = t1031 + t1045;
  t1005 = t380*t662*t162;
  t1014 = -1.*t495*t716;
  t1016 = t1005 + t1014;
  t1091 = t680*t1054;
  t1095 = -1.*t1016*t740;
  t1109 = t1091 + t1095;
  t1026 = t680*t1016;
  t1055 = t1054*t740;
  t1075 = t1026 + t1055;
  t1129 = t628*t1109;
  t1130 = -1.*t1075*t814;
  t1148 = t1129 + t1130;
  t1084 = t628*t1075;
  t1111 = t1109*t814;
  t1115 = t1084 + t1111;
  t1170 = t588*t1148;
  t1172 = -1.*t1115*t881;
  t1190 = t1170 + t1172;
  t1126 = t588*t1115;
  t1150 = t1148*t881;
  t1164 = t1126 + t1150;
  t1239 = t380*t662;
  t1247 = -1.*t495*t162*t716;
  t1254 = t1239 + t1247;
  t1229 = t662*t495*t162;
  t1230 = t380*t716;
  t1235 = t1229 + t1230;
  t1271 = t680*t1254;
  t1273 = -1.*t1235*t740;
  t1294 = t1271 + t1273;
  t1238 = t680*t1235;
  t1260 = t1254*t740;
  t1262 = t1238 + t1260;
  t1306 = t628*t1294;
  t1308 = -1.*t1262*t814;
  t1309 = t1306 + t1308;
  t1264 = t628*t1262;
  t1297 = t1294*t814;
  t1303 = t1264 + t1297;
  t1338 = t588*t1309;
  t1339 = -1.*t1303*t881;
  t1341 = t1338 + t1339;
  t1304 = t588*t1303;
  t1317 = t1309*t881;
  t1331 = t1304 + t1317;
  t907 = t553*t902;
  t956 = t943*t947;
  t969 = t907 + t956;
  t987 = t553*t943;
  t997 = -1.*t902*t947;
  t998 = t987 + t997;
  t1169 = t553*t1164;
  t1199 = t1190*t947;
  t1208 = t1169 + t1199;
  t1218 = t553*t1190;
  t1222 = -1.*t1164*t947;
  t1223 = t1218 + t1222;
  t1334 = t553*t1331;
  t1345 = t1341*t947;
  t1346 = t1334 + t1345;
  t1352 = t553*t1341;
  t1359 = -1.*t1331*t947;
  t1360 = t1352 + t1359;
  p_output1[0]=0. + t162;
  p_output1[1]=0. - 1.*t380*t441;
  p_output1[2]=0. - 1.*t441*t495;
  p_output1[3]=0. + 0.642788*t969 + 0.766044*t998;
  p_output1[4]=0. + 0.642788*t1208 + 0.766044*t1223;
  p_output1[5]=0. + 0.642788*t1346 + 0.766044*t1360;
  p_output1[6]=0. - 0.766044*t969 + 0.642788*t998;
  p_output1[7]=0. - 0.766044*t1208 + 0.642788*t1223;
  p_output1[8]=0. - 0.766044*t1346 + 0.642788*t1360;
}



void R_VectorNav_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
