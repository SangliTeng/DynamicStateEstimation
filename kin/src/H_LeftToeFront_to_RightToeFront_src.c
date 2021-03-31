/*
 * Automatically Generated from Mathematica.
 * Wed 23 Oct 2019 10:26:40 GMT-07:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_LeftToeFront_to_RightToeFront_src.h"

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
  double t270;
  double t351;
  double t305;
  double t311;
  double t354;
  double t395;
  double t339;
  double t367;
  double t376;
  double t264;
  double t407;
  double t420;
  double t422;
  double t475;
  double t392;
  double t425;
  double t442;
  double t256;
  double t503;
  double t515;
  double t527;
  double t605;
  double t466;
  double t572;
  double t584;
  double t166;
  double t610;
  double t614;
  double t631;
  double t796;
  double t761;
  double t763;
  double t790;
  double t812;
  double t821;
  double t840;
  double t845;
  double t868;
  double t826;
  double t872;
  double t883;
  double t913;
  double t920;
  double t955;
  double t890;
  double t972;
  double t986;
  double t999;
  double t1024;
  double t1049;
  double t987;
  double t1056;
  double t1062;
  double t1067;
  double t1085;
  double t1088;
  double t588;
  double t648;
  double t661;
  double t707;
  double t718;
  double t740;
  double t1065;
  double t1097;
  double t1113;
  double t1136;
  double t1139;
  double t1142;
  double t1308;
  double t1333;
  double t1346;
  double t1364;
  double t1406;
  double t1454;
  double t1352;
  double t1458;
  double t1460;
  double t1503;
  double t1516;
  double t1525;
  double t1502;
  double t1538;
  double t1545;
  double t1619;
  double t1622;
  double t1659;
  double t1593;
  double t1667;
  double t1669;
  double t1699;
  double t1710;
  double t1712;
  double t1202;
  double t1216;
  double t1222;
  double t1114;
  double t1159;
  double t1173;
  double t1670;
  double t1728;
  double t1742;
  double t1758;
  double t1786;
  double t1797;
  double t671;
  double t742;
  double t752;
  double t1237;
  double t1256;
  double t1271;
  double t1181;
  double t1280;
  double t64;
  double t1898;
  double t1930;
  double t1934;
  double t1746;
  double t1821;
  double t1826;
  double t1837;
  double t1849;
  double t1860;
  double t1882;
  double t1945;
  double t1960;
  double t1975;
  double t1999;
  double t2033;
  double t2068;
  double t2077;
  double t2093;
  double t145;
  double t2182;
  double t2143;
  double t2489;
  double t2513;
  double t2484;
  double t2565;
  double t2567;
  double t2575;
  double t2509;
  double t2542;
  double t2543;
  double t2589;
  double t2454;
  double t2618;
  double t2638;
  double t2643;
  double t2549;
  double t2593;
  double t2596;
  double t2649;
  double t2450;
  double t2668;
  double t2684;
  double t2696;
  double t2612;
  double t2650;
  double t2652;
  double t2700;
  double t2433;
  double t2738;
  double t2741;
  double t2747;
  double t2662;
  double t2713;
  double t2716;
  double t2758;
  double t1302;
  double t2888;
  double t2891;
  double t2895;
  double t2856;
  double t2863;
  double t2864;
  double t2927;
  double t2928;
  double t2931;
  double t2874;
  double t2904;
  double t2905;
  double t2978;
  double t2983;
  double t2987;
  double t2911;
  double t2959;
  double t2967;
  double t3035;
  double t3045;
  double t3050;
  double t2974;
  double t3022;
  double t3027;
  double t2156;
  double t2169;
  double t2170;
  double t3135;
  double t3137;
  double t3170;
  double t3119;
  double t3120;
  double t3123;
  double t3200;
  double t3207;
  double t3213;
  double t3126;
  double t3177;
  double t3178;
  double t3227;
  double t3242;
  double t3251;
  double t3180;
  double t3216;
  double t3222;
  double t2207;
  double t2208;
  double t2213;
  double t2727;
  double t2760;
  double t2766;
  double t2776;
  double t2802;
  double t2827;
  double t2828;
  double t2837;
  double t2841;
  double t2229;
  double t2236;
  double t2243;
  double t3224;
  double t3256;
  double t3265;
  double t3268;
  double t3274;
  double t3290;
  double t3294;
  double t3298;
  double t3327;
  double t2270;
  double t2275;
  double t2288;
  double t3030;
  double t3057;
  double t3064;
  double t3079;
  double t3085;
  double t3087;
  double t3090;
  double t3091;
  double t3100;
  double t2319;
  double t2335;
  double t2355;
  double t2366;
  double t2372;
  double t2377;
  double t2381;
  double t2391;
  double t2392;
  double t2412;
  double t3366;
  double t3380;
  double t3395;
  double t3432;
  double t3437;
  double t3445;
  double t3408;
  double t3411;
  double t3424;
  double t3592;
  double t3604;
  double t3663;
  double t3664;
  double t3735;
  double t3740;
  double t3774;
  double t3781;
  double t3840;
  double t3867;
  double t3563;
  double t3565;
  double t3569;
  double t3574;
  double t3576;
  double t3612;
  double t3614;
  double t3624;
  double t3629;
  double t3642;
  double t3658;
  double t3668;
  double t3669;
  double t3685;
  double t3690;
  double t3703;
  double t3727;
  double t3746;
  double t3749;
  double t3750;
  double t3757;
  double t3767;
  double t3771;
  double t3804;
  double t3806;
  double t3809;
  double t3819;
  double t3820;
  double t3828;
  double t3871;
  double t3879;
  double t3880;
  double t3898;
  double t3902;
  double t3903;
  double t4276;
  double t4277;
  double t4326;
  double t4340;
  double t4411;
  double t4412;
  double t4450;
  double t4454;
  double t4487;
  double t4493;
  double t4228;
  double t4230;
  double t4348;
  double t4350;
  double t4355;
  double t4285;
  double t4286;
  double t4290;
  double t4375;
  double t4383;
  double t4387;
  double t4413;
  double t4424;
  double t4425;
  double t4432;
  double t4437;
  double t4443;
  double t4455;
  double t4458;
  double t4459;
  double t4464;
  double t4466;
  double t4467;
  double t4496;
  double t4502;
  double t4508;
  double t4531;
  double t4538;
  double t4539;
  double t4215;
  double t4216;
  double t4222;
  double t4224;
  double t4233;
  double t4253;
  double t4263;
  double t4267;
  double t4298;
  double t4300;
  double t4307;
  double t4311;
  double t4315;
  double t4373;
  double t4391;
  double t4426;
  double t4444;
  double t4460;
  double t4468;
  double t4512;
  double t4541;
  double t4548;
  double t4549;
  double t4554;
  double t4560;
  double t4561;
  double t4565;
  double t4574;
  double t4582;
  double t4602;
  double t4604;
  double t4605;
  double t4617;
  double t4624;
  double t4625;
  double t4626;
  double t4648;
  double t4649;
  double t3547;
  double t3557;
  double t3578;
  double t3627;
  double t3660;
  double t3686;
  double t3728;
  double t3755;
  double t3773;
  double t3817;
  double t3830;
  double t3890;
  double t3906;
  double t3908;
  double t3909;
  double t3911;
  double t4111;
  double t4121;
  double t4123;
  double t4125;
  double t4129;
  double t4132;
  double t4138;
  double t4139;
  double t4141;
  double t4152;
  double t4164;
  double t4166;
  double t4174;
  double t4204;
  double t3919;
  double t3939;
  double t3963;
  double t3981;
  double t3983;
  double t3989;
  double t4003;
  double t4009;
  double t4010;
  double t4022;
  double t4048;
  double t4056;
  double t4070;
  double t4077;
  double t4083;
  double t4085;
  double t4087;
  double t4098;
  double t4691;
  double t4695;
  double t4701;
  double t4705;
  double t4712;
  double t4740;
  double t4741;
  double t4747;
  double t4749;
  double t4752;
  double t4753;
  double t4760;
  double t4762;
  double t4763;
  double t4767;
  double t4770;
  double t4557;
  double t4653;
  double t4655;
  double t4799;
  double t4802;
  double t4803;
  double t4664;
  double t4674;
  double t4676;
  t270 = Cos(var1[1]);
  t351 = Cos(var1[3]);
  t305 = Cos(var1[2]);
  t311 = Sin(var1[3]);
  t354 = Sin(var1[2]);
  t395 = Cos(var1[4]);
  t339 = -1.*t270*t305*t311;
  t367 = -1.*t351*t270*t354;
  t376 = t339 + t367;
  t264 = Sin(var1[4]);
  t407 = t351*t270*t305;
  t420 = -1.*t270*t311*t354;
  t422 = t407 + t420;
  t475 = Cos(var1[5]);
  t392 = t264*t376;
  t425 = t395*t422;
  t442 = t392 + t425;
  t256 = Sin(var1[5]);
  t503 = t395*t376;
  t515 = -1.*t264*t422;
  t527 = t503 + t515;
  t605 = Cos(var1[6]);
  t466 = -1.*t256*t442;
  t572 = t475*t527;
  t584 = t466 + t572;
  t166 = Sin(var1[6]);
  t610 = t475*t442;
  t614 = t256*t527;
  t631 = t610 + t614;
  t796 = Sin(var1[0]);
  t761 = Cos(var1[0]);
  t763 = Sin(var1[1]);
  t790 = t761*t305*t763;
  t812 = -1.*t796*t354;
  t821 = t790 + t812;
  t840 = -1.*t305*t796;
  t845 = -1.*t761*t763*t354;
  t868 = t840 + t845;
  t826 = -1.*t311*t821;
  t872 = t351*t868;
  t883 = t826 + t872;
  t913 = t351*t821;
  t920 = t311*t868;
  t955 = t913 + t920;
  t890 = t264*t883;
  t972 = t395*t955;
  t986 = t890 + t972;
  t999 = t395*t883;
  t1024 = -1.*t264*t955;
  t1049 = t999 + t1024;
  t987 = -1.*t256*t986;
  t1056 = t475*t1049;
  t1062 = t987 + t1056;
  t1067 = t475*t986;
  t1085 = t256*t1049;
  t1088 = t1067 + t1085;
  t588 = t166*t584;
  t648 = t605*t631;
  t661 = t588 + t648;
  t707 = t605*t584;
  t718 = -1.*t166*t631;
  t740 = t707 + t718;
  t1065 = t166*t1062;
  t1097 = t605*t1088;
  t1113 = t1065 + t1097;
  t1136 = t605*t1062;
  t1139 = -1.*t166*t1088;
  t1142 = t1136 + t1139;
  t1308 = t305*t796*t763;
  t1333 = t761*t354;
  t1346 = t1308 + t1333;
  t1364 = t761*t305;
  t1406 = -1.*t796*t763*t354;
  t1454 = t1364 + t1406;
  t1352 = -1.*t311*t1346;
  t1458 = t351*t1454;
  t1460 = t1352 + t1458;
  t1503 = t351*t1346;
  t1516 = t311*t1454;
  t1525 = t1503 + t1516;
  t1502 = t264*t1460;
  t1538 = t395*t1525;
  t1545 = t1502 + t1538;
  t1619 = t395*t1460;
  t1622 = -1.*t264*t1525;
  t1659 = t1619 + t1622;
  t1593 = -1.*t256*t1545;
  t1667 = t475*t1659;
  t1669 = t1593 + t1667;
  t1699 = t475*t1545;
  t1710 = t256*t1659;
  t1712 = t1699 + t1710;
  t1202 = -0.766044*t661;
  t1216 = 0.642788*t740;
  t1222 = t1202 + t1216;
  t1114 = -0.766044*t1113;
  t1159 = 0.642788*t1142;
  t1173 = t1114 + t1159;
  t1670 = t166*t1669;
  t1728 = t605*t1712;
  t1742 = t1670 + t1728;
  t1758 = t605*t1669;
  t1786 = -1.*t166*t1712;
  t1797 = t1758 + t1786;
  t671 = 0.642788*t661;
  t742 = 0.766044*t740;
  t752 = t671 + t742;
  t1237 = 0.642788*t1113;
  t1256 = 0.766044*t1142;
  t1271 = t1237 + t1256;
  t1181 = t752*t1173;
  t1280 = -1.*t1222*t1271;
  t64 = Cos(var1[8]);
  t1898 = -0.766044*t1742;
  t1930 = 0.642788*t1797;
  t1934 = t1898 + t1930;
  t1746 = 0.642788*t1742;
  t1821 = 0.766044*t1797;
  t1826 = t1746 + t1821;
  t1837 = t761*t270*t1222;
  t1849 = t763*t1173;
  t1860 = t1837 + t1849;
  t1882 = -1.*t1826*t1860;
  t1945 = t761*t270*t752;
  t1960 = t763*t1271;
  t1975 = t1945 + t1960;
  t1999 = t1934*t1975;
  t2033 = t1181 + t1280;
  t2068 = -1.*t270*t796*t2033;
  t2077 = 0. + t1882 + t1999 + t2068;
  t2093 = 1/t2077;
  t145 = Sin(var1[7]);
  t2182 = Sin(var1[8]);
  t2143 = Cos(var1[7]);
  t2489 = Cos(var1[9]);
  t2513 = Sin(var1[9]);
  t2484 = Cos(var1[10]);
  t2565 = t2143*t2489;
  t2567 = -1.*t145*t2182*t2513;
  t2575 = t2565 + t2567;
  t2509 = t2489*t145*t2182;
  t2542 = t2143*t2513;
  t2543 = t2509 + t2542;
  t2589 = Sin(var1[10]);
  t2454 = Cos(var1[11]);
  t2618 = t2484*t2575;
  t2638 = -1.*t2543*t2589;
  t2643 = t2618 + t2638;
  t2549 = t2484*t2543;
  t2593 = t2575*t2589;
  t2596 = t2549 + t2593;
  t2649 = Sin(var1[11]);
  t2450 = Cos(var1[12]);
  t2668 = t2454*t2643;
  t2684 = -1.*t2596*t2649;
  t2696 = t2668 + t2684;
  t2612 = t2454*t2596;
  t2650 = t2643*t2649;
  t2652 = t2612 + t2650;
  t2700 = Sin(var1[12]);
  t2433 = Cos(var1[13]);
  t2738 = t2450*t2696;
  t2741 = -1.*t2652*t2700;
  t2747 = t2738 + t2741;
  t2662 = t2450*t2652;
  t2713 = t2696*t2700;
  t2716 = t2662 + t2713;
  t2758 = Sin(var1[13]);
  t1302 = 0. + t1181 + t1280;
  t2888 = -1.*t2489*t145;
  t2891 = -1.*t2143*t2182*t2513;
  t2895 = t2888 + t2891;
  t2856 = t2143*t2489*t2182;
  t2863 = -1.*t145*t2513;
  t2864 = t2856 + t2863;
  t2927 = t2484*t2895;
  t2928 = -1.*t2864*t2589;
  t2931 = t2927 + t2928;
  t2874 = t2484*t2864;
  t2904 = t2895*t2589;
  t2905 = t2874 + t2904;
  t2978 = t2454*t2931;
  t2983 = -1.*t2905*t2649;
  t2987 = t2978 + t2983;
  t2911 = t2454*t2905;
  t2959 = t2931*t2649;
  t2967 = t2911 + t2959;
  t3035 = t2450*t2987;
  t3045 = -1.*t2967*t2700;
  t3050 = t3035 + t3045;
  t2974 = t2450*t2967;
  t3022 = t2987*t2700;
  t3027 = t2974 + t3022;
  t2156 = -1.*t752*t1934;
  t2169 = t1222*t1826;
  t2170 = 0. + t2156 + t2169;
  t3135 = -1.*t64*t2484*t2513;
  t3137 = -1.*t64*t2489*t2589;
  t3170 = t3135 + t3137;
  t3119 = t64*t2489*t2484;
  t3120 = -1.*t64*t2513*t2589;
  t3123 = t3119 + t3120;
  t3200 = t2454*t3170;
  t3207 = -1.*t3123*t2649;
  t3213 = t3200 + t3207;
  t3126 = t2454*t3123;
  t3177 = t3170*t2649;
  t3178 = t3126 + t3177;
  t3227 = t2450*t3213;
  t3242 = -1.*t3178*t2700;
  t3251 = t3227 + t3242;
  t3180 = t2450*t3178;
  t3216 = t3213*t2700;
  t3222 = t3180 + t3216;
  t2207 = t1271*t1934;
  t2208 = -1.*t1173*t1826;
  t2213 = 0. + t2207 + t2208;
  t2727 = t2433*t2716;
  t2760 = t2747*t2758;
  t2766 = t2727 + t2760;
  t2776 = 0.642788*t2766;
  t2802 = t2433*t2747;
  t2827 = -1.*t2716*t2758;
  t2828 = t2802 + t2827;
  t2837 = 0.766044*t2828;
  t2841 = t2776 + t2837;
  t2229 = -1.*t761*t270*t1222;
  t2236 = -1.*t763*t1173;
  t2243 = 0. + t2229 + t2236;
  t3224 = t2433*t3222;
  t3256 = t3251*t2758;
  t3265 = t3224 + t3256;
  t3268 = 0.642788*t3265;
  t3274 = t2433*t3251;
  t3290 = -1.*t3222*t2758;
  t3294 = t3274 + t3290;
  t3298 = 0.766044*t3294;
  t3327 = t3268 + t3298;
  t2270 = -1.*t270*t796*t1173;
  t2275 = t761*t270*t1934;
  t2288 = 0. + t2270 + t2275;
  t3030 = t2433*t3027;
  t3057 = t3050*t2758;
  t3064 = t3030 + t3057;
  t3079 = 0.642788*t3064;
  t3085 = t2433*t3050;
  t3087 = -1.*t3027*t2758;
  t3090 = t3085 + t3087;
  t3091 = 0.766044*t3090;
  t3100 = t3079 + t3091;
  t2319 = t270*t796*t1222;
  t2335 = t763*t1934;
  t2355 = 0. + t2319 + t2335;
  t2366 = 0. + t1945 + t1960;
  t2372 = t270*t796*t1271;
  t2377 = -1.*t761*t270*t1826;
  t2381 = 0. + t2372 + t2377;
  t2391 = -1.*t270*t796*t752;
  t2392 = -1.*t763*t1826;
  t2412 = 0. + t2391 + t2392;
  t3366 = -0.766044*t2766;
  t3380 = 0.642788*t2828;
  t3395 = t3366 + t3380;
  t3432 = -0.766044*t3265;
  t3437 = 0.642788*t3294;
  t3445 = t3432 + t3437;
  t3408 = -0.766044*t3064;
  t3411 = 0.642788*t3090;
  t3424 = t3408 + t3411;
  t3592 = -1.*t2489;
  t3604 = 1. + t3592;
  t3663 = -1.*t2484;
  t3664 = 1. + t3663;
  t3735 = -1.*t2454;
  t3740 = 1. + t3735;
  t3774 = -1.*t2450;
  t3781 = 1. + t3774;
  t3840 = -1.*t2433;
  t3867 = 1. + t3840;
  t3563 = -1.*t64;
  t3565 = 1. + t3563;
  t3569 = -0.135*t3565;
  t3574 = 0.049*t2182;
  t3576 = 0. + t3569 + t3574;
  t3612 = -0.049*t3604;
  t3614 = -0.09*t2513;
  t3624 = 0. + t3612 + t3614;
  t3629 = -0.09*t3604;
  t3642 = 0.049*t2513;
  t3658 = 0. + t3629 + t3642;
  t3668 = -0.049*t3664;
  t3669 = -0.21*t2589;
  t3685 = 0. + t3668 + t3669;
  t3690 = -0.21*t3664;
  t3703 = 0.049*t2589;
  t3727 = 0. + t3690 + t3703;
  t3746 = -0.0016*t3740;
  t3749 = -0.2707*t2649;
  t3750 = 0. + t3746 + t3749;
  t3757 = -0.2707*t3740;
  t3767 = 0.0016*t2649;
  t3771 = 0. + t3757 + t3767;
  t3804 = 0.0184*t3781;
  t3806 = -0.7055*t2700;
  t3809 = 0. + t3804 + t3806;
  t3819 = -0.7055*t3781;
  t3820 = -0.0184*t2700;
  t3828 = 0. + t3819 + t3820;
  t3871 = -0.0216*t3867;
  t3879 = -1.1135*t2758;
  t3880 = 0. + t3871 + t3879;
  t3898 = -1.1135*t3867;
  t3902 = 0.0216*t2758;
  t3903 = 0. + t3898 + t3902;
  t4276 = -1.*t305;
  t4277 = 1. + t4276;
  t4326 = -1.*t351;
  t4340 = 1. + t4326;
  t4411 = -1.*t395;
  t4412 = 1. + t4411;
  t4450 = -1.*t475;
  t4454 = 1. + t4450;
  t4487 = -1.*t605;
  t4493 = 1. + t4487;
  t4228 = -1.*t270;
  t4230 = 1. + t4228;
  t4348 = -0.049*t4340;
  t4350 = -0.21*t311;
  t4355 = 0. + t4348 + t4350;
  t4285 = -0.049*t4277;
  t4286 = -0.09*t354;
  t4290 = 0. + t4285 + t4286;
  t4375 = -0.21*t4340;
  t4383 = 0.049*t311;
  t4387 = 0. + t4375 + t4383;
  t4413 = -0.2707*t4412;
  t4424 = 0.0016*t264;
  t4425 = 0. + t4413 + t4424;
  t4432 = -0.0016*t4412;
  t4437 = -0.2707*t264;
  t4443 = 0. + t4432 + t4437;
  t4455 = 0.0184*t4454;
  t4458 = -0.7055*t256;
  t4459 = 0. + t4455 + t4458;
  t4464 = -0.7055*t4454;
  t4466 = -0.0184*t256;
  t4467 = 0. + t4464 + t4466;
  t4496 = -1.1135*t4493;
  t4502 = 0.0216*t166;
  t4508 = 0. + t4496 + t4502;
  t4531 = -0.0216*t4493;
  t4538 = -1.1135*t166;
  t4539 = 0. + t4531 + t4538;
  t4215 = -1.*t761;
  t4216 = 1. + t4215;
  t4222 = 0.135*t4216;
  t4224 = 0.1305*t761*t270;
  t4233 = 0.135*t4230;
  t4253 = 0.049*t763;
  t4263 = 0. + t4233 + t4253;
  t4267 = t761*t4263;
  t4298 = t761*t763*t4290;
  t4300 = -0.09*t4277;
  t4307 = 0.049*t354;
  t4311 = 0. + t4300 + t4307;
  t4315 = -1.*t796*t4311;
  t4373 = t4355*t821;
  t4391 = t4387*t868;
  t4426 = t4425*t883;
  t4444 = t4443*t955;
  t4460 = t4459*t986;
  t4468 = t4467*t1049;
  t4512 = t4508*t1062;
  t4541 = t4539*t1088;
  t4548 = 0.088451*t1113;
  t4549 = -1.062256*t1142;
  t4554 = 0. + t4222 + t4224 + t4267 + t4298 + t4315 + t4373 + t4391 + t4426 + t4444 + t4460 + t4468 + t4512 + t4541 + t4548 + t4549;
  t4560 = -0.049*t4230;
  t4561 = t270*t305*t4355;
  t4565 = 0.004500000000000004*t763;
  t4574 = t270*t4290;
  t4582 = -1.*t270*t4387*t354;
  t4602 = t4425*t376;
  t4604 = t4443*t422;
  t4605 = t4459*t442;
  t4617 = t4467*t527;
  t4624 = t4508*t584;
  t4625 = t4539*t631;
  t4626 = 0.088451*t661;
  t4648 = -1.062256*t740;
  t4649 = 0. + t4560 + t4561 + t4565 + t4574 + t4582 + t4602 + t4604 + t4605 + t4617 + t4624 + t4625 + t4626 + t4648;
  t3547 = 0.135*t145;
  t3557 = -0.1305*t64*t145;
  t3578 = t145*t3576;
  t3627 = t145*t2182*t3624;
  t3660 = t2143*t3658;
  t3686 = t2543*t3685;
  t3728 = t2575*t3727;
  t3755 = t2596*t3750;
  t3773 = t2643*t3771;
  t3817 = t2652*t3809;
  t3830 = t2696*t3828;
  t3890 = t2716*t3880;
  t3906 = t2747*t3903;
  t3908 = 0.088451*t2766;
  t3909 = -1.062256*t2828;
  t3911 = 0. + t3547 + t3557 + t3578 + t3627 + t3660 + t3686 + t3728 + t3755 + t3773 + t3817 + t3830 + t3890 + t3906 + t3908 + t3909;
  t4111 = -0.049*t3565;
  t4121 = -0.004500000000000004*t2182;
  t4123 = t64*t3624;
  t4125 = t64*t2489*t3685;
  t4129 = -1.*t64*t2513*t3727;
  t4132 = t3123*t3750;
  t4138 = t3170*t3771;
  t4139 = t3178*t3809;
  t4141 = t3213*t3828;
  t4152 = t3222*t3880;
  t4164 = t3251*t3903;
  t4166 = 0.088451*t3265;
  t4174 = -1.062256*t3294;
  t4204 = 0. + t4111 + t4121 + t4123 + t4125 + t4129 + t4132 + t4138 + t4139 + t4141 + t4152 + t4164 + t4166 + t4174;
  t3919 = -1.*t2143;
  t3939 = 1. + t3919;
  t3963 = -0.135*t3939;
  t3981 = -0.1305*t2143*t64;
  t3983 = t2143*t3576;
  t3989 = t2143*t2182*t3624;
  t4003 = -1.*t145*t3658;
  t4009 = t2864*t3685;
  t4010 = t2895*t3727;
  t4022 = t2905*t3750;
  t4048 = t2931*t3771;
  t4056 = t2967*t3809;
  t4070 = t2987*t3828;
  t4077 = t3027*t3880;
  t4083 = t3050*t3903;
  t4085 = 0.088451*t3064;
  t4087 = -1.062256*t3090;
  t4098 = 0. + t3963 + t3981 + t3983 + t3989 + t4003 + t4009 + t4010 + t4022 + t4048 + t4056 + t4070 + t4077 + t4083 + t4085 + t4087;
  t4691 = -0.135*t796;
  t4695 = 0.1305*t270*t796;
  t4701 = t796*t4263;
  t4705 = t796*t763*t4290;
  t4712 = t761*t4311;
  t4740 = t4355*t1346;
  t4741 = t4387*t1454;
  t4747 = t4425*t1460;
  t4749 = t4443*t1525;
  t4752 = t4459*t1545;
  t4753 = t4467*t1659;
  t4760 = t4508*t1669;
  t4762 = t4539*t1712;
  t4763 = 0.088451*t1742;
  t4767 = -1.062256*t1797;
  t4770 = 0. + t4691 + t4695 + t4701 + t4705 + t4712 + t4740 + t4741 + t4747 + t4749 + t4752 + t4753 + t4760 + t4762 + t4763 + t4767;
  t4557 = t1222*t4554;
  t4653 = -1.*t4649*t1173;
  t4655 = t4557 + t4653;
  t4799 = t761*t270*t4649;
  t4802 = t763*t4554;
  t4803 = t4799 + t4802;
  t4664 = t752*t4554;
  t4674 = -1.*t4649*t1271;
  t4676 = t4664 + t4674;
  p_output1[0]=0. + t2093*t2182*t2213 - 1.*t1302*t145*t2093*t64 - 1.*t2093*t2143*t2170*t64;
  p_output1[1]=0. + t2093*t2182*t2288 - 1.*t145*t2093*t2243*t64 - 1.*t2093*t2143*t2355*t64;
  p_output1[2]=0. + t2093*t2182*t2381 - 1.*t145*t2093*t2366*t64 - 1.*t2093*t2143*t2412*t64;
  p_output1[3]=0.;
  p_output1[4]=0. + t1302*t2093*t2841 + t2093*t2170*t3100 + t2093*t2213*t3327;
  p_output1[5]=0. + t2093*t2243*t2841 + t2093*t2355*t3100 + t2093*t2288*t3327;
  p_output1[6]=0. + t2093*t2366*t2841 + t2093*t2412*t3100 + t2093*t2381*t3327;
  p_output1[7]=0.;
  p_output1[8]=0. + t1302*t2093*t3395 + t2093*t2170*t3424 + t2093*t2213*t3445;
  p_output1[9]=0. + t2093*t2243*t3395 + t2093*t2355*t3424 + t2093*t2288*t3445;
  p_output1[10]=0. + t2093*t2366*t3395 + t2093*t2412*t3424 + t2093*t2381*t3445;
  p_output1[11]=0.;
  p_output1[12]=t1302*t2093*t3911 + t2093*t2170*t4098 + t2093*t2213*t4204 + t2093*(-1.*t1826*t4655 + t1934*t4676 - 1.*t2033*t4770);
  p_output1[13]=t2093*t2243*t3911 + t2093*t2355*t4098 + t2093*t2288*t4204 + t2093*(t1860*t4770 - 1.*t1934*t4803 - 1.*t270*t4655*t796);
  p_output1[14]=t2093*t2366*t3911 + t2093*t2412*t4098 + t2093*t2381*t4204 + t2093*(-1.*t1975*t4770 + t1826*t4803 + t270*t4676*t796);
  p_output1[15]=0. + (t1882 + t1999 + t2068)*t2093;
}



void H_LeftToeFront_to_RightToeFront_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
