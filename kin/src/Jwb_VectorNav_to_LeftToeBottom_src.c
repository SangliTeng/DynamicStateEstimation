/*
 * Automatically Generated from Mathematica.
 * Wed 23 Oct 2019 10:33:48 GMT-07:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jwb_VectorNav_to_LeftToeBottom_src.h"

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
  double t467;
  double t659;
  double t780;
  double t559;
  double t665;
  double t695;
  double t461;
  double t807;
  double t844;
  double t953;
  double t1199;
  double t753;
  double t973;
  double t995;
  double t431;
  double t1204;
  double t1280;
  double t1304;
  double t1451;
  double t1133;
  double t1395;
  double t1427;
  double t330;
  double t1522;
  double t1577;
  double t1597;
  double t308;
  double t328;
  double t1882;
  double t1883;
  double t1899;
  double t1869;
  double t1946;
  double t1979;
  double t1986;
  double t1999;
  double t1983;
  double t2013;
  double t2015;
  double t2030;
  double t2039;
  double t2079;
  double t1691;
  double t1665;
  double t1675;
  double t1690;
  double t1442;
  double t1599;
  double t1612;
  double t2146;
  double t2149;
  double t2193;
  double t2025;
  double t2096;
  double t2102;
  t467 = Cos(var1[6]);
  t659 = Sin(var1[6]);
  t780 = Cos(var1[5]);
  t559 = 0.642788*t467;
  t665 = -0.766044*t659;
  t695 = t559 + t665;
  t461 = Sin(var1[5]);
  t807 = 0.766044*t467;
  t844 = 0.642788*t659;
  t953 = t807 + t844;
  t1199 = Cos(var1[4]);
  t753 = t461*t695;
  t973 = t780*t953;
  t995 = 0. + t753 + t973;
  t431 = Sin(var1[4]);
  t1204 = t780*t695;
  t1280 = -1.*t461*t953;
  t1304 = 0. + t1204 + t1280;
  t1451 = Sin(var1[3]);
  t1133 = -1.*t431*t995;
  t1395 = t1199*t1304;
  t1427 = 0. + t1133 + t1395;
  t330 = Cos(var1[3]);
  t1522 = t1199*t995;
  t1577 = t431*t1304;
  t1597 = 0. + t1522 + t1577;
  t308 = Cos(var1[1]);
  t328 = Cos(var1[2]);
  t1882 = -0.766044*t467;
  t1883 = -0.642788*t659;
  t1899 = t1882 + t1883;
  t1869 = -1.*t461*t695;
  t1946 = t780*t1899;
  t1979 = 0. + t1869 + t1946;
  t1986 = t461*t1899;
  t1999 = 0. + t1204 + t1986;
  t1983 = t431*t1979;
  t2013 = t1199*t1999;
  t2015 = 0. + t1983 + t2013;
  t2030 = t1199*t1979;
  t2039 = -1.*t431*t1999;
  t2079 = 0. + t2030 + t2039;
  t1691 = Sin(var1[2]);
  t1665 = t1451*t1427;
  t1675 = t330*t1597;
  t1690 = 0. + t1665 + t1675;
  t1442 = t330*t1427;
  t1599 = -1.*t1451*t1597;
  t1612 = 0. + t1442 + t1599;
  t2146 = t330*t2015;
  t2149 = t1451*t2079;
  t2193 = 0. + t2146 + t2149;
  t2025 = -1.*t1451*t2015;
  t2096 = t330*t2079;
  t2102 = 0. + t2025 + t2096;
  p_output1[0]=0. + Sin(var1[1]);
  p_output1[1]=0. + t308*(0. - 1.*t1690*t1691 + t1612*t328);
  p_output1[2]=0. + t308*(0. - 1.*t1691*t2193 + t2102*t328);
  p_output1[3]=0.;
  p_output1[4]=0. + t1612*t1691 + t1690*t328;
  p_output1[5]=0. + t1691*t2102 + t2193*t328;
  p_output1[6]=1.;
  p_output1[7]=0.;
  p_output1[8]=0.;
  p_output1[9]=1.;
  p_output1[10]=0.;
  p_output1[11]=0.;
  p_output1[12]=1.;
  p_output1[13]=0.;
  p_output1[14]=0.;
  p_output1[15]=1.;
  p_output1[16]=0.;
  p_output1[17]=0.;
  p_output1[18]=1.;
  p_output1[19]=0.;
  p_output1[20]=0.;
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
}



void Jwb_VectorNav_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
