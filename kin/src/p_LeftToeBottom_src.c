/*
 * Automatically Generated from Mathematica.
 * Wed 12 Feb 2020 15:28:50 GMT-08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_LeftToeBottom_src.h"

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
  double t485;
  double t447;
  double t487;
  double t461;
  double t501;
  double t77;
  double t480;
  double t872;
  double t947;
  double t1137;
  double t1587;
  double t1593;
  double t1754;
  double t3455;
  double t3669;
  double t3719;
  double t3973;
  double t2342;
  double t2506;
  double t2771;
  double t4513;
  double t5636;
  double t5638;
  double t5644;
  double t5650;
  double t5509;
  double t5520;
  double t5610;
  double t5673;
  double t5679;
  double t5683;
  double t5723;
  double t5726;
  double t5730;
  double t5739;
  double t5745;
  double t5748;
  double t5768;
  double t5821;
  double t5837;
  double t5839;
  double t5857;
  double t5878;
  double t5882;
  double t5910;
  double t5945;
  double t5947;
  double t5978;
  double t6008;
  double t6018;
  double t6023;
  double t6038;
  double t6043;
  double t6052;
  double t6056;
  double t6088;
  double t6103;
  double t6130;
  double t6191;
  double t6196;
  double t6218;
  double t6222;
  double t6226;
  double t6228;
  double t6254;
  double t6263;
  double t6267;
  double t6268;
  double t6291;
  double t6293;
  double t6309;
  double t154;
  double t274;
  double t283;
  double t424;
  double t1760;
  double t2053;
  double t6349;
  double t6350;
  double t6353;
  double t6370;
  double t6376;
  double t6391;
  double t3796;
  double t4011;
  double t4296;
  double t4611;
  double t4677;
  double t4932;
  double t6400;
  double t6403;
  double t6406;
  double t5649;
  double t5656;
  double t5664;
  double t5686;
  double t5701;
  double t5703;
  double t5736;
  double t5741;
  double t5743;
  double t6514;
  double t6521;
  double t6539;
  double t6554;
  double t6557;
  double t6570;
  double t5781;
  double t5791;
  double t5808;
  double t5903;
  double t5915;
  double t5943;
  double t6593;
  double t6597;
  double t6630;
  double t6660;
  double t6669;
  double t6675;
  double t5988;
  double t5991;
  double t5997;
  double t6055;
  double t6065;
  double t6080;
  double t6688;
  double t6698;
  double t6704;
  double t6707;
  double t6714;
  double t6724;
  double t6135;
  double t6162;
  double t6168;
  double t6253;
  double t6256;
  double t6261;
  double t6732;
  double t6735;
  double t6743;
  double t6758;
  double t6762;
  double t6777;
  double t6277;
  double t6284;
  double t6285;
  double t6783;
  double t6812;
  double t6815;
  double t6836;
  double t6857;
  double t6867;
  double t6963;
  double t6977;
  double t6984;
  double t7052;
  double t7057;
  double t7059;
  double t7067;
  double t7078;
  double t7084;
  double t7093;
  double t7098;
  double t7117;
  double t7141;
  double t7152;
  double t7160;
  double t7163;
  double t7166;
  double t7177;
  double t7189;
  double t7204;
  double t7207;
  double t7218;
  double t7220;
  double t7221;
  double t7231;
  double t7245;
  double t7248;
  double t7260;
  double t7266;
  double t7267;
  double t7271;
  double t7278;
  double t7282;
  t485 = Cos(var1[3]);
  t447 = Cos(var1[5]);
  t487 = Sin(var1[4]);
  t461 = Sin(var1[3]);
  t501 = Sin(var1[5]);
  t77 = Cos(var1[6]);
  t480 = -1.*t447*t461;
  t872 = t485*t487*t501;
  t947 = t480 + t872;
  t1137 = t485*t447*t487;
  t1587 = t461*t501;
  t1593 = t1137 + t1587;
  t1754 = Sin(var1[6]);
  t3455 = Cos(var1[7]);
  t3669 = -1.*t3455;
  t3719 = 1. + t3669;
  t3973 = Sin(var1[7]);
  t2342 = t77*t947;
  t2506 = t1593*t1754;
  t2771 = t2342 + t2506;
  t4513 = Cos(var1[4]);
  t5636 = Cos(var1[8]);
  t5638 = -1.*t5636;
  t5644 = 1. + t5638;
  t5650 = Sin(var1[8]);
  t5509 = t485*t4513*t3455;
  t5520 = t2771*t3973;
  t5610 = t5509 + t5520;
  t5673 = t77*t1593;
  t5679 = -1.*t947*t1754;
  t5683 = t5673 + t5679;
  t5723 = Cos(var1[9]);
  t5726 = -1.*t5723;
  t5730 = 1. + t5726;
  t5739 = Sin(var1[9]);
  t5745 = t5636*t5610;
  t5748 = t5683*t5650;
  t5768 = t5745 + t5748;
  t5821 = t5636*t5683;
  t5837 = -1.*t5610*t5650;
  t5839 = t5821 + t5837;
  t5857 = Cos(var1[10]);
  t5878 = -1.*t5857;
  t5882 = 1. + t5878;
  t5910 = Sin(var1[10]);
  t5945 = -1.*t5739*t5768;
  t5947 = t5723*t5839;
  t5978 = t5945 + t5947;
  t6008 = t5723*t5768;
  t6018 = t5739*t5839;
  t6023 = t6008 + t6018;
  t6038 = Cos(var1[11]);
  t6043 = -1.*t6038;
  t6052 = 1. + t6043;
  t6056 = Sin(var1[11]);
  t6088 = t5910*t5978;
  t6103 = t5857*t6023;
  t6130 = t6088 + t6103;
  t6191 = t5857*t5978;
  t6196 = -1.*t5910*t6023;
  t6218 = t6191 + t6196;
  t6222 = Cos(var1[12]);
  t6226 = -1.*t6222;
  t6228 = 1. + t6226;
  t6254 = Sin(var1[12]);
  t6263 = -1.*t6056*t6130;
  t6267 = t6038*t6218;
  t6268 = t6263 + t6267;
  t6291 = t6038*t6130;
  t6293 = t6056*t6218;
  t6309 = t6291 + t6293;
  t154 = -1.*t77;
  t274 = 1. + t154;
  t283 = 0.135*t274;
  t424 = 0. + t283;
  t1760 = -0.135*t1754;
  t2053 = 0. + t1760;
  t6349 = t485*t447;
  t6350 = t461*t487*t501;
  t6353 = t6349 + t6350;
  t6370 = t447*t461*t487;
  t6376 = -1.*t485*t501;
  t6391 = t6370 + t6376;
  t3796 = 0.135*t3719;
  t4011 = 0.049*t3973;
  t4296 = 0. + t3796 + t4011;
  t4611 = -0.049*t3719;
  t4677 = 0.135*t3973;
  t4932 = 0. + t4611 + t4677;
  t6400 = t77*t6353;
  t6403 = t6391*t1754;
  t6406 = t6400 + t6403;
  t5649 = -0.049*t5644;
  t5656 = -0.09*t5650;
  t5664 = 0. + t5649 + t5656;
  t5686 = -0.09*t5644;
  t5701 = 0.049*t5650;
  t5703 = 0. + t5686 + t5701;
  t5736 = -0.049*t5730;
  t5741 = -0.21*t5739;
  t5743 = 0. + t5736 + t5741;
  t6514 = t4513*t3455*t461;
  t6521 = t6406*t3973;
  t6539 = t6514 + t6521;
  t6554 = t77*t6391;
  t6557 = -1.*t6353*t1754;
  t6570 = t6554 + t6557;
  t5781 = -0.21*t5730;
  t5791 = 0.049*t5739;
  t5808 = 0. + t5781 + t5791;
  t5903 = -0.2707*t5882;
  t5915 = 0.0016*t5910;
  t5943 = 0. + t5903 + t5915;
  t6593 = t5636*t6539;
  t6597 = t6570*t5650;
  t6630 = t6593 + t6597;
  t6660 = t5636*t6570;
  t6669 = -1.*t6539*t5650;
  t6675 = t6660 + t6669;
  t5988 = -0.0016*t5882;
  t5991 = -0.2707*t5910;
  t5997 = 0. + t5988 + t5991;
  t6055 = 0.0184*t6052;
  t6065 = -0.7055*t6056;
  t6080 = 0. + t6055 + t6065;
  t6688 = -1.*t5739*t6630;
  t6698 = t5723*t6675;
  t6704 = t6688 + t6698;
  t6707 = t5723*t6630;
  t6714 = t5739*t6675;
  t6724 = t6707 + t6714;
  t6135 = -0.7055*t6052;
  t6162 = -0.0184*t6056;
  t6168 = 0. + t6135 + t6162;
  t6253 = -1.1135*t6228;
  t6256 = 0.0216*t6254;
  t6261 = 0. + t6253 + t6256;
  t6732 = t5910*t6704;
  t6735 = t5857*t6724;
  t6743 = t6732 + t6735;
  t6758 = t5857*t6704;
  t6762 = -1.*t5910*t6724;
  t6777 = t6758 + t6762;
  t6277 = -0.0216*t6228;
  t6284 = -1.1135*t6254;
  t6285 = 0. + t6277 + t6284;
  t6783 = -1.*t6056*t6743;
  t6812 = t6038*t6777;
  t6815 = t6783 + t6812;
  t6836 = t6038*t6743;
  t6857 = t6056*t6777;
  t6867 = t6836 + t6857;
  t6963 = t4513*t77*t501;
  t6977 = t4513*t447*t1754;
  t6984 = t6963 + t6977;
  t7052 = -1.*t3455*t487;
  t7057 = t6984*t3973;
  t7059 = t7052 + t7057;
  t7067 = t4513*t447*t77;
  t7078 = -1.*t4513*t501*t1754;
  t7084 = t7067 + t7078;
  t7093 = t5636*t7059;
  t7098 = t7084*t5650;
  t7117 = t7093 + t7098;
  t7141 = t5636*t7084;
  t7152 = -1.*t7059*t5650;
  t7160 = t7141 + t7152;
  t7163 = -1.*t5739*t7117;
  t7166 = t5723*t7160;
  t7177 = t7163 + t7166;
  t7189 = t5723*t7117;
  t7204 = t5739*t7160;
  t7207 = t7189 + t7204;
  t7218 = t5910*t7177;
  t7220 = t5857*t7207;
  t7221 = t7218 + t7220;
  t7231 = t5857*t7177;
  t7245 = -1.*t5910*t7207;
  t7248 = t7231 + t7245;
  t7260 = -1.*t6056*t7221;
  t7266 = t6038*t7248;
  t7267 = t7260 + t7266;
  t7271 = t6038*t7221;
  t7278 = t6056*t7248;
  t7282 = t7271 + t7278;
  p_output1[0]=0. + t1593*t2053 + t2771*t4296 + 0.1305*(t2771*t3455 - 1.*t3973*t4513*t485) + t4513*t485*t4932 + t5610*t5664 + t5683*t5703 + t5743*t5768 + t5808*t5839 + t5943*t5978 + t5997*t6023 + t6080*t6130 + t6168*t6218 + t6261*t6268 + t6285*t6309 + 0.0306*(t6254*t6268 + t6222*t6309) - 1.1312*(t6222*t6268 - 1.*t6254*t6309) + t424*t947 + var1[0];
  p_output1[1]=0. + t4513*t461*t4932 + t424*t6353 + t2053*t6391 + t4296*t6406 + 0.1305*(-1.*t3973*t4513*t461 + t3455*t6406) + t5664*t6539 + t5703*t6570 + t5743*t6630 + t5808*t6675 + t5943*t6704 + t5997*t6724 + t6080*t6743 + t6168*t6777 + t6261*t6815 + t6285*t6867 + 0.0306*(t6254*t6815 + t6222*t6867) - 1.1312*(t6222*t6815 - 1.*t6254*t6867) + var1[1];
  p_output1[2]=0. + t2053*t447*t4513 - 1.*t487*t4932 + t424*t4513*t501 + t4296*t6984 + 0.1305*(t3973*t487 + t3455*t6984) + t5664*t7059 + t5703*t7084 + t5743*t7117 + t5808*t7160 + t5943*t7177 + t5997*t7207 + t6080*t7221 + t6168*t7248 + t6261*t7267 + t6285*t7282 + 0.0306*(t6254*t7267 + t6222*t7282) - 1.1312*(t6222*t7267 - 1.*t6254*t7282) + var1[2];
}



void p_LeftToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
