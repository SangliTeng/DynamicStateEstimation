/*
 * Automatically Generated from Mathematica.
 * Sat 21 Mar 2020 21:38:13 GMT-07:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJp_hip_abduction_left_src.h"

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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t135;
  double t668;
  double t1197;
  double t1750;
  double t1776;
  double t1777;
  double t1208;
  double t1634;
  double t1721;
  double t1723;
  double t1824;
  double t139;
  double t1780;
  double t1784;
  double t1836;
  double t1842;
  double t1845;
  double t1853;
  double t1863;
  double t1866;
  double t1901;
  double t1902;
  double t1905;
  double t1910;
  double t1913;
  double t1916;
  double t1928;
  double t1953;
  double t1954;
  double t1955;
  double t2093;
  double t2094;
  double t2100;
  double t2117;
  double t2141;
  double t2147;
  double t2157;
  double t430;
  double t1768;
  double t1788;
  double t1792;
  double t1795;
  double t1811;
  double t1814;
  double t1819;
  double t1830;
  double t2246;
  double t2247;
  double t2248;
  double t2249;
  double t2008;
  double t2013;
  double t2014;
  double t2020;
  double t2027;
  double t2031;
  double t2040;
  double t2041;
  double t2048;
  double t2319;
  double t2323;
  double t2324;
  double t2326;
  double t2388;
  double t2389;
  double t2390;
  double t2392;
  double t2222;
  double t2238;
  double t2252;
  double t1852;
  double t1875;
  double t1876;
  double t1877;
  double t1882;
  double t1885;
  double t1946;
  double t1962;
  double t1965;
  double t1971;
  double t1986;
  double t1988;
  double t2313;
  double t2314;
  double t2329;
  double t2061;
  double t2488;
  double t2491;
  double t2494;
  double t2053;
  double t2057;
  double t2065;
  double t2074;
  double t2080;
  double t2105;
  double t2106;
  double t2119;
  double t2126;
  double t2127;
  double t2128;
  double t2350;
  double t2352;
  double t2355;
  double t2358;
  double t2359;
  double t2368;
  double t2385;
  double t2386;
  double t2399;
  double t2255;
  double t2260;
  double t2264;
  double t2447;
  double t2458;
  double t2462;
  double t2468;
  double t2469;
  double t2472;
  double t1907;
  double t1923;
  double t1929;
  double t1933;
  double t1935;
  double t1938;
  double t2333;
  double t2336;
  double t2338;
  double t2486;
  double t2496;
  double t2501;
  double t2502;
  double t2503;
  double t2505;
  double t2131;
  double t2160;
  double t2161;
  double t2171;
  double t2173;
  double t2174;
  double t2526;
  double t2527;
  double t2528;
  double t2529;
  double t2412;
  double t2417;
  double t2422;
  t135 = Sin(var1[3]);
  t668 = Cos(var1[4]);
  t1197 = Cos(var1[6]);
  t1750 = Sin(var1[5]);
  t1776 = Cos(var1[5]);
  t1777 = Sin(var1[6]);
  t1208 = -1.*t1197;
  t1634 = 1. + t1208;
  t1721 = 0.135*t1634;
  t1723 = 0. + t1721;
  t1824 = Cos(var1[3]);
  t139 = Sin(var1[4]);
  t1780 = -0.135*t1777;
  t1784 = 0. + t1780;
  t1836 = t1776*t135;
  t1842 = -1.*t1824*t139*t1750;
  t1845 = t1836 + t1842;
  t1853 = -1.*t1824*t1776*t139;
  t1863 = -1.*t135*t1750;
  t1866 = t1853 + t1863;
  t1901 = -1.*t1776*t135*t139;
  t1902 = t1824*t1750;
  t1905 = t1901 + t1902;
  t1910 = -1.*t1824*t1776;
  t1913 = -1.*t135*t139*t1750;
  t1916 = t1910 + t1913;
  t1928 = t1197*t1905;
  t1953 = t1824*t1776;
  t1954 = t135*t139*t1750;
  t1955 = t1953 + t1954;
  t2093 = t1824*t1776*t139;
  t2094 = t135*t1750;
  t2100 = t2093 + t2094;
  t2117 = t1197*t2100;
  t2141 = -1.*t1776*t135;
  t2147 = t1824*t139*t1750;
  t2157 = t2141 + t2147;
  t430 = -0.049*t135*t139;
  t1768 = -1.*t668*t1723*t135*t1750;
  t1788 = -1.*t668*t1776*t135*t1784;
  t1792 = -1.*t668*t1197*t135*t1750;
  t1795 = -1.*t668*t1776*t135*t1777;
  t1811 = t1792 + t1795;
  t1814 = 0.135*t1811;
  t1819 = t430 + t1768 + t1788 + t1814;
  t1830 = 0.049*t1824*t668;
  t2246 = t1824*t668*t1776*t1197;
  t2247 = -1.*t1824*t668*t1750*t1777;
  t2248 = t2246 + t2247;
  t2249 = 0.135*t2248;
  t2008 = 0.049*t1824*t139;
  t2013 = t1824*t668*t1723*t1750;
  t2014 = t1824*t668*t1776*t1784;
  t2020 = t1824*t668*t1197*t1750;
  t2027 = t1824*t668*t1776*t1777;
  t2031 = t2020 + t2027;
  t2040 = 0.135*t2031;
  t2041 = t2008 + t2013 + t2014 + t2040;
  t2048 = 0.049*t668*t135;
  t2319 = t668*t1776*t1197*t135;
  t2323 = -1.*t668*t135*t1750*t1777;
  t2324 = t2319 + t2323;
  t2326 = 0.135*t2324;
  t2388 = -1.*t1776*t1197*t139;
  t2389 = t139*t1750*t1777;
  t2390 = t2388 + t2389;
  t2392 = 0.135*t2390;
  t2222 = t1824*t668*t1776*t1723;
  t2238 = -1.*t1824*t668*t1750*t1784;
  t2252 = t2222 + t2238 + t2249;
  t1852 = t1723*t1845;
  t1875 = t1866*t1784;
  t1876 = t1197*t1845;
  t1877 = t1866*t1777;
  t1882 = t1876 + t1877;
  t1885 = 0.135*t1882;
  t1946 = t1723*t1905;
  t1962 = t1955*t1784;
  t1965 = t1955*t1777;
  t1971 = t1928 + t1965;
  t1986 = 0.135*t1971;
  t1988 = t1946 + t1962 + t1986;
  t2313 = t668*t1776*t1723*t135;
  t2314 = -1.*t668*t135*t1750*t1784;
  t2329 = t2313 + t2314 + t2326;
  t2061 = t1197*t1916;
  t2488 = t1776*t135*t139;
  t2491 = -1.*t1824*t1750;
  t2494 = t2488 + t2491;
  t2053 = t1723*t1916;
  t2057 = t1905*t1784;
  t2065 = t1905*t1777;
  t2074 = t2061 + t2065;
  t2080 = 0.135*t2074;
  t2105 = t1723*t2100;
  t2106 = t1845*t1784;
  t2119 = t1845*t1777;
  t2126 = t2117 + t2119;
  t2127 = 0.135*t2126;
  t2128 = t2105 + t2106 + t2127;
  t2350 = -1.*t668*t1723*t1750;
  t2352 = -1.*t668*t1776*t1784;
  t2355 = -1.*t668*t1197*t1750;
  t2358 = -1.*t668*t1776*t1777;
  t2359 = t2355 + t2358;
  t2368 = 0.135*t2359;
  t2385 = -1.*t1776*t1723*t139;
  t2386 = t139*t1750*t1784;
  t2399 = t2385 + t2386 + t2392;
  t2255 = -0.135*t1824*t668*t1776*t1197;
  t2260 = 0.135*t1824*t668*t1750*t1777;
  t2264 = t2255 + t2260 + t2249;
  t2447 = -0.135*t1197*t1845;
  t2458 = 0.135*t2100*t1777;
  t2462 = -1.*t2100*t1777;
  t2468 = t1876 + t2462;
  t2469 = 0.135*t2468;
  t2472 = t2447 + t2458 + t2469;
  t1907 = -0.135*t1197*t1905;
  t1923 = 0.135*t1916*t1777;
  t1929 = -1.*t1916*t1777;
  t1933 = t1928 + t1929;
  t1935 = 0.135*t1933;
  t1938 = t1907 + t1923 + t1935;
  t2333 = -0.135*t668*t1776*t1197*t135;
  t2336 = 0.135*t668*t135*t1750*t1777;
  t2338 = t2333 + t2336 + t2326;
  t2486 = -0.135*t1197*t1916;
  t2496 = 0.135*t2494*t1777;
  t2501 = -1.*t2494*t1777;
  t2502 = t2061 + t2501;
  t2503 = 0.135*t2502;
  t2505 = t2486 + t2496 + t2503;
  t2131 = -0.135*t1197*t2100;
  t2160 = 0.135*t2157*t1777;
  t2161 = -1.*t2157*t1777;
  t2171 = t2117 + t2161;
  t2173 = 0.135*t2171;
  t2174 = t2131 + t2160 + t2173;
  t2526 = 0.135*t668*t1197*t1750;
  t2527 = 0.135*t668*t1776*t1777;
  t2528 = t2526 + t2527 + t2368;
  t2529 = var2[6]*t2528;
  t2412 = 0.135*t1776*t1197*t139;
  t2417 = -0.135*t139*t1750*t1777;
  t2422 = t2412 + t2417 + t2392;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(t1830 + t1852 + t1875 + t1885)*var2[3] + t1819*var2[4] + t1988*var2[5] + t1938*var2[6];
  p_output1[10]=(t2048 + t2053 + t2057 + t2080)*var2[3] + t2041*var2[4] + t2128*var2[5] + t2174*var2[6];
  p_output1[11]=0;
  p_output1[12]=t1819*var2[3] + (-1.*t139*t1723*t1750*t1824 - 1.*t139*t1776*t1784*t1824 + 0.135*(-1.*t1197*t139*t1750*t1824 - 1.*t139*t1776*t1777*t1824) + t1830)*var2[4] + t2252*var2[5] + t2264*var2[6];
  p_output1[13]=t2041*var2[3] + (-1.*t135*t139*t1723*t1750 + 0.135*(-1.*t1197*t135*t139*t1750 - 1.*t135*t139*t1776*t1777) - 1.*t135*t139*t1776*t1784 + t2048)*var2[4] + t2329*var2[5] + t2338*var2[6];
  p_output1[14]=(-0.049*t139 + t2350 + t2352 + t2368)*var2[4] + t2399*var2[5] + t2422*var2[6];
  p_output1[15]=t1988*var2[3] + t2252*var2[4] + (t1852 + t1875 + t1885)*var2[5] + t2472*var2[6];
  p_output1[16]=t2128*var2[3] + t2329*var2[4] + (t2053 + t2057 + t2080)*var2[5] + t2505*var2[6];
  p_output1[17]=t2529 + t2399*var2[4] + (t2350 + t2352 + t2368)*var2[5];
  p_output1[18]=t1938*var2[3] + t2264*var2[4] + t2472*var2[5] + (0.135*t1197*t2157 + t2458 + 0.135*(-1.*t1197*t2157 + t2462))*var2[6];
  p_output1[19]=t2174*var2[3] + t2338*var2[4] + t2505*var2[5] + (0.135*t1197*t1955 + t2496 + 0.135*(-1.*t1197*t1955 + t2501))*var2[6];
  p_output1[20]=t2529 + t2422*var2[4] + t2528*var2[5];
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



void dJp_hip_abduction_left_src(double *p_output1, const double *var1,const double *var2)
{
  /* Call Subroutines */
  output1(p_output1, var1, var2);

}
