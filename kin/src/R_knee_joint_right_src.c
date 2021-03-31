/*
 * Automatically Generated from Mathematica.
 * Wed 12 Feb 2020 15:28:28 GMT-08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_knee_joint_right_src.h"

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
  double t2458;
  double t2921;
  double t2096;
  double t2462;
  double t2922;
  double t3809;
  double t2705;
  double t2974;
  double t2985;
  double t2031;
  double t3861;
  double t4268;
  double t4336;
  double t4396;
  double t3643;
  double t4348;
  double t4349;
  double t190;
  double t4400;
  double t4417;
  double t4459;
  double t4463;
  double t4472;
  double t4507;
  double t4552;
  double t4560;
  double t4579;
  double t183;
  double t4855;
  double t4856;
  double t4861;
  double t4948;
  double t4982;
  double t4986;
  double t4789;
  double t4947;
  double t4992;
  double t5003;
  double t5027;
  double t5028;
  double t5037;
  double t5044;
  double t5061;
  double t5066;
  double t5305;
  double t5313;
  double t5321;
  double t5387;
  double t5391;
  double t5413;
  double t5421;
  double t5452;
  double t5461;
  double t4365;
  double t4580;
  double t4675;
  double t4792;
  double t4803;
  double t4810;
  double t5011;
  double t5100;
  double t5153;
  double t5178;
  double t5197;
  double t5206;
  double t5339;
  double t5472;
  double t5505;
  double t5514;
  double t5523;
  double t5554;
  t2458 = Cos(var1[5]);
  t2921 = Sin(var1[3]);
  t2096 = Cos(var1[3]);
  t2462 = Sin(var1[4]);
  t2922 = Sin(var1[5]);
  t3809 = Sin(var1[13]);
  t2705 = t2096*t2458*t2462;
  t2974 = t2921*t2922;
  t2985 = t2705 + t2974;
  t2031 = Cos(var1[13]);
  t3861 = -1.*t2458*t2921;
  t4268 = t2096*t2462*t2922;
  t4336 = t3861 + t4268;
  t4396 = Cos(var1[15]);
  t3643 = t2031*t2985;
  t4348 = -1.*t3809*t4336;
  t4349 = t3643 + t4348;
  t190 = Sin(var1[15]);
  t4400 = Cos(var1[14]);
  t4417 = Cos(var1[4]);
  t4459 = t4400*t2096*t4417;
  t4463 = Sin(var1[14]);
  t4472 = t3809*t2985;
  t4507 = t2031*t4336;
  t4552 = t4472 + t4507;
  t4560 = t4463*t4552;
  t4579 = t4459 + t4560;
  t183 = Sin(var1[16]);
  t4855 = t2458*t2921*t2462;
  t4856 = -1.*t2096*t2922;
  t4861 = t4855 + t4856;
  t4948 = t2096*t2458;
  t4982 = t2921*t2462*t2922;
  t4986 = t4948 + t4982;
  t4789 = Cos(var1[16]);
  t4947 = t2031*t4861;
  t4992 = -1.*t3809*t4986;
  t5003 = t4947 + t4992;
  t5027 = t4400*t4417*t2921;
  t5028 = t3809*t4861;
  t5037 = t2031*t4986;
  t5044 = t5028 + t5037;
  t5061 = t4463*t5044;
  t5066 = t5027 + t5061;
  t5305 = t2031*t4417*t2458;
  t5313 = -1.*t4417*t3809*t2922;
  t5321 = t5305 + t5313;
  t5387 = -1.*t4400*t2462;
  t5391 = t4417*t2458*t3809;
  t5413 = t2031*t4417*t2922;
  t5421 = t5391 + t5413;
  t5452 = t4463*t5421;
  t5461 = t5387 + t5452;
  t4365 = t190*t4349;
  t4580 = t4396*t4579;
  t4675 = t4365 + t4580;
  t4792 = t4396*t4349;
  t4803 = -1.*t190*t4579;
  t4810 = t4792 + t4803;
  t5011 = t190*t5003;
  t5100 = t4396*t5066;
  t5153 = t5011 + t5100;
  t5178 = t4396*t5003;
  t5197 = -1.*t190*t5066;
  t5206 = t5178 + t5197;
  t5339 = t190*t5321;
  t5472 = t4396*t5461;
  t5505 = t5339 + t5472;
  t5514 = t4396*t5321;
  t5523 = -1.*t190*t5461;
  t5554 = t5514 + t5523;
  p_output1[0]=t183*t4675 - 1.*t4789*t4810;
  p_output1[1]=t183*t5153 - 1.*t4789*t5206;
  p_output1[2]=t183*t5505 - 1.*t4789*t5554;
  p_output1[3]=t4675*t4789 + t183*t4810;
  p_output1[4]=t4789*t5153 + t183*t5206;
  p_output1[5]=t4789*t5505 + t183*t5554;
  p_output1[6]=t2096*t4417*t4463 - 1.*t4400*t4552;
  p_output1[7]=t2921*t4417*t4463 - 1.*t4400*t5044;
  p_output1[8]=-1.*t2462*t4463 - 1.*t4400*t5421;
}



void R_knee_joint_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
