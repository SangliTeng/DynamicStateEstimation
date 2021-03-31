/*
 * Automatically Generated from Mathematica.
 * Wed 23 Oct 2019 10:33:52 GMT-07:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jb_VectorNav_to_RightToeBottom_src.h"

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
  double t967;
  double t1116;
  double t1267;
  double t985;
  double t1152;
  double t1162;
  double t911;
  double t1293;
  double t1345;
  double t1369;
  double t1502;
  double t1208;
  double t1407;
  double t1418;
  double t863;
  double t1557;
  double t1562;
  double t1591;
  double t2003;
  double t1420;
  double t1719;
  double t1744;
  double t833;
  double t2045;
  double t2064;
  double t2073;
  double t667;
  double t2470;
  double t2830;
  double t2836;
  double t2890;
  double t2814;
  double t2894;
  double t2939;
  double t2969;
  double t2970;
  double t738;
  double t2944;
  double t2982;
  double t3007;
  double t3063;
  double t3065;
  double t3093;
  double t3009;
  double t3131;
  double t3259;
  double t3297;
  double t3378;
  double t3389;
  double t3449;
  double t3451;
  double t3644;
  double t3677;
  double t3693;
  double t282;
  double t4525;
  double t4551;
  double t4426;
  double t4440;
  double t4577;
  double t4622;
  double t4679;
  double t4680;
  double t4766;
  double t4813;
  double t4844;
  double t4845;
  double t4197;
  double t4261;
  double t4449;
  double t4491;
  double t4728;
  double t4852;
  double t4854;
  double t4865;
  double t4911;
  double t4912;
  double t4924;
  double t4952;
  double t4073;
  double t4087;
  double t4291;
  double t4340;
  double t4859;
  double t4959;
  double t4963;
  double t4975;
  double t4985;
  double t5009;
  double t5011;
  double t5015;
  double t3697;
  double t3699;
  double t3989;
  double t3990;
  double t4008;
  double t4062;
  double t4090;
  double t4101;
  double t4972;
  double t5048;
  double t5074;
  double t5081;
  double t5091;
  double t5118;
  double t5123;
  double t5126;
  double t5140;
  double t5159;
  double t5175;
  double t1762;
  double t2120;
  double t2282;
  double t2317;
  double t2502;
  double t2652;
  double t2735;
  double t2740;
  double t2759;
  double t2798;
  double t2808;
  double t3743;
  double t3978;
  double t5185;
  double t5210;
  double t5222;
  double t5228;
  double t5237;
  double t5258;
  double t5261;
  double t5300;
  double t5314;
  double t5329;
  double t5333;
  double t5343;
  double t297;
  double t5216;
  double t5219;
  double t5271;
  double t5281;
  double t5299;
  double t5399;
  double t5407;
  double t5419;
  double t5441;
  double t5447;
  double t5379;
  double t5385;
  double t5420;
  double t5349;
  t967 = Cos(var1[13]);
  t1116 = Sin(var1[13]);
  t1267 = Cos(var1[12]);
  t985 = 0.642788*t967;
  t1152 = -0.766044*t1116;
  t1162 = t985 + t1152;
  t911 = Sin(var1[12]);
  t1293 = 0.766044*t967;
  t1345 = 0.642788*t1116;
  t1369 = t1293 + t1345;
  t1502 = Cos(var1[11]);
  t1208 = t911*t1162;
  t1407 = t1267*t1369;
  t1418 = 0. + t1208 + t1407;
  t863 = Sin(var1[11]);
  t1557 = t1267*t1162;
  t1562 = -1.*t911*t1369;
  t1591 = 0. + t1557 + t1562;
  t2003 = Cos(var1[10]);
  t1420 = -1.*t863*t1418;
  t1719 = t1502*t1591;
  t1744 = 0. + t1420 + t1719;
  t833 = Sin(var1[10]);
  t2045 = t1502*t1418;
  t2064 = t863*t1591;
  t2073 = 0. + t2045 + t2064;
  t667 = Cos(var1[8]);
  t2470 = Cos(var1[9]);
  t2830 = -0.766044*t967;
  t2836 = -0.642788*t1116;
  t2890 = t2830 + t2836;
  t2814 = -1.*t911*t1162;
  t2894 = t1267*t2890;
  t2939 = 0. + t2814 + t2894;
  t2969 = t911*t2890;
  t2970 = 0. + t1557 + t2969;
  t738 = Sin(var1[9]);
  t2944 = t863*t2939;
  t2982 = t1502*t2970;
  t3007 = 0. + t2944 + t2982;
  t3063 = t1502*t2939;
  t3065 = -1.*t863*t2970;
  t3093 = 0. + t3063 + t3065;
  t3009 = -1.*t833*t3007;
  t3131 = t2003*t3093;
  t3259 = 0. + t3009 + t3131;
  t3297 = t2470*t3259;
  t3378 = t2003*t3007;
  t3389 = t833*t3093;
  t3449 = 0. + t3378 + t3389;
  t3451 = -1.*t738*t3449;
  t3644 = 0. + t3297 + t3451;
  t3677 = t667*t3644;
  t3693 = 0. + t3677;
  t282 = Sin(var1[8]);
  t4525 = -1.*t967;
  t4551 = 1. + t4525;
  t4426 = -1.*t1267;
  t4440 = 1. + t4426;
  t4577 = -0.0216*t4551;
  t4622 = 0.0306*t967;
  t4679 = 0.01770000000000005*t1116;
  t4680 = 0. + t4577 + t4622 + t4679;
  t4766 = -1.1135*t4551;
  t4813 = -1.1312*t967;
  t4844 = 0.052199999999999996*t1116;
  t4845 = 0. + t4766 + t4813 + t4844;
  t4197 = -1.*t1502;
  t4261 = 1. + t4197;
  t4449 = -0.7055*t4440;
  t4491 = -0.0184*t911;
  t4728 = t911*t4680;
  t4852 = t1267*t4845;
  t4854 = 0. + t4449 + t4491 + t4728 + t4852;
  t4865 = 0.0184*t4440;
  t4911 = -0.7055*t911;
  t4912 = t1267*t4680;
  t4924 = -1.*t911*t4845;
  t4952 = 0. + t4865 + t4911 + t4912 + t4924;
  t4073 = -1.*t2003;
  t4087 = 1. + t4073;
  t4291 = -0.0016*t4261;
  t4340 = -0.2707*t863;
  t4859 = -1.*t863*t4854;
  t4959 = t1502*t4952;
  t4963 = 0. + t4291 + t4340 + t4859 + t4959;
  t4975 = -0.2707*t4261;
  t4985 = 0.0016*t863;
  t5009 = t1502*t4854;
  t5011 = t863*t4952;
  t5015 = 0. + t4975 + t4985 + t5009 + t5011;
  t3697 = -1.*t667;
  t3699 = 1. + t3697;
  t3989 = -1.*t2470;
  t3990 = 1. + t3989;
  t4008 = -0.049*t3990;
  t4062 = -0.09*t738;
  t4090 = -0.21*t4087;
  t4101 = 0.049*t833;
  t4972 = t833*t4963;
  t5048 = t2003*t5015;
  t5074 = 0. + t4090 + t4101 + t4972 + t5048;
  t5081 = -1.*t738*t5074;
  t5091 = -0.049*t4087;
  t5118 = -0.21*t833;
  t5123 = t2003*t4963;
  t5126 = -1.*t833*t5015;
  t5140 = 0. + t5091 + t5118 + t5123 + t5126;
  t5159 = t2470*t5140;
  t5175 = 0. + t4008 + t4062 + t5081 + t5159;
  t1762 = t833*t1744;
  t2120 = t2003*t2073;
  t2282 = 0. + t1762 + t2120;
  t2317 = -1.*t738*t2282;
  t2502 = t2003*t1744;
  t2652 = -1.*t833*t2073;
  t2735 = 0. + t2502 + t2652;
  t2740 = t2470*t2735;
  t2759 = 0. + t2317 + t2740;
  t2798 = t667*t2759;
  t2808 = 0. + t2798;
  t3743 = -0.049*t3699;
  t3978 = -0.004500000000000004*t282;
  t5185 = t667*t5175;
  t5210 = 0. + t3743 + t3978 + t5185;
  t5222 = -0.135*t3699;
  t5228 = -0.1305*t667;
  t5237 = 0.049*t282;
  t5258 = t282*t5175;
  t5261 = 0. + t5222 + t5228 + t5237 + t5258;
  t5300 = -0.09*t3990;
  t5314 = 0.049*t738;
  t5329 = t2470*t5074;
  t5333 = t738*t5140;
  t5343 = 0. + t5300 + t5314 + t5329 + t5333;
  t297 = 0. + t282;
  t5216 = t282*t3644;
  t5219 = 0. + t5216;
  t5271 = t738*t3259;
  t5281 = t2470*t3449;
  t5299 = 0. + t5271 + t5281;
  t5399 = t2470*t2282;
  t5407 = t738*t2735;
  t5419 = 0. + t5399 + t5407;
  t5441 = -1.*t667;
  t5447 = 0. + t5441;
  t5379 = t282*t2759;
  t5385 = 0. + t5379;
  t5420 = -1.*t5343*t5419;
  t5349 = t5299*t5343;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
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
  p_output1[42]=t297;
  p_output1[43]=t2808;
  p_output1[44]=t3693;
  p_output1[45]=0. + t2808*(t3693*t5210 + t5219*t5261 + t5349) + t3693*(-1.*t2808*t5210 - 1.*t5261*t5385 + t5420);
  p_output1[46]=t297*(-1.*t3693*t5210 - 1.*t5219*t5261 - 1.*t5299*t5343) + 0.135*t5419 + t3693*(0. + t297*t5210 + t5261*t5447);
  p_output1[47]=0.135*t5299 + t297*(t2808*t5210 + t5261*t5385 + t5343*t5419) + t2808*(0. - 1.*t297*t5210 - 1.*t5261*t5447);
  p_output1[48]=0.;
  p_output1[49]=t5419;
  p_output1[50]=t5299;
  p_output1[51]=-0.049 + (0. + t3644*t5175 + t5349)*t5419 + t5299*(0. - 1.*t2759*t5175 + t5420);
  p_output1[52]=0. - 0.135*t2759 + 0.1305*t5299;
  p_output1[53]=0. - 0.135*t3644 - 0.1305*t5419;
  p_output1[54]=1.;
  p_output1[55]=0.;
  p_output1[56]=0.;
  p_output1[57]=0.;
  p_output1[58]=0. + 0.049*t2282 - 0.09*t2735 - 1.*t3449*t5074 - 1.*t3259*t5140;
  p_output1[59]=0. - 0.09*t3259 + 0.049*t3449 + t2282*t5074 + t2735*t5140;
  p_output1[60]=1.;
  p_output1[61]=0.;
  p_output1[62]=0.;
  p_output1[63]=0.;
  p_output1[64]=0. - 0.21*t1744 + 0.049*t2073 - 1.*t3093*t4963 - 1.*t3007*t5015;
  p_output1[65]=0. + 0.049*t3007 - 0.21*t3093 + t1744*t4963 + t2073*t5015;
  p_output1[66]=1.;
  p_output1[67]=0.;
  p_output1[68]=0.;
  p_output1[69]=0.;
  p_output1[70]=0. + 0.0016*t1418 - 0.2707*t1591 - 1.*t2970*t4854 - 1.*t2939*t4952;
  p_output1[71]=0. - 0.2707*t2939 + 0.0016*t2970 + t1418*t4854 + t1591*t4952;
  p_output1[72]=1.;
  p_output1[73]=0.;
  p_output1[74]=0.;
  p_output1[75]=0.;
  p_output1[76]=0. - 0.7055*t1162 - 0.0184*t1369 - 1.*t2890*t4680 - 1.*t1162*t4845;
  p_output1[77]=0. - 0.0184*t1162 - 0.7055*t2890 + t1162*t4680 + t1369*t4845;
  p_output1[78]=1.;
  p_output1[79]=0.;
  p_output1[80]=0.;
  p_output1[81]=0.;
  p_output1[82]=0.05136484440000011;
  p_output1[83]=0.019994554799999897;
}



void Jb_VectorNav_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
