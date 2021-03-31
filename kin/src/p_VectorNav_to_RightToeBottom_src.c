/*
 * Automatically Generated from Mathematica.
 * Wed 23 Oct 2019 10:25:59 GMT-07:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_VectorNav_to_RightToeBottom_src.h"

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
  double t553;
  double t1005;
  double t1169;
  double t1218;
  double t1223;
  double t1294;
  double t1317;
  double t1410;
  double t1412;
  double t1421;
  double t1439;
  double t1375;
  double t1402;
  double t1408;
  double t1457;
  double t1461;
  double t1493;
  double t1538;
  double t1540;
  double t1542;
  double t1549;
  double t1532;
  double t1533;
  double t1534;
  double t1582;
  double t1583;
  double t1612;
  double t1627;
  double t1637;
  double t1647;
  double t1657;
  double t1617;
  double t1619;
  double t1626;
  double t1679;
  double t1680;
  double t1685;
  double t1759;
  double t696;
  double t828;
  double t987;
  double t1072;
  double t1111;
  double t1148;
  double t1170;
  double t1190;
  double t1790;
  double t1306;
  double t1334;
  double t1348;
  double t1362;
  double t1363;
  double t1367;
  double t1803;
  double t1804;
  double t1810;
  double t1814;
  double t1816;
  double t1818;
  double t1437;
  double t1444;
  double t1448;
  double t1498;
  double t1500;
  double t1511;
  double t1827;
  double t1830;
  double t1833;
  double t1838;
  double t1839;
  double t1845;
  double t1546;
  double t1562;
  double t1574;
  double t1613;
  double t1614;
  double t1615;
  double t1860;
  double t1864;
  double t1865;
  double t1870;
  double t1872;
  double t1881;
  double t1656;
  double t1662;
  double t1670;
  double t1686;
  double t1694;
  double t1699;
  double t1884;
  double t1887;
  double t1888;
  double t1891;
  double t1896;
  double t1899;
  double t1781;
  double t1783;
  double t1785;
  double t1791;
  double t1792;
  double t1798;
  double t1948;
  double t1949;
  double t1957;
  double t1960;
  double t1961;
  double t1962;
  double t1974;
  double t1975;
  double t1979;
  double t1989;
  double t1992;
  double t1997;
  double t2002;
  double t2014;
  double t2018;
  double t2022;
  double t2031;
  double t2034;
  double t2044;
  double t2047;
  double t2051;
  double t2058;
  double t2069;
  double t2072;
  t553 = Cos(var1[8]);
  t1005 = Cos(var1[9]);
  t1169 = Sin(var1[9]);
  t1218 = Cos(var1[10]);
  t1223 = -1.*t1218;
  t1294 = 1. + t1223;
  t1317 = Sin(var1[10]);
  t1410 = Cos(var1[11]);
  t1412 = -1.*t1410;
  t1421 = 1. + t1412;
  t1439 = Sin(var1[11]);
  t1375 = t553*t1005*t1218;
  t1402 = -1.*t553*t1169*t1317;
  t1408 = t1375 + t1402;
  t1457 = -1.*t553*t1218*t1169;
  t1461 = -1.*t553*t1005*t1317;
  t1493 = t1457 + t1461;
  t1538 = Cos(var1[12]);
  t1540 = -1.*t1538;
  t1542 = 1. + t1540;
  t1549 = Sin(var1[12]);
  t1532 = t1410*t1408;
  t1533 = t1493*t1439;
  t1534 = t1532 + t1533;
  t1582 = t1410*t1493;
  t1583 = -1.*t1408*t1439;
  t1612 = t1582 + t1583;
  t1627 = Cos(var1[13]);
  t1637 = -1.*t1627;
  t1647 = 1. + t1637;
  t1657 = Sin(var1[13]);
  t1617 = t1538*t1534;
  t1619 = t1612*t1549;
  t1626 = t1617 + t1619;
  t1679 = t1538*t1612;
  t1680 = -1.*t1534*t1549;
  t1685 = t1679 + t1680;
  t1759 = Cos(var1[7]);
  t696 = -1.*t553;
  t828 = 1. + t696;
  t987 = Sin(var1[8]);
  t1072 = -1.*t1005;
  t1111 = 1. + t1072;
  t1148 = -0.049*t1111;
  t1170 = -0.09*t1169;
  t1190 = 0. + t1148 + t1170;
  t1790 = Sin(var1[7]);
  t1306 = -0.049*t1294;
  t1334 = -0.21*t1317;
  t1348 = 0. + t1306 + t1334;
  t1362 = -0.21*t1294;
  t1363 = 0.049*t1317;
  t1367 = 0. + t1362 + t1363;
  t1803 = t1759*t1005*t987;
  t1804 = -1.*t1790*t1169;
  t1810 = t1803 + t1804;
  t1814 = -1.*t1005*t1790;
  t1816 = -1.*t1759*t987*t1169;
  t1818 = t1814 + t1816;
  t1437 = -0.0016*t1421;
  t1444 = -0.2707*t1439;
  t1448 = 0. + t1437 + t1444;
  t1498 = -0.2707*t1421;
  t1500 = 0.0016*t1439;
  t1511 = 0. + t1498 + t1500;
  t1827 = t1218*t1810;
  t1830 = t1818*t1317;
  t1833 = t1827 + t1830;
  t1838 = t1218*t1818;
  t1839 = -1.*t1810*t1317;
  t1845 = t1838 + t1839;
  t1546 = 0.0184*t1542;
  t1562 = -0.7055*t1549;
  t1574 = 0. + t1546 + t1562;
  t1613 = -0.7055*t1542;
  t1614 = -0.0184*t1549;
  t1615 = 0. + t1613 + t1614;
  t1860 = t1410*t1833;
  t1864 = t1845*t1439;
  t1865 = t1860 + t1864;
  t1870 = t1410*t1845;
  t1872 = -1.*t1833*t1439;
  t1881 = t1870 + t1872;
  t1656 = -0.0216*t1647;
  t1662 = -1.1135*t1657;
  t1670 = 0. + t1656 + t1662;
  t1686 = -1.1135*t1647;
  t1694 = 0.0216*t1657;
  t1699 = 0. + t1686 + t1694;
  t1884 = t1538*t1865;
  t1887 = t1881*t1549;
  t1888 = t1884 + t1887;
  t1891 = t1538*t1881;
  t1896 = -1.*t1865*t1549;
  t1899 = t1891 + t1896;
  t1781 = -0.135*t828;
  t1783 = 0.049*t987;
  t1785 = 0. + t1781 + t1783;
  t1791 = -0.09*t1111;
  t1792 = 0.049*t1169;
  t1798 = 0. + t1791 + t1792;
  t1948 = t1005*t1790*t987;
  t1949 = t1759*t1169;
  t1957 = t1948 + t1949;
  t1960 = t1759*t1005;
  t1961 = -1.*t1790*t987*t1169;
  t1962 = t1960 + t1961;
  t1974 = t1218*t1957;
  t1975 = t1962*t1317;
  t1979 = t1974 + t1975;
  t1989 = t1218*t1962;
  t1992 = -1.*t1957*t1317;
  t1997 = t1989 + t1992;
  t2002 = t1410*t1979;
  t2014 = t1997*t1439;
  t2018 = t2002 + t2014;
  t2022 = t1410*t1997;
  t2031 = -1.*t1979*t1439;
  t2034 = t2022 + t2031;
  t2044 = t1538*t2018;
  t2047 = t2034*t1549;
  t2051 = t2044 + t2047;
  t2058 = t1538*t2034;
  t2069 = -1.*t2018*t1549;
  t2072 = t2058 + t2069;
  p_output1[0]=-0.03155 + t1408*t1448 + t1493*t1511 + t1534*t1574 + t1612*t1615 + t1626*t1670 - 1.1312*(-1.*t1626*t1657 + t1627*t1685) + 0.0306*(t1626*t1627 + t1657*t1685) + t1685*t1699 + t1190*t553 + t1005*t1348*t553 - 1.*t1169*t1367*t553 - 0.049*t828 - 0.004500000000000004*t987;
  p_output1[1]=0. - 0.135*(1. - 1.*t1759) + t1759*t1785 - 1.*t1790*t1798 + t1348*t1810 + t1367*t1818 + t1448*t1833 + t1511*t1845 + t1574*t1865 + t1615*t1881 + t1670*t1888 + t1699*t1899 - 1.1312*(-1.*t1657*t1888 + t1627*t1899) + 0.0306*(t1627*t1888 + t1657*t1899) - 0.1305*t1759*t553 + t1190*t1759*t987;
  p_output1[2]=0.07996 + 0.135*t1790 + t1785*t1790 + t1759*t1798 + t1348*t1957 + t1367*t1962 + t1448*t1979 + t1511*t1997 + t1574*t2018 + t1615*t2034 + t1670*t2051 + t1699*t2072 - 1.1312*(-1.*t1657*t2051 + t1627*t2072) + 0.0306*(t1627*t2051 + t1657*t2072) - 0.1305*t1790*t553 + t1190*t1790*t987;
}



void p_VectorNav_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
