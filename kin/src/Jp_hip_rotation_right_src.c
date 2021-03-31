/*
 * Automatically Generated from Mathematica.
 * Wed 12 Feb 2020 15:28:11 GMT-08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_hip_rotation_right_src.h"

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
  double t992;
  double t2234;
  double t1634;
  double t1916;
  double t2934;
  double t337;
  double t344;
  double t353;
  double t553;
  double t1155;
  double t2227;
  double t3390;
  double t3527;
  double t3779;
  double t4431;
  double t4557;
  double t4638;
  double t225;
  double t5163;
  double t5262;
  double t5356;
  double t357;
  double t590;
  double t928;
  double t1607;
  double t1626;
  double t3902;
  double t3904;
  double t3945;
  double t4265;
  double t5020;
  double t5086;
  double t5093;
  double t9090;
  double t9093;
  double t9094;
  double t9098;
  double t9099;
  double t9100;
  double t9107;
  double t9109;
  double t9111;
  double t9179;
  double t9185;
  double t9187;
  double t9216;
  double t9219;
  double t9220;
  double t9271;
  double t9272;
  double t9273;
  double t9321;
  double t9325;
  double t9327;
  double t9119;
  double t9342;
  double t9344;
  double t9357;
  double t9358;
  double t9359;
  double t9378;
  double t9379;
  double t9380;
  double t9419;
  double t9430;
  double t9431;
  double t9331;
  double t9131;
  double t9136;
  double t9364;
  double t9461;
  double t9466;
  double t9471;
  double t9485;
  double t9486;
  double t9396;
  double t9398;
  double t9406;
  double t9411;
  double t9432;
  double t9434;
  double t9436;
  double t9141;
  double t9144;
  double t9145;
  double t9508;
  double t9509;
  double t9510;
  double t9512;
  double t9513;
  double t9535;
  double t9538;
  double t9540;
  double t9038;
  double t9566;
  double t9568;
  double t9572;
  t992 = Sin(var1[3]);
  t2234 = Cos(var1[3]);
  t1634 = Cos(var1[5]);
  t1916 = Sin(var1[4]);
  t2934 = Sin(var1[5]);
  t337 = Cos(var1[14]);
  t344 = -1.*t337;
  t353 = 1. + t344;
  t553 = Sin(var1[14]);
  t1155 = Sin(var1[13]);
  t2227 = -1.*t1634*t992*t1916;
  t3390 = t2234*t2934;
  t3527 = t2227 + t3390;
  t3779 = Cos(var1[13]);
  t4431 = -1.*t2234*t1634;
  t4557 = -1.*t992*t1916*t2934;
  t4638 = t4431 + t4557;
  t225 = Cos(var1[4]);
  t5163 = t1155*t3527;
  t5262 = t3779*t4638;
  t5356 = t5163 + t5262;
  t357 = -0.049*t353;
  t590 = -0.135*t553;
  t928 = 0. + t357 + t590;
  t1607 = 0.135*t1155;
  t1626 = 0. + t1607;
  t3902 = -1.*t3779;
  t3904 = 1. + t3902;
  t3945 = -0.135*t3904;
  t4265 = 0. + t3945;
  t5020 = -0.135*t353;
  t5086 = 0.049*t553;
  t5093 = 0. + t5020 + t5086;
  t9090 = t2234*t1634*t1916;
  t9093 = t992*t2934;
  t9094 = t9090 + t9093;
  t9098 = -1.*t1634*t992;
  t9099 = t2234*t1916*t2934;
  t9100 = t9098 + t9099;
  t9107 = t1155*t9094;
  t9109 = t3779*t9100;
  t9111 = t9107 + t9109;
  t9179 = t2234*t225*t1634*t1155;
  t9185 = t3779*t2234*t225*t2934;
  t9187 = t9179 + t9185;
  t9216 = t225*t1634*t1155*t992;
  t9219 = t3779*t225*t992*t2934;
  t9220 = t9216 + t9219;
  t9271 = -1.*t1634*t1155*t1916;
  t9272 = -1.*t3779*t1916*t2934;
  t9273 = t9271 + t9272;
  t9321 = t1634*t992;
  t9325 = -1.*t2234*t1916*t2934;
  t9327 = t9321 + t9325;
  t9119 = t3779*t9094;
  t9342 = t1155*t9327;
  t9344 = t9119 + t9342;
  t9357 = t1634*t992*t1916;
  t9358 = -1.*t2234*t2934;
  t9359 = t9357 + t9358;
  t9378 = t3779*t9359;
  t9379 = t1155*t4638;
  t9380 = t9378 + t9379;
  t9419 = t3779*t225*t1634;
  t9430 = -1.*t225*t1155*t2934;
  t9431 = t9419 + t9430;
  t9331 = -1.*t1155*t9094;
  t9131 = -1.*t1155*t9100;
  t9136 = t9119 + t9131;
  t9364 = -1.*t1155*t9359;
  t9461 = t2234*t1634;
  t9466 = t992*t1916*t2934;
  t9471 = t9461 + t9466;
  t9485 = -1.*t1155*t9471;
  t9486 = t9378 + t9485;
  t9396 = -1.*t225*t1634*t1155;
  t9398 = -1.*t3779*t225*t2934;
  t9406 = t9396 + t9398;
  t9411 = -0.09*t9406;
  t9432 = -0.135*t337*t9431;
  t9434 = t5093*t9431;
  t9436 = -0.049*t553*t9431;
  t9141 = -1.*t2234*t225*t553;
  t9144 = t337*t9111;
  t9145 = t9141 + t9144;
  t9508 = -0.135*t337;
  t9509 = -0.049*t553;
  t9510 = t9508 + t9509;
  t9512 = 0.049*t337;
  t9513 = t9512 + t590;
  t9535 = t1155*t9359;
  t9538 = t3779*t9471;
  t9540 = t9535 + t9538;
  t9038 = -1.*t337*t225*t992;
  t9566 = t225*t1634*t1155;
  t9568 = t3779*t225*t2934;
  t9572 = t9566 + t9568;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1626*t3527 + t4265*t4638 - 0.09*(t3527*t3779 - 1.*t1155*t4638) + t5093*t5356 - 0.049*(t5356*t553 + t9038) - 1.*t225*t928*t992 - 0.135*(t337*t5356 + t225*t553*t992);
  p_output1[10]=t1626*t9094 + t4265*t9100 + t5093*t9111 - 0.049*(t2234*t225*t337 + t553*t9111) - 0.09*t9136 - 0.135*t9145 + t2234*t225*t928;
  p_output1[11]=0;
  p_output1[12]=t1626*t1634*t2234*t225 - 0.09*(-1.*t1155*t2234*t225*t2934 + t1634*t2234*t225*t3779) + t2234*t225*t2934*t4265 + t5093*t9187 - 0.135*(t1916*t2234*t553 + t337*t9187) - 0.049*(-1.*t1916*t2234*t337 + t553*t9187) - 1.*t1916*t2234*t928;
  p_output1[13]=t5093*t9220 + t1626*t1634*t225*t992 + t225*t2934*t4265*t992 - 1.*t1916*t928*t992 - 0.049*(t553*t9220 - 1.*t1916*t337*t992) - 0.09*(-1.*t1155*t225*t2934*t992 + t1634*t225*t3779*t992) - 0.135*(t337*t9220 + t1916*t553*t992);
  p_output1[14]=-1.*t1626*t1634*t1916 - 0.09*(t1155*t1916*t2934 - 1.*t1634*t1916*t3779) - 1.*t1916*t2934*t4265 + t5093*t9273 - 0.135*(t225*t553 + t337*t9273) - 0.049*(-1.*t225*t337 + t553*t9273) - 1.*t225*t928;
  p_output1[15]=t4265*t9094 + t1626*t9327 - 0.09*(t3779*t9327 + t9331) - 0.135*t337*t9344 + t5093*t9344 - 0.049*t553*t9344;
  p_output1[16]=t1626*t4638 + t4265*t9359 - 0.09*(t5262 + t9364) - 0.135*t337*t9380 + t5093*t9380 - 0.049*t553*t9380;
  p_output1[17]=-1.*t1626*t225*t2934 + t1634*t225*t4265 + t9411 + t9432 + t9434 + t9436;
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
  p_output1[39]=0.135*t3779*t9094 - 0.135*t1155*t9100 - 0.135*t337*t9136 + t5093*t9136 - 0.049*t553*t9136 - 0.09*(-1.*t3779*t9100 + t9331);
  p_output1[40]=0.135*t3779*t9359 - 0.135*t1155*t9471 - 0.09*(t9364 - 1.*t3779*t9471) - 0.135*t337*t9486 + t5093*t9486 - 0.049*t553*t9486;
  p_output1[41]=-0.135*t1155*t225*t2934 + 0.135*t1634*t225*t3779 + t9411 + t9432 + t9434 + t9436;
  p_output1[42]=-0.135*(-1.*t2234*t225*t337 - 1.*t553*t9111) - 0.049*t9145 + t2234*t225*t9510 + t9111*t9513;
  p_output1[43]=t9513*t9540 - 0.135*(t9038 - 1.*t553*t9540) + t225*t9510*t992 - 0.049*(t337*t9540 - 1.*t225*t553*t992);
  p_output1[44]=-1.*t1916*t9510 + t9513*t9572 - 0.049*(t1916*t553 + t337*t9572) - 0.135*(t1916*t337 - 1.*t553*t9572);
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
}



void Jp_hip_rotation_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
