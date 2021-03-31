/*
 * Automatically Generated from Mathematica.
 * Wed 23 Oct 2019 10:26:12 GMT-07:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_VectorNav_to_LeftToeFront_src.h"

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
  double t200;
  double t1049;
  double t898;
  double t920;
  double t1134;
  double t1244;
  double t1011;
  double t1147;
  double t1194;
  double t849;
  double t1303;
  double t1320;
  double t1332;
  double t1395;
  double t1231;
  double t1355;
  double t1356;
  double t749;
  double t1397;
  double t1463;
  double t1473;
  double t1606;
  double t1374;
  double t1516;
  double t1537;
  double t747;
  double t1629;
  double t1650;
  double t1658;
  double t175;
  double t127;
  double t327;
  double t1967;
  double t2120;
  double t2156;
  double t2189;
  double t2234;
  double t2267;
  double t2176;
  double t2349;
  double t2423;
  double t2458;
  double t2464;
  double t2477;
  double t2456;
  double t2482;
  double t2502;
  double t2513;
  double t2604;
  double t2630;
  double t2503;
  double t2690;
  double t2751;
  double t2813;
  double t2866;
  double t2894;
  double t3045;
  double t3070;
  double t3077;
  double t3135;
  double t3156;
  double t3164;
  double t3114;
  double t3167;
  double t3187;
  double t3250;
  double t3276;
  double t3281;
  double t3235;
  double t3286;
  double t3393;
  double t3553;
  double t3565;
  double t3604;
  double t3544;
  double t3717;
  double t3723;
  double t3822;
  double t3855;
  double t3864;
  double t1602;
  double t1665;
  double t1705;
  double t1851;
  double t1862;
  double t1872;
  double t2812;
  double t2902;
  double t2908;
  double t2985;
  double t2991;
  double t3016;
  double t3729;
  double t3881;
  double t3995;
  double t4114;
  double t4214;
  double t4231;
  double t4807;
  double t4808;
  double t5260;
  double t5304;
  double t5910;
  double t5934;
  double t6289;
  double t6296;
  double t4760;
  double t4766;
  double t5040;
  double t5049;
  double t5103;
  double t5111;
  double t5138;
  double t4865;
  double t4898;
  double t4946;
  double t5204;
  double t5229;
  double t5230;
  double t5344;
  double t5414;
  double t5426;
  double t5601;
  double t5613;
  double t5764;
  double t6046;
  double t6053;
  double t6104;
  double t6116;
  double t6130;
  double t6257;
  double t6361;
  double t6389;
  double t6396;
  double t6450;
  double t6489;
  double t6507;
  double t6671;
  double t6685;
  double t6690;
  double t6778;
  double t6783;
  double t6787;
  t200 = Cos(var1[1]);
  t1049 = Cos(var1[3]);
  t898 = Cos(var1[2]);
  t920 = Sin(var1[3]);
  t1134 = Sin(var1[2]);
  t1244 = Cos(var1[4]);
  t1011 = -1.*t200*t898*t920;
  t1147 = -1.*t1049*t200*t1134;
  t1194 = t1011 + t1147;
  t849 = Sin(var1[4]);
  t1303 = t1049*t200*t898;
  t1320 = -1.*t200*t920*t1134;
  t1332 = t1303 + t1320;
  t1395 = Cos(var1[5]);
  t1231 = t849*t1194;
  t1355 = t1244*t1332;
  t1356 = t1231 + t1355;
  t749 = Sin(var1[5]);
  t1397 = t1244*t1194;
  t1463 = -1.*t849*t1332;
  t1473 = t1397 + t1463;
  t1606 = Cos(var1[6]);
  t1374 = -1.*t749*t1356;
  t1516 = t1395*t1473;
  t1537 = t1374 + t1516;
  t747 = Sin(var1[6]);
  t1629 = t1395*t1356;
  t1650 = t749*t1473;
  t1658 = t1629 + t1650;
  t175 = Cos(var1[0]);
  t127 = Sin(var1[1]);
  t327 = Sin(var1[0]);
  t1967 = t175*t898*t127;
  t2120 = -1.*t327*t1134;
  t2156 = t1967 + t2120;
  t2189 = -1.*t898*t327;
  t2234 = -1.*t175*t127*t1134;
  t2267 = t2189 + t2234;
  t2176 = -1.*t920*t2156;
  t2349 = t1049*t2267;
  t2423 = t2176 + t2349;
  t2458 = t1049*t2156;
  t2464 = t920*t2267;
  t2477 = t2458 + t2464;
  t2456 = t849*t2423;
  t2482 = t1244*t2477;
  t2502 = t2456 + t2482;
  t2513 = t1244*t2423;
  t2604 = -1.*t849*t2477;
  t2630 = t2513 + t2604;
  t2503 = -1.*t749*t2502;
  t2690 = t1395*t2630;
  t2751 = t2503 + t2690;
  t2813 = t1395*t2502;
  t2866 = t749*t2630;
  t2894 = t2813 + t2866;
  t3045 = t898*t327*t127;
  t3070 = t175*t1134;
  t3077 = t3045 + t3070;
  t3135 = t175*t898;
  t3156 = -1.*t327*t127*t1134;
  t3164 = t3135 + t3156;
  t3114 = -1.*t920*t3077;
  t3167 = t1049*t3164;
  t3187 = t3114 + t3167;
  t3250 = t1049*t3077;
  t3276 = t920*t3164;
  t3281 = t3250 + t3276;
  t3235 = t849*t3187;
  t3286 = t1244*t3281;
  t3393 = t3235 + t3286;
  t3553 = t1244*t3187;
  t3565 = -1.*t849*t3281;
  t3604 = t3553 + t3565;
  t3544 = -1.*t749*t3393;
  t3717 = t1395*t3604;
  t3723 = t3544 + t3717;
  t3822 = t1395*t3393;
  t3855 = t749*t3604;
  t3864 = t3822 + t3855;
  t1602 = t747*t1537;
  t1665 = t1606*t1658;
  t1705 = t1602 + t1665;
  t1851 = t1606*t1537;
  t1862 = -1.*t747*t1658;
  t1872 = t1851 + t1862;
  t2812 = t747*t2751;
  t2902 = t1606*t2894;
  t2908 = t2812 + t2902;
  t2985 = t1606*t2751;
  t2991 = -1.*t747*t2894;
  t3016 = t2985 + t2991;
  t3729 = t747*t3723;
  t3881 = t1606*t3864;
  t3995 = t3729 + t3881;
  t4114 = t1606*t3723;
  t4214 = -1.*t747*t3864;
  t4231 = t4114 + t4214;
  t4807 = -1.*t1049;
  t4808 = 1. + t4807;
  t5260 = -1.*t1244;
  t5304 = 1. + t5260;
  t5910 = -1.*t1395;
  t5934 = 1. + t5910;
  t6289 = -1.*t1606;
  t6296 = 1. + t6289;
  t4760 = -1.*t200;
  t4766 = 1. + t4760;
  t5040 = -1.*t898;
  t5049 = 1. + t5040;
  t5103 = -0.049*t5049;
  t5111 = -0.09*t1134;
  t5138 = 0. + t5103 + t5111;
  t4865 = -0.049*t4808;
  t4898 = -0.21*t920;
  t4946 = 0. + t4865 + t4898;
  t5204 = -0.21*t4808;
  t5229 = 0.049*t920;
  t5230 = 0. + t5204 + t5229;
  t5344 = -0.2707*t5304;
  t5414 = 0.0016*t849;
  t5426 = 0. + t5344 + t5414;
  t5601 = -0.0016*t5304;
  t5613 = -0.2707*t849;
  t5764 = 0. + t5601 + t5613;
  t6046 = 0.0184*t5934;
  t6053 = -0.7055*t749;
  t6104 = 0. + t6046 + t6053;
  t6116 = -0.7055*t5934;
  t6130 = -0.0184*t749;
  t6257 = 0. + t6116 + t6130;
  t6361 = -1.1135*t6296;
  t6389 = 0.0216*t747;
  t6396 = 0. + t6361 + t6389;
  t6450 = -0.0216*t6296;
  t6489 = -1.1135*t747;
  t6507 = 0. + t6450 + t6489;
  t6671 = 0.135*t4766;
  t6685 = 0.049*t127;
  t6690 = 0. + t6671 + t6685;
  t6778 = -0.09*t5049;
  t6783 = 0.049*t1134;
  t6787 = 0. + t6778 + t6783;
  p_output1[0]=0. + t127;
  p_output1[1]=0. - 1.*t175*t200;
  p_output1[2]=0. - 1.*t200*t327;
  p_output1[3]=0.;
  p_output1[4]=0. + 0.642788*t1705 + 0.766044*t1872;
  p_output1[5]=0. + 0.642788*t2908 + 0.766044*t3016;
  p_output1[6]=0. + 0.642788*t3995 + 0.766044*t4231;
  p_output1[7]=0.;
  p_output1[8]=0. - 0.766044*t1705 + 0.642788*t1872;
  p_output1[9]=0. - 0.766044*t2908 + 0.642788*t3016;
  p_output1[10]=0. - 0.766044*t3995 + 0.642788*t4231;
  p_output1[11]=0.;
  p_output1[12]=-0.03155 + 0.004500000000000004*t127 + 0.088451*t1705 - 1.062256*t1872 - 0.049*t4766 + t200*t5138 - 1.*t1134*t200*t5230 + t1194*t5426 + t1332*t5764 + t1356*t6104 + t1473*t6257 + t1537*t6396 + t1658*t6507 + t200*t4946*t898;
  p_output1[13]=0. + 0.135*(1. - 1.*t175) + 0.1305*t175*t200 + 0.088451*t2908 - 1.062256*t3016 + t2156*t4946 + t127*t175*t5138 + t2267*t5230 + t2423*t5426 + t2477*t5764 + t2502*t6104 + t2630*t6257 + t2751*t6396 + t2894*t6507 + t175*t6690 - 1.*t327*t6787;
  p_output1[14]=0.07996 - 0.135*t327 + 0.1305*t200*t327 + 0.088451*t3995 - 1.062256*t4231 + t3077*t4946 + t127*t327*t5138 + t3164*t5230 + t3187*t5426 + t3281*t5764 + t3393*t6104 + t3604*t6257 + t3723*t6396 + t3864*t6507 + t327*t6690 + t175*t6787;
  p_output1[15]=1.;
}



void H_VectorNav_to_LeftToeFront_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
