/*
 * Automatically Generated from Mathematica.
 * Wed 12 Feb 2020 15:27:53 GMT-08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_ankle_joint_left_src.h"

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
  double t3288;
  double t2978;
  double t3312;
  double t2982;
  double t3647;
  double t271;
  double t3206;
  double t3686;
  double t3692;
  double t4124;
  double t4346;
  double t5927;
  double t6369;
  double t7072;
  double t7073;
  double t7074;
  double t7088;
  double t7063;
  double t7066;
  double t7069;
  double t7117;
  double t7151;
  double t7152;
  double t7153;
  double t7169;
  double t7139;
  double t7148;
  double t7150;
  double t7184;
  double t7186;
  double t7187;
  double t7202;
  double t7209;
  double t7210;
  double t7216;
  double t7230;
  double t7233;
  double t7236;
  double t7246;
  double t7247;
  double t7250;
  double t7262;
  double t7266;
  double t7268;
  double t7278;
  double t7287;
  double t7289;
  double t7295;
  double t7307;
  double t7308;
  double t7310;
  double t7312;
  double t7313;
  double t7317;
  double t7320;
  double t7329;
  double t7330;
  double t7332;
  double t7340;
  double t7341;
  double t7343;
  double t851;
  double t855;
  double t1521;
  double t2835;
  double t6706;
  double t6998;
  double t7375;
  double t7376;
  double t7377;
  double t7379;
  double t7383;
  double t7385;
  double t7086;
  double t7106;
  double t7114;
  double t7119;
  double t7122;
  double t7129;
  double t7393;
  double t7398;
  double t7404;
  double t7156;
  double t7171;
  double t7175;
  double t7188;
  double t7189;
  double t7192;
  double t7213;
  double t7227;
  double t7229;
  double t7418;
  double t7420;
  double t7421;
  double t7424;
  double t7425;
  double t7426;
  double t7239;
  double t7242;
  double t7243;
  double t7269;
  double t7283;
  double t7285;
  double t7428;
  double t7429;
  double t7431;
  double t7433;
  double t7435;
  double t7439;
  double t7300;
  double t7303;
  double t7306;
  double t7319;
  double t7323;
  double t7327;
  double t7442;
  double t7444;
  double t7445;
  double t7447;
  double t7451;
  double t7456;
  double t7336;
  double t7337;
  double t7338;
  double t7461;
  double t7464;
  double t7466;
  double t7468;
  double t7470;
  double t7472;
  double t7498;
  double t7499;
  double t7500;
  double t7507;
  double t7508;
  double t7509;
  double t7512;
  double t7513;
  double t7514;
  double t7516;
  double t7517;
  double t7519;
  double t7522;
  double t7523;
  double t7525;
  double t7527;
  double t7528;
  double t7529;
  double t7531;
  double t7532;
  double t7533;
  double t7535;
  double t7536;
  double t7537;
  double t7539;
  double t7541;
  double t7542;
  t3288 = Cos(var1[3]);
  t2978 = Cos(var1[5]);
  t3312 = Sin(var1[4]);
  t2982 = Sin(var1[3]);
  t3647 = Sin(var1[5]);
  t271 = Cos(var1[6]);
  t3206 = -1.*t2978*t2982;
  t3686 = t3288*t3312*t3647;
  t3692 = t3206 + t3686;
  t4124 = t3288*t2978*t3312;
  t4346 = t2982*t3647;
  t5927 = t4124 + t4346;
  t6369 = Sin(var1[6]);
  t7072 = Cos(var1[7]);
  t7073 = -1.*t7072;
  t7074 = 1. + t7073;
  t7088 = Sin(var1[7]);
  t7063 = t271*t3692;
  t7066 = t5927*t6369;
  t7069 = t7063 + t7066;
  t7117 = Cos(var1[4]);
  t7151 = Cos(var1[8]);
  t7152 = -1.*t7151;
  t7153 = 1. + t7152;
  t7169 = Sin(var1[8]);
  t7139 = t3288*t7117*t7072;
  t7148 = t7069*t7088;
  t7150 = t7139 + t7148;
  t7184 = t271*t5927;
  t7186 = -1.*t3692*t6369;
  t7187 = t7184 + t7186;
  t7202 = Cos(var1[9]);
  t7209 = -1.*t7202;
  t7210 = 1. + t7209;
  t7216 = Sin(var1[9]);
  t7230 = t7151*t7150;
  t7233 = t7187*t7169;
  t7236 = t7230 + t7233;
  t7246 = t7151*t7187;
  t7247 = -1.*t7150*t7169;
  t7250 = t7246 + t7247;
  t7262 = Cos(var1[10]);
  t7266 = -1.*t7262;
  t7268 = 1. + t7266;
  t7278 = Sin(var1[10]);
  t7287 = -1.*t7216*t7236;
  t7289 = t7202*t7250;
  t7295 = t7287 + t7289;
  t7307 = t7202*t7236;
  t7308 = t7216*t7250;
  t7310 = t7307 + t7308;
  t7312 = Cos(var1[11]);
  t7313 = -1.*t7312;
  t7317 = 1. + t7313;
  t7320 = Sin(var1[11]);
  t7329 = t7278*t7295;
  t7330 = t7262*t7310;
  t7332 = t7329 + t7330;
  t7340 = t7262*t7295;
  t7341 = -1.*t7278*t7310;
  t7343 = t7340 + t7341;
  t851 = -1.*t271;
  t855 = 1. + t851;
  t1521 = 0.135*t855;
  t2835 = 0. + t1521;
  t6706 = -0.135*t6369;
  t6998 = 0. + t6706;
  t7375 = t3288*t2978;
  t7376 = t2982*t3312*t3647;
  t7377 = t7375 + t7376;
  t7379 = t2978*t2982*t3312;
  t7383 = -1.*t3288*t3647;
  t7385 = t7379 + t7383;
  t7086 = 0.135*t7074;
  t7106 = 0.049*t7088;
  t7114 = 0. + t7086 + t7106;
  t7119 = -0.049*t7074;
  t7122 = 0.135*t7088;
  t7129 = 0. + t7119 + t7122;
  t7393 = t271*t7377;
  t7398 = t7385*t6369;
  t7404 = t7393 + t7398;
  t7156 = -0.049*t7153;
  t7171 = -0.09*t7169;
  t7175 = 0. + t7156 + t7171;
  t7188 = -0.09*t7153;
  t7189 = 0.049*t7169;
  t7192 = 0. + t7188 + t7189;
  t7213 = -0.049*t7210;
  t7227 = -0.21*t7216;
  t7229 = 0. + t7213 + t7227;
  t7418 = t7117*t7072*t2982;
  t7420 = t7404*t7088;
  t7421 = t7418 + t7420;
  t7424 = t271*t7385;
  t7425 = -1.*t7377*t6369;
  t7426 = t7424 + t7425;
  t7239 = -0.21*t7210;
  t7242 = 0.049*t7216;
  t7243 = 0. + t7239 + t7242;
  t7269 = -0.2707*t7268;
  t7283 = 0.0016*t7278;
  t7285 = 0. + t7269 + t7283;
  t7428 = t7151*t7421;
  t7429 = t7426*t7169;
  t7431 = t7428 + t7429;
  t7433 = t7151*t7426;
  t7435 = -1.*t7421*t7169;
  t7439 = t7433 + t7435;
  t7300 = -0.0016*t7268;
  t7303 = -0.2707*t7278;
  t7306 = 0. + t7300 + t7303;
  t7319 = 0.0184*t7317;
  t7323 = -0.7055*t7320;
  t7327 = 0. + t7319 + t7323;
  t7442 = -1.*t7216*t7431;
  t7444 = t7202*t7439;
  t7445 = t7442 + t7444;
  t7447 = t7202*t7431;
  t7451 = t7216*t7439;
  t7456 = t7447 + t7451;
  t7336 = -0.7055*t7317;
  t7337 = -0.0184*t7320;
  t7338 = 0. + t7336 + t7337;
  t7461 = t7278*t7445;
  t7464 = t7262*t7456;
  t7466 = t7461 + t7464;
  t7468 = t7262*t7445;
  t7470 = -1.*t7278*t7456;
  t7472 = t7468 + t7470;
  t7498 = t7117*t271*t3647;
  t7499 = t7117*t2978*t6369;
  t7500 = t7498 + t7499;
  t7507 = -1.*t7072*t3312;
  t7508 = t7500*t7088;
  t7509 = t7507 + t7508;
  t7512 = t7117*t2978*t271;
  t7513 = -1.*t7117*t3647*t6369;
  t7514 = t7512 + t7513;
  t7516 = t7151*t7509;
  t7517 = t7514*t7169;
  t7519 = t7516 + t7517;
  t7522 = t7151*t7514;
  t7523 = -1.*t7509*t7169;
  t7525 = t7522 + t7523;
  t7527 = -1.*t7216*t7519;
  t7528 = t7202*t7525;
  t7529 = t7527 + t7528;
  t7531 = t7202*t7519;
  t7532 = t7216*t7525;
  t7533 = t7531 + t7532;
  t7535 = t7278*t7529;
  t7536 = t7262*t7533;
  t7537 = t7535 + t7536;
  t7539 = t7262*t7529;
  t7541 = -1.*t7278*t7533;
  t7542 = t7539 + t7541;
  p_output1[0]=0. + t2835*t3692 + t5927*t6998 + t7069*t7114 + 0.1305*(t7069*t7072 - 1.*t3288*t7088*t7117) + t3288*t7117*t7129 + t7150*t7175 + t7187*t7192 + t7229*t7236 + t7243*t7250 + t7285*t7295 + t7306*t7310 + t7327*t7332 + t7338*t7343 - 0.7055*(-1.*t7320*t7332 + t7312*t7343) + 0.0184*(t7312*t7332 + t7320*t7343) + var1[0];
  p_output1[1]=0. + t2982*t7117*t7129 + t2835*t7377 + t6998*t7385 + t7114*t7404 + 0.1305*(-1.*t2982*t7088*t7117 + t7072*t7404) + t7175*t7421 + t7192*t7426 + t7229*t7431 + t7243*t7439 + t7285*t7445 + t7306*t7456 + t7327*t7466 + t7338*t7472 - 0.7055*(-1.*t7320*t7466 + t7312*t7472) + 0.0184*(t7312*t7466 + t7320*t7472) + var1[1];
  p_output1[2]=0. + t2835*t3647*t7117 + t2978*t6998*t7117 - 1.*t3312*t7129 + t7114*t7500 + 0.1305*(t3312*t7088 + t7072*t7500) + t7175*t7509 + t7192*t7514 + t7229*t7519 + t7243*t7525 + t7285*t7529 + t7306*t7533 + t7327*t7537 + t7338*t7542 - 0.7055*(-1.*t7320*t7537 + t7312*t7542) + 0.0184*(t7312*t7537 + t7320*t7542) + var1[2];
}



void p_ankle_joint_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
