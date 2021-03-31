/*
 * Automatically Generated from Mathematica.
 * Wed 23 Oct 2019 10:26:16 GMT-07:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RightToeBottom_to_LeftToeBottom_src.h"

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
  double t331;
  double t359;
  double t514;
  double t352;
  double t635;
  double t290;
  double t842;
  double t855;
  double t869;
  double t387;
  double t735;
  double t767;
  double t886;
  double t156;
  double t993;
  double t1018;
  double t1036;
  double t820;
  double t923;
  double t953;
  double t1069;
  double t143;
  double t1117;
  double t1203;
  double t1225;
  double t973;
  double t1082;
  double t1111;
  double t1251;
  double t1522;
  double t1464;
  double t1467;
  double t1557;
  double t1560;
  double t1573;
  double t1488;
  double t1531;
  double t1536;
  double t1659;
  double t1664;
  double t1670;
  double t1555;
  double t1586;
  double t1626;
  double t1710;
  double t1729;
  double t1739;
  double t1651;
  double t1673;
  double t1689;
  double t1850;
  double t1863;
  double t1870;
  double t1704;
  double t1767;
  double t1780;
  double t1114;
  double t1292;
  double t1309;
  double t1363;
  double t1373;
  double t1380;
  double t1831;
  double t1898;
  double t1998;
  double t2003;
  double t2007;
  double t2079;
  double t2255;
  double t2264;
  double t2284;
  double t2201;
  double t2206;
  double t2239;
  double t2476;
  double t2529;
  double t2561;
  double t2437;
  double t2449;
  double t2452;
  double t2629;
  double t2639;
  double t2658;
  double t2474;
  double t2579;
  double t2580;
  double t2721;
  double t2747;
  double t2826;
  double t2590;
  double t2666;
  double t2673;
  double t2926;
  double t2946;
  double t2957;
  double t2684;
  double t2827;
  double t2849;
  double t1999;
  double t2100;
  double t2125;
  double t1336;
  double t1423;
  double t1462;
  double t2918;
  double t2986;
  double t2992;
  double t3139;
  double t3169;
  double t3182;
  double t3104;
  double t3201;
  double t3208;
  double t3288;
  double t3309;
  double t3348;
  double t75;
  double t3486;
  double t3488;
  double t2369;
  double t3210;
  double t3273;
  double t3278;
  double t3282;
  double t3377;
  double t3422;
  double t3456;
  double t3501;
  double t3505;
  double t3515;
  double t3575;
  double t70;
  double t3681;
  double t3852;
  double t3709;
  double t3730;
  double t3810;
  double t4745;
  double t4690;
  double t4723;
  double t4747;
  double t4795;
  double t4744;
  double t4751;
  double t4774;
  double t4631;
  double t4982;
  double t4993;
  double t5041;
  double t5075;
  double t4782;
  double t5052;
  double t5061;
  double t4599;
  double t5086;
  double t5124;
  double t5136;
  double t5157;
  double t5070;
  double t5142;
  double t5150;
  double t4593;
  double t5159;
  double t5212;
  double t5243;
  double t2136;
  double t2287;
  double t2350;
  double t5470;
  double t5492;
  double t5503;
  double t5538;
  double t5567;
  double t5597;
  double t5516;
  double t5599;
  double t5640;
  double t5704;
  double t5741;
  double t5761;
  double t5643;
  double t5769;
  double t5799;
  double t5829;
  double t5841;
  double t5859;
  double t5802;
  double t5896;
  double t5919;
  double t5950;
  double t5961;
  double t6055;
  double t3670;
  double t6199;
  double t6213;
  double t6226;
  double t6249;
  double t6260;
  double t6269;
  double t6238;
  double t6281;
  double t6292;
  double t6314;
  double t6331;
  double t6342;
  double t6305;
  double t6356;
  double t6357;
  double t6384;
  double t6416;
  double t6445;
  double t6368;
  double t6461;
  double t6466;
  double t6525;
  double t6535;
  double t6541;
  double t4327;
  double t4360;
  double t4375;
  double t5151;
  double t5274;
  double t5294;
  double t5307;
  double t5311;
  double t5342;
  double t5362;
  double t5413;
  double t5425;
  double t4009;
  double t4060;
  double t4184;
  double t5940;
  double t6066;
  double t6106;
  double t6120;
  double t6121;
  double t6124;
  double t6125;
  double t6128;
  double t6188;
  double t4254;
  double t4268;
  double t4296;
  double t6484;
  double t6619;
  double t6631;
  double t6653;
  double t6664;
  double t6724;
  double t6753;
  double t6841;
  double t6845;
  double t4527;
  double t4539;
  double t4561;
  double t4453;
  double t4461;
  double t4474;
  double t4489;
  double t7136;
  double t7169;
  double t7216;
  double t7233;
  double t7238;
  double t7269;
  double t7271;
  double t7281;
  double t7293;
  t331 = Cos(var1[8]);
  t359 = Cos(var1[10]);
  t514 = Sin(var1[9]);
  t352 = Cos(var1[9]);
  t635 = Sin(var1[10]);
  t290 = Cos(var1[11]);
  t842 = -1.*t331*t359*t514;
  t855 = -1.*t331*t352*t635;
  t869 = t842 + t855;
  t387 = t331*t352*t359;
  t735 = -1.*t331*t514*t635;
  t767 = t387 + t735;
  t886 = Sin(var1[11]);
  t156 = Cos(var1[12]);
  t993 = t290*t869;
  t1018 = -1.*t767*t886;
  t1036 = t993 + t1018;
  t820 = t290*t767;
  t923 = t869*t886;
  t953 = t820 + t923;
  t1069 = Sin(var1[12]);
  t143 = Cos(var1[13]);
  t1117 = t156*t1036;
  t1203 = -1.*t953*t1069;
  t1225 = t1117 + t1203;
  t973 = t156*t953;
  t1082 = t1036*t1069;
  t1111 = t973 + t1082;
  t1251 = Sin(var1[13]);
  t1522 = Cos(var1[7]);
  t1464 = Sin(var1[7]);
  t1467 = Sin(var1[8]);
  t1557 = t1522*t352;
  t1560 = -1.*t1464*t1467*t514;
  t1573 = t1557 + t1560;
  t1488 = t352*t1464*t1467;
  t1531 = t1522*t514;
  t1536 = t1488 + t1531;
  t1659 = t359*t1573;
  t1664 = -1.*t1536*t635;
  t1670 = t1659 + t1664;
  t1555 = t359*t1536;
  t1586 = t1573*t635;
  t1626 = t1555 + t1586;
  t1710 = t290*t1670;
  t1729 = -1.*t1626*t886;
  t1739 = t1710 + t1729;
  t1651 = t290*t1626;
  t1673 = t1670*t886;
  t1689 = t1651 + t1673;
  t1850 = t156*t1739;
  t1863 = -1.*t1689*t1069;
  t1870 = t1850 + t1863;
  t1704 = t156*t1689;
  t1767 = t1739*t1069;
  t1780 = t1704 + t1767;
  t1114 = t143*t1111;
  t1292 = t1225*t1251;
  t1309 = t1114 + t1292;
  t1363 = t143*t1225;
  t1373 = -1.*t1111*t1251;
  t1380 = t1363 + t1373;
  t1831 = t143*t1780;
  t1898 = t1870*t1251;
  t1998 = t1831 + t1898;
  t2003 = t143*t1870;
  t2007 = -1.*t1780*t1251;
  t2079 = t2003 + t2007;
  t2255 = 0.642788*t1998;
  t2264 = 0.766044*t2079;
  t2284 = t2255 + t2264;
  t2201 = -0.766044*t1309;
  t2206 = 0.642788*t1380;
  t2239 = t2201 + t2206;
  t2476 = -1.*t352*t1464;
  t2529 = -1.*t1522*t1467*t514;
  t2561 = t2476 + t2529;
  t2437 = t1522*t352*t1467;
  t2449 = -1.*t1464*t514;
  t2452 = t2437 + t2449;
  t2629 = t359*t2561;
  t2639 = -1.*t2452*t635;
  t2658 = t2629 + t2639;
  t2474 = t359*t2452;
  t2579 = t2561*t635;
  t2580 = t2474 + t2579;
  t2721 = t290*t2658;
  t2747 = -1.*t2580*t886;
  t2826 = t2721 + t2747;
  t2590 = t290*t2580;
  t2666 = t2658*t886;
  t2673 = t2590 + t2666;
  t2926 = t156*t2826;
  t2946 = -1.*t2673*t1069;
  t2957 = t2926 + t2946;
  t2684 = t156*t2673;
  t2827 = t2826*t1069;
  t2849 = t2684 + t2827;
  t1999 = -0.766044*t1998;
  t2100 = 0.642788*t2079;
  t2125 = t1999 + t2100;
  t1336 = 0.642788*t1309;
  t1423 = 0.766044*t1380;
  t1462 = t1336 + t1423;
  t2918 = t143*t2849;
  t2986 = t2957*t1251;
  t2992 = t2918 + t2986;
  t3139 = t143*t2957;
  t3169 = -1.*t2849*t1251;
  t3182 = t3139 + t3169;
  t3104 = -0.766044*t2992;
  t3201 = 0.642788*t3182;
  t3208 = t3104 + t3201;
  t3288 = 0.642788*t2992;
  t3309 = 0.766044*t3182;
  t3348 = t3288 + t3309;
  t75 = Cos(var1[1]);
  t3486 = t1462*t3208;
  t3488 = -1.*t2239*t3348;
  t2369 = t1522*t331*t2239;
  t3210 = t1467*t3208;
  t3273 = t2369 + t3210;
  t3278 = -1.*t2284*t3273;
  t3282 = t1522*t331*t1462;
  t3377 = t1467*t3348;
  t3422 = t3282 + t3377;
  t3456 = t2125*t3422;
  t3501 = t3486 + t3488;
  t3505 = -1.*t331*t1464*t3501;
  t3515 = 0. + t3278 + t3456 + t3505;
  t3575 = 1/t3515;
  t70 = Cos(var1[0]);
  t3681 = Sin(var1[0]);
  t3852 = Sin(var1[1]);
  t3709 = t3348*t2125;
  t3730 = -1.*t3208*t2284;
  t3810 = 0. + t3709 + t3730;
  t4745 = Cos(var1[3]);
  t4690 = Cos(var1[2]);
  t4723 = Sin(var1[3]);
  t4747 = Sin(var1[2]);
  t4795 = Cos(var1[4]);
  t4744 = -1.*t75*t4690*t4723;
  t4751 = -1.*t4745*t75*t4747;
  t4774 = t4744 + t4751;
  t4631 = Sin(var1[4]);
  t4982 = t4745*t75*t4690;
  t4993 = -1.*t75*t4723*t4747;
  t5041 = t4982 + t4993;
  t5075 = Cos(var1[5]);
  t4782 = t4631*t4774;
  t5052 = t4795*t5041;
  t5061 = t4782 + t5052;
  t4599 = Sin(var1[5]);
  t5086 = t4795*t4774;
  t5124 = -1.*t4631*t5041;
  t5136 = t5086 + t5124;
  t5157 = Cos(var1[6]);
  t5070 = -1.*t4599*t5061;
  t5142 = t5075*t5136;
  t5150 = t5070 + t5142;
  t4593 = Sin(var1[6]);
  t5159 = t5075*t5061;
  t5212 = t4599*t5136;
  t5243 = t5159 + t5212;
  t2136 = -1.*t1462*t2125;
  t2287 = t2239*t2284;
  t2350 = 0. + t2136 + t2287;
  t5470 = t70*t4690*t3852;
  t5492 = -1.*t3681*t4747;
  t5503 = t5470 + t5492;
  t5538 = -1.*t4690*t3681;
  t5567 = -1.*t70*t3852*t4747;
  t5597 = t5538 + t5567;
  t5516 = -1.*t4723*t5503;
  t5599 = t4745*t5597;
  t5640 = t5516 + t5599;
  t5704 = t4745*t5503;
  t5741 = t4723*t5597;
  t5761 = t5704 + t5741;
  t5643 = t4631*t5640;
  t5769 = t4795*t5761;
  t5799 = t5643 + t5769;
  t5829 = t4795*t5640;
  t5841 = -1.*t4631*t5761;
  t5859 = t5829 + t5841;
  t5802 = -1.*t4599*t5799;
  t5896 = t5075*t5859;
  t5919 = t5802 + t5896;
  t5950 = t5075*t5799;
  t5961 = t4599*t5859;
  t6055 = t5950 + t5961;
  t3670 = 0. + t3486 + t3488;
  t6199 = t4690*t3681*t3852;
  t6213 = t70*t4747;
  t6226 = t6199 + t6213;
  t6249 = t70*t4690;
  t6260 = -1.*t3681*t3852*t4747;
  t6269 = t6249 + t6260;
  t6238 = -1.*t4723*t6226;
  t6281 = t4745*t6269;
  t6292 = t6238 + t6281;
  t6314 = t4745*t6226;
  t6331 = t4723*t6269;
  t6342 = t6314 + t6331;
  t6305 = t4631*t6292;
  t6356 = t4795*t6342;
  t6357 = t6305 + t6356;
  t6384 = t4795*t6292;
  t6416 = -1.*t4631*t6342;
  t6445 = t6384 + t6416;
  t6368 = -1.*t4599*t6357;
  t6461 = t5075*t6445;
  t6466 = t6368 + t6461;
  t6525 = t5075*t6357;
  t6535 = t4599*t6445;
  t6541 = t6525 + t6535;
  t4327 = -1.*t331*t1464*t3208;
  t4360 = t1522*t331*t2125;
  t4375 = 0. + t4327 + t4360;
  t5151 = t4593*t5150;
  t5274 = t5157*t5243;
  t5294 = t5151 + t5274;
  t5307 = 0.642788*t5294;
  t5311 = t5157*t5150;
  t5342 = -1.*t4593*t5243;
  t5362 = t5311 + t5342;
  t5413 = 0.766044*t5362;
  t5425 = t5307 + t5413;
  t4009 = t331*t1464*t2239;
  t4060 = t1467*t2125;
  t4184 = 0. + t4009 + t4060;
  t5940 = t4593*t5919;
  t6066 = t5157*t6055;
  t6106 = t5940 + t6066;
  t6120 = 0.642788*t6106;
  t6121 = t5157*t5919;
  t6124 = -1.*t4593*t6055;
  t6125 = t6121 + t6124;
  t6128 = 0.766044*t6125;
  t6188 = t6120 + t6128;
  t4254 = -1.*t1522*t331*t2239;
  t4268 = -1.*t1467*t3208;
  t4296 = 0. + t4254 + t4268;
  t6484 = t4593*t6466;
  t6619 = t5157*t6541;
  t6631 = t6484 + t6619;
  t6653 = 0.642788*t6631;
  t6664 = t5157*t6466;
  t6724 = -1.*t4593*t6541;
  t6753 = t6664 + t6724;
  t6841 = 0.766044*t6753;
  t6845 = t6653 + t6841;
  t4527 = t331*t1464*t3348;
  t4539 = -1.*t1522*t331*t2284;
  t4561 = 0. + t4527 + t4539;
  t4453 = -1.*t331*t1464*t1462;
  t4461 = -1.*t1467*t2284;
  t4474 = 0. + t4453 + t4461;
  t4489 = 0. + t3282 + t3377;
  t7136 = -0.766044*t5294;
  t7169 = 0.642788*t5362;
  t7216 = t7136 + t7169;
  t7233 = -0.766044*t6106;
  t7238 = 0.642788*t6125;
  t7269 = t7233 + t7238;
  t7271 = -0.766044*t6631;
  t7281 = 0.642788*t6753;
  t7293 = t7271 + t7281;
  p_output1[0]=0. + t3575*t3810*t3852 - 1.*t3575*t3670*t3681*t75 - 1.*t2350*t3575*t70*t75;
  p_output1[1]=0. + t3575*t3852*t4375 - 1.*t3575*t3681*t4296*t75 - 1.*t3575*t4184*t70*t75;
  p_output1[2]=0. + t3575*t3852*t4561 - 1.*t3575*t3681*t4489*t75 - 1.*t3575*t4474*t70*t75;
  p_output1[3]=0. + t3575*t3810*t5425 + t2350*t3575*t6188 + t3575*t3670*t6845;
  p_output1[4]=0. + t3575*t4375*t5425 + t3575*t4184*t6188 + t3575*t4296*t6845;
  p_output1[5]=0. + t3575*t4561*t5425 + t3575*t4474*t6188 + t3575*t4489*t6845;
  p_output1[6]=0. + t3575*t3810*t7216 + t2350*t3575*t7269 + t3575*t3670*t7293;
  p_output1[7]=0. + t3575*t4375*t7216 + t3575*t4184*t7269 + t3575*t4296*t7293;
  p_output1[8]=0. + t3575*t4561*t7216 + t3575*t4474*t7269 + t3575*t4489*t7293;
}



void R_RightToeBottom_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
