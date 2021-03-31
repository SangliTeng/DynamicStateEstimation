/*
 * Automatically Generated from Mathematica.
 * Wed 12 Feb 2020 15:27:38 GMT-08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_hip_flexion_left_src.h"

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
  double t3770;
  double t3867;
  double t3677;
  double t3820;
  double t3898;
  double t3662;
  double t3923;
  double t3927;
  double t3937;
  double t3832;
  double t3915;
  double t3918;
  double t3948;
  double t3519;
  double t3981;
  double t3994;
  double t4043;
  double t4045;
  double t4081;
  double t4034;
  double t4035;
  double t4038;
  double t4015;
  double t4022;
  double t3998;
  double t3999;
  double t4003;
  double t4008;
  double t4017;
  double t4021;
  double t3922;
  double t3959;
  double t3968;
  double t4091;
  double t4097;
  double t4104;
  double t4107;
  double t4108;
  double t4109;
  double t4042;
  double t4083;
  double t4084;
  double t4135;
  double t4137;
  double t4140;
  double t4143;
  double t4144;
  double t4149;
  double t4121;
  double t4122;
  double t4129;
  t3770 = Cos(var1[5]);
  t3867 = Sin(var1[3]);
  t3677 = Cos(var1[3]);
  t3820 = Sin(var1[4]);
  t3898 = Sin(var1[5]);
  t3662 = Cos(var1[6]);
  t3923 = -1.*t3770*t3867;
  t3927 = t3677*t3820*t3898;
  t3937 = t3923 + t3927;
  t3832 = t3677*t3770*t3820;
  t3915 = t3867*t3898;
  t3918 = t3832 + t3915;
  t3948 = Sin(var1[6]);
  t3519 = Cos(var1[8]);
  t3981 = Cos(var1[4]);
  t3994 = Cos(var1[7]);
  t4043 = t3677*t3770;
  t4045 = t3867*t3820*t3898;
  t4081 = t4043 + t4045;
  t4034 = t3770*t3867*t3820;
  t4035 = -1.*t3677*t3898;
  t4038 = t4034 + t4035;
  t4015 = Sin(var1[7]);
  t4022 = Sin(var1[8]);
  t3998 = t3677*t3981*t3994;
  t3999 = t3662*t3937;
  t4003 = t3918*t3948;
  t4008 = t3999 + t4003;
  t4017 = t4008*t4015;
  t4021 = t3998 + t4017;
  t3922 = t3662*t3918;
  t3959 = -1.*t3937*t3948;
  t3968 = t3922 + t3959;
  t4091 = t3981*t3994*t3867;
  t4097 = t3662*t4081;
  t4104 = t4038*t3948;
  t4107 = t4097 + t4104;
  t4108 = t4107*t4015;
  t4109 = t4091 + t4108;
  t4042 = t3662*t4038;
  t4083 = -1.*t4081*t3948;
  t4084 = t4042 + t4083;
  t4135 = -1.*t3994*t3820;
  t4137 = t3981*t3662*t3898;
  t4140 = t3981*t3770*t3948;
  t4143 = t4137 + t4140;
  t4144 = t4143*t4015;
  t4149 = t4135 + t4144;
  t4121 = t3981*t3770*t3662;
  t4122 = -1.*t3981*t3898*t3948;
  t4129 = t4121 + t4122;
  p_output1[0]=-1.*t3519*t3968 + t4021*t4022;
  p_output1[1]=-1.*t3519*t4084 + t4022*t4109;
  p_output1[2]=-1.*t3519*t4129 + t4022*t4149;
  p_output1[3]=t3519*t4021 + t3968*t4022;
  p_output1[4]=t4022*t4084 + t3519*t4109;
  p_output1[5]=t4022*t4129 + t3519*t4149;
  p_output1[6]=-1.*t3994*t4008 + t3677*t3981*t4015;
  p_output1[7]=t3867*t3981*t4015 - 1.*t3994*t4107;
  p_output1[8]=-1.*t3820*t4015 - 1.*t3994*t4143;
}



void R_hip_flexion_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
