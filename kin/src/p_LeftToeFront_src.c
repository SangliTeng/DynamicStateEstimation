/*
 * Automatically Generated from Mathematica.
 * Wed 12 Feb 2020 15:28:55 GMT-08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_LeftToeFront_src.h"

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
  double t1618;
  double t1486;
  double t1645;
  double t1499;
  double t1667;
  double t67;
  double t1519;
  double t1688;
  double t1720;
  double t1840;
  double t2019;
  double t2051;
  double t2120;
  double t2391;
  double t2393;
  double t2422;
  double t2433;
  double t2368;
  double t2371;
  double t2382;
  double t2497;
  double t3038;
  double t3126;
  double t3131;
  double t3286;
  double t2878;
  double t2894;
  double t3026;
  double t3371;
  double t3391;
  double t3457;
  double t3811;
  double t3841;
  double t3858;
  double t3904;
  double t3943;
  double t4003;
  double t4006;
  double t4174;
  double t4199;
  double t4223;
  double t4272;
  double t4290;
  double t4308;
  double t4373;
  double t4520;
  double t4531;
  double t4535;
  double t4604;
  double t4611;
  double t4620;
  double t4694;
  double t4738;
  double t4757;
  double t4801;
  double t4863;
  double t4875;
  double t4877;
  double t5034;
  double t5050;
  double t5053;
  double t5084;
  double t5106;
  double t5108;
  double t5126;
  double t5176;
  double t5184;
  double t5211;
  double t5295;
  double t5297;
  double t5302;
  double t90;
  double t692;
  double t836;
  double t1343;
  double t2192;
  double t2204;
  double t5359;
  double t5360;
  double t5365;
  double t5370;
  double t5373;
  double t5379;
  double t2427;
  double t2439;
  double t2452;
  double t2544;
  double t2586;
  double t2607;
  double t5383;
  double t5386;
  double t5390;
  double t3133;
  double t3293;
  double t3308;
  double t3483;
  double t3516;
  double t3673;
  double t3902;
  double t3916;
  double t3934;
  double t5440;
  double t5443;
  double t5445;
  double t5453;
  double t5475;
  double t5498;
  double t4121;
  double t4122;
  double t4143;
  double t4313;
  double t4446;
  double t4485;
  double t5520;
  double t5531;
  double t5544;
  double t5560;
  double t5591;
  double t5612;
  double t4548;
  double t4562;
  double t4567;
  double t4795;
  double t4805;
  double t4823;
  double t5615;
  double t5616;
  double t5618;
  double t5642;
  double t5658;
  double t5660;
  double t4953;
  double t4969;
  double t5002;
  double t5113;
  double t5155;
  double t5158;
  double t5670;
  double t5671;
  double t5686;
  double t5694;
  double t5711;
  double t5725;
  double t5234;
  double t5237;
  double t5252;
  double t5748;
  double t5809;
  double t5822;
  double t5853;
  double t5870;
  double t5875;
  double t5975;
  double t5986;
  double t5994;
  double t6066;
  double t6070;
  double t6072;
  double t6109;
  double t6117;
  double t6149;
  double t6159;
  double t6161;
  double t6165;
  double t6174;
  double t6179;
  double t6191;
  double t6206;
  double t6207;
  double t6218;
  double t6241;
  double t6245;
  double t6255;
  double t6258;
  double t6262;
  double t6265;
  double t6283;
  double t6284;
  double t6285;
  double t6314;
  double t6318;
  double t6324;
  double t6328;
  double t6335;
  double t6345;
  t1618 = Cos(var1[3]);
  t1486 = Cos(var1[5]);
  t1645 = Sin(var1[4]);
  t1499 = Sin(var1[3]);
  t1667 = Sin(var1[5]);
  t67 = Cos(var1[6]);
  t1519 = -1.*t1486*t1499;
  t1688 = t1618*t1645*t1667;
  t1720 = t1519 + t1688;
  t1840 = t1618*t1486*t1645;
  t2019 = t1499*t1667;
  t2051 = t1840 + t2019;
  t2120 = Sin(var1[6]);
  t2391 = Cos(var1[7]);
  t2393 = -1.*t2391;
  t2422 = 1. + t2393;
  t2433 = Sin(var1[7]);
  t2368 = t67*t1720;
  t2371 = t2051*t2120;
  t2382 = t2368 + t2371;
  t2497 = Cos(var1[4]);
  t3038 = Cos(var1[8]);
  t3126 = -1.*t3038;
  t3131 = 1. + t3126;
  t3286 = Sin(var1[8]);
  t2878 = t1618*t2497*t2391;
  t2894 = t2382*t2433;
  t3026 = t2878 + t2894;
  t3371 = t67*t2051;
  t3391 = -1.*t1720*t2120;
  t3457 = t3371 + t3391;
  t3811 = Cos(var1[9]);
  t3841 = -1.*t3811;
  t3858 = 1. + t3841;
  t3904 = Sin(var1[9]);
  t3943 = t3038*t3026;
  t4003 = t3457*t3286;
  t4006 = t3943 + t4003;
  t4174 = t3038*t3457;
  t4199 = -1.*t3026*t3286;
  t4223 = t4174 + t4199;
  t4272 = Cos(var1[10]);
  t4290 = -1.*t4272;
  t4308 = 1. + t4290;
  t4373 = Sin(var1[10]);
  t4520 = -1.*t3904*t4006;
  t4531 = t3811*t4223;
  t4535 = t4520 + t4531;
  t4604 = t3811*t4006;
  t4611 = t3904*t4223;
  t4620 = t4604 + t4611;
  t4694 = Cos(var1[11]);
  t4738 = -1.*t4694;
  t4757 = 1. + t4738;
  t4801 = Sin(var1[11]);
  t4863 = t4373*t4535;
  t4875 = t4272*t4620;
  t4877 = t4863 + t4875;
  t5034 = t4272*t4535;
  t5050 = -1.*t4373*t4620;
  t5053 = t5034 + t5050;
  t5084 = Cos(var1[12]);
  t5106 = -1.*t5084;
  t5108 = 1. + t5106;
  t5126 = Sin(var1[12]);
  t5176 = -1.*t4801*t4877;
  t5184 = t4694*t5053;
  t5211 = t5176 + t5184;
  t5295 = t4694*t4877;
  t5297 = t4801*t5053;
  t5302 = t5295 + t5297;
  t90 = -1.*t67;
  t692 = 1. + t90;
  t836 = 0.135*t692;
  t1343 = 0. + t836;
  t2192 = -0.135*t2120;
  t2204 = 0. + t2192;
  t5359 = t1618*t1486;
  t5360 = t1499*t1645*t1667;
  t5365 = t5359 + t5360;
  t5370 = t1486*t1499*t1645;
  t5373 = -1.*t1618*t1667;
  t5379 = t5370 + t5373;
  t2427 = 0.135*t2422;
  t2439 = 0.049*t2433;
  t2452 = 0. + t2427 + t2439;
  t2544 = -0.049*t2422;
  t2586 = 0.135*t2433;
  t2607 = 0. + t2544 + t2586;
  t5383 = t67*t5365;
  t5386 = t5379*t2120;
  t5390 = t5383 + t5386;
  t3133 = -0.049*t3131;
  t3293 = -0.09*t3286;
  t3308 = 0. + t3133 + t3293;
  t3483 = -0.09*t3131;
  t3516 = 0.049*t3286;
  t3673 = 0. + t3483 + t3516;
  t3902 = -0.049*t3858;
  t3916 = -0.21*t3904;
  t3934 = 0. + t3902 + t3916;
  t5440 = t2497*t2391*t1499;
  t5443 = t5390*t2433;
  t5445 = t5440 + t5443;
  t5453 = t67*t5379;
  t5475 = -1.*t5365*t2120;
  t5498 = t5453 + t5475;
  t4121 = -0.21*t3858;
  t4122 = 0.049*t3904;
  t4143 = 0. + t4121 + t4122;
  t4313 = -0.2707*t4308;
  t4446 = 0.0016*t4373;
  t4485 = 0. + t4313 + t4446;
  t5520 = t3038*t5445;
  t5531 = t5498*t3286;
  t5544 = t5520 + t5531;
  t5560 = t3038*t5498;
  t5591 = -1.*t5445*t3286;
  t5612 = t5560 + t5591;
  t4548 = -0.0016*t4308;
  t4562 = -0.2707*t4373;
  t4567 = 0. + t4548 + t4562;
  t4795 = 0.0184*t4757;
  t4805 = -0.7055*t4801;
  t4823 = 0. + t4795 + t4805;
  t5615 = -1.*t3904*t5544;
  t5616 = t3811*t5612;
  t5618 = t5615 + t5616;
  t5642 = t3811*t5544;
  t5658 = t3904*t5612;
  t5660 = t5642 + t5658;
  t4953 = -0.7055*t4757;
  t4969 = -0.0184*t4801;
  t5002 = 0. + t4953 + t4969;
  t5113 = -1.1135*t5108;
  t5155 = 0.0216*t5126;
  t5158 = 0. + t5113 + t5155;
  t5670 = t4373*t5618;
  t5671 = t4272*t5660;
  t5686 = t5670 + t5671;
  t5694 = t4272*t5618;
  t5711 = -1.*t4373*t5660;
  t5725 = t5694 + t5711;
  t5234 = -0.0216*t5108;
  t5237 = -1.1135*t5126;
  t5252 = 0. + t5234 + t5237;
  t5748 = -1.*t4801*t5686;
  t5809 = t4694*t5725;
  t5822 = t5748 + t5809;
  t5853 = t4694*t5686;
  t5870 = t4801*t5725;
  t5875 = t5853 + t5870;
  t5975 = t2497*t67*t1667;
  t5986 = t2497*t1486*t2120;
  t5994 = t5975 + t5986;
  t6066 = -1.*t2391*t1645;
  t6070 = t5994*t2433;
  t6072 = t6066 + t6070;
  t6109 = t2497*t1486*t67;
  t6117 = -1.*t2497*t1667*t2120;
  t6149 = t6109 + t6117;
  t6159 = t3038*t6072;
  t6161 = t6149*t3286;
  t6165 = t6159 + t6161;
  t6174 = t3038*t6149;
  t6179 = -1.*t6072*t3286;
  t6191 = t6174 + t6179;
  t6206 = -1.*t3904*t6165;
  t6207 = t3811*t6191;
  t6218 = t6206 + t6207;
  t6241 = t3811*t6165;
  t6245 = t3904*t6191;
  t6255 = t6241 + t6245;
  t6258 = t4373*t6218;
  t6262 = t4272*t6255;
  t6265 = t6258 + t6262;
  t6283 = t4272*t6218;
  t6284 = -1.*t4373*t6255;
  t6285 = t6283 + t6284;
  t6314 = -1.*t4801*t6265;
  t6318 = t4694*t6285;
  t6324 = t6314 + t6318;
  t6328 = t4694*t6265;
  t6335 = t4801*t6285;
  t6345 = t6328 + t6335;
  p_output1[0]=0. + t1343*t1720 + t2051*t2204 + t2382*t2452 + 0.1305*(t2382*t2391 - 1.*t1618*t2433*t2497) + t1618*t2497*t2607 + t3026*t3308 + t3457*t3673 + t3934*t4006 + t4143*t4223 + t4485*t4535 + t4567*t4620 + t4823*t4877 + t5002*t5053 + t5158*t5211 + t5252*t5302 + 0.088451*(t5126*t5211 + t5084*t5302) - 1.062256*(t5084*t5211 - 1.*t5126*t5302) + var1[0];
  p_output1[1]=0. + t1499*t2497*t2607 + t1343*t5365 + t2204*t5379 + t2452*t5390 + 0.1305*(-1.*t1499*t2433*t2497 + t2391*t5390) + t3308*t5445 + t3673*t5498 + t3934*t5544 + t4143*t5612 + t4485*t5618 + t4567*t5660 + t4823*t5686 + t5002*t5725 + t5158*t5822 + t5252*t5875 + 0.088451*(t5126*t5822 + t5084*t5875) - 1.062256*(t5084*t5822 - 1.*t5126*t5875) + var1[1];
  p_output1[2]=0. + t1343*t1667*t2497 + t1486*t2204*t2497 - 1.*t1645*t2607 + t2452*t5994 + 0.1305*(t1645*t2433 + t2391*t5994) + t3308*t6072 + t3673*t6149 + t3934*t6165 + t4143*t6191 + t4485*t6218 + t4567*t6255 + t4823*t6265 + t5002*t6285 + t5158*t6324 + t5252*t6345 + 0.088451*(t5126*t6324 + t5084*t6345) - 1.062256*(t5084*t6324 - 1.*t5126*t6345) + var1[2];
}



void p_LeftToeFront_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
