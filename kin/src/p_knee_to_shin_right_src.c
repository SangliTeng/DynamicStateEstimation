/*
 * Automatically Generated from Mathematica.
 * Wed 12 Feb 2020 15:28:30 GMT-08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_knee_to_shin_right_src.h"

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
  double t218;
  double t3526;
  double t4138;
  double t3901;
  double t4145;
  double t824;
  double t1077;
  double t1083;
  double t1367;
  double t3425;
  double t3903;
  double t4646;
  double t4658;
  double t5002;
  double t5935;
  double t6454;
  double t6484;
  double t222;
  double t6668;
  double t6693;
  double t6732;
  double t6787;
  double t6797;
  double t6803;
  double t6814;
  double t6868;
  double t6897;
  double t6901;
  double t7190;
  double t7196;
  double t7217;
  double t7244;
  double t7262;
  double t7293;
  double t7332;
  double t7370;
  double t7426;
  double t7434;
  double t7762;
  double t7768;
  double t7771;
  double t7830;
  double t7866;
  double t7874;
  double t7972;
  double t8065;
  double t8069;
  double t8089;
  double t8297;
  double t8317;
  double t8412;
  double t1361;
  double t2640;
  double t2794;
  double t3508;
  double t3514;
  double t5120;
  double t5524;
  double t5860;
  double t5932;
  double t6536;
  double t6606;
  double t6622;
  double t9185;
  double t9249;
  double t9276;
  double t9405;
  double t9447;
  double t9521;
  double t6807;
  double t6825;
  double t6851;
  double t9557;
  double t9585;
  double t9590;
  double t7050;
  double t7113;
  double t7129;
  double t7331;
  double t7343;
  double t7368;
  double t9600;
  double t9608;
  double t9658;
  double t9701;
  double t9723;
  double t9729;
  double t7664;
  double t7722;
  double t7736;
  double t7934;
  double t8025;
  double t8044;
  double t9768;
  double t9787;
  double t9793;
  double t9795;
  double t9796;
  double t9797;
  double t8248;
  double t8268;
  double t8278;
  double t9802;
  double t9804;
  double t9825;
  double t9837;
  double t9841;
  double t9859;
  double t9934;
  double t9944;
  double t9950;
  double t9964;
  double t9965;
  double t9969;
  double t9983;
  double t9986;
  double t9989;
  double t9996;
  double t10002;
  double t10003;
  double t10011;
  double t10016;
  double t10018;
  double t10023;
  double t10024;
  double t10025;
  double t10027;
  double t10028;
  double t10030;
  t218 = Cos(var1[3]);
  t3526 = Cos(var1[5]);
  t4138 = Sin(var1[3]);
  t3901 = Sin(var1[4]);
  t4145 = Sin(var1[5]);
  t824 = Cos(var1[14]);
  t1077 = -1.*t824;
  t1083 = 1. + t1077;
  t1367 = Sin(var1[14]);
  t3425 = Sin(var1[13]);
  t3903 = t218*t3526*t3901;
  t4646 = t4138*t4145;
  t4658 = t3903 + t4646;
  t5002 = Cos(var1[13]);
  t5935 = -1.*t3526*t4138;
  t6454 = t218*t3901*t4145;
  t6484 = t5935 + t6454;
  t222 = Cos(var1[4]);
  t6668 = t3425*t4658;
  t6693 = t5002*t6484;
  t6732 = t6668 + t6693;
  t6787 = Cos(var1[15]);
  t6797 = -1.*t6787;
  t6803 = 1. + t6797;
  t6814 = Sin(var1[15]);
  t6868 = t5002*t4658;
  t6897 = -1.*t3425*t6484;
  t6901 = t6868 + t6897;
  t7190 = t824*t218*t222;
  t7196 = t1367*t6732;
  t7217 = t7190 + t7196;
  t7244 = Cos(var1[16]);
  t7262 = -1.*t7244;
  t7293 = 1. + t7262;
  t7332 = Sin(var1[16]);
  t7370 = t6814*t6901;
  t7426 = t6787*t7217;
  t7434 = t7370 + t7426;
  t7762 = t6787*t6901;
  t7768 = -1.*t6814*t7217;
  t7771 = t7762 + t7768;
  t7830 = Cos(var1[17]);
  t7866 = -1.*t7830;
  t7874 = 1. + t7866;
  t7972 = Sin(var1[17]);
  t8065 = -1.*t7332*t7434;
  t8069 = t7244*t7771;
  t8089 = t8065 + t8069;
  t8297 = t7244*t7434;
  t8317 = t7332*t7771;
  t8412 = t8297 + t8317;
  t1361 = -0.049*t1083;
  t2640 = -0.135*t1367;
  t2794 = 0. + t1361 + t2640;
  t3508 = 0.135*t3425;
  t3514 = 0. + t3508;
  t5120 = -1.*t5002;
  t5524 = 1. + t5120;
  t5860 = -0.135*t5524;
  t5932 = 0. + t5860;
  t6536 = -0.135*t1083;
  t6606 = 0.049*t1367;
  t6622 = 0. + t6536 + t6606;
  t9185 = t3526*t4138*t3901;
  t9249 = -1.*t218*t4145;
  t9276 = t9185 + t9249;
  t9405 = t218*t3526;
  t9447 = t4138*t3901*t4145;
  t9521 = t9405 + t9447;
  t6807 = -0.09*t6803;
  t6825 = 0.049*t6814;
  t6851 = 0. + t6807 + t6825;
  t9557 = t3425*t9276;
  t9585 = t5002*t9521;
  t9590 = t9557 + t9585;
  t7050 = -0.049*t6803;
  t7113 = -0.09*t6814;
  t7129 = 0. + t7050 + t7113;
  t7331 = -0.049*t7293;
  t7343 = -0.21*t7332;
  t7368 = 0. + t7331 + t7343;
  t9600 = t5002*t9276;
  t9608 = -1.*t3425*t9521;
  t9658 = t9600 + t9608;
  t9701 = t824*t222*t4138;
  t9723 = t1367*t9590;
  t9729 = t9701 + t9723;
  t7664 = -0.21*t7293;
  t7722 = 0.049*t7332;
  t7736 = 0. + t7664 + t7722;
  t7934 = -0.2707*t7874;
  t8025 = 0.0016*t7972;
  t8044 = 0. + t7934 + t8025;
  t9768 = t6814*t9658;
  t9787 = t6787*t9729;
  t9793 = t9768 + t9787;
  t9795 = t6787*t9658;
  t9796 = -1.*t6814*t9729;
  t9797 = t9795 + t9796;
  t8248 = -0.0016*t7874;
  t8268 = -0.2707*t7972;
  t8278 = 0. + t8248 + t8268;
  t9802 = -1.*t7332*t9793;
  t9804 = t7244*t9797;
  t9825 = t9802 + t9804;
  t9837 = t7244*t9793;
  t9841 = t7332*t9797;
  t9859 = t9837 + t9841;
  t9934 = t222*t3526*t3425;
  t9944 = t5002*t222*t4145;
  t9950 = t9934 + t9944;
  t9964 = t5002*t222*t3526;
  t9965 = -1.*t222*t3425*t4145;
  t9969 = t9964 + t9965;
  t9983 = -1.*t824*t3901;
  t9986 = t1367*t9950;
  t9989 = t9983 + t9986;
  t9996 = t6814*t9969;
  t10002 = t6787*t9989;
  t10003 = t9996 + t10002;
  t10011 = t6787*t9969;
  t10016 = -1.*t6814*t9989;
  t10018 = t10011 + t10016;
  t10023 = -1.*t7332*t10003;
  t10024 = t7244*t10018;
  t10025 = t10023 + t10024;
  t10027 = t7244*t10003;
  t10028 = t7332*t10018;
  t10030 = t10027 + t10028;
  p_output1[0]=0. + t218*t222*t2794 + t3514*t4658 + t5932*t6484 + t6622*t6732 + t6851*t6901 + t7129*t7217 + t7368*t7434 + t7736*t7771 + t8044*t8089 - 0.1305*(-1.*t1367*t218*t222 + t6732*t824) + t8278*t8412 - 0.0016*(t7972*t8089 + t7830*t8412) - 0.2707*(t7830*t8089 - 1.*t7972*t8412) + var1[0];
  p_output1[1]=0. + t222*t2794*t4138 + t3514*t9276 + t5932*t9521 + t6622*t9590 - 0.1305*(-1.*t1367*t222*t4138 + t824*t9590) + t6851*t9658 + t7129*t9729 + t7368*t9793 + t7736*t9797 + t8044*t9825 + t8278*t9859 - 0.0016*(t7972*t9825 + t7830*t9859) - 0.2707*(t7830*t9825 - 1.*t7972*t9859) + var1[1];
  p_output1[2]=0. + t222*t3514*t3526 - 1.*t2794*t3901 + t222*t4145*t5932 + t10003*t7368 + t10018*t7736 - 0.0016*(t10030*t7830 + t10025*t7972) - 0.2707*(t10025*t7830 - 1.*t10030*t7972) + t10025*t8044 + t10030*t8278 + t6622*t9950 - 0.1305*(t1367*t3901 + t824*t9950) + t6851*t9969 + t7129*t9989 + var1[2];
}



void p_knee_to_shin_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
