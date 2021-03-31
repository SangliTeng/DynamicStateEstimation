/*
 * Automatically Generated from Mathematica.
 * Wed 23 Oct 2019 10:33:48 GMT-07:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jb_VectorNav_to_LeftToeBottom_src.h"

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
  double t179;
  double t206;
  double t264;
  double t186;
  double t218;
  double t250;
  double t154;
  double t270;
  double t292;
  double t296;
  double t340;
  double t259;
  double t328;
  double t333;
  double t151;
  double t362;
  double t386;
  double t388;
  double t446;
  double t335;
  double t397;
  double t426;
  double t136;
  double t463;
  double t470;
  double t511;
  double t91;
  double t100;
  double t753;
  double t780;
  double t790;
  double t724;
  double t794;
  double t798;
  double t822;
  double t823;
  double t807;
  double t843;
  double t866;
  double t892;
  double t903;
  double t941;
  double t599;
  double t431;
  double t530;
  double t569;
  double t575;
  double t584;
  double t591;
  double t597;
  double t626;
  double t644;
  double t665;
  double t707;
  double t986;
  double t995;
  double t1006;
  double t867;
  double t953;
  double t957;
  double t1319;
  double t1331;
  double t1294;
  double t1295;
  double t1343;
  double t1379;
  double t1387;
  double t1394;
  double t1424;
  double t1427;
  double t1442;
  double t1450;
  double t1219;
  double t1241;
  double t1304;
  double t1305;
  double t1395;
  double t1451;
  double t1468;
  double t1485;
  double t1487;
  double t1500;
  double t1503;
  double t1506;
  double t1187;
  double t1191;
  double t1273;
  double t1280;
  double t1478;
  double t1508;
  double t1511;
  double t1553;
  double t1597;
  double t1605;
  double t1608;
  double t1615;
  double t973;
  double t1033;
  double t1042;
  double t1080;
  double t1093;
  double t3;
  double t1159;
  double t1185;
  double t1691;
  double t1712;
  double t1716;
  double t1723;
  double t1732;
  double t1199;
  double t1209;
  double t1522;
  double t1665;
  double t1674;
  double t1751;
  double t1754;
  double t1761;
  double t1791;
  double t1804;
  double t1805;
  double t1807;
  double t1186;
  double t1685;
  double t1687;
  double t1736;
  double t1745;
  double t1755;
  double t1757;
  double t1827;
  double t1828;
  double t1848;
  double t1849;
  double t1861;
  double t1869;
  double t1872;
  double t1903;
  double t1946;
  double t1950;
  double t79;
  double t1097;
  double t1133;
  double t1139;
  double t1833;
  double t1834;
  double t2004;
  double t2012;
  double t1970;
  double t1976;
  double t1746;
  double t1954;
  t179 = Cos(var1[6]);
  t206 = Sin(var1[6]);
  t264 = Cos(var1[5]);
  t186 = 0.642788*t179;
  t218 = -0.766044*t206;
  t250 = t186 + t218;
  t154 = Sin(var1[5]);
  t270 = 0.766044*t179;
  t292 = 0.642788*t206;
  t296 = t270 + t292;
  t340 = Cos(var1[4]);
  t259 = t154*t250;
  t328 = t264*t296;
  t333 = 0. + t259 + t328;
  t151 = Sin(var1[4]);
  t362 = t264*t250;
  t386 = -1.*t154*t296;
  t388 = 0. + t362 + t386;
  t446 = Sin(var1[3]);
  t335 = -1.*t151*t333;
  t397 = t340*t388;
  t426 = 0. + t335 + t397;
  t136 = Cos(var1[3]);
  t463 = t340*t333;
  t470 = t151*t388;
  t511 = 0. + t463 + t470;
  t91 = Cos(var1[1]);
  t100 = Cos(var1[2]);
  t753 = -0.766044*t179;
  t780 = -0.642788*t206;
  t790 = t753 + t780;
  t724 = -1.*t154*t250;
  t794 = t264*t790;
  t798 = 0. + t724 + t794;
  t822 = t154*t790;
  t823 = 0. + t362 + t822;
  t807 = t151*t798;
  t843 = t340*t823;
  t866 = 0. + t807 + t843;
  t892 = t340*t798;
  t903 = -1.*t151*t823;
  t941 = 0. + t892 + t903;
  t599 = Sin(var1[2]);
  t431 = t136*t426;
  t530 = -1.*t446*t511;
  t569 = 0. + t431 + t530;
  t575 = t100*t569;
  t584 = t446*t426;
  t591 = t136*t511;
  t597 = 0. + t584 + t591;
  t626 = -1.*t597*t599;
  t644 = 0. + t575 + t626;
  t665 = t91*t644;
  t707 = 0. + t665;
  t986 = t136*t866;
  t995 = t446*t941;
  t1006 = 0. + t986 + t995;
  t867 = -1.*t446*t866;
  t953 = t136*t941;
  t957 = 0. + t867 + t953;
  t1319 = -1.*t179;
  t1331 = 1. + t1319;
  t1294 = -1.*t264;
  t1295 = 1. + t1294;
  t1343 = -0.0216*t1331;
  t1379 = 0.0306*t179;
  t1387 = 0.01770000000000005*t206;
  t1394 = 0. + t1343 + t1379 + t1387;
  t1424 = -1.1135*t1331;
  t1427 = -1.1312*t179;
  t1442 = 0.052199999999999996*t206;
  t1450 = 0. + t1424 + t1427 + t1442;
  t1219 = -1.*t340;
  t1241 = 1. + t1219;
  t1304 = -0.7055*t1295;
  t1305 = -0.0184*t154;
  t1395 = t154*t1394;
  t1451 = t264*t1450;
  t1468 = 0. + t1304 + t1305 + t1395 + t1451;
  t1485 = 0.0184*t1295;
  t1487 = -0.7055*t154;
  t1500 = t264*t1394;
  t1503 = -1.*t154*t1450;
  t1506 = 0. + t1485 + t1487 + t1500 + t1503;
  t1187 = -1.*t136;
  t1191 = 1. + t1187;
  t1273 = -0.0016*t1241;
  t1280 = -0.2707*t151;
  t1478 = -1.*t151*t1468;
  t1508 = t340*t1506;
  t1511 = 0. + t1273 + t1280 + t1478 + t1508;
  t1553 = -0.2707*t1241;
  t1597 = 0.0016*t151;
  t1605 = t340*t1468;
  t1608 = t151*t1506;
  t1615 = 0. + t1553 + t1597 + t1605 + t1608;
  t973 = t100*t957;
  t1033 = -1.*t1006*t599;
  t1042 = 0. + t973 + t1033;
  t1080 = t91*t1042;
  t1093 = 0. + t1080;
  t3 = Sin(var1[1]);
  t1159 = -1.*t100;
  t1185 = 1. + t1159;
  t1691 = -0.049*t1191;
  t1712 = -0.21*t446;
  t1716 = t136*t1511;
  t1723 = -1.*t446*t1615;
  t1732 = 0. + t1691 + t1712 + t1716 + t1723;
  t1199 = -0.21*t1191;
  t1209 = 0.049*t446;
  t1522 = t446*t1511;
  t1665 = t136*t1615;
  t1674 = 0. + t1199 + t1209 + t1522 + t1665;
  t1751 = -1.*t91;
  t1754 = 1. + t1751;
  t1761 = -0.049*t1185;
  t1791 = t100*t1732;
  t1804 = -0.09*t599;
  t1805 = -1.*t1674*t599;
  t1807 = 0. + t1761 + t1791 + t1804 + t1805;
  t1186 = -0.09*t1185;
  t1685 = t100*t1674;
  t1687 = 0.049*t599;
  t1736 = t1732*t599;
  t1745 = 0. + t1186 + t1685 + t1687 + t1736;
  t1755 = -0.049*t1754;
  t1757 = 0.004500000000000004*t3;
  t1827 = t91*t1807;
  t1828 = 0. + t1755 + t1757 + t1827;
  t1848 = 0.135*t1754;
  t1849 = 0.1305*t91;
  t1861 = 0.049*t3;
  t1869 = t3*t1807;
  t1872 = 0. + t1848 + t1849 + t1861 + t1869;
  t1903 = t100*t597;
  t1946 = t569*t599;
  t1950 = 0. + t1903 + t1946;
  t79 = 0. + t3;
  t1097 = t100*t1006;
  t1133 = t957*t599;
  t1139 = 0. + t1097 + t1133;
  t1833 = t3*t1042;
  t1834 = 0. + t1833;
  t2004 = -1.*t91;
  t2012 = 0. + t2004;
  t1970 = t3*t644;
  t1976 = 0. + t1970;
  t1746 = t1139*t1745;
  t1954 = -1.*t1745*t1950;
  p_output1[0]=t79;
  p_output1[1]=t707;
  p_output1[2]=t1093;
  p_output1[3]=0. + (t1746 + t1093*t1828 + t1834*t1872)*t707 + t1093*(t1954 - 1.*t1872*t1976 - 1.*t1828*t707);
  p_output1[4]=-0.135*t1950 + (-1.*t1139*t1745 - 1.*t1093*t1828 - 1.*t1834*t1872)*t79 + t1093*(0. + t1872*t2012 + t1828*t79);
  p_output1[5]=-0.135*t1139 + (t1745*t1950 + t1872*t1976 + t1828*t707)*t79 + t707*(0. - 1.*t1872*t2012 - 1.*t1828*t79);
  p_output1[6]=0.;
  p_output1[7]=t1950;
  p_output1[8]=t1139;
  p_output1[9]=-0.049 + (0. + t1746 + t1042*t1807)*t1950 + t1139*(0. + t1954 - 1.*t1807*t644);
  p_output1[10]=0. - 0.1305*t1139 + 0.135*t644;
  p_output1[11]=0. + 0.135*t1042 + 0.1305*t1950;
  p_output1[12]=1.;
  p_output1[13]=0.;
  p_output1[14]=0.;
  p_output1[15]=0.;
  p_output1[16]=0. - 1.*t1006*t1674 - 0.09*t569 + 0.049*t597 - 1.*t1732*t957;
  p_output1[17]=0. + 0.049*t1006 + t1732*t569 + t1674*t597 - 0.09*t957;
  p_output1[18]=1.;
  p_output1[19]=0.;
  p_output1[20]=0.;
  p_output1[21]=0.;
  p_output1[22]=0. - 0.21*t426 + 0.049*t511 - 1.*t1615*t866 - 1.*t1511*t941;
  p_output1[23]=0. + t1511*t426 + t1615*t511 + 0.049*t866 - 0.21*t941;
  p_output1[24]=1.;
  p_output1[25]=0.;
  p_output1[26]=0.;
  p_output1[27]=0.;
  p_output1[28]=0. + 0.0016*t333 - 0.2707*t388 - 1.*t1506*t798 - 1.*t1468*t823;
  p_output1[29]=0. + t1468*t333 + t1506*t388 - 0.2707*t798 + 0.0016*t823;
  p_output1[30]=1.;
  p_output1[31]=0.;
  p_output1[32]=0.;
  p_output1[33]=0.;
  p_output1[34]=0. - 0.7055*t250 - 1.*t1450*t250 - 0.0184*t296 - 1.*t1394*t790;
  p_output1[35]=0. - 0.0184*t250 + t1394*t250 + t1450*t296 - 0.7055*t790;
  p_output1[36]=1.;
  p_output1[37]=0.;
  p_output1[38]=0.;
  p_output1[39]=0.;
  p_output1[40]=0.05136484440000011;
  p_output1[41]=0.019994554799999897;
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
  p_output1[60]=0;
  p_output1[61]=0;
  p_output1[62]=0;
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=0;
  p_output1[66]=0;
  p_output1[67]=0;
  p_output1[68]=0;
  p_output1[69]=0;
  p_output1[70]=0;
  p_output1[71]=0;
  p_output1[72]=0;
  p_output1[73]=0;
  p_output1[74]=0;
  p_output1[75]=0;
  p_output1[76]=0;
  p_output1[77]=0;
  p_output1[78]=0;
  p_output1[79]=0;
  p_output1[80]=0;
  p_output1[81]=0;
  p_output1[82]=0;
  p_output1[83]=0;
}



void Jb_VectorNav_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
