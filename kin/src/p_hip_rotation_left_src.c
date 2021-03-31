/*
 * Automatically Generated from Mathematica.
 * Wed 12 Feb 2020 15:27:29 GMT-08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_hip_rotation_left_src.h"

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
  double t1329;
  double t1298;
  double t1332;
  double t1312;
  double t1342;
  double t1202;
  double t1358;
  double t1374;
  double t1379;
  double t1316;
  double t1347;
  double t1353;
  double t1382;
  double t1436;
  double t1437;
  double t1441;
  double t1454;
  double t1426;
  double t1428;
  double t1432;
  double t1475;
  double t1231;
  double t1290;
  double t1292;
  double t1296;
  double t1389;
  double t1392;
  double t1554;
  double t1555;
  double t1559;
  double t1541;
  double t1545;
  double t1550;
  double t1446;
  double t1459;
  double t1462;
  double t1483;
  double t1487;
  double t1489;
  double t1585;
  double t1586;
  double t1592;
  double t1654;
  double t1655;
  double t1661;
  t1329 = Cos(var1[3]);
  t1298 = Cos(var1[5]);
  t1332 = Sin(var1[4]);
  t1312 = Sin(var1[3]);
  t1342 = Sin(var1[5]);
  t1202 = Cos(var1[6]);
  t1358 = t1329*t1298*t1332;
  t1374 = t1312*t1342;
  t1379 = t1358 + t1374;
  t1316 = -1.*t1298*t1312;
  t1347 = t1329*t1332*t1342;
  t1353 = t1316 + t1347;
  t1382 = Sin(var1[6]);
  t1436 = Cos(var1[7]);
  t1437 = -1.*t1436;
  t1441 = 1. + t1437;
  t1454 = Sin(var1[7]);
  t1426 = t1202*t1353;
  t1428 = t1379*t1382;
  t1432 = t1426 + t1428;
  t1475 = Cos(var1[4]);
  t1231 = -1.*t1202;
  t1290 = 1. + t1231;
  t1292 = 0.135*t1290;
  t1296 = 0. + t1292;
  t1389 = -0.135*t1382;
  t1392 = 0. + t1389;
  t1554 = t1298*t1312*t1332;
  t1555 = -1.*t1329*t1342;
  t1559 = t1554 + t1555;
  t1541 = t1329*t1298;
  t1545 = t1312*t1332*t1342;
  t1550 = t1541 + t1545;
  t1446 = 0.135*t1441;
  t1459 = 0.049*t1454;
  t1462 = 0. + t1446 + t1459;
  t1483 = -0.049*t1441;
  t1487 = 0.135*t1454;
  t1489 = 0. + t1483 + t1487;
  t1585 = t1202*t1550;
  t1586 = t1559*t1382;
  t1592 = t1585 + t1586;
  t1654 = t1475*t1202*t1342;
  t1655 = t1475*t1298*t1382;
  t1661 = t1654 + t1655;
  p_output1[0]=0. + t1296*t1353 - 0.09*(t1202*t1379 - 1.*t1353*t1382) + t1379*t1392 + t1432*t1462 - 0.049*(t1432*t1454 + t1329*t1436*t1475) + 0.135*(t1432*t1436 - 1.*t1329*t1454*t1475) + t1329*t1475*t1489 + var1[0];
  p_output1[1]=0. + t1312*t1475*t1489 + t1296*t1550 + t1392*t1559 - 0.09*(-1.*t1382*t1550 + t1202*t1559) + t1462*t1592 + 0.135*(-1.*t1312*t1454*t1475 + t1436*t1592) - 0.049*(t1312*t1436*t1475 + t1454*t1592) + var1[1];
  p_output1[2]=0. + t1296*t1342*t1475 + t1298*t1392*t1475 - 0.09*(t1202*t1298*t1475 - 1.*t1342*t1382*t1475) - 1.*t1332*t1489 + t1462*t1661 + 0.135*(t1332*t1454 + t1436*t1661) - 0.049*(-1.*t1332*t1436 + t1454*t1661) + var1[2];
}



void p_hip_rotation_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
