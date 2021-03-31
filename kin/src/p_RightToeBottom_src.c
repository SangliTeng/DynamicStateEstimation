/*
 * Automatically Generated from Mathematica.
 * Wed 12 Feb 2020 15:29:09 GMT-08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RightToeBottom_src.h"

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
  double t433;
  double t1990;
  double t2451;
  double t2112;
  double t2454;
  double t1407;
  double t1431;
  double t1493;
  double t1700;
  double t1827;
  double t2272;
  double t2470;
  double t2649;
  double t2813;
  double t3030;
  double t3039;
  double t3159;
  double t816;
  double t3632;
  double t3793;
  double t3807;
  double t3822;
  double t3910;
  double t3919;
  double t3932;
  double t3987;
  double t3996;
  double t4107;
  double t4536;
  double t4537;
  double t4552;
  double t4563;
  double t4566;
  double t4588;
  double t4623;
  double t4750;
  double t4788;
  double t4808;
  double t4958;
  double t4985;
  double t4986;
  double t5022;
  double t5099;
  double t5135;
  double t5180;
  double t5238;
  double t5270;
  double t5274;
  double t5333;
  double t5345;
  double t5353;
  double t5389;
  double t5409;
  double t5411;
  double t5435;
  double t5473;
  double t5480;
  double t5482;
  double t5532;
  double t5539;
  double t5541;
  double t5553;
  double t5554;
  double t5563;
  double t5582;
  double t5623;
  double t5625;
  double t5681;
  double t5762;
  double t5787;
  double t5789;
  double t1524;
  double t1722;
  double t1776;
  double t1846;
  double t1858;
  double t2914;
  double t2948;
  double t2958;
  double t2959;
  double t3209;
  double t3305;
  double t3360;
  double t5967;
  double t5968;
  double t5969;
  double t5985;
  double t5986;
  double t5992;
  double t3921;
  double t3964;
  double t3970;
  double t6013;
  double t6028;
  double t6029;
  double t4460;
  double t4486;
  double t4504;
  double t4619;
  double t4705;
  double t4735;
  double t6069;
  double t6076;
  double t6078;
  double t6104;
  double t6107;
  double t6108;
  double t4882;
  double t4919;
  double t4932;
  double t5142;
  double t5191;
  double t5203;
  double t6112;
  double t6116;
  double t6121;
  double t6132;
  double t6146;
  double t6148;
  double t5284;
  double t5287;
  double t5328;
  double t5421;
  double t5458;
  double t5461;
  double t6159;
  double t6170;
  double t6177;
  double t6192;
  double t6198;
  double t6203;
  double t5512;
  double t5521;
  double t5528;
  double t5578;
  double t5587;
  double t5613;
  double t6223;
  double t6233;
  double t6256;
  double t6268;
  double t6282;
  double t6289;
  double t5734;
  double t5753;
  double t5759;
  double t6302;
  double t6325;
  double t6332;
  double t6361;
  double t6363;
  double t6371;
  double t6461;
  double t6479;
  double t6483;
  double t6492;
  double t6496;
  double t6498;
  double t6538;
  double t6541;
  double t6545;
  double t6557;
  double t6562;
  double t6564;
  double t6572;
  double t6575;
  double t6577;
  double t6586;
  double t6588;
  double t6589;
  double t6601;
  double t6604;
  double t6611;
  double t6616;
  double t6625;
  double t6626;
  double t6632;
  double t6638;
  double t6639;
  double t6649;
  double t6652;
  double t6664;
  double t6668;
  double t6672;
  double t6673;
  t433 = Cos(var1[3]);
  t1990 = Cos(var1[5]);
  t2451 = Sin(var1[3]);
  t2112 = Sin(var1[4]);
  t2454 = Sin(var1[5]);
  t1407 = Cos(var1[14]);
  t1431 = -1.*t1407;
  t1493 = 1. + t1431;
  t1700 = Sin(var1[14]);
  t1827 = Sin(var1[13]);
  t2272 = t433*t1990*t2112;
  t2470 = t2451*t2454;
  t2649 = t2272 + t2470;
  t2813 = Cos(var1[13]);
  t3030 = -1.*t1990*t2451;
  t3039 = t433*t2112*t2454;
  t3159 = t3030 + t3039;
  t816 = Cos(var1[4]);
  t3632 = t1827*t2649;
  t3793 = t2813*t3159;
  t3807 = t3632 + t3793;
  t3822 = Cos(var1[15]);
  t3910 = -1.*t3822;
  t3919 = 1. + t3910;
  t3932 = Sin(var1[15]);
  t3987 = t2813*t2649;
  t3996 = -1.*t1827*t3159;
  t4107 = t3987 + t3996;
  t4536 = t1407*t433*t816;
  t4537 = t1700*t3807;
  t4552 = t4536 + t4537;
  t4563 = Cos(var1[16]);
  t4566 = -1.*t4563;
  t4588 = 1. + t4566;
  t4623 = Sin(var1[16]);
  t4750 = t3932*t4107;
  t4788 = t3822*t4552;
  t4808 = t4750 + t4788;
  t4958 = t3822*t4107;
  t4985 = -1.*t3932*t4552;
  t4986 = t4958 + t4985;
  t5022 = Cos(var1[17]);
  t5099 = -1.*t5022;
  t5135 = 1. + t5099;
  t5180 = Sin(var1[17]);
  t5238 = -1.*t4623*t4808;
  t5270 = t4563*t4986;
  t5274 = t5238 + t5270;
  t5333 = t4563*t4808;
  t5345 = t4623*t4986;
  t5353 = t5333 + t5345;
  t5389 = Cos(var1[18]);
  t5409 = -1.*t5389;
  t5411 = 1. + t5409;
  t5435 = Sin(var1[18]);
  t5473 = t5180*t5274;
  t5480 = t5022*t5353;
  t5482 = t5473 + t5480;
  t5532 = t5022*t5274;
  t5539 = -1.*t5180*t5353;
  t5541 = t5532 + t5539;
  t5553 = Cos(var1[19]);
  t5554 = -1.*t5553;
  t5563 = 1. + t5554;
  t5582 = Sin(var1[19]);
  t5623 = -1.*t5435*t5482;
  t5625 = t5389*t5541;
  t5681 = t5623 + t5625;
  t5762 = t5389*t5482;
  t5787 = t5435*t5541;
  t5789 = t5762 + t5787;
  t1524 = -0.049*t1493;
  t1722 = -0.135*t1700;
  t1776 = 0. + t1524 + t1722;
  t1846 = 0.135*t1827;
  t1858 = 0. + t1846;
  t2914 = -1.*t2813;
  t2948 = 1. + t2914;
  t2958 = -0.135*t2948;
  t2959 = 0. + t2958;
  t3209 = -0.135*t1493;
  t3305 = 0.049*t1700;
  t3360 = 0. + t3209 + t3305;
  t5967 = t1990*t2451*t2112;
  t5968 = -1.*t433*t2454;
  t5969 = t5967 + t5968;
  t5985 = t433*t1990;
  t5986 = t2451*t2112*t2454;
  t5992 = t5985 + t5986;
  t3921 = -0.09*t3919;
  t3964 = 0.049*t3932;
  t3970 = 0. + t3921 + t3964;
  t6013 = t1827*t5969;
  t6028 = t2813*t5992;
  t6029 = t6013 + t6028;
  t4460 = -0.049*t3919;
  t4486 = -0.09*t3932;
  t4504 = 0. + t4460 + t4486;
  t4619 = -0.049*t4588;
  t4705 = -0.21*t4623;
  t4735 = 0. + t4619 + t4705;
  t6069 = t2813*t5969;
  t6076 = -1.*t1827*t5992;
  t6078 = t6069 + t6076;
  t6104 = t1407*t816*t2451;
  t6107 = t1700*t6029;
  t6108 = t6104 + t6107;
  t4882 = -0.21*t4588;
  t4919 = 0.049*t4623;
  t4932 = 0. + t4882 + t4919;
  t5142 = -0.2707*t5135;
  t5191 = 0.0016*t5180;
  t5203 = 0. + t5142 + t5191;
  t6112 = t3932*t6078;
  t6116 = t3822*t6108;
  t6121 = t6112 + t6116;
  t6132 = t3822*t6078;
  t6146 = -1.*t3932*t6108;
  t6148 = t6132 + t6146;
  t5284 = -0.0016*t5135;
  t5287 = -0.2707*t5180;
  t5328 = 0. + t5284 + t5287;
  t5421 = 0.0184*t5411;
  t5458 = -0.7055*t5435;
  t5461 = 0. + t5421 + t5458;
  t6159 = -1.*t4623*t6121;
  t6170 = t4563*t6148;
  t6177 = t6159 + t6170;
  t6192 = t4563*t6121;
  t6198 = t4623*t6148;
  t6203 = t6192 + t6198;
  t5512 = -0.7055*t5411;
  t5521 = -0.0184*t5435;
  t5528 = 0. + t5512 + t5521;
  t5578 = -1.1135*t5563;
  t5587 = 0.0216*t5582;
  t5613 = 0. + t5578 + t5587;
  t6223 = t5180*t6177;
  t6233 = t5022*t6203;
  t6256 = t6223 + t6233;
  t6268 = t5022*t6177;
  t6282 = -1.*t5180*t6203;
  t6289 = t6268 + t6282;
  t5734 = -0.0216*t5563;
  t5753 = -1.1135*t5582;
  t5759 = 0. + t5734 + t5753;
  t6302 = -1.*t5435*t6256;
  t6325 = t5389*t6289;
  t6332 = t6302 + t6325;
  t6361 = t5389*t6256;
  t6363 = t5435*t6289;
  t6371 = t6361 + t6363;
  t6461 = t816*t1990*t1827;
  t6479 = t2813*t816*t2454;
  t6483 = t6461 + t6479;
  t6492 = t2813*t816*t1990;
  t6496 = -1.*t816*t1827*t2454;
  t6498 = t6492 + t6496;
  t6538 = -1.*t1407*t2112;
  t6541 = t1700*t6483;
  t6545 = t6538 + t6541;
  t6557 = t3932*t6498;
  t6562 = t3822*t6545;
  t6564 = t6557 + t6562;
  t6572 = t3822*t6498;
  t6575 = -1.*t3932*t6545;
  t6577 = t6572 + t6575;
  t6586 = -1.*t4623*t6564;
  t6588 = t4563*t6577;
  t6589 = t6586 + t6588;
  t6601 = t4563*t6564;
  t6604 = t4623*t6577;
  t6611 = t6601 + t6604;
  t6616 = t5180*t6589;
  t6625 = t5022*t6611;
  t6626 = t6616 + t6625;
  t6632 = t5022*t6589;
  t6638 = -1.*t5180*t6611;
  t6639 = t6632 + t6638;
  t6649 = -1.*t5435*t6626;
  t6652 = t5389*t6639;
  t6664 = t6649 + t6652;
  t6668 = t5389*t6626;
  t6672 = t5435*t6639;
  t6673 = t6668 + t6672;
  p_output1[0]=0. + t1858*t2649 + t2959*t3159 + t3360*t3807 + t3970*t4107 + t4504*t4552 + t4735*t4808 + t4932*t4986 + t5203*t5274 + t5328*t5353 + t5461*t5482 + t5528*t5541 + t5613*t5681 + t5759*t5789 + 0.0306*(t5582*t5681 + t5553*t5789) - 1.1312*(t5553*t5681 - 1.*t5582*t5789) + t1776*t433*t816 - 0.1305*(t1407*t3807 - 1.*t1700*t433*t816) + var1[0];
  p_output1[1]=0. + t1858*t5969 + t2959*t5992 + t3360*t6029 + t3970*t6078 + t4504*t6108 + t4735*t6121 + t4932*t6148 + t5203*t6177 + t5328*t6203 + t5461*t6256 + t5528*t6289 + t5613*t6332 + t5759*t6371 + 0.0306*(t5582*t6332 + t5553*t6371) - 1.1312*(t5553*t6332 - 1.*t5582*t6371) + t1776*t2451*t816 - 0.1305*(t1407*t6029 - 1.*t1700*t2451*t816) + var1[1];
  p_output1[2]=0. - 1.*t1776*t2112 + t3360*t6483 - 0.1305*(t1700*t2112 + t1407*t6483) + t3970*t6498 + t4504*t6545 + t4735*t6564 + t4932*t6577 + t5203*t6589 + t5328*t6611 + t5461*t6626 + t5528*t6639 + t5613*t6664 + t5759*t6673 + 0.0306*(t5582*t6664 + t5553*t6673) - 1.1312*(t5553*t6664 - 1.*t5582*t6673) + t1858*t1990*t816 + t2454*t2959*t816 + var1[2];
}



void p_RightToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
