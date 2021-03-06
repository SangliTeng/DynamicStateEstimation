/*
 * Automatically Generated from Mathematica.
 * Sat 21 Mar 2020 21:39:04 GMT-07:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJp_hip_rotation_right_src.h"

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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t678;
  double t11;
  double t1080;
  double t1130;
  double t1154;
  double t1162;
  double t97;
  double t117;
  double t1349;
  double t2359;
  double t1204;
  double t2506;
  double t2528;
  double t2529;
  double t2646;
  double t2641;
  double t2659;
  double t2666;
  double t2685;
  double t2689;
  double t2690;
  double t2419;
  double t2453;
  double t2474;
  double t2706;
  double t2707;
  double t2709;
  double t1428;
  double t1491;
  double t1762;
  double t2016;
  double t130;
  double t398;
  double t2701;
  double t2744;
  double t2746;
  double t2750;
  double t2766;
  double t2772;
  double t1161;
  double t1174;
  double t1181;
  double t2801;
  double t2802;
  double t2804;
  double t2811;
  double t2816;
  double t2818;
  double t2832;
  double t2835;
  double t2839;
  double t2920;
  double t2925;
  double t2927;
  double t2987;
  double t2989;
  double t2995;
  double t3041;
  double t3044;
  double t3049;
  double t3062;
  double t3070;
  double t3073;
  double t3054;
  double t3093;
  double t3095;
  double t3097;
  double t3109;
  double t3111;
  double t2896;
  double t2897;
  double t2903;
  double t2911;
  double t2919;
  double t3146;
  double t3147;
  double t3149;
  double t2880;
  double t2934;
  double t2936;
  double t2943;
  double t2997;
  double t2998;
  double t3002;
  double t3232;
  double t3236;
  double t3237;
  double t3240;
  double t3241;
  double t3249;
  double t3250;
  double t3010;
  double t3012;
  double t3015;
  double t1004;
  double t1304;
  double t2399;
  double t2560;
  double t2589;
  double t2590;
  double t2592;
  double t2599;
  double t2601;
  double t2608;
  double t2612;
  double t2618;
  double t2628;
  double t2630;
  double t2631;
  double t2632;
  double t2635;
  double t2795;
  double t2869;
  double t3336;
  double t3340;
  double t3343;
  double t3404;
  double t3406;
  double t3415;
  double t3401;
  double t3416;
  double t3418;
  double t3432;
  double t2980;
  double t2983;
  double t2986;
  double t2996;
  double t3005;
  double t3017;
  double t3019;
  double t3021;
  double t3026;
  double t3029;
  double t3031;
  double t3455;
  double t3456;
  double t3458;
  double t3191;
  double t3592;
  double t3595;
  double t3598;
  double t3217;
  double t3677;
  double t3679;
  double t3681;
  double t3669;
  double t3672;
  double t3675;
  double t3676;
  double t3691;
  double t3694;
  double t3699;
  double t3736;
  double t3738;
  double t3742;
  double t3808;
  double t3809;
  double t3814;
  double t3229;
  double t3230;
  double t3255;
  double t2810;
  double t2821;
  double t2840;
  double t2843;
  double t2849;
  double t2852;
  double t2861;
  double t3055;
  double t2739;
  double t2752;
  double t2754;
  double t2756;
  double t2757;
  double t2779;
  double t2780;
  double t2789;
  double t2791;
  double t3394;
  double t3397;
  double t3433;
  double t3050;
  double t3053;
  double t3057;
  double t3074;
  double t3080;
  double t3081;
  double t3087;
  double t3901;
  double t3903;
  double t3904;
  double t3913;
  double t3925;
  double t3193;
  double t3195;
  double t3197;
  double t3207;
  double t3952;
  double t3959;
  double t3960;
  double t3973;
  double t3974;
  double t3978;
  double t3733;
  double t3735;
  double t3751;
  double t3753;
  double t3763;
  double t3764;
  double t3766;
  double t3992;
  double t3993;
  double t3655;
  double t3664;
  double t3705;
  double t3257;
  double t3258;
  double t3260;
  double t3856;
  double t3859;
  double t3864;
  double t3865;
  double t3868;
  double t3869;
  double t3870;
  double t3873;
  double t3876;
  double t3101;
  double t3107;
  double t2673;
  double t2697;
  double t2702;
  double t2703;
  double t2705;
  double t2710;
  double t2711;
  double t2716;
  double t2720;
  double t3439;
  double t3443;
  double t3447;
  double t3091;
  double t3099;
  double t3108;
  double t3115;
  double t3119;
  double t3128;
  double t3130;
  double t3905;
  double t3911;
  double t3926;
  double t3928;
  double t3930;
  double t3934;
  double t3935;
  double t3936;
  double t3941;
  double t4048;
  double t4050;
  double t4064;
  double t4066;
  double t3980;
  double t3986;
  double t3988;
  double t3990;
  double t3991;
  double t4000;
  double t4001;
  double t4003;
  double t4005;
  double t3711;
  double t3720;
  double t3722;
  double t3264;
  double t3279;
  double t3284;
  double t3285;
  double t3292;
  double t3299;
  double t3300;
  double t3324;
  double t3886;
  double t3888;
  double t3889;
  double t3891;
  double t4012;
  double t4013;
  double t4014;
  double t4016;
  double t3174;
  double t3177;
  double t2904;
  double t2928;
  double t2952;
  double t2959;
  double t2961;
  double t2973;
  double t2974;
  double t2975;
  double t3451;
  double t3468;
  double t3478;
  double t3517;
  double t3518;
  double t3530;
  double t3536;
  double t3537;
  double t3539;
  double t3560;
  double t3961;
  double t3962;
  double t3965;
  double t3968;
  double t4051;
  double t4055;
  double t4056;
  double t4058;
  double t3139;
  double t3154;
  double t3156;
  double t3161;
  double t3165;
  double t3171;
  double t3181;
  double t3182;
  double t4097;
  double t4102;
  double t4103;
  double t4143;
  double t4144;
  double t3771;
  double t4192;
  double t4193;
  double t4195;
  double t3784;
  double t3806;
  double t3815;
  double t3819;
  double t3823;
  double t3824;
  double t3825;
  double t3828;
  double t3829;
  double t3832;
  double t3834;
  double t3835;
  t678 = Sin(var1[3]);
  t11 = Cos(var1[4]);
  t1080 = Cos(var1[14]);
  t1130 = -1.*t1080;
  t1154 = 1. + t1130;
  t1162 = Sin(var1[14]);
  t97 = Cos(var1[5]);
  t117 = Sin(var1[13]);
  t1349 = Cos(var1[13]);
  t2359 = Sin(var1[5]);
  t1204 = Sin(var1[4]);
  t2506 = -1.*t11*t97*t117*t678;
  t2528 = -1.*t1349*t11*t678*t2359;
  t2529 = t2506 + t2528;
  t2646 = Cos(var1[3]);
  t2641 = -1.*t97*t678*t1204;
  t2659 = t2646*t2359;
  t2666 = t2641 + t2659;
  t2685 = -1.*t2646*t97;
  t2689 = -1.*t678*t1204*t2359;
  t2690 = t2685 + t2689;
  t2419 = -0.135*t1154;
  t2453 = 0.049*t1162;
  t2474 = 0. + t2419 + t2453;
  t2706 = t1349*t2666;
  t2707 = -1.*t117*t2690;
  t2709 = t2706 + t2707;
  t1428 = -1.*t1349;
  t1491 = 1. + t1428;
  t1762 = -0.135*t1491;
  t2016 = 0. + t1762;
  t130 = 0.135*t117;
  t398 = 0. + t130;
  t2701 = -1.*t117*t2666;
  t2744 = t2646*t97;
  t2746 = t678*t1204*t2359;
  t2750 = t2744 + t2746;
  t2766 = t117*t2750;
  t2772 = t2706 + t2766;
  t1161 = -0.049*t1154;
  t1174 = -0.135*t1162;
  t1181 = 0. + t1161 + t1174;
  t2801 = -1.*t2646*t97*t1204;
  t2802 = -1.*t678*t2359;
  t2804 = t2801 + t2802;
  t2811 = t97*t678;
  t2816 = -1.*t2646*t1204*t2359;
  t2818 = t2811 + t2816;
  t2832 = t117*t2804;
  t2835 = t1349*t2818;
  t2839 = t2832 + t2835;
  t2920 = t117*t2666;
  t2925 = t1349*t2690;
  t2927 = t2920 + t2925;
  t2987 = t2646*t11*t97*t117;
  t2989 = t1349*t2646*t11*t2359;
  t2995 = t2987 + t2989;
  t3041 = t2646*t97*t1204;
  t3044 = t678*t2359;
  t3049 = t3041 + t3044;
  t3062 = t1349*t3049;
  t3070 = t117*t2818;
  t3073 = t3062 + t3070;
  t3054 = -1.*t117*t3049;
  t3093 = -1.*t97*t678;
  t3095 = t2646*t1204*t2359;
  t3097 = t3093 + t3095;
  t3109 = -1.*t117*t3097;
  t3111 = t3062 + t3109;
  t2896 = -0.135*t1080;
  t2897 = -0.049*t1162;
  t2903 = t2896 + t2897;
  t2911 = 0.049*t1080;
  t2919 = t2911 + t1174;
  t3146 = t117*t3049;
  t3147 = t1349*t3097;
  t3149 = t3146 + t3147;
  t2880 = -1.*t1080*t2646*t11;
  t2934 = t11*t1162*t678;
  t2936 = t1080*t2927;
  t2943 = t2934 + t2936;
  t2997 = t1349*t2646*t11*t97;
  t2998 = -1.*t2646*t11*t117*t2359;
  t3002 = t2997 + t2998;
  t3232 = -1.*t2646*t11*t97*t117;
  t3236 = -1.*t1349*t2646*t11*t2359;
  t3237 = t3232 + t3236;
  t3240 = -0.09*t3237;
  t3241 = -0.135*t1080*t3002;
  t3249 = t2474*t3002;
  t3250 = -0.049*t1162*t3002;
  t3010 = t2646*t1162*t1204;
  t3012 = t1080*t2995;
  t3015 = t3010 + t3012;
  t1004 = -1.*t11*t97*t398*t678;
  t1304 = t1181*t678*t1204;
  t2399 = -1.*t2016*t11*t678*t2359;
  t2560 = t2474*t2529;
  t2589 = -1.*t1349*t11*t97*t678;
  t2590 = t11*t117*t678*t2359;
  t2592 = t2589 + t2590;
  t2599 = -0.09*t2592;
  t2601 = -1.*t1162*t678*t1204;
  t2608 = t1080*t2529;
  t2612 = t2601 + t2608;
  t2618 = -0.135*t2612;
  t2628 = t1080*t678*t1204;
  t2630 = t1162*t2529;
  t2631 = t2628 + t2630;
  t2632 = -0.049*t2631;
  t2635 = t1004 + t1304 + t2399 + t2560 + t2599 + t2618 + t2632;
  t2795 = -1.*t2646*t11*t1181;
  t2869 = t2646*t11*t1162;
  t3336 = -1.*t2646*t97*t117*t1204;
  t3340 = -1.*t1349*t2646*t1204*t2359;
  t3343 = t3336 + t3340;
  t3404 = t1349*t11*t97*t678;
  t3406 = -1.*t11*t117*t678*t2359;
  t3415 = t3404 + t3406;
  t3401 = -0.09*t2529;
  t3416 = -0.135*t1080*t3415;
  t3418 = t2474*t3415;
  t3432 = -0.049*t1162*t3415;
  t2980 = t2646*t11*t97*t398;
  t2983 = -1.*t2646*t1181*t1204;
  t2986 = t2016*t2646*t11*t2359;
  t2996 = t2474*t2995;
  t3005 = -0.09*t3002;
  t3017 = -0.135*t3015;
  t3019 = -1.*t1080*t2646*t1204;
  t3021 = t1162*t2995;
  t3026 = t3019 + t3021;
  t3029 = -0.049*t3026;
  t3031 = t2980 + t2983 + t2986 + t2996 + t3005 + t3017 + t3029;
  t3455 = t11*t97*t117*t678;
  t3456 = t1349*t11*t678*t2359;
  t3458 = t3455 + t3456;
  t3191 = -1.*t11*t1181*t678;
  t3592 = -1.*t97*t117*t678*t1204;
  t3595 = -1.*t1349*t678*t1204*t2359;
  t3598 = t3592 + t3595;
  t3217 = -1.*t1080*t11*t678;
  t3677 = -1.*t1349*t97*t1204;
  t3679 = t117*t1204*t2359;
  t3681 = t3677 + t3679;
  t3669 = t97*t117*t1204;
  t3672 = t1349*t1204*t2359;
  t3675 = t3669 + t3672;
  t3676 = -0.09*t3675;
  t3691 = -0.135*t1080*t3681;
  t3694 = t2474*t3681;
  t3699 = -0.049*t1162*t3681;
  t3736 = -1.*t11*t97*t117;
  t3738 = -1.*t1349*t11*t2359;
  t3742 = t3736 + t3738;
  t3808 = -1.*t97*t117*t1204;
  t3809 = -1.*t1349*t1204*t2359;
  t3814 = t3808 + t3809;
  t3229 = t2016*t2646*t11*t97;
  t3230 = -1.*t2646*t11*t398*t2359;
  t3255 = t3229 + t3230 + t3240 + t3241 + t3249 + t3250;
  t2810 = t398*t2804;
  t2821 = t2016*t2818;
  t2840 = t2474*t2839;
  t2843 = t1349*t2804;
  t2849 = -1.*t117*t2818;
  t2852 = t2843 + t2849;
  t2861 = -0.09*t2852;
  t3055 = t3054 + t2835;
  t2739 = t2016*t2666;
  t2752 = t398*t2750;
  t2754 = t1349*t2750;
  t2756 = t2701 + t2754;
  t2757 = -0.09*t2756;
  t2779 = -0.135*t1080*t2772;
  t2780 = t2474*t2772;
  t2789 = -0.049*t1162*t2772;
  t2791 = t2739 + t2752 + t2757 + t2779 + t2780 + t2789;
  t3394 = t2016*t11*t97*t678;
  t3397 = -1.*t11*t398*t678*t2359;
  t3433 = t3394 + t3397 + t3401 + t3416 + t3418 + t3432;
  t3050 = t2016*t3049;
  t3053 = t398*t2818;
  t3057 = -0.09*t3055;
  t3074 = -0.135*t1080*t3073;
  t3080 = t2474*t3073;
  t3081 = -0.049*t1162*t3073;
  t3087 = t3050 + t3053 + t3057 + t3074 + t3080 + t3081;
  t3901 = t97*t678*t1204;
  t3903 = -1.*t2646*t2359;
  t3904 = t3901 + t3903;
  t3913 = -1.*t117*t3904;
  t3925 = t3913 + t2925;
  t3193 = t398*t2666;
  t3195 = t2016*t2690;
  t3197 = t2474*t2927;
  t3207 = -0.09*t2709;
  t3952 = t1349*t3904;
  t3959 = t117*t2690;
  t3960 = t3952 + t3959;
  t3973 = t1349*t11*t97;
  t3974 = -1.*t11*t117*t2359;
  t3978 = t3973 + t3974;
  t3733 = -1.*t11*t97*t398;
  t3735 = -1.*t2016*t11*t2359;
  t3751 = t2474*t3742;
  t3753 = -1.*t1349*t11*t97;
  t3763 = t11*t117*t2359;
  t3764 = t3753 + t3763;
  t3766 = -0.09*t3764;
  t3992 = -0.135*t1080*t3742;
  t3993 = -0.049*t1162*t3742;
  t3655 = -1.*t2016*t97*t1204;
  t3664 = t398*t1204*t2359;
  t3705 = t3655 + t3664 + t3676 + t3691 + t3694 + t3699;
  t3257 = 0.135*t1349*t2646*t11*t97;
  t3258 = -0.135*t2646*t11*t117*t2359;
  t3260 = t3257 + t3258 + t3240 + t3241 + t3249 + t3250;
  t3856 = -0.135*t117*t3049;
  t3859 = 0.135*t1349*t2818;
  t3864 = -0.135*t1080*t3055;
  t3865 = t2474*t3055;
  t3868 = -0.049*t1162*t3055;
  t3869 = -1.*t1349*t3049;
  t3870 = t3869 + t2849;
  t3873 = -0.09*t3870;
  t3876 = t3856 + t3859 + t3864 + t3865 + t3868 + t3873;
  t3101 = -1.*t1349*t3097;
  t3107 = t3054 + t3101;
  t2673 = 0.135*t1349*t2666;
  t2697 = -0.135*t117*t2690;
  t2702 = -1.*t1349*t2690;
  t2703 = t2701 + t2702;
  t2705 = -0.09*t2703;
  t2710 = -0.135*t1080*t2709;
  t2711 = t2474*t2709;
  t2716 = -0.049*t1162*t2709;
  t2720 = t2673 + t2697 + t2705 + t2710 + t2711 + t2716;
  t3439 = 0.135*t1349*t11*t97*t678;
  t3443 = -0.135*t11*t117*t678*t2359;
  t3447 = t3439 + t3443 + t3401 + t3416 + t3418 + t3432;
  t3091 = 0.135*t1349*t3049;
  t3099 = -0.135*t117*t3097;
  t3108 = -0.09*t3107;
  t3115 = -0.135*t1080*t3111;
  t3119 = t2474*t3111;
  t3128 = -0.049*t1162*t3111;
  t3130 = t3091 + t3099 + t3108 + t3115 + t3119 + t3128;
  t3905 = -0.135*t117*t3904;
  t3911 = 0.135*t1349*t2690;
  t3926 = -0.135*t1080*t3925;
  t3928 = t2474*t3925;
  t3930 = -0.049*t1162*t3925;
  t3934 = -1.*t1349*t3904;
  t3935 = t3934 + t2707;
  t3936 = -0.09*t3935;
  t3941 = t3905 + t3911 + t3926 + t3928 + t3930 + t3936;
  t4048 = -1.*t117*t2750;
  t4050 = t3952 + t4048;
  t4064 = -1.*t1349*t2750;
  t4066 = t3913 + t4064;
  t3980 = -0.049*t1080*t3978;
  t3986 = t2919*t3978;
  t3988 = 0.135*t1162*t3978;
  t3990 = t3980 + t3986 + t3988;
  t3991 = var2[14]*t3990;
  t4000 = -0.135*t11*t97*t117;
  t4001 = -0.135*t1349*t11*t2359;
  t4003 = t4000 + t4001 + t3992 + t3751 + t3993 + t3766;
  t4005 = var2[13]*t4003;
  t3711 = -0.135*t1349*t97*t1204;
  t3720 = 0.135*t117*t1204*t2359;
  t3722 = t3711 + t3720 + t3676 + t3691 + t3694 + t3699;
  t3264 = -1.*t2646*t2903*t1204;
  t3279 = t2919*t2995;
  t3284 = -0.049*t3015;
  t3285 = t1080*t2646*t1204;
  t3292 = -1.*t1162*t2995;
  t3299 = t3285 + t3292;
  t3300 = -0.135*t3299;
  t3324 = t3264 + t3279 + t3284 + t3300;
  t3886 = -0.049*t1080*t3073;
  t3888 = t2919*t3073;
  t3889 = 0.135*t1162*t3073;
  t3891 = t3886 + t3888 + t3889;
  t4012 = -0.049*t1080*t3111;
  t4013 = t2919*t3111;
  t4014 = 0.135*t1162*t3111;
  t4016 = t4012 + t4013 + t4014;
  t3174 = -1.*t1162*t3149;
  t3177 = t2880 + t3174;
  t2904 = -1.*t11*t2903*t678;
  t2928 = t2919*t2927;
  t2952 = -0.049*t2943;
  t2959 = t1080*t11*t678;
  t2961 = -1.*t1162*t2927;
  t2973 = t2959 + t2961;
  t2974 = -0.135*t2973;
  t2975 = t2904 + t2928 + t2952 + t2974;
  t3451 = -1.*t2903*t678*t1204;
  t3468 = t2919*t3458;
  t3478 = t1162*t678*t1204;
  t3517 = t1080*t3458;
  t3518 = t3478 + t3517;
  t3530 = -0.049*t3518;
  t3536 = -1.*t1162*t3458;
  t3537 = t2628 + t3536;
  t3539 = -0.135*t3537;
  t3560 = t3451 + t3468 + t3530 + t3539;
  t3961 = -0.049*t1080*t3960;
  t3962 = t2919*t3960;
  t3965 = 0.135*t1162*t3960;
  t3968 = t3961 + t3962 + t3965;
  t4051 = -0.049*t1080*t4050;
  t4055 = t2919*t4050;
  t4056 = 0.135*t1162*t4050;
  t4058 = t4051 + t4055 + t4056;
  t3139 = t2646*t11*t2903;
  t3154 = t2919*t3149;
  t3156 = -1.*t2646*t11*t1162;
  t3161 = t1080*t3149;
  t3165 = t3156 + t3161;
  t3171 = -0.049*t3165;
  t3181 = -0.135*t3177;
  t3182 = t3139 + t3154 + t3171 + t3181;
  t4097 = -0.049*t1080;
  t4102 = 0.135*t1162;
  t4103 = t4097 + t4102;
  t4143 = t117*t3904;
  t4144 = t4143 + t2754;
  t3771 = -1.*t1162*t1204;
  t4192 = t11*t97*t117;
  t4193 = t1349*t11*t2359;
  t4195 = t4192 + t4193;
  t3784 = t1080*t1204;
  t3806 = -1.*t11*t2903;
  t3815 = t2919*t3814;
  t3819 = t11*t1162;
  t3823 = t1080*t3814;
  t3824 = t3819 + t3823;
  t3825 = -0.049*t3824;
  t3828 = t1080*t11;
  t3829 = -1.*t1162*t3814;
  t3832 = t3828 + t3829;
  t3834 = -0.135*t3832;
  t3835 = t3806 + t3815 + t3825 + t3834;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(t2795 + t2810 + t2821 + t2840 + t2861 - 0.135*(t1080*t2839 + t2869) - 0.049*(t1162*t2839 + t2880))*var2[3] + t2635*var2[4] + t2791*var2[5] + t2720*var2[13] + t2975*var2[14];
  p_output1[10]=(-0.135*t2943 + t3191 + t3193 + t3195 + t3197 + t3207 - 0.049*(t1162*t2927 + t3217))*var2[3] + t3031*var2[4] + t3087*var2[5] + t3130*var2[13] + t3182*var2[14];
  p_output1[11]=0;
  p_output1[12]=t2635*var2[3] + (-1.*t1204*t2016*t2359*t2646 + t2795 + t2474*t3343 - 0.135*(t2869 + t1080*t3343) - 0.049*(t2880 + t1162*t3343) - 1.*t1204*t2646*t398*t97 - 0.09*(t117*t1204*t2359*t2646 - 1.*t1204*t1349*t2646*t97))*var2[4] + t3255*var2[5] + t3260*var2[13] + t3324*var2[14];
  p_output1[13]=t3031*var2[3] + (t3191 + t2474*t3598 - 0.135*(t2934 + t1080*t3598) - 0.049*(t3217 + t1162*t3598) - 1.*t1204*t2016*t2359*t678 - 1.*t1204*t398*t678*t97 - 0.09*(t117*t1204*t2359*t678 - 1.*t1204*t1349*t678*t97))*var2[4] + t3433*var2[5] + t3447*var2[13] + t3560*var2[14];
  p_output1[14]=(t1181*t1204 + t3733 + t3735 + t3751 + t3766 - 0.135*(t1080*t3742 + t3771) - 0.049*(t1162*t3742 + t3784))*var2[4] + t3705*var2[5] + t3722*var2[13] + t3835*var2[14];
  p_output1[15]=t2791*var2[3] + t3255*var2[4] + (t2810 + t2821 - 0.135*t1080*t2839 - 0.049*t1162*t2839 + t2840 + t2861)*var2[5] + t3876*var2[13] + t3891*var2[14];
  p_output1[16]=t3087*var2[3] + t3433*var2[4] + (-0.135*t1080*t2927 - 0.049*t1162*t2927 + t3193 + t3195 + t3197 + t3207)*var2[5] + t3941*var2[13] + t3968*var2[14];
  p_output1[17]=t3991 + t4005 + t3705*var2[4] + (t3733 + t3735 + t3751 + t3766 + t3992 + t3993)*var2[5];
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
  p_output1[39]=t2720*var2[3] + t3260*var2[4] + t3876*var2[5] + (-0.135*t1349*t3097 - 0.135*t1080*t3107 - 0.049*t1162*t3107 + t2474*t3107 + t3856 - 0.09*(t117*t3097 + t3869))*var2[13] + t4016*var2[14];
  p_output1[40]=t3130*var2[3] + t3447*var2[4] + t3941*var2[5] + (-0.135*t1349*t2750 + t3905 - 0.09*(t2766 + t3934) - 0.135*t1080*t4066 - 0.049*t1162*t4066 + t2474*t4066)*var2[13] + t4058*var2[14];
  p_output1[41]=t3991 + t4005 + t3722*var2[4] + t4003*var2[5];
  p_output1[42]=t2975*var2[3] + t3324*var2[4] + t3891*var2[5] + t4016*var2[13] + (t2903*t3149 - 0.135*(t2869 - 1.*t1080*t3149) - 0.049*t3177 + t11*t2646*t4103)*var2[14];
  p_output1[43]=t3182*var2[3] + t3560*var2[4] + t3968*var2[5] + t4058*var2[13] + (t2903*t4144 - 0.135*(t2934 - 1.*t1080*t4144) - 0.049*(t3217 - 1.*t1162*t4144) + t11*t4103*t678)*var2[14];
  p_output1[44]=t3835*var2[4] + t3990*var2[5] + t3990*var2[13] + (-1.*t1204*t4103 + t2903*t4195 - 0.135*(t3771 - 1.*t1080*t4195) - 0.049*(t3784 - 1.*t1162*t4195))*var2[14];
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
}



void dJp_hip_rotation_right_src(double *p_output1, const double *var1,const double *var2)
{
  /* Call Subroutines */
  output1(p_output1, var1, var2);

}
