/*
 * Automatically Generated from Mathematica.
 * Sat 21 Mar 2020 21:38:58 GMT-07:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJp_hip_abduction_right_src.h"

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
  double t1202;
  double t460;
  double t668;
  double t1030;
  double t1249;
  double t1271;
  double t1091;
  double t1135;
  double t1320;
  double t1237;
  double t1250;
  double t1255;
  double t1266;
  double t1267;
  double t1331;
  double t1333;
  double t1358;
  double t1372;
  double t1373;
  double t1376;
  double t1402;
  double t1405;
  double t1410;
  double t1414;
  double t1415;
  double t1416;
  double t1422;
  double t1450;
  double t1454;
  double t1456;
  double t1515;
  double t1517;
  double t1519;
  double t1528;
  double t1556;
  double t1557;
  double t1559;
  double t1626;
  double t1628;
  double t1629;
  double t1641;
  double t1226;
  double t1243;
  double t1284;
  double t1290;
  double t1297;
  double t1303;
  double t1307;
  double t1313;
  double t1329;
  double t1493;
  double t1496;
  double t1502;
  double t1505;
  double t1507;
  double t1509;
  double t1512;
  double t1513;
  double t1714;
  double t1716;
  double t1722;
  double t1727;
  double t1580;
  double t1797;
  double t1799;
  double t1804;
  double t1805;
  double t1621;
  double t1624;
  double t1646;
  double t1360;
  double t1378;
  double t1379;
  double t1382;
  double t1383;
  double t1395;
  double t1442;
  double t1462;
  double t1463;
  double t1476;
  double t1480;
  double t1481;
  double t1707;
  double t1711;
  double t1728;
  double t1520;
  double t1523;
  double t1530;
  double t1532;
  double t1536;
  double t1541;
  double t1894;
  double t1896;
  double t1901;
  double t1588;
  double t1582;
  double t1583;
  double t1586;
  double t1593;
  double t1601;
  double t1765;
  double t1767;
  double t1776;
  double t1779;
  double t1785;
  double t1789;
  double t1794;
  double t1795;
  double t1808;
  double t1649;
  double t1650;
  double t1651;
  double t1845;
  double t1846;
  double t1853;
  double t1860;
  double t1867;
  double t1869;
  double t1413;
  double t1417;
  double t1426;
  double t1433;
  double t1434;
  double t1435;
  double t1731;
  double t1732;
  double t1734;
  double t1548;
  double t1569;
  double t1570;
  double t1571;
  double t1574;
  double t1575;
  double t1906;
  double t1909;
  double t1917;
  double t1921;
  double t1924;
  double t1929;
  double t1971;
  double t1972;
  double t1973;
  double t1975;
  double t1822;
  double t1824;
  double t1827;
  t1202 = Sin(var1[3]);
  t460 = Cos(var1[4]);
  t668 = Cos(var1[5]);
  t1030 = Sin(var1[13]);
  t1249 = Cos(var1[13]);
  t1271 = Sin(var1[5]);
  t1091 = 0.135*t1030;
  t1135 = 0. + t1091;
  t1320 = Cos(var1[3]);
  t1237 = Sin(var1[4]);
  t1250 = -1.*t1249;
  t1255 = 1. + t1250;
  t1266 = -0.135*t1255;
  t1267 = 0. + t1266;
  t1331 = -1.*t1320*t668*t1237;
  t1333 = -1.*t1202*t1271;
  t1358 = t1331 + t1333;
  t1372 = t668*t1202;
  t1373 = -1.*t1320*t1237*t1271;
  t1376 = t1372 + t1373;
  t1402 = -1.*t668*t1202*t1237;
  t1405 = t1320*t1271;
  t1410 = t1402 + t1405;
  t1414 = -1.*t1320*t668;
  t1415 = -1.*t1202*t1237*t1271;
  t1416 = t1414 + t1415;
  t1422 = t1249*t1410;
  t1450 = t1320*t668;
  t1454 = t1202*t1237*t1271;
  t1456 = t1450 + t1454;
  t1515 = t1320*t668*t1237;
  t1517 = t1202*t1271;
  t1519 = t1515 + t1517;
  t1528 = t1249*t1519;
  t1556 = -1.*t668*t1202;
  t1557 = t1320*t1237*t1271;
  t1559 = t1556 + t1557;
  t1626 = t1249*t1320*t460*t668;
  t1628 = -1.*t1320*t460*t1030*t1271;
  t1629 = t1626 + t1628;
  t1641 = -0.135*t1629;
  t1226 = -1.*t460*t668*t1135*t1202;
  t1243 = -0.049*t1202*t1237;
  t1284 = -1.*t1267*t460*t1202*t1271;
  t1290 = -1.*t460*t668*t1030*t1202;
  t1297 = -1.*t1249*t460*t1202*t1271;
  t1303 = t1290 + t1297;
  t1307 = -0.135*t1303;
  t1313 = t1226 + t1243 + t1284 + t1307;
  t1329 = 0.049*t1320*t460;
  t1493 = t1320*t460*t668*t1135;
  t1496 = 0.049*t1320*t1237;
  t1502 = t1267*t1320*t460*t1271;
  t1505 = t1320*t460*t668*t1030;
  t1507 = t1249*t1320*t460*t1271;
  t1509 = t1505 + t1507;
  t1512 = -0.135*t1509;
  t1513 = t1493 + t1496 + t1502 + t1512;
  t1714 = t1249*t460*t668*t1202;
  t1716 = -1.*t460*t1030*t1202*t1271;
  t1722 = t1714 + t1716;
  t1727 = -0.135*t1722;
  t1580 = 0.049*t460*t1202;
  t1797 = -1.*t1249*t668*t1237;
  t1799 = t1030*t1237*t1271;
  t1804 = t1797 + t1799;
  t1805 = -0.135*t1804;
  t1621 = t1267*t1320*t460*t668;
  t1624 = -1.*t1320*t460*t1135*t1271;
  t1646 = t1621 + t1624 + t1641;
  t1360 = t1135*t1358;
  t1378 = t1267*t1376;
  t1379 = t1030*t1358;
  t1382 = t1249*t1376;
  t1383 = t1379 + t1382;
  t1395 = -0.135*t1383;
  t1442 = t1267*t1410;
  t1462 = t1135*t1456;
  t1463 = t1030*t1456;
  t1476 = t1422 + t1463;
  t1480 = -0.135*t1476;
  t1481 = t1442 + t1462 + t1480;
  t1707 = t1267*t460*t668*t1202;
  t1711 = -1.*t460*t1135*t1202*t1271;
  t1728 = t1707 + t1711 + t1727;
  t1520 = t1267*t1519;
  t1523 = t1135*t1376;
  t1530 = t1030*t1376;
  t1532 = t1528 + t1530;
  t1536 = -0.135*t1532;
  t1541 = t1520 + t1523 + t1536;
  t1894 = t668*t1202*t1237;
  t1896 = -1.*t1320*t1271;
  t1901 = t1894 + t1896;
  t1588 = t1249*t1416;
  t1582 = t1135*t1410;
  t1583 = t1267*t1416;
  t1586 = t1030*t1410;
  t1593 = t1586 + t1588;
  t1601 = -0.135*t1593;
  t1765 = -1.*t460*t668*t1135;
  t1767 = -1.*t1267*t460*t1271;
  t1776 = -1.*t460*t668*t1030;
  t1779 = -1.*t1249*t460*t1271;
  t1785 = t1776 + t1779;
  t1789 = -0.135*t1785;
  t1794 = -1.*t1267*t668*t1237;
  t1795 = t1135*t1237*t1271;
  t1808 = t1794 + t1795 + t1805;
  t1649 = 0.135*t1249*t1320*t460*t668;
  t1650 = -0.135*t1320*t460*t1030*t1271;
  t1651 = t1649 + t1650 + t1641;
  t1845 = -0.135*t1030*t1519;
  t1846 = 0.135*t1249*t1376;
  t1853 = -1.*t1030*t1519;
  t1860 = t1853 + t1382;
  t1867 = -0.135*t1860;
  t1869 = t1845 + t1846 + t1867;
  t1413 = 0.135*t1249*t1410;
  t1417 = -0.135*t1030*t1416;
  t1426 = -1.*t1030*t1416;
  t1433 = t1422 + t1426;
  t1434 = -0.135*t1433;
  t1435 = t1413 + t1417 + t1434;
  t1731 = 0.135*t1249*t460*t668*t1202;
  t1732 = -0.135*t460*t1030*t1202*t1271;
  t1734 = t1731 + t1732 + t1727;
  t1548 = 0.135*t1249*t1519;
  t1569 = -0.135*t1030*t1559;
  t1570 = -1.*t1030*t1559;
  t1571 = t1528 + t1570;
  t1574 = -0.135*t1571;
  t1575 = t1548 + t1569 + t1574;
  t1906 = -0.135*t1030*t1901;
  t1909 = 0.135*t1249*t1416;
  t1917 = -1.*t1030*t1901;
  t1921 = t1917 + t1588;
  t1924 = -0.135*t1921;
  t1929 = t1906 + t1909 + t1924;
  t1971 = -0.135*t460*t668*t1030;
  t1972 = -0.135*t1249*t460*t1271;
  t1973 = t1971 + t1972 + t1789;
  t1975 = var2[13]*t1973;
  t1822 = -0.135*t1249*t668*t1237;
  t1824 = 0.135*t1030*t1237*t1271;
  t1827 = t1822 + t1824 + t1805;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(t1329 + t1360 + t1378 + t1395)*var2[3] + t1313*var2[4] + t1481*var2[5] + t1435*var2[13];
  p_output1[10]=(t1580 + t1582 + t1583 + t1601)*var2[3] + t1513*var2[4] + t1541*var2[5] + t1575*var2[13];
  p_output1[11]=0;
  p_output1[12]=t1313*var2[3] + (-1.*t1237*t1267*t1271*t1320 + t1329 - 1.*t1135*t1237*t1320*t668 - 0.135*(-1.*t1237*t1249*t1271*t1320 - 1.*t1030*t1237*t1320*t668))*var2[4] + t1646*var2[5] + t1651*var2[13];
  p_output1[13]=t1513*var2[3] + (-1.*t1202*t1237*t1267*t1271 + t1580 - 1.*t1135*t1202*t1237*t668 - 0.135*(-1.*t1202*t1237*t1249*t1271 - 1.*t1030*t1202*t1237*t668))*var2[4] + t1728*var2[5] + t1734*var2[13];
  p_output1[14]=(-0.049*t1237 + t1765 + t1767 + t1789)*var2[4] + t1808*var2[5] + t1827*var2[13];
  p_output1[15]=t1481*var2[3] + t1646*var2[4] + (t1360 + t1378 + t1395)*var2[5] + t1869*var2[13];
  p_output1[16]=t1541*var2[3] + t1728*var2[4] + (t1582 + t1583 + t1601)*var2[5] + t1929*var2[13];
  p_output1[17]=t1975 + t1808*var2[4] + (t1765 + t1767 + t1789)*var2[5];
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
  p_output1[39]=t1435*var2[3] + t1651*var2[4] + t1869*var2[5] + (-0.135*t1249*t1559 + t1845 - 0.135*(-1.*t1249*t1559 + t1853))*var2[13];
  p_output1[40]=t1575*var2[3] + t1734*var2[4] + t1929*var2[5] + (-0.135*t1249*t1456 + t1906 - 0.135*(-1.*t1249*t1456 + t1917))*var2[13];
  p_output1[41]=t1975 + t1827*var2[4] + t1973*var2[5];
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



void dJp_hip_abduction_right_src(double *p_output1, const double *var1,const double *var2)
{
  /* Call Subroutines */
  output1(p_output1, var1, var2);

}
