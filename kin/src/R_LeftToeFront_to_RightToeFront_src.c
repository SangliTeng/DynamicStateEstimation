/*
 * Automatically Generated from Mathematica.
 * Wed 23 Oct 2019 10:26:41 GMT-07:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_LeftToeFront_to_RightToeFront_src.h"

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
  double t293;
  double t710;
  double t308;
  double t349;
  double t713;
  double t868;
  double t390;
  double t732;
  double t740;
  double t129;
  double t890;
  double t896;
  double t936;
  double t972;
  double t742;
  double t943;
  double t945;
  double t96;
  double t1033;
  double t1056;
  double t1062;
  double t1114;
  double t964;
  double t1067;
  double t1085;
  double t24;
  double t1202;
  double t1216;
  double t1256;
  double t1619;
  double t1570;
  double t1575;
  double t1611;
  double t1633;
  double t1659;
  double t1675;
  double t1710;
  double t1719;
  double t1664;
  double t1746;
  double t1758;
  double t1821;
  double t1837;
  double t1849;
  double t1797;
  double t1874;
  double t1939;
  double t1964;
  double t2004;
  double t2059;
  double t1945;
  double t2064;
  double t2109;
  double t2169;
  double t2184;
  double t2186;
  double t1097;
  double t1342;
  double t1425;
  double t1460;
  double t1497;
  double t1502;
  double t2121;
  double t2207;
  double t2225;
  double t2254;
  double t2268;
  double t2269;
  double t2583;
  double t2618;
  double t2662;
  double t2721;
  double t2733;
  double t2742;
  double t2699;
  double t2748;
  double t2767;
  double t2814;
  double t2826;
  double t2837;
  double t2776;
  double t2841;
  double t2874;
  double t2985;
  double t2992;
  double t3026;
  double t2906;
  double t3040;
  double t3064;
  double t3070;
  double t3100;
  double t3117;
  double t2370;
  double t2372;
  double t2421;
  double t2228;
  double t2302;
  double t2335;
  double t3065;
  double t3162;
  double t3170;
  double t3200;
  double t3216;
  double t3241;
  double t1454;
  double t1516;
  double t1538;
  double t2424;
  double t2467;
  double t2565;
  double t2360;
  double t2569;
  double t3;
  double t3301;
  double t3337;
  double t3341;
  double t3177;
  double t3252;
  double t3268;
  double t3274;
  double t3286;
  double t3289;
  double t3298;
  double t3347;
  double t3358;
  double t3364;
  double t3380;
  double t3408;
  double t3414;
  double t3420;
  double t3428;
  double t6;
  double t3547;
  double t3469;
  double t3933;
  double t3959;
  double t3918;
  double t3989;
  double t3990;
  double t4009;
  double t3936;
  double t3963;
  double t3983;
  double t4022;
  double t3912;
  double t4087;
  double t4108;
  double t4119;
  double t3988;
  double t4056;
  double t4077;
  double t4123;
  double t3909;
  double t4166;
  double t4174;
  double t4183;
  double t4085;
  double t4125;
  double t4138;
  double t4222;
  double t3908;
  double t4233;
  double t4263;
  double t4267;
  double t4141;
  double t4224;
  double t4227;
  double t4285;
  double t2575;
  double t4425;
  double t4437;
  double t4443;
  double t4383;
  double t4391;
  double t4413;
  double t4459;
  double t4460;
  double t4464;
  double t4424;
  double t4444;
  double t4455;
  double t4496;
  double t4512;
  double t4531;
  double t4458;
  double t4466;
  double t4467;
  double t4548;
  double t4549;
  double t4554;
  double t4494;
  double t4538;
  double t4539;
  double t3497;
  double t3500;
  double t3507;
  double t4635;
  double t4648;
  double t4660;
  double t4611;
  double t4617;
  double t4624;
  double t4695;
  double t4701;
  double t4712;
  double t4626;
  double t4664;
  double t4681;
  double t4747;
  double t4753;
  double t4760;
  double t4691;
  double t4734;
  double t4735;
  double t3569;
  double t3574;
  double t3614;
  double t4229;
  double t4286;
  double t4290;
  double t4298;
  double t4300;
  double t4307;
  double t4345;
  double t4355;
  double t4373;
  double t3650;
  double t3669;
  double t3679;
  double t4741;
  double t4762;
  double t4763;
  double t4784;
  double t4792;
  double t4794;
  double t4796;
  double t4797;
  double t4798;
  double t3686;
  double t3690;
  double t3712;
  double t4546;
  double t4557;
  double t4560;
  double t4561;
  double t4565;
  double t4574;
  double t4587;
  double t4599;
  double t4604;
  double t3721;
  double t3728;
  double t3746;
  double t3783;
  double t3809;
  double t3819;
  double t3820;
  double t3871;
  double t3880;
  double t3890;
  double t4872;
  double t4876;
  double t4878;
  double t4919;
  double t4922;
  double t4943;
  double t4882;
  double t4884;
  double t4898;
  t293 = Cos(var1[1]);
  t710 = Cos(var1[3]);
  t308 = Cos(var1[2]);
  t349 = Sin(var1[3]);
  t713 = Sin(var1[2]);
  t868 = Cos(var1[4]);
  t390 = -1.*t293*t308*t349;
  t732 = -1.*t710*t293*t713;
  t740 = t390 + t732;
  t129 = Sin(var1[4]);
  t890 = t710*t293*t308;
  t896 = -1.*t293*t349*t713;
  t936 = t890 + t896;
  t972 = Cos(var1[5]);
  t742 = t129*t740;
  t943 = t868*t936;
  t945 = t742 + t943;
  t96 = Sin(var1[5]);
  t1033 = t868*t740;
  t1056 = -1.*t129*t936;
  t1062 = t1033 + t1056;
  t1114 = Cos(var1[6]);
  t964 = -1.*t96*t945;
  t1067 = t972*t1062;
  t1085 = t964 + t1067;
  t24 = Sin(var1[6]);
  t1202 = t972*t945;
  t1216 = t96*t1062;
  t1256 = t1202 + t1216;
  t1619 = Sin(var1[0]);
  t1570 = Cos(var1[0]);
  t1575 = Sin(var1[1]);
  t1611 = t1570*t308*t1575;
  t1633 = -1.*t1619*t713;
  t1659 = t1611 + t1633;
  t1675 = -1.*t308*t1619;
  t1710 = -1.*t1570*t1575*t713;
  t1719 = t1675 + t1710;
  t1664 = -1.*t349*t1659;
  t1746 = t710*t1719;
  t1758 = t1664 + t1746;
  t1821 = t710*t1659;
  t1837 = t349*t1719;
  t1849 = t1821 + t1837;
  t1797 = t129*t1758;
  t1874 = t868*t1849;
  t1939 = t1797 + t1874;
  t1964 = t868*t1758;
  t2004 = -1.*t129*t1849;
  t2059 = t1964 + t2004;
  t1945 = -1.*t96*t1939;
  t2064 = t972*t2059;
  t2109 = t1945 + t2064;
  t2169 = t972*t1939;
  t2184 = t96*t2059;
  t2186 = t2169 + t2184;
  t1097 = t24*t1085;
  t1342 = t1114*t1256;
  t1425 = t1097 + t1342;
  t1460 = t1114*t1085;
  t1497 = -1.*t24*t1256;
  t1502 = t1460 + t1497;
  t2121 = t24*t2109;
  t2207 = t1114*t2186;
  t2225 = t2121 + t2207;
  t2254 = t1114*t2109;
  t2268 = -1.*t24*t2186;
  t2269 = t2254 + t2268;
  t2583 = t308*t1619*t1575;
  t2618 = t1570*t713;
  t2662 = t2583 + t2618;
  t2721 = t1570*t308;
  t2733 = -1.*t1619*t1575*t713;
  t2742 = t2721 + t2733;
  t2699 = -1.*t349*t2662;
  t2748 = t710*t2742;
  t2767 = t2699 + t2748;
  t2814 = t710*t2662;
  t2826 = t349*t2742;
  t2837 = t2814 + t2826;
  t2776 = t129*t2767;
  t2841 = t868*t2837;
  t2874 = t2776 + t2841;
  t2985 = t868*t2767;
  t2992 = -1.*t129*t2837;
  t3026 = t2985 + t2992;
  t2906 = -1.*t96*t2874;
  t3040 = t972*t3026;
  t3064 = t2906 + t3040;
  t3070 = t972*t2874;
  t3100 = t96*t3026;
  t3117 = t3070 + t3100;
  t2370 = -0.766044*t1425;
  t2372 = 0.642788*t1502;
  t2421 = t2370 + t2372;
  t2228 = -0.766044*t2225;
  t2302 = 0.642788*t2269;
  t2335 = t2228 + t2302;
  t3065 = t24*t3064;
  t3162 = t1114*t3117;
  t3170 = t3065 + t3162;
  t3200 = t1114*t3064;
  t3216 = -1.*t24*t3117;
  t3241 = t3200 + t3216;
  t1454 = 0.642788*t1425;
  t1516 = 0.766044*t1502;
  t1538 = t1454 + t1516;
  t2424 = 0.642788*t2225;
  t2467 = 0.766044*t2269;
  t2565 = t2424 + t2467;
  t2360 = t1538*t2335;
  t2569 = -1.*t2421*t2565;
  t3 = Cos(var1[8]);
  t3301 = -0.766044*t3170;
  t3337 = 0.642788*t3241;
  t3341 = t3301 + t3337;
  t3177 = 0.642788*t3170;
  t3252 = 0.766044*t3241;
  t3268 = t3177 + t3252;
  t3274 = t1570*t293*t2421;
  t3286 = t1575*t2335;
  t3289 = t3274 + t3286;
  t3298 = -1.*t3268*t3289;
  t3347 = t1570*t293*t1538;
  t3358 = t1575*t2565;
  t3364 = t3347 + t3358;
  t3380 = t3341*t3364;
  t3408 = t2360 + t2569;
  t3414 = -1.*t293*t1619*t3408;
  t3420 = 0. + t3298 + t3380 + t3414;
  t3428 = 1/t3420;
  t6 = Sin(var1[7]);
  t3547 = Sin(var1[8]);
  t3469 = Cos(var1[7]);
  t3933 = Cos(var1[9]);
  t3959 = Sin(var1[9]);
  t3918 = Cos(var1[10]);
  t3989 = t3469*t3933;
  t3990 = -1.*t6*t3547*t3959;
  t4009 = t3989 + t3990;
  t3936 = t3933*t6*t3547;
  t3963 = t3469*t3959;
  t3983 = t3936 + t3963;
  t4022 = Sin(var1[10]);
  t3912 = Cos(var1[11]);
  t4087 = t3918*t4009;
  t4108 = -1.*t3983*t4022;
  t4119 = t4087 + t4108;
  t3988 = t3918*t3983;
  t4056 = t4009*t4022;
  t4077 = t3988 + t4056;
  t4123 = Sin(var1[11]);
  t3909 = Cos(var1[12]);
  t4166 = t3912*t4119;
  t4174 = -1.*t4077*t4123;
  t4183 = t4166 + t4174;
  t4085 = t3912*t4077;
  t4125 = t4119*t4123;
  t4138 = t4085 + t4125;
  t4222 = Sin(var1[12]);
  t3908 = Cos(var1[13]);
  t4233 = t3909*t4183;
  t4263 = -1.*t4138*t4222;
  t4267 = t4233 + t4263;
  t4141 = t3909*t4138;
  t4224 = t4183*t4222;
  t4227 = t4141 + t4224;
  t4285 = Sin(var1[13]);
  t2575 = 0. + t2360 + t2569;
  t4425 = -1.*t3933*t6;
  t4437 = -1.*t3469*t3547*t3959;
  t4443 = t4425 + t4437;
  t4383 = t3469*t3933*t3547;
  t4391 = -1.*t6*t3959;
  t4413 = t4383 + t4391;
  t4459 = t3918*t4443;
  t4460 = -1.*t4413*t4022;
  t4464 = t4459 + t4460;
  t4424 = t3918*t4413;
  t4444 = t4443*t4022;
  t4455 = t4424 + t4444;
  t4496 = t3912*t4464;
  t4512 = -1.*t4455*t4123;
  t4531 = t4496 + t4512;
  t4458 = t3912*t4455;
  t4466 = t4464*t4123;
  t4467 = t4458 + t4466;
  t4548 = t3909*t4531;
  t4549 = -1.*t4467*t4222;
  t4554 = t4548 + t4549;
  t4494 = t3909*t4467;
  t4538 = t4531*t4222;
  t4539 = t4494 + t4538;
  t3497 = -1.*t1538*t3341;
  t3500 = t2421*t3268;
  t3507 = 0. + t3497 + t3500;
  t4635 = -1.*t3*t3918*t3959;
  t4648 = -1.*t3*t3933*t4022;
  t4660 = t4635 + t4648;
  t4611 = t3*t3933*t3918;
  t4617 = -1.*t3*t3959*t4022;
  t4624 = t4611 + t4617;
  t4695 = t3912*t4660;
  t4701 = -1.*t4624*t4123;
  t4712 = t4695 + t4701;
  t4626 = t3912*t4624;
  t4664 = t4660*t4123;
  t4681 = t4626 + t4664;
  t4747 = t3909*t4712;
  t4753 = -1.*t4681*t4222;
  t4760 = t4747 + t4753;
  t4691 = t3909*t4681;
  t4734 = t4712*t4222;
  t4735 = t4691 + t4734;
  t3569 = t2565*t3341;
  t3574 = -1.*t2335*t3268;
  t3614 = 0. + t3569 + t3574;
  t4229 = t3908*t4227;
  t4286 = t4267*t4285;
  t4290 = t4229 + t4286;
  t4298 = 0.642788*t4290;
  t4300 = t3908*t4267;
  t4307 = -1.*t4227*t4285;
  t4345 = t4300 + t4307;
  t4355 = 0.766044*t4345;
  t4373 = t4298 + t4355;
  t3650 = -1.*t1570*t293*t2421;
  t3669 = -1.*t1575*t2335;
  t3679 = 0. + t3650 + t3669;
  t4741 = t3908*t4735;
  t4762 = t4760*t4285;
  t4763 = t4741 + t4762;
  t4784 = 0.642788*t4763;
  t4792 = t3908*t4760;
  t4794 = -1.*t4735*t4285;
  t4796 = t4792 + t4794;
  t4797 = 0.766044*t4796;
  t4798 = t4784 + t4797;
  t3686 = -1.*t293*t1619*t2335;
  t3690 = t1570*t293*t3341;
  t3712 = 0. + t3686 + t3690;
  t4546 = t3908*t4539;
  t4557 = t4554*t4285;
  t4560 = t4546 + t4557;
  t4561 = 0.642788*t4560;
  t4565 = t3908*t4554;
  t4574 = -1.*t4539*t4285;
  t4587 = t4565 + t4574;
  t4599 = 0.766044*t4587;
  t4604 = t4561 + t4599;
  t3721 = t293*t1619*t2421;
  t3728 = t1575*t3341;
  t3746 = 0. + t3721 + t3728;
  t3783 = 0. + t3347 + t3358;
  t3809 = t293*t1619*t2565;
  t3819 = -1.*t1570*t293*t3268;
  t3820 = 0. + t3809 + t3819;
  t3871 = -1.*t293*t1619*t1538;
  t3880 = -1.*t1575*t3268;
  t3890 = 0. + t3871 + t3880;
  t4872 = -0.766044*t4290;
  t4876 = 0.642788*t4345;
  t4878 = t4872 + t4876;
  t4919 = -0.766044*t4763;
  t4922 = 0.642788*t4796;
  t4943 = t4919 + t4922;
  t4882 = -0.766044*t4560;
  t4884 = 0.642788*t4587;
  t4898 = t4882 + t4884;
  p_output1[0]=0. - 1.*t3*t3428*t3469*t3507 + t3428*t3547*t3614 - 1.*t2575*t3*t3428*t6;
  p_output1[1]=0. + t3428*t3547*t3712 - 1.*t3*t3428*t3469*t3746 - 1.*t3*t3428*t3679*t6;
  p_output1[2]=0. + t3428*t3547*t3820 - 1.*t3*t3428*t3469*t3890 - 1.*t3*t3428*t3783*t6;
  p_output1[3]=0. + t2575*t3428*t4373 + t3428*t3507*t4604 + t3428*t3614*t4798;
  p_output1[4]=0. + t3428*t3679*t4373 + t3428*t3746*t4604 + t3428*t3712*t4798;
  p_output1[5]=0. + t3428*t3783*t4373 + t3428*t3890*t4604 + t3428*t3820*t4798;
  p_output1[6]=0. + t2575*t3428*t4878 + t3428*t3507*t4898 + t3428*t3614*t4943;
  p_output1[7]=0. + t3428*t3679*t4878 + t3428*t3746*t4898 + t3428*t3712*t4943;
  p_output1[8]=0. + t3428*t3783*t4878 + t3428*t3890*t4898 + t3428*t3820*t4943;
}



void R_LeftToeFront_to_RightToeFront_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
