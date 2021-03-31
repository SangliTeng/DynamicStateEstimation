/*
 * Automatically Generated from Mathematica.
 * Wed 12 Feb 2020 15:27:30 GMT-08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_hip_rotation_left_src.h"

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
  double t1585;
  double t1594;
  double t1595;
  double t1577;
  double t1599;
  double t456;
  double t1623;
  double t1632;
  double t1635;
  double t1586;
  double t1600;
  double t1604;
  double t1649;
  double t1685;
  double t1692;
  double t1702;
  double t1709;
  double t1679;
  double t1680;
  double t1683;
  double t1724;
  double t1426;
  double t1522;
  double t1541;
  double t1561;
  double t1654;
  double t1655;
  double t1794;
  double t1795;
  double t1797;
  double t1784;
  double t1785;
  double t1789;
  double t1706;
  double t1715;
  double t1717;
  double t1726;
  double t1729;
  double t1733;
  double t1815;
  double t1816;
  double t1821;
  double t1918;
  double t1923;
  double t1926;
  double t2001;
  double t2009;
  double t2016;
  double t2107;
  double t2109;
  double t2111;
  double t2183;
  double t2184;
  double t2188;
  double t1801;
  double t2202;
  double t2204;
  double t2216;
  double t2224;
  double t2225;
  double t2249;
  double t2253;
  double t2254;
  double t2292;
  double t2293;
  double t2296;
  double t2196;
  double t1806;
  double t1809;
  double t2360;
  double t2369;
  double t2371;
  double t2240;
  double t2391;
  double t2393;
  double t2274;
  double t2280;
  double t2283;
  double t2291;
  double t2302;
  double t2309;
  double t2313;
  double t1847;
  double t1852;
  double t1857;
  double t2410;
  double t2411;
  double t2413;
  double t2417;
  double t2418;
  double t2460;
  double t2467;
  double t2469;
  double t1767;
  double t2494;
  double t2495;
  double t2501;
  t1585 = Cos(var1[5]);
  t1594 = Sin(var1[3]);
  t1595 = Sin(var1[4]);
  t1577 = Cos(var1[3]);
  t1599 = Sin(var1[5]);
  t456 = Cos(var1[6]);
  t1623 = -1.*t1585*t1594*t1595;
  t1632 = t1577*t1599;
  t1635 = t1623 + t1632;
  t1586 = -1.*t1577*t1585;
  t1600 = -1.*t1594*t1595*t1599;
  t1604 = t1586 + t1600;
  t1649 = Sin(var1[6]);
  t1685 = Cos(var1[7]);
  t1692 = -1.*t1685;
  t1702 = 1. + t1692;
  t1709 = Sin(var1[7]);
  t1679 = t456*t1604;
  t1680 = t1635*t1649;
  t1683 = t1679 + t1680;
  t1724 = Cos(var1[4]);
  t1426 = -1.*t456;
  t1522 = 1. + t1426;
  t1541 = 0.135*t1522;
  t1561 = 0. + t1541;
  t1654 = -0.135*t1649;
  t1655 = 0. + t1654;
  t1794 = t1577*t1585*t1595;
  t1795 = t1594*t1599;
  t1797 = t1794 + t1795;
  t1784 = -1.*t1585*t1594;
  t1785 = t1577*t1595*t1599;
  t1789 = t1784 + t1785;
  t1706 = 0.135*t1702;
  t1715 = 0.049*t1709;
  t1717 = 0. + t1706 + t1715;
  t1726 = -0.049*t1702;
  t1729 = 0.135*t1709;
  t1733 = 0. + t1726 + t1729;
  t1815 = t456*t1789;
  t1816 = t1797*t1649;
  t1821 = t1815 + t1816;
  t1918 = t1577*t1724*t456*t1599;
  t1923 = t1577*t1724*t1585*t1649;
  t1926 = t1918 + t1923;
  t2001 = t1724*t456*t1594*t1599;
  t2009 = t1724*t1585*t1594*t1649;
  t2016 = t2001 + t2009;
  t2107 = -1.*t456*t1595*t1599;
  t2109 = -1.*t1585*t1595*t1649;
  t2111 = t2107 + t2109;
  t2183 = t1585*t1594;
  t2184 = -1.*t1577*t1595*t1599;
  t2188 = t2183 + t2184;
  t1801 = t456*t1797;
  t2202 = t2188*t1649;
  t2204 = t1801 + t2202;
  t2216 = t1585*t1594*t1595;
  t2224 = -1.*t1577*t1599;
  t2225 = t2216 + t2224;
  t2249 = t456*t2225;
  t2253 = t1604*t1649;
  t2254 = t2249 + t2253;
  t2292 = t1724*t1585*t456;
  t2293 = -1.*t1724*t1599*t1649;
  t2296 = t2292 + t2293;
  t2196 = -1.*t1797*t1649;
  t1806 = -1.*t1789*t1649;
  t1809 = t1801 + t1806;
  t2360 = t1577*t1585;
  t2369 = t1594*t1595*t1599;
  t2371 = t2360 + t2369;
  t2240 = -1.*t2225*t1649;
  t2391 = -1.*t2371*t1649;
  t2393 = t2249 + t2391;
  t2274 = -1.*t1724*t456*t1599;
  t2280 = -1.*t1724*t1585*t1649;
  t2283 = t2274 + t2280;
  t2291 = -0.09*t2283;
  t2302 = 0.135*t1685*t2296;
  t2309 = t2296*t1717;
  t2313 = -0.049*t2296*t1709;
  t1847 = t1685*t1821;
  t1852 = -1.*t1577*t1724*t1709;
  t1857 = t1847 + t1852;
  t2410 = 0.135*t1685;
  t2411 = -0.049*t1709;
  t2413 = t2410 + t2411;
  t2417 = 0.049*t1685;
  t2418 = t2417 + t1729;
  t2460 = t456*t2371;
  t2467 = t2225*t1649;
  t2469 = t2460 + t2467;
  t1767 = -1.*t1724*t1685*t1594;
  t2494 = t1724*t456*t1599;
  t2495 = t1724*t1585*t1649;
  t2501 = t2494 + t2495;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1561*t1604 + t1635*t1655 + t1683*t1717 + 0.135*(t1683*t1685 + t1594*t1709*t1724) - 1.*t1594*t1724*t1733 - 0.049*(t1683*t1709 + t1767) - 0.09*(-1.*t1604*t1649 + t1635*t456);
  p_output1[10]=t1577*t1724*t1733 + t1561*t1789 + t1655*t1797 - 0.09*t1809 + t1717*t1821 - 0.049*(t1577*t1685*t1724 + t1709*t1821) + 0.135*t1857;
  p_output1[11]=0;
  p_output1[12]=t1561*t1577*t1599*t1724 + t1577*t1585*t1655*t1724 - 1.*t1577*t1595*t1733 + t1717*t1926 + 0.135*(t1577*t1595*t1709 + t1685*t1926) - 0.049*(-1.*t1577*t1595*t1685 + t1709*t1926) - 0.09*(-1.*t1577*t1599*t1649*t1724 + t1577*t1585*t1724*t456);
  p_output1[13]=t1561*t1594*t1599*t1724 + t1585*t1594*t1655*t1724 - 1.*t1594*t1595*t1733 + t1717*t2016 + 0.135*(t1594*t1595*t1709 + t1685*t2016) - 0.049*(-1.*t1594*t1595*t1685 + t1709*t2016) - 0.09*(-1.*t1594*t1599*t1649*t1724 + t1585*t1594*t1724*t456);
  p_output1[14]=-1.*t1561*t1595*t1599 - 1.*t1585*t1595*t1655 - 1.*t1724*t1733 + t1717*t2111 + 0.135*(t1709*t1724 + t1685*t2111) - 0.049*(-1.*t1685*t1724 + t1709*t2111) - 0.09*(t1595*t1599*t1649 - 1.*t1585*t1595*t456);
  p_output1[15]=t1561*t1797 + t1655*t2188 + 0.135*t1685*t2204 - 0.049*t1709*t2204 + t1717*t2204 - 0.09*(t2196 + t2188*t456);
  p_output1[16]=t1604*t1655 + t1561*t2225 - 0.09*(t1679 + t2240) + 0.135*t1685*t2254 - 0.049*t1709*t2254 + t1717*t2254;
  p_output1[17]=t1561*t1585*t1724 - 1.*t1599*t1655*t1724 + t2291 + t2302 + t2309 + t2313;
  p_output1[18]=0.135*t1649*t1789 + 0.135*t1685*t1809 - 0.049*t1709*t1809 + t1717*t1809 - 0.135*t1797*t456 - 0.09*(t2196 - 1.*t1789*t456);
  p_output1[19]=0.135*t1649*t2371 + 0.135*t1685*t2393 - 0.049*t1709*t2393 + t1717*t2393 - 0.135*t2225*t456 - 0.09*(t2240 - 1.*t2371*t456);
  p_output1[20]=0.135*t1599*t1649*t1724 + t2291 + t2302 + t2309 + t2313 - 0.135*t1585*t1724*t456;
  p_output1[21]=0.135*(-1.*t1577*t1685*t1724 - 1.*t1709*t1821) - 0.049*t1857 + t1577*t1724*t2413 + t1821*t2418;
  p_output1[22]=t1594*t1724*t2413 + t2418*t2469 - 0.049*(-1.*t1594*t1709*t1724 + t1685*t2469) + 0.135*(t1767 - 1.*t1709*t2469);
  p_output1[23]=-1.*t1595*t2413 + t2418*t2501 - 0.049*(t1595*t1709 + t1685*t2501) + 0.135*(t1595*t1685 - 1.*t1709*t2501);
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
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
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



void Jp_hip_rotation_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
