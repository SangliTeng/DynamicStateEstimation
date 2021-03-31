/*
 * Automatically Generated from Mathematica.
 * Wed 12 Feb 2020 15:27:47 GMT-08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_knee_to_shin_left_src.h"

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
  double t4412;
  double t3457;
  double t4426;
  double t3798;
  double t5769;
  double t1356;
  double t3801;
  double t5770;
  double t5872;
  double t5883;
  double t5885;
  double t5886;
  double t5891;
  double t5916;
  double t5917;
  double t5920;
  double t5926;
  double t5905;
  double t5913;
  double t5915;
  double t5934;
  double t5972;
  double t5980;
  double t5983;
  double t5987;
  double t5967;
  double t5968;
  double t5970;
  double t5995;
  double t5996;
  double t5999;
  double t6017;
  double t6021;
  double t6026;
  double t6030;
  double t6035;
  double t6039;
  double t6043;
  double t6059;
  double t6060;
  double t6063;
  double t6067;
  double t6068;
  double t6072;
  double t6083;
  double t6088;
  double t6094;
  double t6096;
  double t6104;
  double t6105;
  double t6107;
  double t1835;
  double t2436;
  double t3010;
  double t3243;
  double t5895;
  double t5897;
  double t6141;
  double t6142;
  double t6143;
  double t6149;
  double t6152;
  double t6154;
  double t5921;
  double t5930;
  double t5931;
  double t5941;
  double t5944;
  double t5951;
  double t6157;
  double t6158;
  double t6159;
  double t5985;
  double t5990;
  double t5992;
  double t6002;
  double t6004;
  double t6009;
  double t6029;
  double t6033;
  double t6034;
  double t6172;
  double t6174;
  double t6177;
  double t6181;
  double t6182;
  double t6185;
  double t6045;
  double t6049;
  double t6050;
  double t6076;
  double t6084;
  double t6087;
  double t6192;
  double t6194;
  double t6199;
  double t6202;
  double t6203;
  double t6206;
  double t6100;
  double t6101;
  double t6103;
  double t6209;
  double t6210;
  double t6213;
  double t6217;
  double t6218;
  double t6222;
  double t6244;
  double t6245;
  double t6246;
  double t6257;
  double t6259;
  double t6260;
  double t6264;
  double t6265;
  double t6266;
  double t6271;
  double t6272;
  double t6274;
  double t6278;
  double t6279;
  double t6281;
  double t6286;
  double t6288;
  double t6292;
  double t6295;
  double t6296;
  double t6297;
  t4412 = Cos(var1[3]);
  t3457 = Cos(var1[5]);
  t4426 = Sin(var1[4]);
  t3798 = Sin(var1[3]);
  t5769 = Sin(var1[5]);
  t1356 = Cos(var1[6]);
  t3801 = -1.*t3457*t3798;
  t5770 = t4412*t4426*t5769;
  t5872 = t3801 + t5770;
  t5883 = t4412*t3457*t4426;
  t5885 = t3798*t5769;
  t5886 = t5883 + t5885;
  t5891 = Sin(var1[6]);
  t5916 = Cos(var1[7]);
  t5917 = -1.*t5916;
  t5920 = 1. + t5917;
  t5926 = Sin(var1[7]);
  t5905 = t1356*t5872;
  t5913 = t5886*t5891;
  t5915 = t5905 + t5913;
  t5934 = Cos(var1[4]);
  t5972 = Cos(var1[8]);
  t5980 = -1.*t5972;
  t5983 = 1. + t5980;
  t5987 = Sin(var1[8]);
  t5967 = t4412*t5934*t5916;
  t5968 = t5915*t5926;
  t5970 = t5967 + t5968;
  t5995 = t1356*t5886;
  t5996 = -1.*t5872*t5891;
  t5999 = t5995 + t5996;
  t6017 = Cos(var1[9]);
  t6021 = -1.*t6017;
  t6026 = 1. + t6021;
  t6030 = Sin(var1[9]);
  t6035 = t5972*t5970;
  t6039 = t5999*t5987;
  t6043 = t6035 + t6039;
  t6059 = t5972*t5999;
  t6060 = -1.*t5970*t5987;
  t6063 = t6059 + t6060;
  t6067 = Cos(var1[10]);
  t6068 = -1.*t6067;
  t6072 = 1. + t6068;
  t6083 = Sin(var1[10]);
  t6088 = -1.*t6030*t6043;
  t6094 = t6017*t6063;
  t6096 = t6088 + t6094;
  t6104 = t6017*t6043;
  t6105 = t6030*t6063;
  t6107 = t6104 + t6105;
  t1835 = -1.*t1356;
  t2436 = 1. + t1835;
  t3010 = 0.135*t2436;
  t3243 = 0. + t3010;
  t5895 = -0.135*t5891;
  t5897 = 0. + t5895;
  t6141 = t4412*t3457;
  t6142 = t3798*t4426*t5769;
  t6143 = t6141 + t6142;
  t6149 = t3457*t3798*t4426;
  t6152 = -1.*t4412*t5769;
  t6154 = t6149 + t6152;
  t5921 = 0.135*t5920;
  t5930 = 0.049*t5926;
  t5931 = 0. + t5921 + t5930;
  t5941 = -0.049*t5920;
  t5944 = 0.135*t5926;
  t5951 = 0. + t5941 + t5944;
  t6157 = t1356*t6143;
  t6158 = t6154*t5891;
  t6159 = t6157 + t6158;
  t5985 = -0.049*t5983;
  t5990 = -0.09*t5987;
  t5992 = 0. + t5985 + t5990;
  t6002 = -0.09*t5983;
  t6004 = 0.049*t5987;
  t6009 = 0. + t6002 + t6004;
  t6029 = -0.049*t6026;
  t6033 = -0.21*t6030;
  t6034 = 0. + t6029 + t6033;
  t6172 = t5934*t5916*t3798;
  t6174 = t6159*t5926;
  t6177 = t6172 + t6174;
  t6181 = t1356*t6154;
  t6182 = -1.*t6143*t5891;
  t6185 = t6181 + t6182;
  t6045 = -0.21*t6026;
  t6049 = 0.049*t6030;
  t6050 = 0. + t6045 + t6049;
  t6076 = -0.2707*t6072;
  t6084 = 0.0016*t6083;
  t6087 = 0. + t6076 + t6084;
  t6192 = t5972*t6177;
  t6194 = t6185*t5987;
  t6199 = t6192 + t6194;
  t6202 = t5972*t6185;
  t6203 = -1.*t6177*t5987;
  t6206 = t6202 + t6203;
  t6100 = -0.0016*t6072;
  t6101 = -0.2707*t6083;
  t6103 = 0. + t6100 + t6101;
  t6209 = -1.*t6030*t6199;
  t6210 = t6017*t6206;
  t6213 = t6209 + t6210;
  t6217 = t6017*t6199;
  t6218 = t6030*t6206;
  t6222 = t6217 + t6218;
  t6244 = t5934*t1356*t5769;
  t6245 = t5934*t3457*t5891;
  t6246 = t6244 + t6245;
  t6257 = -1.*t5916*t4426;
  t6259 = t6246*t5926;
  t6260 = t6257 + t6259;
  t6264 = t5934*t3457*t1356;
  t6265 = -1.*t5934*t5769*t5891;
  t6266 = t6264 + t6265;
  t6271 = t5972*t6260;
  t6272 = t6266*t5987;
  t6274 = t6271 + t6272;
  t6278 = t5972*t6266;
  t6279 = -1.*t6260*t5987;
  t6281 = t6278 + t6279;
  t6286 = -1.*t6030*t6274;
  t6288 = t6017*t6281;
  t6292 = t6286 + t6288;
  t6295 = t6017*t6274;
  t6296 = t6030*t6281;
  t6297 = t6295 + t6296;
  p_output1[0]=0. + t3243*t5872 + t5886*t5897 + t5915*t5931 + 0.1305*(t5915*t5916 - 1.*t4412*t5926*t5934) + t4412*t5934*t5951 + t5970*t5992 + t5999*t6009 + t6034*t6043 + t6050*t6063 + t6087*t6096 + t6103*t6107 - 0.0016*(t6083*t6096 + t6067*t6107) - 0.2707*(t6067*t6096 - 1.*t6083*t6107) + var1[0];
  p_output1[1]=0. + t3798*t5934*t5951 + t3243*t6143 + t5897*t6154 + t5931*t6159 + 0.1305*(-1.*t3798*t5926*t5934 + t5916*t6159) + t5992*t6177 + t6009*t6185 + t6034*t6199 + t6050*t6206 + t6087*t6213 + t6103*t6222 - 0.0016*(t6083*t6213 + t6067*t6222) - 0.2707*(t6067*t6213 - 1.*t6083*t6222) + var1[1];
  p_output1[2]=0. + t3243*t5769*t5934 + t3457*t5897*t5934 - 1.*t4426*t5951 + t5931*t6246 + 0.1305*(t4426*t5926 + t5916*t6246) + t5992*t6260 + t6009*t6266 + t6034*t6274 + t6050*t6281 + t6087*t6292 + t6103*t6297 - 0.0016*(t6083*t6292 + t6067*t6297) - 0.2707*(t6067*t6292 - 1.*t6083*t6297) + var1[2];
}



void p_knee_to_shin_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
