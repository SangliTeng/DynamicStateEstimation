/*
 * Automatically Generated from Mathematica.
 * Wed 12 Feb 2020 15:27:44 GMT-08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_knee_joint_left_src.h"

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
  double t166;
  double t2085;
  double t2851;
  double t2133;
  double t3216;
  double t2059;
  double t3549;
  double t3690;
  double t3787;
  double t2438;
  double t3480;
  double t3537;
  double t3837;
  double t146;
  double t4581;
  double t4602;
  double t4609;
  double t875;
  double t1000;
  double t1831;
  double t3539;
  double t4012;
  double t4416;
  double t4470;
  double t4478;
  double t4528;
  double t4686;
  double t28;
  double t4901;
  double t4909;
  double t4910;
  double t4848;
  double t4857;
  double t4892;
  double t4745;
  double t4942;
  double t4960;
  double t4965;
  double t4825;
  double t4899;
  double t4925;
  double t4933;
  double t4935;
  double t4936;
  double t5046;
  double t5049;
  double t5051;
  double t4997;
  double t4999;
  double t5000;
  double t5001;
  double t5015;
  double t5024;
  double t4559;
  double t4700;
  double t4711;
  double t4751;
  double t4753;
  double t4810;
  double t4941;
  double t4968;
  double t4972;
  double t4987;
  double t4990;
  double t4991;
  double t5029;
  double t5075;
  double t5078;
  double t5081;
  double t5092;
  double t5098;
  double t5226;
  double t5231;
  double t5289;
  double t5293;
  double t5354;
  double t5357;
  double t5106;
  double t5107;
  double t5112;
  double t5200;
  double t5206;
  double t5207;
  double t5212;
  double t5219;
  double t5221;
  double t5238;
  double t5242;
  double t5247;
  double t5253;
  double t5254;
  double t5257;
  double t5298;
  double t5303;
  double t5314;
  double t5336;
  double t5340;
  double t5341;
  double t5362;
  double t5366;
  double t5376;
  double t5385;
  double t5388;
  double t5393;
  double t5122;
  double t5126;
  double t5130;
  double t5131;
  double t5136;
  double t5138;
  t166 = Cos(var1[3]);
  t2085 = Cos(var1[5]);
  t2851 = Sin(var1[4]);
  t2133 = Sin(var1[3]);
  t3216 = Sin(var1[5]);
  t2059 = Cos(var1[6]);
  t3549 = t166*t2085*t2851;
  t3690 = t2133*t3216;
  t3787 = t3549 + t3690;
  t2438 = -1.*t2085*t2133;
  t3480 = t166*t2851*t3216;
  t3537 = t2438 + t3480;
  t3837 = Sin(var1[6]);
  t146 = Cos(var1[8]);
  t4581 = t2059*t3787;
  t4602 = -1.*t3537*t3837;
  t4609 = t4581 + t4602;
  t875 = Cos(var1[4]);
  t1000 = Cos(var1[7]);
  t1831 = t166*t875*t1000;
  t3539 = t2059*t3537;
  t4012 = t3787*t3837;
  t4416 = t3539 + t4012;
  t4470 = Sin(var1[7]);
  t4478 = t4416*t4470;
  t4528 = t1831 + t4478;
  t4686 = Sin(var1[8]);
  t28 = Sin(var1[9]);
  t4901 = t2085*t2133*t2851;
  t4909 = -1.*t166*t3216;
  t4910 = t4901 + t4909;
  t4848 = t166*t2085;
  t4857 = t2133*t2851*t3216;
  t4892 = t4848 + t4857;
  t4745 = Cos(var1[9]);
  t4942 = t2059*t4910;
  t4960 = -1.*t4892*t3837;
  t4965 = t4942 + t4960;
  t4825 = t875*t1000*t2133;
  t4899 = t2059*t4892;
  t4925 = t4910*t3837;
  t4933 = t4899 + t4925;
  t4935 = t4933*t4470;
  t4936 = t4825 + t4935;
  t5046 = t875*t2085*t2059;
  t5049 = -1.*t875*t3216*t3837;
  t5051 = t5046 + t5049;
  t4997 = -1.*t1000*t2851;
  t4999 = t875*t2059*t3216;
  t5000 = t875*t2085*t3837;
  t5001 = t4999 + t5000;
  t5015 = t5001*t4470;
  t5024 = t4997 + t5015;
  t4559 = t146*t4528;
  t4700 = t4609*t4686;
  t4711 = t4559 + t4700;
  t4751 = t146*t4609;
  t4753 = -1.*t4528*t4686;
  t4810 = t4751 + t4753;
  t4941 = t146*t4936;
  t4968 = t4965*t4686;
  t4972 = t4941 + t4968;
  t4987 = t146*t4965;
  t4990 = -1.*t4936*t4686;
  t4991 = t4987 + t4990;
  t5029 = t146*t5024;
  t5075 = t5051*t4686;
  t5078 = t5029 + t5075;
  t5081 = t146*t5051;
  t5092 = -1.*t5024*t4686;
  t5098 = t5081 + t5092;
  t5226 = -1.*t1000;
  t5231 = 1. + t5226;
  t5289 = -1.*t146;
  t5293 = 1. + t5289;
  t5354 = -1.*t4745;
  t5357 = 1. + t5354;
  t5106 = t4745*t4711;
  t5107 = t28*t4810;
  t5112 = t5106 + t5107;
  t5200 = -1.*t2059;
  t5206 = 1. + t5200;
  t5207 = 0.135*t5206;
  t5212 = 0. + t5207;
  t5219 = -0.135*t3837;
  t5221 = 0. + t5219;
  t5238 = 0.135*t5231;
  t5242 = 0.049*t4470;
  t5247 = 0. + t5238 + t5242;
  t5253 = -0.049*t5231;
  t5254 = 0.135*t4470;
  t5257 = 0. + t5253 + t5254;
  t5298 = -0.049*t5293;
  t5303 = -0.09*t4686;
  t5314 = 0. + t5298 + t5303;
  t5336 = -0.09*t5293;
  t5340 = 0.049*t4686;
  t5341 = 0. + t5336 + t5340;
  t5362 = -0.049*t5357;
  t5366 = -0.21*t28;
  t5376 = 0. + t5362 + t5366;
  t5385 = -0.21*t5357;
  t5388 = 0.049*t28;
  t5393 = 0. + t5385 + t5388;
  t5122 = t4745*t4972;
  t5126 = t28*t4991;
  t5130 = t5122 + t5126;
  t5131 = t4745*t5078;
  t5136 = t28*t5098;
  t5138 = t5131 + t5136;
  p_output1[0]=t28*t4711 - 1.*t4745*t4810;
  p_output1[1]=t28*t4972 - 1.*t4745*t4991;
  p_output1[2]=t28*t5078 - 1.*t4745*t5098;
  p_output1[3]=0.;
  p_output1[4]=t5112;
  p_output1[5]=t5130;
  p_output1[6]=t5138;
  p_output1[7]=0.;
  p_output1[8]=-1.*t1000*t4416 + t166*t4470*t875;
  p_output1[9]=-1.*t1000*t4933 + t2133*t4470*t875;
  p_output1[10]=-1.*t2851*t4470 - 1.*t1000*t5001;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.21*(-1.*t28*t4711 + t4745*t4810) - 0.049*t5112 + t3537*t5212 + t3787*t5221 + t4416*t5247 + t4528*t5314 + t4609*t5341 + t4711*t5376 + t4810*t5393 + t166*t5257*t875 + 0.1305*(t1000*t4416 - 1.*t166*t4470*t875) + var1[0];
  p_output1[13]=0. - 0.21*(-1.*t28*t4972 + t4745*t4991) - 0.049*t5130 + t4892*t5212 + t4910*t5221 + t4933*t5247 + t4936*t5314 + t4965*t5341 + t4972*t5376 + t4991*t5393 + t2133*t5257*t875 + 0.1305*(t1000*t4933 - 1.*t2133*t4470*t875) + var1[1];
  p_output1[14]=0. + 0.1305*(t2851*t4470 + t1000*t5001) - 0.21*(-1.*t28*t5078 + t4745*t5098) - 0.049*t5138 + t5001*t5247 - 1.*t2851*t5257 + t5024*t5314 + t5051*t5341 + t5078*t5376 + t5098*t5393 + t3216*t5212*t875 + t2085*t5221*t875 + var1[2];
  p_output1[15]=1.;
}



void H_knee_joint_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
