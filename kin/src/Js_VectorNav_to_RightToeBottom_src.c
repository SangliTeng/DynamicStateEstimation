/*
 * Automatically Generated from Mathematica.
 * Wed 23 Oct 2019 10:33:54 GMT-07:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Js_VectorNav_to_RightToeBottom_src.h"

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
  double t310;
  double t97;
  double t202;
  double t211;
  double t312;
  double t2046;
  double t2156;
  double t2160;
  double t401;
  double t464;
  double t506;
  double t1941;
  double t1297;
  double t2347;
  double t2433;
  double t2603;
  double t2659;
  double t2667;
  double t2185;
  double t2208;
  double t1945;
  double t1730;
  double t2290;
  double t3185;
  double t4764;
  double t4811;
  double t4907;
  double t5109;
  double t2760;
  double t5059;
  double t5136;
  double t5158;
  double t5350;
  double t5368;
  double t5392;
  double t3345;
  double t3907;
  double t3384;
  double t3496;
  double t3727;
  double t3738;
  double t3949;
  double t3967;
  double t4136;
  double t4265;
  double t4340;
  double t5460;
  double t5477;
  double t5707;
  double t5713;
  double t5727;
  double t5761;
  double t5763;
  double t5769;
  double t5996;
  double t6004;
  double t6009;
  double t6016;
  double t5300;
  double t5409;
  double t5857;
  double t5865;
  double t5869;
  double t6011;
  double t6031;
  double t6032;
  double t5937;
  double t5959;
  double t5968;
  double t6044;
  double t6045;
  double t6066;
  double t5598;
  double t5641;
  double t5646;
  double t5787;
  double t5793;
  double t5801;
  double t6087;
  double t6113;
  double t6339;
  double t6348;
  double t6350;
  double t6320;
  double t6321;
  double t6325;
  double t6367;
  double t6374;
  double t6380;
  double t6402;
  double t6036;
  double t6076;
  double t6237;
  double t6247;
  double t6253;
  double t6392;
  double t6404;
  double t6406;
  double t6223;
  double t6224;
  double t6229;
  double t6408;
  double t6410;
  double t6412;
  double t6180;
  double t6187;
  double t6194;
  double t6137;
  double t6143;
  double t6162;
  double t6201;
  double t6202;
  double t6213;
  double t6217;
  double t6266;
  double t6267;
  double t6282;
  double t6292;
  double t6439;
  double t6440;
  double t6526;
  double t6529;
  double t6530;
  double t6532;
  double t6538;
  double t6548;
  double t6590;
  double t6593;
  double t6598;
  double t6601;
  double t6407;
  double t6419;
  double t6569;
  double t6571;
  double t6572;
  double t6600;
  double t6602;
  double t6606;
  double t6575;
  double t6580;
  double t6581;
  double t6610;
  double t6620;
  double t6625;
  double t6470;
  double t6471;
  double t6477;
  double t6444;
  double t6445;
  double t6466;
  double t6483;
  double t6497;
  double t6506;
  double t6508;
  double t6555;
  double t6556;
  double t6562;
  double t6563;
  t310 = Cos(var1[7]);
  t97 = Sin(var1[7]);
  t202 = -1.*t97;
  t211 = 0. + t202;
  t312 = 0. + t310;
  t2046 = Cos(var1[8]);
  t2156 = -1.*t310*t2046;
  t2160 = 0. + t2156;
  t401 = -1.*t310;
  t464 = 1. + t401;
  t506 = -0.135*t464;
  t1941 = Sin(var1[8]);
  t1297 = -0.135*t97;
  t2347 = -1.*t2046;
  t2433 = 1. + t2347;
  t2603 = -0.135*t2433;
  t2659 = 0.049*t1941;
  t2667 = 0. + t2603 + t2659;
  t2185 = -1.*t2046*t97;
  t2208 = 0. + t2185;
  t1945 = 0. + t1941;
  t1730 = 0.049*t310;
  t2290 = -0.07996*t2160;
  t3185 = -1.*t97*t2667;
  t4764 = Cos(var1[9]);
  t4811 = -1.*t4764;
  t4907 = 1. + t4811;
  t5109 = Sin(var1[9]);
  t2760 = t310*t2667;
  t5059 = -0.049*t4907;
  t5136 = -0.09*t5109;
  t5158 = 0. + t5059 + t5136;
  t5350 = -0.09*t4907;
  t5368 = 0.049*t5109;
  t5392 = 0. + t5350 + t5368;
  t3345 = 0.03155*t2208;
  t3907 = 0.07996*t1945;
  t3384 = 0.049*t2433;
  t3496 = 0.135*t1941;
  t3727 = 0.135*t97;
  t3738 = t97*t2667;
  t3949 = -0.03155*t2160;
  t3967 = -0.049*t2433;
  t4136 = -0.135*t1941;
  t4265 = 0.135*t464;
  t4340 = -1.*t310*t2667;
  t5460 = t310*t1941*t5158;
  t5477 = -1.*t97*t5392;
  t5707 = t310*t4764*t1941;
  t5713 = -1.*t97*t5109;
  t5727 = t5707 + t5713;
  t5761 = -1.*t4764*t97;
  t5763 = -1.*t310*t1941*t5109;
  t5769 = t5761 + t5763;
  t5996 = Cos(var1[10]);
  t6004 = -1.*t5996;
  t6009 = 1. + t6004;
  t6016 = Sin(var1[10]);
  t5300 = -1.*t97*t1941*t5158;
  t5409 = -1.*t310*t5392;
  t5857 = t4764*t97*t1941;
  t5865 = t310*t5109;
  t5869 = t5857 + t5865;
  t6011 = -0.049*t6009;
  t6031 = -0.21*t6016;
  t6032 = 0. + t6011 + t6031;
  t5937 = t310*t4764;
  t5959 = -1.*t97*t1941*t5109;
  t5968 = t5937 + t5959;
  t6044 = -0.21*t6009;
  t6045 = 0.049*t6016;
  t6066 = 0. + t6044 + t6045;
  t5598 = -1.*t2046*t5158;
  t5641 = t97*t1941*t5158;
  t5646 = t310*t5392;
  t5787 = t2046*t5158;
  t5793 = -1.*t310*t1941*t5158;
  t5801 = t97*t5392;
  t6087 = -1.*t5869*t6032;
  t6113 = -1.*t5968*t6066;
  t6339 = t5996*t5869;
  t6348 = t5968*t6016;
  t6350 = t6339 + t6348;
  t6320 = t5996*t5968;
  t6321 = -1.*t5869*t6016;
  t6325 = t6320 + t6321;
  t6367 = Cos(var1[11]);
  t6374 = -1.*t6367;
  t6380 = 1. + t6374;
  t6402 = Sin(var1[11]);
  t6036 = t5727*t6032;
  t6076 = t5769*t6066;
  t6237 = t5996*t5727;
  t6247 = t5769*t6016;
  t6253 = t6237 + t6247;
  t6392 = -0.0016*t6380;
  t6404 = -0.2707*t6402;
  t6406 = 0. + t6392 + t6404;
  t6223 = t5996*t5769;
  t6224 = -1.*t5727*t6016;
  t6229 = t6223 + t6224;
  t6408 = -0.2707*t6380;
  t6410 = 0.0016*t6402;
  t6412 = 0. + t6408 + t6410;
  t6180 = t2046*t4764*t5996;
  t6187 = -1.*t2046*t5109*t6016;
  t6194 = t6180 + t6187;
  t6137 = -1.*t2046*t5996*t5109;
  t6143 = -1.*t2046*t4764*t6016;
  t6162 = t6137 + t6143;
  t6201 = -1.*t2046*t4764*t6032;
  t6202 = t2046*t5109*t6066;
  t6213 = t5869*t6032;
  t6217 = t5968*t6066;
  t6266 = t2046*t4764*t6032;
  t6267 = -1.*t2046*t5109*t6066;
  t6282 = -1.*t5727*t6032;
  t6292 = -1.*t5769*t6066;
  t6439 = t6253*t6406;
  t6440 = t6229*t6412;
  t6526 = t6367*t6253;
  t6529 = t6229*t6402;
  t6530 = t6526 + t6529;
  t6532 = t6367*t6229;
  t6538 = -1.*t6253*t6402;
  t6548 = t6532 + t6538;
  t6590 = Cos(var1[12]);
  t6593 = -1.*t6590;
  t6598 = 1. + t6593;
  t6601 = Sin(var1[12]);
  t6407 = -1.*t6350*t6406;
  t6419 = -1.*t6325*t6412;
  t6569 = t6367*t6350;
  t6571 = t6325*t6402;
  t6572 = t6569 + t6571;
  t6600 = 0.0184*t6598;
  t6602 = -0.7055*t6601;
  t6606 = 0. + t6600 + t6602;
  t6575 = t6367*t6325;
  t6580 = -1.*t6350*t6402;
  t6581 = t6575 + t6580;
  t6610 = -0.7055*t6598;
  t6620 = -0.0184*t6601;
  t6625 = 0. + t6610 + t6620;
  t6470 = t6367*t6162;
  t6471 = -1.*t6194*t6402;
  t6477 = t6470 + t6471;
  t6444 = t6367*t6194;
  t6445 = t6162*t6402;
  t6466 = t6444 + t6445;
  t6483 = -1.*t6194*t6406;
  t6497 = -1.*t6162*t6412;
  t6506 = t6350*t6406;
  t6508 = t6325*t6412;
  t6555 = t6194*t6406;
  t6556 = t6162*t6412;
  t6562 = -1.*t6253*t6406;
  t6563 = -1.*t6229*t6412;
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
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=1.;
  p_output1[43]=0.;
  p_output1[44]=0.;
  p_output1[45]=0.;
  p_output1[46]=0.07996;
  p_output1[47]=0.135;
  p_output1[48]=0.;
  p_output1[49]=t211;
  p_output1[50]=t312;
  p_output1[51]=-0.135 - 0.07996*t211 + t310*(0. + t506) - 1.*(0. + t1297)*t97;
  p_output1[52]=0. + t1730 + 0.03155*t312;
  p_output1[53]=0. - 0.03155*t211 + 0.049*t97;
  p_output1[54]=t1945;
  p_output1[55]=t2160;
  p_output1[56]=t2208;
  p_output1[57]=0. - 0.09*t2046 + t2290 - 1.*t2046*t310*(0. + t1297 + t3185) - 1.*t2046*(0. + t2760 + t506)*t97;
  p_output1[58]=0. - 0.09*t1941*t310 + t3345 + t1941*(0. + t3727 + t3738) + t3907 - 0.049*t97 - 1.*t2046*(0. + t3384 + t3496)*t97;
  p_output1[59]=0. + t1730 + t3949 - 1.*t2046*t310*(0. + t3967 + t4136) + t1941*(0. + t4265 + t4340) - 0.09*t1941*t97;
  p_output1[60]=t1945;
  p_output1[61]=t2160;
  p_output1[62]=t2208;
  p_output1[63]=0. + t2290 - 0.21*t2046*t4764 - 0.049*t2046*t5109 - 1.*t2046*t310*(0. + t1297 + t3185 + t5300 + t5409) - 1.*t2046*(0. + t2760 + t506 + t5460 + t5477)*t97;
  p_output1[64]=0. + t3345 + t3907 + t1941*(0. + t3727 + t3738 + t5641 + t5646) - 0.21*t5727 + 0.049*t5769 - 1.*t2046*(0. + t3384 + t3496 + t5598)*t97;
  p_output1[65]=0. + t3949 - 1.*t2046*t310*(0. + t3967 + t4136 + t5787) + t1941*(0. + t4265 + t4340 + t5793 + t5801) - 0.21*t5869 + 0.049*t5968;
  p_output1[66]=t1945;
  p_output1[67]=t2160;
  p_output1[68]=t2208;
  p_output1[69]=0. + t2290 - 1.*t2046*t310*(0. + t1297 + t3185 + t5300 + t5409 + t6087 + t6113) + 0.0016*t6162 - 0.2707*t6194 - 1.*t2046*(0. + t2760 + t506 + t5460 + t5477 + t6036 + t6076)*t97;
  p_output1[70]=0. + t3345 + t3907 + t1941*(0. + t3727 + t3738 + t5641 + t5646 + t6213 + t6217) + 0.0016*t6229 - 0.2707*t6253 - 1.*t2046*(0. + t3384 + t3496 + t5598 + t6201 + t6202)*t97;
  p_output1[71]=0. + t3949 - 1.*t2046*t310*(0. + t3967 + t4136 + t5787 + t6266 + t6267) + t1941*(0. + t4265 + t4340 + t5793 + t5801 + t6282 + t6292) + 0.0016*t6325 - 0.2707*t6350;
  p_output1[72]=t1945;
  p_output1[73]=t2160;
  p_output1[74]=t2208;
  p_output1[75]=0. + t2290 - 1.*t2046*t310*(0. + t1297 + t3185 + t5300 + t5409 + t6087 + t6113 + t6407 + t6419) - 0.7055*t6466 - 0.0184*t6477 - 1.*t2046*(0. + t2760 + t506 + t5460 + t5477 + t6036 + t6076 + t6439 + t6440)*t97;
  p_output1[76]=0. + t3345 + t3907 + t1941*(0. + t3727 + t3738 + t5641 + t5646 + t6213 + t6217 + t6506 + t6508) - 0.7055*t6530 - 0.0184*t6548 - 1.*t2046*(0. + t3384 + t3496 + t5598 + t6201 + t6202 + t6483 + t6497)*t97;
  p_output1[77]=0. + t3949 - 1.*t2046*t310*(0. + t3967 + t4136 + t5787 + t6266 + t6267 + t6555 + t6556) + t1941*(0. + t4265 + t4340 + t5793 + t5801 + t6282 + t6292 + t6562 + t6563) - 0.7055*t6572 - 0.0184*t6581;
  p_output1[78]=t1945;
  p_output1[79]=t2160;
  p_output1[80]=t2208;
  p_output1[81]=0. + t2290 + 0.0216*(t6477*t6590 - 1.*t6466*t6601) - 1.1135*(t6466*t6590 + t6477*t6601) - 1.*t2046*t310*(0. + t1297 + t3185 + t5300 + t5409 + t6087 + t6113 + t6407 + t6419 - 1.*t6572*t6606 - 1.*t6581*t6625) - 1.*t2046*(0. + t2760 + t506 + t5460 + t5477 + t6036 + t6076 + t6439 + t6440 + t6530*t6606 + t6548*t6625)*t97;
  p_output1[82]=0. + t3345 + t3907 + 0.0216*(t6548*t6590 - 1.*t6530*t6601) - 1.1135*(t6530*t6590 + t6548*t6601) + t1941*(0. + t3727 + t3738 + t5641 + t5646 + t6213 + t6217 + t6506 + t6508 + t6572*t6606 + t6581*t6625) - 1.*t2046*(0. + t3384 + t3496 + t5598 + t6201 + t6202 + t6483 + t6497 - 1.*t6466*t6606 - 1.*t6477*t6625)*t97;
  p_output1[83]=0. + t3949 + 0.0216*(t6581*t6590 - 1.*t6572*t6601) - 1.1135*(t6572*t6590 + t6581*t6601) - 1.*t2046*t310*(0. + t3967 + t4136 + t5787 + t6266 + t6267 + t6555 + t6556 + t6466*t6606 + t6477*t6625) + t1941*(0. + t4265 + t4340 + t5793 + t5801 + t6282 + t6292 + t6562 + t6563 - 1.*t6530*t6606 - 1.*t6548*t6625);
}



void Js_VectorNav_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
