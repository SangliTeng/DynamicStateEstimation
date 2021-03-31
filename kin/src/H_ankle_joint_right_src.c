/*
 * Automatically Generated from Mathematica.
 * Wed 12 Feb 2020 15:28:41 GMT-08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_ankle_joint_right_src.h"

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
  double t781;
  double t934;
  double t780;
  double t838;
  double t1180;
  double t1377;
  double t900;
  double t1260;
  double t1264;
  double t774;
  double t1428;
  double t1500;
  double t1514;
  double t1541;
  double t1346;
  double t1520;
  double t1526;
  double t762;
  double t1547;
  double t1558;
  double t1575;
  double t1620;
  double t1696;
  double t1721;
  double t1818;
  double t1825;
  double t1826;
  double t1876;
  double t1536;
  double t1856;
  double t1861;
  double t708;
  double t1881;
  double t1895;
  double t1934;
  double t2005;
  double t1873;
  double t1941;
  double t1968;
  double t319;
  double t2007;
  double t2012;
  double t2025;
  double t317;
  double t2282;
  double t2286;
  double t2314;
  double t2322;
  double t2334;
  double t2337;
  double t2318;
  double t2350;
  double t2358;
  double t2374;
  double t2394;
  double t2404;
  double t2414;
  double t2423;
  double t2448;
  double t2366;
  double t2450;
  double t2468;
  double t2499;
  double t2507;
  double t2514;
  double t2233;
  double t2484;
  double t2543;
  double t2592;
  double t2632;
  double t2634;
  double t2635;
  double t2843;
  double t2865;
  double t2877;
  double t2925;
  double t2976;
  double t2998;
  double t3018;
  double t3024;
  double t3067;
  double t2889;
  double t3077;
  double t3120;
  double t3198;
  double t3248;
  double t3261;
  double t3145;
  double t3291;
  double t3297;
  double t3330;
  double t3335;
  double t3342;
  double t2001;
  double t2070;
  double t2139;
  double t2267;
  double t2269;
  double t2270;
  double t2624;
  double t2639;
  double t2671;
  double t2736;
  double t2742;
  double t2786;
  double t3302;
  double t3347;
  double t3372;
  double t3383;
  double t3445;
  double t3449;
  double t3936;
  double t3964;
  double t4177;
  double t4180;
  double t4233;
  double t4235;
  double t4266;
  double t4272;
  double t4301;
  double t4302;
  double t3574;
  double t3580;
  double t3585;
  double t3971;
  double t4009;
  double t4025;
  double t4055;
  double t4064;
  double t4112;
  double t4130;
  double t4134;
  double t4139;
  double t4160;
  double t4165;
  double t4171;
  double t4181;
  double t4182;
  double t4184;
  double t4207;
  double t4210;
  double t4218;
  double t4237;
  double t4245;
  double t4248;
  double t4257;
  double t4258;
  double t4261;
  double t4275;
  double t4276;
  double t4278;
  double t4280;
  double t4282;
  double t4283;
  double t4307;
  double t4318;
  double t4319;
  double t4328;
  double t4333;
  double t4340;
  double t3638;
  double t3645;
  double t3665;
  double t3675;
  double t3751;
  double t3752;
  t781 = Cos(var1[5]);
  t934 = Sin(var1[3]);
  t780 = Cos(var1[3]);
  t838 = Sin(var1[4]);
  t1180 = Sin(var1[5]);
  t1377 = Sin(var1[13]);
  t900 = t780*t781*t838;
  t1260 = t934*t1180;
  t1264 = t900 + t1260;
  t774 = Cos(var1[13]);
  t1428 = -1.*t781*t934;
  t1500 = t780*t838*t1180;
  t1514 = t1428 + t1500;
  t1541 = Cos(var1[15]);
  t1346 = t774*t1264;
  t1520 = -1.*t1377*t1514;
  t1526 = t1346 + t1520;
  t762 = Sin(var1[15]);
  t1547 = Cos(var1[14]);
  t1558 = Cos(var1[4]);
  t1575 = t1547*t780*t1558;
  t1620 = Sin(var1[14]);
  t1696 = t1377*t1264;
  t1721 = t774*t1514;
  t1818 = t1696 + t1721;
  t1825 = t1620*t1818;
  t1826 = t1575 + t1825;
  t1876 = Cos(var1[16]);
  t1536 = t762*t1526;
  t1856 = t1541*t1826;
  t1861 = t1536 + t1856;
  t708 = Sin(var1[16]);
  t1881 = t1541*t1526;
  t1895 = -1.*t762*t1826;
  t1934 = t1881 + t1895;
  t2005 = Cos(var1[17]);
  t1873 = -1.*t708*t1861;
  t1941 = t1876*t1934;
  t1968 = t1873 + t1941;
  t319 = Sin(var1[17]);
  t2007 = t1876*t1861;
  t2012 = t708*t1934;
  t2025 = t2007 + t2012;
  t317 = Sin(var1[18]);
  t2282 = t781*t934*t838;
  t2286 = -1.*t780*t1180;
  t2314 = t2282 + t2286;
  t2322 = t780*t781;
  t2334 = t934*t838*t1180;
  t2337 = t2322 + t2334;
  t2318 = t774*t2314;
  t2350 = -1.*t1377*t2337;
  t2358 = t2318 + t2350;
  t2374 = t1547*t1558*t934;
  t2394 = t1377*t2314;
  t2404 = t774*t2337;
  t2414 = t2394 + t2404;
  t2423 = t1620*t2414;
  t2448 = t2374 + t2423;
  t2366 = t762*t2358;
  t2450 = t1541*t2448;
  t2468 = t2366 + t2450;
  t2499 = t1541*t2358;
  t2507 = -1.*t762*t2448;
  t2514 = t2499 + t2507;
  t2233 = Cos(var1[18]);
  t2484 = -1.*t708*t2468;
  t2543 = t1876*t2514;
  t2592 = t2484 + t2543;
  t2632 = t1876*t2468;
  t2634 = t708*t2514;
  t2635 = t2632 + t2634;
  t2843 = t774*t1558*t781;
  t2865 = -1.*t1558*t1377*t1180;
  t2877 = t2843 + t2865;
  t2925 = -1.*t1547*t838;
  t2976 = t1558*t781*t1377;
  t2998 = t774*t1558*t1180;
  t3018 = t2976 + t2998;
  t3024 = t1620*t3018;
  t3067 = t2925 + t3024;
  t2889 = t762*t2877;
  t3077 = t1541*t3067;
  t3120 = t2889 + t3077;
  t3198 = t1541*t2877;
  t3248 = -1.*t762*t3067;
  t3261 = t3198 + t3248;
  t3145 = -1.*t708*t3120;
  t3291 = t1876*t3261;
  t3297 = t3145 + t3291;
  t3330 = t1876*t3120;
  t3335 = t708*t3261;
  t3342 = t3330 + t3335;
  t2001 = t319*t1968;
  t2070 = t2005*t2025;
  t2139 = t2001 + t2070;
  t2267 = t2005*t1968;
  t2269 = -1.*t319*t2025;
  t2270 = t2267 + t2269;
  t2624 = t319*t2592;
  t2639 = t2005*t2635;
  t2671 = t2624 + t2639;
  t2736 = t2005*t2592;
  t2742 = -1.*t319*t2635;
  t2786 = t2736 + t2742;
  t3302 = t319*t3297;
  t3347 = t2005*t3342;
  t3372 = t3302 + t3347;
  t3383 = t2005*t3297;
  t3445 = -1.*t319*t3342;
  t3449 = t3383 + t3445;
  t3936 = -1.*t1547;
  t3964 = 1. + t3936;
  t4177 = -1.*t1541;
  t4180 = 1. + t4177;
  t4233 = -1.*t1876;
  t4235 = 1. + t4233;
  t4266 = -1.*t2005;
  t4272 = 1. + t4266;
  t4301 = -1.*t2233;
  t4302 = 1. + t4301;
  t3574 = t2233*t2139;
  t3580 = t317*t2270;
  t3585 = t3574 + t3580;
  t3971 = -0.049*t3964;
  t4009 = -0.135*t1620;
  t4025 = 0. + t3971 + t4009;
  t4055 = 0.135*t1377;
  t4064 = 0. + t4055;
  t4112 = -1.*t774;
  t4130 = 1. + t4112;
  t4134 = -0.135*t4130;
  t4139 = 0. + t4134;
  t4160 = -0.135*t3964;
  t4165 = 0.049*t1620;
  t4171 = 0. + t4160 + t4165;
  t4181 = -0.09*t4180;
  t4182 = 0.049*t762;
  t4184 = 0. + t4181 + t4182;
  t4207 = -0.049*t4180;
  t4210 = -0.09*t762;
  t4218 = 0. + t4207 + t4210;
  t4237 = -0.049*t4235;
  t4245 = -0.21*t708;
  t4248 = 0. + t4237 + t4245;
  t4257 = -0.21*t4235;
  t4258 = 0.049*t708;
  t4261 = 0. + t4257 + t4258;
  t4275 = -0.2707*t4272;
  t4276 = 0.0016*t319;
  t4278 = 0. + t4275 + t4276;
  t4280 = -0.0016*t4272;
  t4282 = -0.2707*t319;
  t4283 = 0. + t4280 + t4282;
  t4307 = 0.0184*t4302;
  t4318 = -0.7055*t317;
  t4319 = 0. + t4307 + t4318;
  t4328 = -0.7055*t4302;
  t4333 = -0.0184*t317;
  t4340 = 0. + t4328 + t4333;
  t3638 = t2233*t2671;
  t3645 = t317*t2786;
  t3665 = t3638 + t3645;
  t3675 = t2233*t3372;
  t3751 = t317*t3449;
  t3752 = t3675 + t3751;
  p_output1[0]=-1.*t2233*t2270 + t2139*t317;
  p_output1[1]=-1.*t2233*t2786 + t2671*t317;
  p_output1[2]=t317*t3372 - 1.*t2233*t3449;
  p_output1[3]=0.;
  p_output1[4]=t3585;
  p_output1[5]=t3665;
  p_output1[6]=t3752;
  p_output1[7]=0.;
  p_output1[8]=-1.*t1547*t1818 + t1558*t1620*t780;
  p_output1[9]=-1.*t1547*t2414 + t1558*t1620*t934;
  p_output1[10]=-1.*t1547*t3018 - 1.*t1620*t838;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.7055*(t2233*t2270 - 1.*t2139*t317) + 0.0184*t3585 + t1264*t4064 + t1514*t4139 + t1818*t4171 + t1526*t4184 + t1826*t4218 + t1861*t4248 + t1934*t4261 + t1968*t4278 + t2025*t4283 + t2139*t4319 + t2270*t4340 + t1558*t4025*t780 - 0.1305*(t1547*t1818 - 1.*t1558*t1620*t780) + var1[0];
  p_output1[13]=0. - 0.7055*(t2233*t2786 - 1.*t2671*t317) + 0.0184*t3665 + t2314*t4064 + t2337*t4139 + t2414*t4171 + t2358*t4184 + t2448*t4218 + t2468*t4248 + t2514*t4261 + t2592*t4278 + t2635*t4283 + t2671*t4319 + t2786*t4340 + t1558*t4025*t934 - 0.1305*(t1547*t2414 - 1.*t1558*t1620*t934) + var1[1];
  p_output1[14]=0. - 0.7055*(-1.*t317*t3372 + t2233*t3449) + 0.0184*t3752 + t1180*t1558*t4139 + t3018*t4171 + t2877*t4184 + t3067*t4218 + t3120*t4248 + t3261*t4261 + t3297*t4278 + t3342*t4283 + t3372*t4319 + t3449*t4340 + t1558*t4064*t781 - 1.*t4025*t838 - 0.1305*(t1547*t3018 + t1620*t838) + var1[2];
  p_output1[15]=1.;
}



void H_ankle_joint_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
