/*
 * Automatically Generated from Mathematica.
 * Wed 23 Oct 2019 10:26:07 GMT-07:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_VectorNav_to_LeftToeBack_src.h"

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
  double t944;
  double t2143;
  double t2068;
  double t2082;
  double t2205;
  double t3022;
  double t2083;
  double t2213;
  double t2344;
  double t2041;
  double t3092;
  double t3093;
  double t3096;
  double t3409;
  double t3002;
  double t3102;
  double t3142;
  double t1987;
  double t3596;
  double t3665;
  double t3781;
  double t3955;
  double t3400;
  double t3793;
  double t3801;
  double t1983;
  double t3979;
  double t4073;
  double t4090;
  double t575;
  double t159;
  double t1848;
  double t4685;
  double t4712;
  double t4783;
  double t4801;
  double t4817;
  double t4866;
  double t4798;
  double t5146;
  double t5186;
  double t5261;
  double t5270;
  double t5285;
  double t5253;
  double t5294;
  double t5338;
  double t5372;
  double t5394;
  double t5421;
  double t5348;
  double t5515;
  double t5531;
  double t5599;
  double t5606;
  double t5617;
  double t5806;
  double t5820;
  double t5836;
  double t5849;
  double t5872;
  double t5884;
  double t5848;
  double t5887;
  double t5889;
  double t5907;
  double t5908;
  double t5912;
  double t5891;
  double t5920;
  double t5933;
  double t5948;
  double t5954;
  double t5958;
  double t5941;
  double t5959;
  double t5960;
  double t5965;
  double t5966;
  double t5970;
  double t3860;
  double t4103;
  double t4128;
  double t4393;
  double t4423;
  double t4429;
  double t5548;
  double t5621;
  double t5639;
  double t5686;
  double t5694;
  double t5707;
  double t5963;
  double t5972;
  double t5974;
  double t5979;
  double t5982;
  double t5991;
  t944 = Cos(var1[1]);
  t2143 = Cos(var1[3]);
  t2068 = Cos(var1[2]);
  t2082 = Sin(var1[3]);
  t2205 = Sin(var1[2]);
  t3022 = Cos(var1[4]);
  t2083 = -1.*t944*t2068*t2082;
  t2213 = -1.*t2143*t944*t2205;
  t2344 = t2083 + t2213;
  t2041 = Sin(var1[4]);
  t3092 = t2143*t944*t2068;
  t3093 = -1.*t944*t2082*t2205;
  t3096 = t3092 + t3093;
  t3409 = Cos(var1[5]);
  t3002 = t2041*t2344;
  t3102 = t3022*t3096;
  t3142 = t3002 + t3102;
  t1987 = Sin(var1[5]);
  t3596 = t3022*t2344;
  t3665 = -1.*t2041*t3096;
  t3781 = t3596 + t3665;
  t3955 = Cos(var1[6]);
  t3400 = -1.*t1987*t3142;
  t3793 = t3409*t3781;
  t3801 = t3400 + t3793;
  t1983 = Sin(var1[6]);
  t3979 = t3409*t3142;
  t4073 = t1987*t3781;
  t4090 = t3979 + t4073;
  t575 = Cos(var1[0]);
  t159 = Sin(var1[1]);
  t1848 = Sin(var1[0]);
  t4685 = t575*t2068*t159;
  t4712 = -1.*t1848*t2205;
  t4783 = t4685 + t4712;
  t4801 = -1.*t2068*t1848;
  t4817 = -1.*t575*t159*t2205;
  t4866 = t4801 + t4817;
  t4798 = -1.*t2082*t4783;
  t5146 = t2143*t4866;
  t5186 = t4798 + t5146;
  t5261 = t2143*t4783;
  t5270 = t2082*t4866;
  t5285 = t5261 + t5270;
  t5253 = t2041*t5186;
  t5294 = t3022*t5285;
  t5338 = t5253 + t5294;
  t5372 = t3022*t5186;
  t5394 = -1.*t2041*t5285;
  t5421 = t5372 + t5394;
  t5348 = -1.*t1987*t5338;
  t5515 = t3409*t5421;
  t5531 = t5348 + t5515;
  t5599 = t3409*t5338;
  t5606 = t1987*t5421;
  t5617 = t5599 + t5606;
  t5806 = t2068*t1848*t159;
  t5820 = t575*t2205;
  t5836 = t5806 + t5820;
  t5849 = t575*t2068;
  t5872 = -1.*t1848*t159*t2205;
  t5884 = t5849 + t5872;
  t5848 = -1.*t2082*t5836;
  t5887 = t2143*t5884;
  t5889 = t5848 + t5887;
  t5907 = t2143*t5836;
  t5908 = t2082*t5884;
  t5912 = t5907 + t5908;
  t5891 = t2041*t5889;
  t5920 = t3022*t5912;
  t5933 = t5891 + t5920;
  t5948 = t3022*t5889;
  t5954 = -1.*t2041*t5912;
  t5958 = t5948 + t5954;
  t5941 = -1.*t1987*t5933;
  t5959 = t3409*t5958;
  t5960 = t5941 + t5959;
  t5965 = t3409*t5933;
  t5966 = t1987*t5958;
  t5970 = t5965 + t5966;
  t3860 = t1983*t3801;
  t4103 = t3955*t4090;
  t4128 = t3860 + t4103;
  t4393 = t3955*t3801;
  t4423 = -1.*t1983*t4090;
  t4429 = t4393 + t4423;
  t5548 = t1983*t5531;
  t5621 = t3955*t5617;
  t5639 = t5548 + t5621;
  t5686 = t3955*t5531;
  t5694 = -1.*t1983*t5617;
  t5707 = t5686 + t5694;
  t5963 = t1983*t5960;
  t5972 = t3955*t5970;
  t5974 = t5963 + t5972;
  t5979 = t3955*t5960;
  t5982 = -1.*t1983*t5970;
  t5991 = t5979 + t5982;
  p_output1[0]=0. + t159;
  p_output1[1]=0. - 1.*t575*t944;
  p_output1[2]=0. - 1.*t1848*t944;
  p_output1[3]=0. + 0.642788*t4128 + 0.766044*t4429;
  p_output1[4]=0. + 0.642788*t5639 + 0.766044*t5707;
  p_output1[5]=0. + 0.642788*t5974 + 0.766044*t5991;
  p_output1[6]=0. - 0.766044*t4128 + 0.642788*t4429;
  p_output1[7]=0. - 0.766044*t5639 + 0.642788*t5707;
  p_output1[8]=0. - 0.766044*t5974 + 0.642788*t5991;
}



void R_VectorNav_to_LeftToeBack_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
