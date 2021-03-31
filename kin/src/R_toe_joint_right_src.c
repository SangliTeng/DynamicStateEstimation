/*
 * Automatically Generated from Mathematica.
 * Wed 12 Feb 2020 15:28:48 GMT-08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_toe_joint_right_src.h"

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
  double t1851;
  double t2766;
  double t1087;
  double t2198;
  double t2779;
  double t3119;
  double t2638;
  double t3105;
  double t3112;
  double t1079;
  double t3123;
  double t3130;
  double t3137;
  double t3162;
  double t3116;
  double t3144;
  double t3149;
  double t686;
  double t3168;
  double t3172;
  double t3176;
  double t3182;
  double t3188;
  double t3195;
  double t3207;
  double t3215;
  double t3220;
  double t3239;
  double t3157;
  double t3226;
  double t3230;
  double t675;
  double t3246;
  double t3429;
  double t3434;
  double t3762;
  double t3234;
  double t3657;
  double t3750;
  double t644;
  double t3773;
  double t4287;
  double t4344;
  double t4386;
  double t3756;
  double t4353;
  double t4360;
  double t594;
  double t4391;
  double t4395;
  double t4405;
  double t559;
  double t4532;
  double t4539;
  double t4541;
  double t4592;
  double t4596;
  double t4601;
  double t4581;
  double t4612;
  double t4654;
  double t4679;
  double t4684;
  double t4685;
  double t4690;
  double t4691;
  double t4716;
  double t4661;
  double t4731;
  double t4755;
  double t4770;
  double t4775;
  double t4779;
  double t4769;
  double t4791;
  double t4798;
  double t4815;
  double t4826;
  double t4835;
  double t4467;
  double t4800;
  double t4837;
  double t4849;
  double t4857;
  double t4858;
  double t4867;
  double t4935;
  double t4944;
  double t4954;
  double t4961;
  double t4973;
  double t4977;
  double t4996;
  double t4997;
  double t4998;
  double t4956;
  double t5005;
  double t5010;
  double t5024;
  double t5026;
  double t5032;
  double t5019;
  double t5036;
  double t5042;
  double t5059;
  double t5067;
  double t5074;
  double t5043;
  double t5083;
  double t5092;
  double t5097;
  double t5124;
  double t5125;
  double t4384;
  double t4445;
  double t4448;
  double t4468;
  double t4471;
  double t4497;
  double t4853;
  double t4868;
  double t4870;
  double t4885;
  double t4902;
  double t4928;
  double t5093;
  double t5128;
  double t5132;
  double t5143;
  double t5144;
  double t5146;
  t1851 = Cos(var1[5]);
  t2766 = Sin(var1[3]);
  t1087 = Cos(var1[3]);
  t2198 = Sin(var1[4]);
  t2779 = Sin(var1[5]);
  t3119 = Sin(var1[13]);
  t2638 = t1087*t1851*t2198;
  t3105 = t2766*t2779;
  t3112 = t2638 + t3105;
  t1079 = Cos(var1[13]);
  t3123 = -1.*t1851*t2766;
  t3130 = t1087*t2198*t2779;
  t3137 = t3123 + t3130;
  t3162 = Cos(var1[15]);
  t3116 = t1079*t3112;
  t3144 = -1.*t3119*t3137;
  t3149 = t3116 + t3144;
  t686 = Sin(var1[15]);
  t3168 = Cos(var1[14]);
  t3172 = Cos(var1[4]);
  t3176 = t3168*t1087*t3172;
  t3182 = Sin(var1[14]);
  t3188 = t3119*t3112;
  t3195 = t1079*t3137;
  t3207 = t3188 + t3195;
  t3215 = t3182*t3207;
  t3220 = t3176 + t3215;
  t3239 = Cos(var1[16]);
  t3157 = t686*t3149;
  t3226 = t3162*t3220;
  t3230 = t3157 + t3226;
  t675 = Sin(var1[16]);
  t3246 = t3162*t3149;
  t3429 = -1.*t686*t3220;
  t3434 = t3246 + t3429;
  t3762 = Cos(var1[17]);
  t3234 = -1.*t675*t3230;
  t3657 = t3239*t3434;
  t3750 = t3234 + t3657;
  t644 = Sin(var1[17]);
  t3773 = t3239*t3230;
  t4287 = t675*t3434;
  t4344 = t3773 + t4287;
  t4386 = Cos(var1[18]);
  t3756 = t644*t3750;
  t4353 = t3762*t4344;
  t4360 = t3756 + t4353;
  t594 = Sin(var1[18]);
  t4391 = t3762*t3750;
  t4395 = -1.*t644*t4344;
  t4405 = t4391 + t4395;
  t559 = Cos(var1[19]);
  t4532 = t1851*t2766*t2198;
  t4539 = -1.*t1087*t2779;
  t4541 = t4532 + t4539;
  t4592 = t1087*t1851;
  t4596 = t2766*t2198*t2779;
  t4601 = t4592 + t4596;
  t4581 = t1079*t4541;
  t4612 = -1.*t3119*t4601;
  t4654 = t4581 + t4612;
  t4679 = t3168*t3172*t2766;
  t4684 = t3119*t4541;
  t4685 = t1079*t4601;
  t4690 = t4684 + t4685;
  t4691 = t3182*t4690;
  t4716 = t4679 + t4691;
  t4661 = t686*t4654;
  t4731 = t3162*t4716;
  t4755 = t4661 + t4731;
  t4770 = t3162*t4654;
  t4775 = -1.*t686*t4716;
  t4779 = t4770 + t4775;
  t4769 = -1.*t675*t4755;
  t4791 = t3239*t4779;
  t4798 = t4769 + t4791;
  t4815 = t3239*t4755;
  t4826 = t675*t4779;
  t4835 = t4815 + t4826;
  t4467 = Sin(var1[19]);
  t4800 = t644*t4798;
  t4837 = t3762*t4835;
  t4849 = t4800 + t4837;
  t4857 = t3762*t4798;
  t4858 = -1.*t644*t4835;
  t4867 = t4857 + t4858;
  t4935 = t1079*t3172*t1851;
  t4944 = -1.*t3172*t3119*t2779;
  t4954 = t4935 + t4944;
  t4961 = -1.*t3168*t2198;
  t4973 = t3172*t1851*t3119;
  t4977 = t1079*t3172*t2779;
  t4996 = t4973 + t4977;
  t4997 = t3182*t4996;
  t4998 = t4961 + t4997;
  t4956 = t686*t4954;
  t5005 = t3162*t4998;
  t5010 = t4956 + t5005;
  t5024 = t3162*t4954;
  t5026 = -1.*t686*t4998;
  t5032 = t5024 + t5026;
  t5019 = -1.*t675*t5010;
  t5036 = t3239*t5032;
  t5042 = t5019 + t5036;
  t5059 = t3239*t5010;
  t5067 = t675*t5032;
  t5074 = t5059 + t5067;
  t5043 = t644*t5042;
  t5083 = t3762*t5074;
  t5092 = t5043 + t5083;
  t5097 = t3762*t5042;
  t5124 = -1.*t644*t5074;
  t5125 = t5097 + t5124;
  t4384 = -1.*t594*t4360;
  t4445 = t4386*t4405;
  t4448 = t4384 + t4445;
  t4468 = t4386*t4360;
  t4471 = t594*t4405;
  t4497 = t4468 + t4471;
  t4853 = -1.*t594*t4849;
  t4868 = t4386*t4867;
  t4870 = t4853 + t4868;
  t4885 = t4386*t4849;
  t4902 = t594*t4867;
  t4928 = t4885 + t4902;
  t5093 = -1.*t594*t5092;
  t5128 = t4386*t5125;
  t5132 = t5093 + t5128;
  t5143 = t4386*t5092;
  t5144 = t594*t5125;
  t5146 = t5143 + t5144;
  p_output1[0]=t4467*t4497 - 1.*t4448*t559;
  p_output1[1]=t4467*t4928 - 1.*t4870*t559;
  p_output1[2]=t4467*t5146 - 1.*t5132*t559;
  p_output1[3]=t4448*t4467 + t4497*t559;
  p_output1[4]=t4467*t4870 + t4928*t559;
  p_output1[5]=t4467*t5132 + t5146*t559;
  p_output1[6]=t1087*t3172*t3182 - 1.*t3168*t3207;
  p_output1[7]=t2766*t3172*t3182 - 1.*t3168*t4690;
  p_output1[8]=-1.*t2198*t3182 - 1.*t3168*t4996;
}



void R_toe_joint_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
