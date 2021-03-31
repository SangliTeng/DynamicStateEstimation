/*
 * Automatically Generated from Mathematica.
 * Wed 23 Oct 2019 10:33:51 GMT-07:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jvs_VectorNav_to_LeftToeBottom_src.h"

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
  double t557;
  double t1045;
  double t1047;
  double t1132;
  double t1932;
  double t735;
  double t789;
  double t870;
  double t1284;
  double t2098;
  double t2104;
  double t2126;
  double t2202;
  double t2231;
  double t2260;
  double t1418;
  double t1992;
  double t2014;
  double t2073;
  double t2621;
  double t3057;
  double t3090;
  double t3101;
  double t3122;
  double t2280;
  double t3111;
  double t3137;
  double t3195;
  double t3259;
  double t3297;
  double t3351;
  double t2700;
  double t2717;
  double t2735;
  double t2846;
  double t2872;
  double t2740;
  double t2752;
  double t2798;
  double t2814;
  double t2944;
  double t2969;
  double t2970;
  double t3009;
  double t3021;
  double t4369;
  double t4339;
  double t3449;
  double t3455;
  double t3699;
  double t3709;
  double t3710;
  double t4514;
  double t4524;
  double t3842;
  double t3846;
  double t3961;
  double t3228;
  double t3363;
  double t4548;
  double t4556;
  double t4567;
  double t4095;
  double t4101;
  double t4145;
  double t4619;
  double t4622;
  double t4665;
  double t4177;
  double t4179;
  double t4238;
  double t3650;
  double t3677;
  double t3679;
  double t3982;
  double t4027;
  double t4062;
  double t4361;
  double t4381;
  double t4400;
  double t4440;
  double t4447;
  double t4488;
  double t5007;
  double t4997;
  double t4609;
  double t4680;
  double t4822;
  double t4825;
  double t4827;
  double t5049;
  double t5066;
  double t4836;
  double t4841;
  double t4849;
  double t4701;
  double t4712;
  double t5074;
  double t5077;
  double t5078;
  double t4955;
  double t4963;
  double t4968;
  double t5087;
  double t5091;
  double t5097;
  double t4972;
  double t4975;
  double t4984;
  double t4793;
  double t4796;
  double t4859;
  double t4876;
  double t4899;
  double t4910;
  double t4914;
  double t4928;
  double t5000;
  double t5011;
  double t5013;
  double t5027;
  double t5034;
  double t5043;
  double t5293;
  double t5287;
  double t5081;
  double t5107;
  double t5163;
  double t5175;
  double t5176;
  double t5324;
  double t5326;
  double t5185;
  double t5192;
  double t5208;
  double t5115;
  double t5117;
  double t5329;
  double t5333;
  double t5340;
  double t5261;
  double t5263;
  double t5266;
  double t5343;
  double t5349;
  double t5356;
  double t5271;
  double t5273;
  double t5276;
  double t5128;
  double t5129;
  double t5212;
  double t5213;
  double t5219;
  double t5221;
  double t5249;
  double t5254;
  t557 = Cos(var1[0]);
  t1045 = Sin(var1[0]);
  t1047 = -1.*t1045;
  t1132 = 0. + t1047;
  t1932 = Cos(var1[1]);
  t735 = -1.*t557;
  t789 = 1. + t735;
  t870 = 0.135*t789;
  t1284 = 0.135*t1045;
  t2098 = -1.*t1932;
  t2104 = 1. + t2098;
  t2126 = 0.135*t2104;
  t2202 = Sin(var1[1]);
  t2231 = 0.049*t2202;
  t2260 = 0. + t2126 + t2231;
  t1418 = 0.049*t557;
  t1992 = -1.*t557*t1932;
  t2014 = 0. + t1992;
  t2073 = -0.07996*t2014;
  t2621 = -1.*t1045*t2260;
  t3057 = Cos(var1[2]);
  t3090 = -1.*t3057;
  t3101 = 1. + t3090;
  t3122 = Sin(var1[2]);
  t2280 = t557*t2260;
  t3111 = -0.049*t3101;
  t3137 = -0.09*t3122;
  t3195 = 0. + t3111 + t3137;
  t3259 = -0.09*t3101;
  t3297 = 0.049*t3122;
  t3351 = 0. + t3259 + t3297;
  t2700 = -1.*t1932*t1045;
  t2717 = 0. + t2700;
  t2735 = 0.03155*t2717;
  t2846 = 0. + t2202;
  t2872 = 0.07996*t2846;
  t2740 = 0.049*t2104;
  t2752 = -0.135*t2202;
  t2798 = -0.135*t1045;
  t2814 = t1045*t2260;
  t2944 = -0.03155*t2014;
  t2969 = -0.049*t2104;
  t2970 = 0.135*t2202;
  t3009 = -0.135*t789;
  t3021 = -1.*t557*t2260;
  t4369 = Cos(var1[3]);
  t4339 = Sin(var1[3]);
  t3449 = t557*t2202*t3195;
  t3455 = -1.*t1045*t3351;
  t3699 = t557*t3057*t2202;
  t3709 = -1.*t1045*t3122;
  t3710 = t3699 + t3709;
  t4514 = -1.*t4369;
  t4524 = 1. + t4514;
  t3842 = -1.*t3057*t1045;
  t3846 = -1.*t557*t2202*t3122;
  t3961 = t3842 + t3846;
  t3228 = -1.*t1045*t2202*t3195;
  t3363 = -1.*t557*t3351;
  t4548 = -0.049*t4524;
  t4556 = -0.21*t4339;
  t4567 = 0. + t4548 + t4556;
  t4095 = t3057*t1045*t2202;
  t4101 = t557*t3122;
  t4145 = t4095 + t4101;
  t4619 = -0.21*t4524;
  t4622 = 0.049*t4339;
  t4665 = 0. + t4619 + t4622;
  t4177 = t557*t3057;
  t4179 = -1.*t1045*t2202*t3122;
  t4238 = t4177 + t4179;
  t3650 = -1.*t1932*t3195;
  t3677 = t1045*t2202*t3195;
  t3679 = t557*t3351;
  t3982 = t1932*t3195;
  t4027 = -1.*t557*t2202*t3195;
  t4062 = t1045*t3351;
  t4361 = -1.*t1932*t3057*t4339;
  t4381 = -1.*t4369*t1932*t3122;
  t4400 = t4361 + t4381;
  t4440 = t4369*t1932*t3057;
  t4447 = -1.*t1932*t4339*t3122;
  t4488 = t4440 + t4447;
  t5007 = Cos(var1[4]);
  t4997 = Sin(var1[4]);
  t4609 = t4567*t3710;
  t4680 = t4665*t3961;
  t4822 = -1.*t4339*t3710;
  t4825 = t4369*t3961;
  t4827 = t4822 + t4825;
  t5049 = -1.*t5007;
  t5066 = 1. + t5049;
  t4836 = t4369*t3710;
  t4841 = t4339*t3961;
  t4849 = t4836 + t4841;
  t4701 = -1.*t4567*t4145;
  t4712 = -1.*t4665*t4238;
  t5074 = -0.2707*t5066;
  t5077 = 0.0016*t4997;
  t5078 = 0. + t5074 + t5077;
  t4955 = -1.*t4339*t4145;
  t4963 = t4369*t4238;
  t4968 = t4955 + t4963;
  t5087 = -0.0016*t5066;
  t5091 = -0.2707*t4997;
  t5097 = 0. + t5087 + t5091;
  t4972 = t4369*t4145;
  t4975 = t4339*t4238;
  t4984 = t4972 + t4975;
  t4793 = -1.*t1932*t3057*t4567;
  t4796 = t1932*t4665*t3122;
  t4859 = t4567*t4145;
  t4876 = t4665*t4238;
  t4899 = t1932*t3057*t4567;
  t4910 = -1.*t1932*t4665*t3122;
  t4914 = -1.*t4567*t3710;
  t4928 = -1.*t4665*t3961;
  t5000 = t4997*t4400;
  t5011 = t5007*t4488;
  t5013 = t5000 + t5011;
  t5027 = t5007*t4400;
  t5034 = -1.*t4997*t4488;
  t5043 = t5027 + t5034;
  t5293 = Cos(var1[5]);
  t5287 = Sin(var1[5]);
  t5081 = t5078*t4827;
  t5107 = t5097*t4849;
  t5163 = t4997*t4827;
  t5175 = t5007*t4849;
  t5176 = t5163 + t5175;
  t5324 = -1.*t5293;
  t5326 = 1. + t5324;
  t5185 = t5007*t4827;
  t5192 = -1.*t4997*t4849;
  t5208 = t5185 + t5192;
  t5115 = -1.*t5078*t4968;
  t5117 = -1.*t5097*t4984;
  t5329 = 0.0184*t5326;
  t5333 = -0.7055*t5287;
  t5340 = 0. + t5329 + t5333;
  t5261 = t4997*t4968;
  t5263 = t5007*t4984;
  t5266 = t5261 + t5263;
  t5343 = -0.7055*t5326;
  t5349 = -0.0184*t5287;
  t5356 = 0. + t5343 + t5349;
  t5271 = t5007*t4968;
  t5273 = -1.*t4997*t4984;
  t5276 = t5271 + t5273;
  t5128 = -1.*t5078*t4400;
  t5129 = -1.*t5097*t4488;
  t5212 = t5078*t4968;
  t5213 = t5097*t4984;
  t5219 = t5078*t4400;
  t5221 = t5097*t4488;
  t5249 = -1.*t5078*t4827;
  t5254 = -1.*t5097*t4849;
  p_output1[0]=0.;
  p_output1[1]=0.07996;
  p_output1[2]=-0.135;
  p_output1[3]=0.135 - 0.07996*t1132 - 1.*t1045*(0. + t1284) + t557*(0. + t870);
  p_output1[4]=0. + t1418 + 0.03155*(0. + t557);
  p_output1[5]=0. + 0.049*t1045 - 0.03155*t1132;
  p_output1[6]=0. - 0.09*t1932 + t2073 - 1.*t1932*(0. + t1284 + t2621)*t557 - 1.*t1045*t1932*(0. + t2280 + t870);
  p_output1[7]=0. - 0.049*t1045 + t2735 - 1.*t1045*t1932*(0. + t2740 + t2752) + t2202*(0. + t2798 + t2814) + t2872 - 0.09*t2202*t557;
  p_output1[8]=0. + t1418 - 0.09*t1045*t2202 + t2944 + t2202*(0. + t3009 + t3021) - 1.*t1932*(0. + t2969 + t2970)*t557;
  p_output1[9]=0. + t2073 - 0.21*t1932*t3057 - 0.049*t1932*t3122 - 1.*t1932*(0. + t1284 + t2621 + t3228 + t3363)*t557 - 1.*t1045*t1932*(0. + t2280 + t3449 + t3455 + t870);
  p_output1[10]=0. + t2735 + t2872 - 1.*t1045*t1932*(0. + t2740 + t2752 + t3650) + t2202*(0. + t2798 + t2814 + t3677 + t3679) - 0.21*t3710 + 0.049*t3961;
  p_output1[11]=0. + t2944 + t2202*(0. + t3009 + t3021 + t4027 + t4062) - 0.21*t4145 + 0.049*t4238 - 1.*t1932*(0. + t2969 + t2970 + t3982)*t557;
  p_output1[12]=0. + t2073 + 0.0016*t4400 - 0.2707*t4488 - 1.*t1932*(0. + t1284 + t2621 + t3228 + t3363 + t4701 + t4712)*t557 - 1.*t1045*t1932*(0. + t2280 + t3449 + t3455 + t4609 + t4680 + t870);
  p_output1[13]=0. + t2735 + t2872 - 1.*t1045*t1932*(0. + t2740 + t2752 + t3650 + t4793 + t4796) + 0.0016*t4827 - 0.2707*t4849 + t2202*(0. + t2798 + t2814 + t3677 + t3679 + t4859 + t4876);
  p_output1[14]=0. + t2944 + t2202*(0. + t3009 + t3021 + t4027 + t4062 + t4914 + t4928) + 0.0016*t4968 - 0.2707*t4984 - 1.*t1932*(0. + t2969 + t2970 + t3982 + t4899 + t4910)*t557;
  p_output1[15]=0. + t2073 - 0.7055*t5013 - 0.0184*t5043 - 1.*t1932*(0. + t1284 + t2621 + t3228 + t3363 + t4701 + t4712 + t5115 + t5117)*t557 - 1.*t1045*t1932*(0. + t2280 + t3449 + t3455 + t4609 + t4680 + t5081 + t5107 + t870);
  p_output1[16]=0. + t2735 + t2872 - 1.*t1045*t1932*(0. + t2740 + t2752 + t3650 + t4793 + t4796 + t5128 + t5129) - 0.7055*t5176 - 0.0184*t5208 + t2202*(0. + t2798 + t2814 + t3677 + t3679 + t4859 + t4876 + t5212 + t5213);
  p_output1[17]=0. + t2944 + t2202*(0. + t3009 + t3021 + t4027 + t4062 + t4914 + t4928 + t5249 + t5254) - 0.7055*t5266 - 0.0184*t5276 - 1.*t1932*(0. + t2969 + t2970 + t3982 + t4899 + t4910 + t5219 + t5221)*t557;
  p_output1[18]=0. + t2073 - 1.1135*(t5043*t5287 + t5013*t5293) + 0.0216*(-1.*t5013*t5287 + t5043*t5293) - 1.*t1932*(0. + t1284 + t2621 + t3228 + t3363 + t4701 + t4712 + t5115 + t5117 - 1.*t5266*t5340 - 1.*t5276*t5356)*t557 - 1.*t1045*t1932*(0. + t2280 + t3449 + t3455 + t4609 + t4680 + t5081 + t5107 + t5176*t5340 + t5208*t5356 + t870);
  p_output1[19]=0. + t2735 + t2872 - 1.1135*(t5208*t5287 + t5176*t5293) + 0.0216*(-1.*t5176*t5287 + t5208*t5293) - 1.*t1045*t1932*(0. + t2740 + t2752 + t3650 + t4793 + t4796 + t5128 + t5129 - 1.*t5013*t5340 - 1.*t5043*t5356) + t2202*(0. + t2798 + t2814 + t3677 + t3679 + t4859 + t4876 + t5212 + t5213 + t5266*t5340 + t5276*t5356);
  p_output1[20]=0. + t2944 - 1.1135*(t5276*t5287 + t5266*t5293) + 0.0216*(-1.*t5266*t5287 + t5276*t5293) + t2202*(0. + t3009 + t3021 + t4027 + t4062 + t4914 + t4928 + t5249 + t5254 - 1.*t5176*t5340 - 1.*t5208*t5356) - 1.*t1932*(0. + t2969 + t2970 + t3982 + t4899 + t4910 + t5219 + t5221 + t5013*t5340 + t5043*t5356)*t557;
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
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
}



void Jvs_VectorNav_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
