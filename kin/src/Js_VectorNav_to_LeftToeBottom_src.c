/*
 * Automatically Generated from Mathematica.
 * Wed 23 Oct 2019 10:33:50 GMT-07:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Js_VectorNav_to_LeftToeBottom_src.h"

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
  double t319;
  double t248;
  double t266;
  double t279;
  double t325;
  double t1583;
  double t1586;
  double t1629;
  double t437;
  double t486;
  double t533;
  double t1459;
  double t816;
  double t1935;
  double t1951;
  double t1992;
  double t2030;
  double t2149;
  double t1684;
  double t1775;
  double t1471;
  double t959;
  double t1932;
  double t2604;
  double t3127;
  double t3190;
  double t3196;
  double t3224;
  double t2234;
  double t3212;
  double t3228;
  double t3250;
  double t3263;
  double t3275;
  double t3309;
  double t2761;
  double t3007;
  double t2814;
  double t2819;
  double t2944;
  double t2969;
  double t3021;
  double t3039;
  double t3045;
  double t3090;
  double t3099;
  double t3797;
  double t3785;
  double t3351;
  double t3356;
  double t3465;
  double t3492;
  double t3517;
  double t3892;
  double t3894;
  double t3526;
  double t3530;
  double t3555;
  double t3260;
  double t3317;
  double t3895;
  double t3916;
  double t3922;
  double t3676;
  double t3677;
  double t3686;
  double t3958;
  double t3963;
  double t3969;
  double t3699;
  double t3737;
  double t3748;
  double t3372;
  double t3434;
  double t3447;
  double t3588;
  double t3629;
  double t3644;
  double t3786;
  double t3814;
  double t3840;
  double t3851;
  double t3873;
  double t3876;
  double t4376;
  double t4368;
  double t3956;
  double t3973;
  double t4113;
  double t4121;
  double t4122;
  double t4428;
  double t4435;
  double t4147;
  double t4148;
  double t4162;
  double t4003;
  double t4007;
  double t4436;
  double t4440;
  double t4443;
  double t4305;
  double t4312;
  double t4330;
  double t4453;
  double t4464;
  double t4479;
  double t4336;
  double t4339;
  double t4346;
  double t4059;
  double t4073;
  double t4204;
  double t4213;
  double t4238;
  double t4245;
  double t4287;
  double t4289;
  double t4369;
  double t4381;
  double t4386;
  double t4401;
  double t4404;
  double t4411;
  double t4749;
  double t4733;
  double t4447;
  double t4488;
  double t4559;
  double t4563;
  double t4565;
  double t4790;
  double t4791;
  double t4582;
  double t4584;
  double t4602;
  double t4496;
  double t4503;
  double t4792;
  double t4793;
  double t4794;
  double t4683;
  double t4685;
  double t4688;
  double t4799;
  double t4806;
  double t4810;
  double t4707;
  double t4709;
  double t4710;
  double t4526;
  double t4535;
  double t4614;
  double t4619;
  double t4647;
  double t4658;
  double t4674;
  double t4678;
  t319 = Cos(var1[0]);
  t248 = Sin(var1[0]);
  t266 = -1.*t248;
  t279 = 0. + t266;
  t325 = 0. + t319;
  t1583 = Cos(var1[1]);
  t1586 = -1.*t319*t1583;
  t1629 = 0. + t1586;
  t437 = -1.*t319;
  t486 = 1. + t437;
  t533 = 0.135*t486;
  t1459 = Sin(var1[1]);
  t816 = 0.135*t248;
  t1935 = -1.*t1583;
  t1951 = 1. + t1935;
  t1992 = 0.135*t1951;
  t2030 = 0.049*t1459;
  t2149 = 0. + t1992 + t2030;
  t1684 = -1.*t1583*t248;
  t1775 = 0. + t1684;
  t1471 = 0. + t1459;
  t959 = 0.049*t319;
  t1932 = -0.07996*t1629;
  t2604 = -1.*t248*t2149;
  t3127 = Cos(var1[2]);
  t3190 = -1.*t3127;
  t3196 = 1. + t3190;
  t3224 = Sin(var1[2]);
  t2234 = t319*t2149;
  t3212 = -0.049*t3196;
  t3228 = -0.09*t3224;
  t3250 = 0. + t3212 + t3228;
  t3263 = -0.09*t3196;
  t3275 = 0.049*t3224;
  t3309 = 0. + t3263 + t3275;
  t2761 = 0.03155*t1775;
  t3007 = 0.07996*t1471;
  t2814 = 0.049*t1951;
  t2819 = -0.135*t1459;
  t2944 = -0.135*t248;
  t2969 = t248*t2149;
  t3021 = -0.03155*t1629;
  t3039 = -0.049*t1951;
  t3045 = 0.135*t1459;
  t3090 = -0.135*t486;
  t3099 = -1.*t319*t2149;
  t3797 = Cos(var1[3]);
  t3785 = Sin(var1[3]);
  t3351 = t319*t1459*t3250;
  t3356 = -1.*t248*t3309;
  t3465 = t319*t3127*t1459;
  t3492 = -1.*t248*t3224;
  t3517 = t3465 + t3492;
  t3892 = -1.*t3797;
  t3894 = 1. + t3892;
  t3526 = -1.*t3127*t248;
  t3530 = -1.*t319*t1459*t3224;
  t3555 = t3526 + t3530;
  t3260 = -1.*t248*t1459*t3250;
  t3317 = -1.*t319*t3309;
  t3895 = -0.049*t3894;
  t3916 = -0.21*t3785;
  t3922 = 0. + t3895 + t3916;
  t3676 = t3127*t248*t1459;
  t3677 = t319*t3224;
  t3686 = t3676 + t3677;
  t3958 = -0.21*t3894;
  t3963 = 0.049*t3785;
  t3969 = 0. + t3958 + t3963;
  t3699 = t319*t3127;
  t3737 = -1.*t248*t1459*t3224;
  t3748 = t3699 + t3737;
  t3372 = -1.*t1583*t3250;
  t3434 = t248*t1459*t3250;
  t3447 = t319*t3309;
  t3588 = t1583*t3250;
  t3629 = -1.*t319*t1459*t3250;
  t3644 = t248*t3309;
  t3786 = -1.*t1583*t3127*t3785;
  t3814 = -1.*t3797*t1583*t3224;
  t3840 = t3786 + t3814;
  t3851 = t3797*t1583*t3127;
  t3873 = -1.*t1583*t3785*t3224;
  t3876 = t3851 + t3873;
  t4376 = Cos(var1[4]);
  t4368 = Sin(var1[4]);
  t3956 = t3922*t3517;
  t3973 = t3969*t3555;
  t4113 = -1.*t3785*t3517;
  t4121 = t3797*t3555;
  t4122 = t4113 + t4121;
  t4428 = -1.*t4376;
  t4435 = 1. + t4428;
  t4147 = t3797*t3517;
  t4148 = t3785*t3555;
  t4162 = t4147 + t4148;
  t4003 = -1.*t3922*t3686;
  t4007 = -1.*t3969*t3748;
  t4436 = -0.2707*t4435;
  t4440 = 0.0016*t4368;
  t4443 = 0. + t4436 + t4440;
  t4305 = -1.*t3785*t3686;
  t4312 = t3797*t3748;
  t4330 = t4305 + t4312;
  t4453 = -0.0016*t4435;
  t4464 = -0.2707*t4368;
  t4479 = 0. + t4453 + t4464;
  t4336 = t3797*t3686;
  t4339 = t3785*t3748;
  t4346 = t4336 + t4339;
  t4059 = -1.*t1583*t3127*t3922;
  t4073 = t1583*t3969*t3224;
  t4204 = t3922*t3686;
  t4213 = t3969*t3748;
  t4238 = t1583*t3127*t3922;
  t4245 = -1.*t1583*t3969*t3224;
  t4287 = -1.*t3922*t3517;
  t4289 = -1.*t3969*t3555;
  t4369 = t4368*t3840;
  t4381 = t4376*t3876;
  t4386 = t4369 + t4381;
  t4401 = t4376*t3840;
  t4404 = -1.*t4368*t3876;
  t4411 = t4401 + t4404;
  t4749 = Cos(var1[5]);
  t4733 = Sin(var1[5]);
  t4447 = t4443*t4122;
  t4488 = t4479*t4162;
  t4559 = t4368*t4122;
  t4563 = t4376*t4162;
  t4565 = t4559 + t4563;
  t4790 = -1.*t4749;
  t4791 = 1. + t4790;
  t4582 = t4376*t4122;
  t4584 = -1.*t4368*t4162;
  t4602 = t4582 + t4584;
  t4496 = -1.*t4443*t4330;
  t4503 = -1.*t4479*t4346;
  t4792 = 0.0184*t4791;
  t4793 = -0.7055*t4733;
  t4794 = 0. + t4792 + t4793;
  t4683 = t4368*t4330;
  t4685 = t4376*t4346;
  t4688 = t4683 + t4685;
  t4799 = -0.7055*t4791;
  t4806 = -0.0184*t4733;
  t4810 = 0. + t4799 + t4806;
  t4707 = t4376*t4330;
  t4709 = -1.*t4368*t4346;
  t4710 = t4707 + t4709;
  t4526 = -1.*t4443*t3840;
  t4535 = -1.*t4479*t3876;
  t4614 = t4443*t4330;
  t4619 = t4479*t4346;
  t4647 = t4443*t3840;
  t4658 = t4479*t3876;
  t4674 = -1.*t4443*t4122;
  t4678 = -1.*t4479*t4162;
  p_output1[0]=1.;
  p_output1[1]=0.;
  p_output1[2]=0.;
  p_output1[3]=0.;
  p_output1[4]=0.07996;
  p_output1[5]=-0.135;
  p_output1[6]=0.;
  p_output1[7]=t279;
  p_output1[8]=t325;
  p_output1[9]=0.135 - 0.07996*t279 + t319*(0. + t533) - 1.*t248*(0. + t816);
  p_output1[10]=0. + 0.03155*t325 + t959;
  p_output1[11]=0. + 0.049*t248 - 0.03155*t279;
  p_output1[12]=t1471;
  p_output1[13]=t1629;
  p_output1[14]=t1775;
  p_output1[15]=0. - 0.09*t1583 + t1932 - 1.*t1583*t248*(0. + t2234 + t533) - 1.*t1583*t319*(0. + t2604 + t816);
  p_output1[16]=0. - 0.049*t248 + t2761 - 1.*t1583*t248*(0. + t2814 + t2819) + t1459*(0. + t2944 + t2969) + t3007 - 0.09*t1459*t319;
  p_output1[17]=0. - 0.09*t1459*t248 + t3021 + t1459*(0. + t3090 + t3099) - 1.*t1583*(0. + t3039 + t3045)*t319 + t959;
  p_output1[18]=t1471;
  p_output1[19]=t1629;
  p_output1[20]=t1775;
  p_output1[21]=0. + t1932 - 0.21*t1583*t3127 - 0.049*t1583*t3224 - 1.*t1583*t248*(0. + t2234 + t3351 + t3356 + t533) - 1.*t1583*t319*(0. + t2604 + t3260 + t3317 + t816);
  p_output1[22]=0. + t2761 + t3007 - 1.*t1583*t248*(0. + t2814 + t2819 + t3372) + t1459*(0. + t2944 + t2969 + t3434 + t3447) - 0.21*t3517 + 0.049*t3555;
  p_output1[23]=0. + t3021 - 1.*t1583*t319*(0. + t3039 + t3045 + t3588) + t1459*(0. + t3090 + t3099 + t3629 + t3644) - 0.21*t3686 + 0.049*t3748;
  p_output1[24]=t1471;
  p_output1[25]=t1629;
  p_output1[26]=t1775;
  p_output1[27]=0. + t1932 + 0.0016*t3840 - 0.2707*t3876 - 1.*t1583*t248*(0. + t2234 + t3351 + t3356 + t3956 + t3973 + t533) - 1.*t1583*t319*(0. + t2604 + t3260 + t3317 + t4003 + t4007 + t816);
  p_output1[28]=0. + t2761 + t3007 - 1.*t1583*t248*(0. + t2814 + t2819 + t3372 + t4059 + t4073) + 0.0016*t4122 - 0.2707*t4162 + t1459*(0. + t2944 + t2969 + t3434 + t3447 + t4204 + t4213);
  p_output1[29]=0. + t3021 - 1.*t1583*t319*(0. + t3039 + t3045 + t3588 + t4238 + t4245) + t1459*(0. + t3090 + t3099 + t3629 + t3644 + t4287 + t4289) + 0.0016*t4330 - 0.2707*t4346;
  p_output1[30]=t1471;
  p_output1[31]=t1629;
  p_output1[32]=t1775;
  p_output1[33]=0. + t1932 - 0.7055*t4386 - 0.0184*t4411 - 1.*t1583*t248*(0. + t2234 + t3351 + t3356 + t3956 + t3973 + t4447 + t4488 + t533) - 1.*t1583*t319*(0. + t2604 + t3260 + t3317 + t4003 + t4007 + t4496 + t4503 + t816);
  p_output1[34]=0. + t2761 + t3007 - 1.*t1583*t248*(0. + t2814 + t2819 + t3372 + t4059 + t4073 + t4526 + t4535) - 0.7055*t4565 - 0.0184*t4602 + t1459*(0. + t2944 + t2969 + t3434 + t3447 + t4204 + t4213 + t4614 + t4619);
  p_output1[35]=0. + t3021 - 1.*t1583*t319*(0. + t3039 + t3045 + t3588 + t4238 + t4245 + t4647 + t4658) + t1459*(0. + t3090 + t3099 + t3629 + t3644 + t4287 + t4289 + t4674 + t4678) - 0.7055*t4688 - 0.0184*t4710;
  p_output1[36]=t1471;
  p_output1[37]=t1629;
  p_output1[38]=t1775;
  p_output1[39]=0. + t1932 - 1.1135*(t4411*t4733 + t4386*t4749) + 0.0216*(-1.*t4386*t4733 + t4411*t4749) - 1.*t1583*t248*(0. + t2234 + t3351 + t3356 + t3956 + t3973 + t4447 + t4488 + t4565*t4794 + t4602*t4810 + t533) - 1.*t1583*t319*(0. + t2604 + t3260 + t3317 + t4003 + t4007 + t4496 + t4503 - 1.*t4688*t4794 - 1.*t4710*t4810 + t816);
  p_output1[40]=0. + t2761 + t3007 - 1.1135*(t4602*t4733 + t4565*t4749) + 0.0216*(-1.*t4565*t4733 + t4602*t4749) - 1.*t1583*t248*(0. + t2814 + t2819 + t3372 + t4059 + t4073 + t4526 + t4535 - 1.*t4386*t4794 - 1.*t4411*t4810) + t1459*(0. + t2944 + t2969 + t3434 + t3447 + t4204 + t4213 + t4614 + t4619 + t4688*t4794 + t4710*t4810);
  p_output1[41]=0. + t3021 - 1.1135*(t4710*t4733 + t4688*t4749) + 0.0216*(-1.*t4688*t4733 + t4710*t4749) - 1.*t1583*t319*(0. + t3039 + t3045 + t3588 + t4238 + t4245 + t4647 + t4658 + t4386*t4794 + t4411*t4810) + t1459*(0. + t3090 + t3099 + t3629 + t3644 + t4287 + t4289 + t4674 + t4678 - 1.*t4565*t4794 - 1.*t4602*t4810);
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



void Js_VectorNav_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
