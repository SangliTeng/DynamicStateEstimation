/*
 * Automatically Generated from Mathematica.
 * Sat 21 Mar 2020 21:38:20 GMT-07:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJp_hip_rotation_left_src.h"

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
  double t506;
  double t85;
  double t190;
  double t221;
  double t571;
  double t58;
  double t1056;
  double t1123;
  double t1128;
  double t498;
  double t589;
  double t933;
  double t1163;
  double t2066;
  double t2124;
  double t2152;
  double t2060;
  double t2395;
  double t3010;
  double t3018;
  double t3030;
  double t1357;
  double t3062;
  double t3064;
  double t2354;
  double t2373;
  double t2384;
  double t2415;
  double t2551;
  double t2997;
  double t2999;
  double t3003;
  double t3006;
  double t3085;
  double t3032;
  double t3037;
  double t3111;
  double t3124;
  double t3125;
  double t3136;
  double t3193;
  double t3198;
  double t3203;
  double t3270;
  double t3271;
  double t3273;
  double t3257;
  double t3260;
  double t3263;
  double t3135;
  double t3139;
  double t3291;
  double t3296;
  double t3298;
  double t3352;
  double t3364;
  double t3366;
  double t3384;
  double t3393;
  double t3398;
  double t3419;
  double t3421;
  double t3423;
  double t3376;
  double t3441;
  double t3442;
  double t3484;
  double t3486;
  double t3487;
  double t3218;
  double t3219;
  double t3220;
  double t3174;
  double t3175;
  double t3180;
  double t3206;
  double t3210;
  double t3616;
  double t3622;
  double t3626;
  double t3324;
  double t3469;
  double t3471;
  double t3474;
  double t3680;
  double t3685;
  double t3688;
  double t3694;
  double t3695;
  double t3698;
  double t3714;
  double t3499;
  double t3504;
  double t3505;
  double t3093;
  double t3097;
  double t3098;
  double t3100;
  double t3106;
  double t3110;
  double t3126;
  double t3140;
  double t3141;
  double t3146;
  double t3151;
  double t3154;
  double t3163;
  double t3166;
  double t3168;
  double t3170;
  double t3171;
  double t3308;
  double t3814;
  double t3817;
  double t3824;
  double t3318;
  double t3862;
  double t3863;
  double t3864;
  double t3859;
  double t3877;
  double t3880;
  double t3882;
  double t3457;
  double t3466;
  double t3480;
  double t3489;
  double t3493;
  double t3509;
  double t3510;
  double t3519;
  double t3526;
  double t3529;
  double t3538;
  double t3903;
  double t3905;
  double t3909;
  double t3566;
  double t3967;
  double t3982;
  double t3983;
  double t3577;
  double t4042;
  double t4047;
  double t4049;
  double t4025;
  double t4029;
  double t4031;
  double t4041;
  double t4050;
  double t4052;
  double t4054;
  double t4085;
  double t4086;
  double t4089;
  double t4130;
  double t4132;
  double t4134;
  double t3673;
  double t3675;
  double t3715;
  double t3267;
  double t3276;
  double t3278;
  double t3283;
  double t3285;
  double t3286;
  double t3301;
  double t3379;
  double t3009;
  double t3039;
  double t3046;
  double t3048;
  double t3058;
  double t3065;
  double t3071;
  double t3076;
  double t3078;
  double t3851;
  double t3858;
  double t3886;
  double t4220;
  double t4223;
  double t4226;
  double t4228;
  double t4232;
  double t3552;
  double t3554;
  double t3563;
  double t3564;
  double t3370;
  double t3371;
  double t3383;
  double t3403;
  double t3404;
  double t3410;
  double t3412;
  double t4275;
  double t4278;
  double t4279;
  double t4074;
  double t4077;
  double t4079;
  double t4080;
  double t4082;
  double t4083;
  double t4092;
  double t4292;
  double t4293;
  double t4321;
  double t4327;
  double t4331;
  double t4022;
  double t4023;
  double t4055;
  double t3724;
  double t3727;
  double t3735;
  double t4170;
  double t4175;
  double t4178;
  double t4181;
  double t4183;
  double t4186;
  double t4187;
  double t4190;
  double t4198;
  double t3428;
  double t3439;
  double t985;
  double t1233;
  double t1341;
  double t1375;
  double t1977;
  double t2327;
  double t2688;
  double t2916;
  double t2929;
  double t3889;
  double t3896;
  double t3897;
  double t4219;
  double t4227;
  double t4239;
  double t4242;
  double t4244;
  double t4245;
  double t4246;
  double t4248;
  double t4249;
  double t4433;
  double t4440;
  double t3415;
  double t3426;
  double t3440;
  double t3443;
  double t3446;
  double t3452;
  double t3454;
  double t4458;
  double t4460;
  double t4301;
  double t4304;
  double t4312;
  double t4316;
  double t4332;
  double t4333;
  double t4334;
  double t4340;
  double t4347;
  double t4059;
  double t4063;
  double t4064;
  double t4202;
  double t4204;
  double t4207;
  double t4208;
  double t4377;
  double t4378;
  double t4380;
  double t4384;
  double t3742;
  double t3743;
  double t3747;
  double t3749;
  double t3750;
  double t3761;
  double t3768;
  double t3772;
  double t3183;
  double t3211;
  double t3221;
  double t3233;
  double t3235;
  double t3236;
  double t3240;
  double t3243;
  double t3641;
  double t3643;
  double t4281;
  double t4282;
  double t4283;
  double t4284;
  double t4463;
  double t4464;
  double t4466;
  double t4469;
  double t3901;
  double t3911;
  double t3912;
  double t3914;
  double t3921;
  double t3922;
  double t3923;
  double t3925;
  double t3927;
  double t3933;
  double t4491;
  double t4492;
  double t4493;
  double t4514;
  double t4519;
  double t3615;
  double t3628;
  double t3629;
  double t3633;
  double t3636;
  double t3640;
  double t3654;
  double t3656;
  double t4562;
  double t4563;
  double t4564;
  double t4097;
  double t4102;
  double t4127;
  double t4135;
  double t4139;
  double t4140;
  double t4147;
  double t4149;
  double t4151;
  double t4152;
  double t4153;
  double t4154;
  double t4156;
  t506 = Cos(var1[3]);
  t85 = Cos(var1[5]);
  t190 = Sin(var1[3]);
  t221 = Sin(var1[4]);
  t571 = Sin(var1[5]);
  t58 = Cos(var1[6]);
  t1056 = -1.*t506*t85;
  t1123 = -1.*t190*t221*t571;
  t1128 = t1056 + t1123;
  t498 = -1.*t85*t190*t221;
  t589 = t506*t571;
  t933 = t498 + t589;
  t1163 = Sin(var1[6]);
  t2066 = t58*t933;
  t2124 = -1.*t1128*t1163;
  t2152 = t2066 + t2124;
  t2060 = Cos(var1[7]);
  t2395 = Sin(var1[7]);
  t3010 = t506*t85;
  t3018 = t190*t221*t571;
  t3030 = t3010 + t3018;
  t1357 = -1.*t933*t1163;
  t3062 = t3030*t1163;
  t3064 = t2066 + t3062;
  t2354 = -1.*t2060;
  t2373 = 1. + t2354;
  t2384 = 0.135*t2373;
  t2415 = 0.049*t2395;
  t2551 = 0. + t2384 + t2415;
  t2997 = -1.*t58;
  t2999 = 1. + t2997;
  t3003 = 0.135*t2999;
  t3006 = 0. + t3003;
  t3085 = Cos(var1[4]);
  t3032 = -0.135*t1163;
  t3037 = 0. + t3032;
  t3111 = -1.*t3085*t58*t190*t571;
  t3124 = -1.*t3085*t85*t190*t1163;
  t3125 = t3111 + t3124;
  t3136 = 0.135*t2395;
  t3193 = t58*t1128;
  t3198 = t933*t1163;
  t3203 = t3193 + t3198;
  t3270 = -1.*t506*t85*t221;
  t3271 = -1.*t190*t571;
  t3273 = t3270 + t3271;
  t3257 = t85*t190;
  t3260 = -1.*t506*t221*t571;
  t3263 = t3257 + t3260;
  t3135 = -0.049*t2373;
  t3139 = 0. + t3135 + t3136;
  t3291 = t58*t3263;
  t3296 = t3273*t1163;
  t3298 = t3291 + t3296;
  t3352 = t506*t85*t221;
  t3364 = t190*t571;
  t3366 = t3352 + t3364;
  t3384 = t58*t3366;
  t3393 = t3263*t1163;
  t3398 = t3384 + t3393;
  t3419 = -1.*t85*t190;
  t3421 = t506*t221*t571;
  t3423 = t3419 + t3421;
  t3376 = -1.*t3366*t1163;
  t3441 = -1.*t3423*t1163;
  t3442 = t3384 + t3441;
  t3484 = t506*t3085*t58*t571;
  t3486 = t506*t3085*t85*t1163;
  t3487 = t3484 + t3486;
  t3218 = t2060*t3203;
  t3219 = t3085*t190*t2395;
  t3220 = t3218 + t3219;
  t3174 = 0.135*t2060;
  t3175 = -0.049*t2395;
  t3180 = t3174 + t3175;
  t3206 = 0.049*t2060;
  t3210 = t3206 + t3136;
  t3616 = t58*t3423;
  t3622 = t3366*t1163;
  t3626 = t3616 + t3622;
  t3324 = -1.*t506*t3085*t2060;
  t3469 = t506*t3085*t85*t58;
  t3471 = -1.*t506*t3085*t571*t1163;
  t3474 = t3469 + t3471;
  t3680 = -1.*t506*t3085*t58*t571;
  t3685 = -1.*t506*t3085*t85*t1163;
  t3688 = t3680 + t3685;
  t3694 = -0.09*t3688;
  t3695 = 0.135*t2060*t3474;
  t3698 = t3474*t2551;
  t3714 = -0.049*t3474*t2395;
  t3499 = t2060*t3487;
  t3504 = t506*t221*t2395;
  t3505 = t3499 + t3504;
  t3093 = -1.*t3085*t3006*t190*t571;
  t3097 = -1.*t3085*t85*t190*t3037;
  t3098 = -1.*t3085*t85*t58*t190;
  t3100 = t3085*t190*t571*t1163;
  t3106 = t3098 + t3100;
  t3110 = -0.09*t3106;
  t3126 = t3125*t2551;
  t3140 = t190*t221*t3139;
  t3141 = t2060*t3125;
  t3146 = -1.*t190*t221*t2395;
  t3151 = t3141 + t3146;
  t3154 = 0.135*t3151;
  t3163 = t2060*t190*t221;
  t3166 = t3125*t2395;
  t3168 = t3163 + t3166;
  t3170 = -0.049*t3168;
  t3171 = t3093 + t3097 + t3110 + t3126 + t3140 + t3154 + t3170;
  t3308 = -1.*t506*t3085*t3139;
  t3814 = -1.*t506*t58*t221*t571;
  t3817 = -1.*t506*t85*t221*t1163;
  t3824 = t3814 + t3817;
  t3318 = t506*t3085*t2395;
  t3862 = t3085*t85*t58*t190;
  t3863 = -1.*t3085*t190*t571*t1163;
  t3864 = t3862 + t3863;
  t3859 = -0.09*t3125;
  t3877 = 0.135*t2060*t3864;
  t3880 = t3864*t2551;
  t3882 = -0.049*t3864*t2395;
  t3457 = t506*t3085*t3006*t571;
  t3466 = t506*t3085*t85*t3037;
  t3480 = -0.09*t3474;
  t3489 = t3487*t2551;
  t3493 = -1.*t506*t221*t3139;
  t3509 = 0.135*t3505;
  t3510 = -1.*t506*t2060*t221;
  t3519 = t3487*t2395;
  t3526 = t3510 + t3519;
  t3529 = -0.049*t3526;
  t3538 = t3457 + t3466 + t3480 + t3489 + t3493 + t3509 + t3529;
  t3903 = t3085*t58*t190*t571;
  t3905 = t3085*t85*t190*t1163;
  t3909 = t3903 + t3905;
  t3566 = -1.*t3085*t190*t3139;
  t3967 = -1.*t58*t190*t221*t571;
  t3982 = -1.*t85*t190*t221*t1163;
  t3983 = t3967 + t3982;
  t3577 = -1.*t3085*t2060*t190;
  t4042 = -1.*t85*t58*t221;
  t4047 = t221*t571*t1163;
  t4049 = t4042 + t4047;
  t4025 = t58*t221*t571;
  t4029 = t85*t221*t1163;
  t4031 = t4025 + t4029;
  t4041 = -0.09*t4031;
  t4050 = 0.135*t2060*t4049;
  t4052 = t4049*t2551;
  t4054 = -0.049*t4049*t2395;
  t4085 = -1.*t3085*t58*t571;
  t4086 = -1.*t3085*t85*t1163;
  t4089 = t4085 + t4086;
  t4130 = -1.*t58*t221*t571;
  t4132 = -1.*t85*t221*t1163;
  t4134 = t4130 + t4132;
  t3673 = t506*t3085*t85*t3006;
  t3675 = -1.*t506*t3085*t571*t3037;
  t3715 = t3673 + t3675 + t3694 + t3695 + t3698 + t3714;
  t3267 = t3006*t3263;
  t3276 = t3273*t3037;
  t3278 = t58*t3273;
  t3283 = -1.*t3263*t1163;
  t3285 = t3278 + t3283;
  t3286 = -0.09*t3285;
  t3301 = t3298*t2551;
  t3379 = t3291 + t3376;
  t3009 = t3006*t933;
  t3039 = t3030*t3037;
  t3046 = t58*t3030;
  t3048 = t3046 + t1357;
  t3058 = -0.09*t3048;
  t3065 = 0.135*t2060*t3064;
  t3071 = t3064*t2551;
  t3076 = -0.049*t3064*t2395;
  t3078 = t3009 + t3039 + t3058 + t3065 + t3071 + t3076;
  t3851 = t3085*t85*t3006*t190;
  t3858 = -1.*t3085*t190*t571*t3037;
  t3886 = t3851 + t3858 + t3859 + t3877 + t3880 + t3882;
  t4220 = t85*t190*t221;
  t4223 = -1.*t506*t571;
  t4226 = t4220 + t4223;
  t4228 = -1.*t4226*t1163;
  t4232 = t3193 + t4228;
  t3552 = t3006*t1128;
  t3554 = t933*t3037;
  t3563 = -0.09*t2152;
  t3564 = t3203*t2551;
  t3370 = t3006*t3366;
  t3371 = t3263*t3037;
  t3383 = -0.09*t3379;
  t3403 = 0.135*t2060*t3398;
  t3404 = t3398*t2551;
  t3410 = -0.049*t3398*t2395;
  t3412 = t3370 + t3371 + t3383 + t3403 + t3404 + t3410;
  t4275 = t58*t4226;
  t4278 = t1128*t1163;
  t4279 = t4275 + t4278;
  t4074 = -1.*t3085*t3006*t571;
  t4077 = -1.*t3085*t85*t3037;
  t4079 = -1.*t3085*t85*t58;
  t4080 = t3085*t571*t1163;
  t4082 = t4079 + t4080;
  t4083 = -0.09*t4082;
  t4092 = t4089*t2551;
  t4292 = 0.135*t2060*t4089;
  t4293 = -0.049*t4089*t2395;
  t4321 = t3085*t85*t58;
  t4327 = -1.*t3085*t571*t1163;
  t4331 = t4321 + t4327;
  t4022 = -1.*t85*t3006*t221;
  t4023 = t221*t571*t3037;
  t4055 = t4022 + t4023 + t4041 + t4050 + t4052 + t4054;
  t3724 = -0.135*t506*t3085*t85*t58;
  t3727 = 0.135*t506*t3085*t571*t1163;
  t3735 = t3724 + t3727 + t3694 + t3695 + t3698 + t3714;
  t4170 = -0.135*t58*t3263;
  t4175 = 0.135*t3366*t1163;
  t4178 = 0.135*t2060*t3379;
  t4181 = -1.*t58*t3366;
  t4183 = t4181 + t3283;
  t4186 = -0.09*t4183;
  t4187 = t3379*t2551;
  t4190 = -0.049*t3379*t2395;
  t4198 = t4170 + t4175 + t4178 + t4186 + t4187 + t4190;
  t3428 = -1.*t58*t3423;
  t3439 = t3428 + t3376;
  t985 = -0.135*t58*t933;
  t1233 = 0.135*t1128*t1163;
  t1341 = -1.*t58*t1128;
  t1375 = t1341 + t1357;
  t1977 = -0.09*t1375;
  t2327 = 0.135*t2060*t2152;
  t2688 = t2152*t2551;
  t2916 = -0.049*t2152*t2395;
  t2929 = t985 + t1233 + t1977 + t2327 + t2688 + t2916;
  t3889 = -0.135*t3085*t85*t58*t190;
  t3896 = 0.135*t3085*t190*t571*t1163;
  t3897 = t3889 + t3896 + t3859 + t3877 + t3880 + t3882;
  t4219 = -0.135*t58*t1128;
  t4227 = 0.135*t4226*t1163;
  t4239 = 0.135*t2060*t4232;
  t4242 = -1.*t58*t4226;
  t4244 = t4242 + t2124;
  t4245 = -0.09*t4244;
  t4246 = t4232*t2551;
  t4248 = -0.049*t4232*t2395;
  t4249 = t4219 + t4227 + t4239 + t4245 + t4246 + t4248;
  t4433 = -1.*t58*t3030;
  t4440 = t4433 + t4228;
  t3415 = -0.135*t58*t3366;
  t3426 = 0.135*t3423*t1163;
  t3440 = -0.09*t3439;
  t3443 = 0.135*t2060*t3442;
  t3446 = t3442*t2551;
  t3452 = -0.049*t3442*t2395;
  t3454 = t3415 + t3426 + t3440 + t3443 + t3446 + t3452;
  t4458 = -1.*t3030*t1163;
  t4460 = t4275 + t4458;
  t4301 = 0.135*t3085*t58*t571;
  t4304 = 0.135*t3085*t85*t1163;
  t4312 = t4301 + t4304 + t4292 + t4083 + t4092 + t4293;
  t4316 = var2[6]*t4312;
  t4332 = -0.049*t2060*t4331;
  t4333 = t4331*t3210;
  t4334 = -0.135*t4331*t2395;
  t4340 = t4332 + t4333 + t4334;
  t4347 = var2[7]*t4340;
  t4059 = 0.135*t85*t58*t221;
  t4063 = -0.135*t221*t571*t1163;
  t4064 = t4059 + t4063 + t4041 + t4050 + t4052 + t4054;
  t4202 = -0.049*t2060*t3398;
  t4204 = t3398*t3210;
  t4207 = -0.135*t3398*t2395;
  t4208 = t4202 + t4204 + t4207;
  t4377 = -0.049*t2060*t3442;
  t4378 = t3442*t3210;
  t4380 = -0.135*t3442*t2395;
  t4384 = t4377 + t4378 + t4380;
  t3742 = -1.*t506*t221*t3180;
  t3743 = t3487*t3210;
  t3747 = -0.049*t3505;
  t3749 = t506*t2060*t221;
  t3750 = -1.*t3487*t2395;
  t3761 = t3749 + t3750;
  t3768 = 0.135*t3761;
  t3772 = t3742 + t3743 + t3747 + t3768;
  t3183 = -1.*t3085*t190*t3180;
  t3211 = t3203*t3210;
  t3221 = -0.049*t3220;
  t3233 = t3085*t2060*t190;
  t3235 = -1.*t3203*t2395;
  t3236 = t3233 + t3235;
  t3240 = 0.135*t3236;
  t3243 = t3183 + t3211 + t3221 + t3240;
  t3641 = -1.*t3626*t2395;
  t3643 = t3324 + t3641;
  t4281 = -0.049*t2060*t4279;
  t4282 = t4279*t3210;
  t4283 = -0.135*t4279*t2395;
  t4284 = t4281 + t4282 + t4283;
  t4463 = -0.049*t2060*t4460;
  t4464 = t4460*t3210;
  t4466 = -0.135*t4460*t2395;
  t4469 = t4463 + t4464 + t4466;
  t3901 = -1.*t190*t221*t3180;
  t3911 = t3909*t3210;
  t3912 = t2060*t3909;
  t3914 = t190*t221*t2395;
  t3921 = t3912 + t3914;
  t3922 = -0.049*t3921;
  t3923 = -1.*t3909*t2395;
  t3925 = t3163 + t3923;
  t3927 = 0.135*t3925;
  t3933 = t3901 + t3911 + t3922 + t3927;
  t4491 = -0.049*t2060;
  t4492 = -0.135*t2395;
  t4493 = t4491 + t4492;
  t4514 = t4226*t1163;
  t4519 = t3046 + t4514;
  t3615 = t506*t3085*t3180;
  t3628 = t3626*t3210;
  t3629 = t2060*t3626;
  t3633 = -1.*t506*t3085*t2395;
  t3636 = t3629 + t3633;
  t3640 = -0.049*t3636;
  t3654 = 0.135*t3643;
  t3656 = t3615 + t3628 + t3640 + t3654;
  t4562 = t3085*t58*t571;
  t4563 = t3085*t85*t1163;
  t4564 = t4562 + t4563;
  t4097 = -1.*t221*t2395;
  t4102 = t2060*t221;
  t4127 = -1.*t3085*t3180;
  t4135 = t4134*t3210;
  t4139 = t2060*t4134;
  t4140 = t3085*t2395;
  t4147 = t4139 + t4140;
  t4149 = -0.049*t4147;
  t4151 = t3085*t2060;
  t4152 = -1.*t4134*t2395;
  t4153 = t4151 + t4152;
  t4154 = 0.135*t4153;
  t4156 = t4127 + t4135 + t4149 + t4154;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(t3267 + t3276 + t3286 + t3301 + t3308 + 0.135*(t2060*t3298 + t3318) - 0.049*(t2395*t3298 + t3324))*var2[3] + t3171*var2[4] + t3078*var2[5] + t2929*var2[6] + t3243*var2[7];
  p_output1[10]=(0.135*t3220 + t3552 + t3554 + t3563 + t3564 + t3566 - 0.049*(t2395*t3203 + t3577))*var2[3] + t3538*var2[4] + t3412*var2[5] + t3454*var2[6] + t3656*var2[7];
  p_output1[11]=0;
  p_output1[12]=t3171*var2[3] + (t3308 + t2551*t3824 + 0.135*(t3318 + t2060*t3824) - 0.049*(t3324 + t2395*t3824) - 1.*t221*t3006*t506*t571 - 1.*t221*t3037*t506*t85 - 0.09*(t1163*t221*t506*t571 - 1.*t221*t506*t58*t85))*var2[4] + t3715*var2[5] + t3735*var2[6] + t3772*var2[7];
  p_output1[13]=t3538*var2[3] + (t3566 + t2551*t3983 + 0.135*(t3219 + t2060*t3983) - 0.049*(t3577 + t2395*t3983) - 1.*t190*t221*t3006*t571 - 1.*t190*t221*t3037*t85 - 0.09*(t1163*t190*t221*t571 - 1.*t190*t221*t58*t85))*var2[4] + t3886*var2[5] + t3897*var2[6] + t3933*var2[7];
  p_output1[14]=(t221*t3139 + t4074 + t4077 + t4083 + t4092 + 0.135*(t2060*t4089 + t4097) - 0.049*(t2395*t4089 + t4102))*var2[4] + t4055*var2[5] + t4064*var2[6] + t4156*var2[7];
  p_output1[15]=t3078*var2[3] + t3715*var2[4] + (t3267 + t3276 + t3286 + 0.135*t2060*t3298 - 0.049*t2395*t3298 + t3301)*var2[5] + t4198*var2[6] + t4208*var2[7];
  p_output1[16]=t3412*var2[3] + t3886*var2[4] + (0.135*t2060*t3203 - 0.049*t2395*t3203 + t3552 + t3554 + t3563 + t3564)*var2[5] + t4249*var2[6] + t4284*var2[7];
  p_output1[17]=t4316 + t4347 + t4055*var2[4] + (t4074 + t4077 + t4083 + t4092 + t4292 + t4293)*var2[5];
  p_output1[18]=t2929*var2[3] + t3735*var2[4] + t4198*var2[5] + (0.135*t2060*t3439 - 0.049*t2395*t3439 + t2551*t3439 + t4175 - 0.09*(t1163*t3423 + t4181) + 0.135*t3423*t58)*var2[6] + t4384*var2[7];
  p_output1[19]=t3454*var2[3] + t3897*var2[4] + t4249*var2[5] + (t4227 - 0.09*(t3062 + t4242) + 0.135*t2060*t4440 - 0.049*t2395*t4440 + t2551*t4440 + 0.135*t3030*t58)*var2[6] + t4469*var2[7];
  p_output1[20]=t4316 + t4347 + t4064*var2[4] + t4312*var2[5];
  p_output1[21]=t3243*var2[3] + t3772*var2[4] + t4208*var2[5] + t4384*var2[6] + (t3180*t3626 + 0.135*(t3318 - 1.*t2060*t3626) - 0.049*t3643 + t3085*t4493*t506)*var2[7];
  p_output1[22]=t3656*var2[3] + t3933*var2[4] + t4284*var2[5] + t4469*var2[6] + (t190*t3085*t4493 + t3180*t4519 + 0.135*(t3219 - 1.*t2060*t4519) - 0.049*(t3577 - 1.*t2395*t4519))*var2[7];
  p_output1[23]=t4156*var2[4] + t4340*var2[5] + t4340*var2[6] + (-1.*t221*t4493 + t3180*t4564 + 0.135*(t4097 - 1.*t2060*t4564) - 0.049*(t4102 - 1.*t2395*t4564))*var2[7];
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
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
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



void dJp_hip_rotation_left_src(double *p_output1, const double *var1,const double *var2)
{
  /* Call Subroutines */
  output1(p_output1, var1, var2);

}
