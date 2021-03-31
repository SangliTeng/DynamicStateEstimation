/*
 * Automatically Generated from Mathematica.
 * Wed 12 Feb 2020 15:27:35 GMT-08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_hip_flexion_left_src.h"

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
  double t2821;
  double t2841;
  double t2846;
  double t2817;
  double t2854;
  double t2443;
  double t2829;
  double t2863;
  double t2887;
  double t2901;
  double t2906;
  double t2912;
  double t2917;
  double t2975;
  double t2984;
  double t2987;
  double t2990;
  double t2957;
  double t2958;
  double t2961;
  double t3019;
  double t3065;
  double t3068;
  double t3074;
  double t3083;
  double t3047;
  double t3056;
  double t3064;
  double t3093;
  double t3096;
  double t3099;
  double t2669;
  double t2701;
  double t2706;
  double t2766;
  double t2931;
  double t2943;
  double t3177;
  double t3186;
  double t3187;
  double t3194;
  double t3197;
  double t3198;
  double t2988;
  double t3003;
  double t3006;
  double t3020;
  double t3025;
  double t3028;
  double t3201;
  double t3202;
  double t3212;
  double t3080;
  double t3088;
  double t3090;
  double t3108;
  double t3109;
  double t3124;
  double t3267;
  double t3269;
  double t3272;
  double t3278;
  double t3280;
  double t3281;
  double t3317;
  double t3331;
  double t3342;
  double t3369;
  double t3371;
  double t3374;
  double t3378;
  double t3385;
  double t3386;
  double t3437;
  double t3444;
  double t3445;
  double t3471;
  double t3472;
  double t3476;
  double t3482;
  double t3491;
  double t3497;
  double t3532;
  double t3538;
  double t3552;
  double t3589;
  double t3595;
  double t3602;
  double t3605;
  double t3606;
  double t3607;
  double t3663;
  double t3665;
  double t3669;
  double t3677;
  double t3684;
  double t3697;
  double t3698;
  double t3699;
  double t3739;
  double t3740;
  double t3742;
  double t3751;
  double t3752;
  double t3753;
  double t3778;
  double t3781;
  double t3816;
  double t3819;
  double t3821;
  double t3830;
  double t3831;
  double t3832;
  double t3890;
  double t3892;
  double t3923;
  double t3927;
  double t3928;
  double t3939;
  double t3940;
  double t3963;
  double t3966;
  double t3824;
  double t3825;
  double t3827;
  double t3839;
  double t3852;
  double t3853;
  double t3856;
  double t3863;
  double t3867;
  double t3868;
  double t3872;
  double t3874;
  double t3237;
  double t3257;
  double t3258;
  double t4007;
  double t4008;
  double t4011;
  double t4017;
  double t4021;
  double t4049;
  double t4052;
  double t4057;
  double t4065;
  double t4066;
  double t4070;
  double t4094;
  double t4097;
  double t4098;
  double t4104;
  double t4107;
  double t4108;
  double t3294;
  double t3297;
  double t3301;
  double t4130;
  double t4135;
  double t4140;
  double t4143;
  double t4144;
  double t4170;
  double t4171;
  double t4172;
  double t4200;
  double t4207;
  double t4210;
  t2821 = Cos(var1[5]);
  t2841 = Sin(var1[3]);
  t2846 = Sin(var1[4]);
  t2817 = Cos(var1[3]);
  t2854 = Sin(var1[5]);
  t2443 = Cos(var1[6]);
  t2829 = -1.*t2817*t2821;
  t2863 = -1.*t2841*t2846*t2854;
  t2887 = t2829 + t2863;
  t2901 = -1.*t2821*t2841*t2846;
  t2906 = t2817*t2854;
  t2912 = t2901 + t2906;
  t2917 = Sin(var1[6]);
  t2975 = Cos(var1[7]);
  t2984 = -1.*t2975;
  t2987 = 1. + t2984;
  t2990 = Sin(var1[7]);
  t2957 = t2443*t2887;
  t2958 = t2912*t2917;
  t2961 = t2957 + t2958;
  t3019 = Cos(var1[4]);
  t3065 = Cos(var1[8]);
  t3068 = -1.*t3065;
  t3074 = 1. + t3068;
  t3083 = Sin(var1[8]);
  t3047 = -1.*t3019*t2975*t2841;
  t3056 = t2961*t2990;
  t3064 = t3047 + t3056;
  t3093 = t2443*t2912;
  t3096 = -1.*t2887*t2917;
  t3099 = t3093 + t3096;
  t2669 = -1.*t2443;
  t2701 = 1. + t2669;
  t2706 = 0.135*t2701;
  t2766 = 0. + t2706;
  t2931 = -0.135*t2917;
  t2943 = 0. + t2931;
  t3177 = -1.*t2821*t2841;
  t3186 = t2817*t2846*t2854;
  t3187 = t3177 + t3186;
  t3194 = t2817*t2821*t2846;
  t3197 = t2841*t2854;
  t3198 = t3194 + t3197;
  t2988 = 0.135*t2987;
  t3003 = 0.049*t2990;
  t3006 = 0. + t2988 + t3003;
  t3020 = -0.049*t2987;
  t3025 = 0.135*t2990;
  t3028 = 0. + t3020 + t3025;
  t3201 = t2443*t3187;
  t3202 = t3198*t2917;
  t3212 = t3201 + t3202;
  t3080 = -0.049*t3074;
  t3088 = -0.09*t3083;
  t3090 = 0. + t3080 + t3088;
  t3108 = -0.09*t3074;
  t3109 = 0.049*t3083;
  t3124 = 0. + t3108 + t3109;
  t3267 = t2817*t3019*t2975;
  t3269 = t3212*t2990;
  t3272 = t3267 + t3269;
  t3278 = t2443*t3198;
  t3280 = -1.*t3187*t2917;
  t3281 = t3278 + t3280;
  t3317 = t2817*t3019*t2443*t2854;
  t3331 = t2817*t3019*t2821*t2917;
  t3342 = t3317 + t3331;
  t3369 = -1.*t2817*t2975*t2846;
  t3371 = t3342*t2990;
  t3374 = t3369 + t3371;
  t3378 = t2817*t3019*t2821*t2443;
  t3385 = -1.*t2817*t3019*t2854*t2917;
  t3386 = t3378 + t3385;
  t3437 = t3019*t2443*t2841*t2854;
  t3444 = t3019*t2821*t2841*t2917;
  t3445 = t3437 + t3444;
  t3471 = -1.*t2975*t2841*t2846;
  t3472 = t3445*t2990;
  t3476 = t3471 + t3472;
  t3482 = t3019*t2821*t2443*t2841;
  t3491 = -1.*t3019*t2841*t2854*t2917;
  t3497 = t3482 + t3491;
  t3532 = -1.*t2443*t2846*t2854;
  t3538 = -1.*t2821*t2846*t2917;
  t3552 = t3532 + t3538;
  t3589 = -1.*t3019*t2975;
  t3595 = t3552*t2990;
  t3602 = t3589 + t3595;
  t3605 = -1.*t2821*t2443*t2846;
  t3606 = t2846*t2854*t2917;
  t3607 = t3605 + t3606;
  t3663 = t2821*t2841;
  t3665 = -1.*t2817*t2846*t2854;
  t3669 = t3663 + t3665;
  t3677 = t3669*t2917;
  t3684 = t3278 + t3677;
  t3697 = t2443*t3669;
  t3698 = -1.*t3198*t2917;
  t3699 = t3697 + t3698;
  t3739 = t2821*t2841*t2846;
  t3740 = -1.*t2817*t2854;
  t3742 = t3739 + t3740;
  t3751 = t2443*t3742;
  t3752 = t2887*t2917;
  t3753 = t3751 + t3752;
  t3778 = -1.*t3742*t2917;
  t3781 = t2957 + t3778;
  t3816 = t3019*t2821*t2443;
  t3819 = -1.*t3019*t2854*t2917;
  t3821 = t3816 + t3819;
  t3830 = -1.*t3019*t2443*t2854;
  t3831 = -1.*t3019*t2821*t2917;
  t3832 = t3830 + t3831;
  t3890 = -1.*t2443*t3187;
  t3892 = t3890 + t3698;
  t3923 = t2817*t2821;
  t3927 = t2841*t2846*t2854;
  t3928 = t3923 + t3927;
  t3939 = -1.*t3928*t2917;
  t3940 = t3751 + t3939;
  t3963 = -1.*t2443*t3928;
  t3966 = t3963 + t3778;
  t3824 = 0.135*t2975*t3821;
  t3825 = t3821*t3006;
  t3827 = t3821*t2990*t3090;
  t3839 = t3832*t3124;
  t3852 = t3065*t3821*t2990;
  t3853 = t3832*t3083;
  t3856 = t3852 + t3853;
  t3863 = -0.049*t3856;
  t3867 = t3065*t3832;
  t3868 = -1.*t3821*t2990*t3083;
  t3872 = t3867 + t3868;
  t3874 = -0.09*t3872;
  t3237 = t2975*t3212;
  t3257 = -1.*t2817*t3019*t2990;
  t3258 = t3237 + t3257;
  t4007 = 0.135*t2975;
  t4008 = -0.049*t2990;
  t4011 = t4007 + t4008;
  t4017 = 0.049*t2975;
  t4021 = t4017 + t3025;
  t4049 = t2443*t3928;
  t4052 = t3742*t2917;
  t4057 = t4049 + t4052;
  t4065 = t2975*t4057;
  t4066 = -1.*t3019*t2841*t2990;
  t4070 = t4065 + t4066;
  t4094 = t3019*t2443*t2854;
  t4097 = t3019*t2821*t2917;
  t4098 = t4094 + t4097;
  t4104 = t2975*t4098;
  t4107 = t2846*t2990;
  t4108 = t4104 + t4107;
  t3294 = t3065*t3281;
  t3297 = -1.*t3272*t3083;
  t3301 = t3294 + t3297;
  t4130 = 0.049*t3065;
  t4135 = t4130 + t3088;
  t4140 = -0.09*t3065;
  t4143 = -0.049*t3083;
  t4144 = t4140 + t4143;
  t4170 = t3019*t2975*t2841;
  t4171 = t4057*t2990;
  t4172 = t4170 + t4171;
  t4200 = -1.*t2975*t2846;
  t4207 = t4098*t2990;
  t4210 = t4200 + t4207;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t2766*t2887 + t2912*t2943 + t2961*t3006 + 0.135*(t2961*t2975 + t2841*t2990*t3019) - 1.*t2841*t3019*t3028 + t3064*t3090 - 0.09*(-1.*t3064*t3083 + t3065*t3099) - 0.049*(t3064*t3065 + t3083*t3099) + t3099*t3124;
  p_output1[10]=t2817*t3019*t3028 + t2766*t3187 + t2943*t3198 + t3006*t3212 + 0.135*t3258 + t3090*t3272 + t3124*t3281 - 0.049*(t3065*t3272 + t3083*t3281) - 0.09*t3301;
  p_output1[11]=0;
  p_output1[12]=t2766*t2817*t2854*t3019 + t2817*t2821*t2943*t3019 - 1.*t2817*t2846*t3028 + t3006*t3342 + 0.135*(t2817*t2846*t2990 + t2975*t3342) + t3090*t3374 + t3124*t3386 - 0.09*(-1.*t3083*t3374 + t3065*t3386) - 0.049*(t3065*t3374 + t3083*t3386);
  p_output1[13]=t2766*t2841*t2854*t3019 + t2821*t2841*t2943*t3019 - 1.*t2841*t2846*t3028 + t3006*t3445 + 0.135*(t2841*t2846*t2990 + t2975*t3445) + t3090*t3476 + t3124*t3497 - 0.09*(-1.*t3083*t3476 + t3065*t3497) - 0.049*(t3065*t3476 + t3083*t3497);
  p_output1[14]=-1.*t2766*t2846*t2854 - 1.*t2821*t2846*t2943 - 1.*t3019*t3028 + t3006*t3552 + 0.135*(t2990*t3019 + t2975*t3552) + t3090*t3602 + t3124*t3607 - 0.09*(-1.*t3083*t3602 + t3065*t3607) - 0.049*(t3065*t3602 + t3083*t3607);
  p_output1[15]=t2766*t3198 + t2943*t3669 + 0.135*t2975*t3684 + t3006*t3684 + t2990*t3090*t3684 + t3124*t3699 - 0.09*(-1.*t2990*t3083*t3684 + t3065*t3699) - 0.049*(t2990*t3065*t3684 + t3083*t3699);
  p_output1[16]=t2887*t2943 + t2766*t3742 + 0.135*t2975*t3753 + t3006*t3753 + t2990*t3090*t3753 + t3124*t3781 - 0.09*(-1.*t2990*t3083*t3753 + t3065*t3781) - 0.049*(t2990*t3065*t3753 + t3083*t3781);
  p_output1[17]=t2766*t2821*t3019 - 1.*t2854*t2943*t3019 + t3824 + t3825 + t3827 + t3839 + t3863 + t3874;
  p_output1[18]=0.135*t2917*t3187 - 0.135*t2443*t3198 + 0.135*t2975*t3281 + t3006*t3281 + t2990*t3090*t3281 + t3124*t3892 - 0.09*(-1.*t2990*t3083*t3281 + t3065*t3892) - 0.049*(t2990*t3065*t3281 + t3083*t3892);
  p_output1[19]=-0.135*t2443*t3742 + 0.135*t2917*t3928 + 0.135*t2975*t3940 + t3006*t3940 + t2990*t3090*t3940 + t3124*t3966 - 0.09*(-1.*t2990*t3083*t3940 + t3065*t3966) - 0.049*(t2990*t3065*t3940 + t3083*t3966);
  p_output1[20]=-0.135*t2443*t2821*t3019 + 0.135*t2854*t2917*t3019 + t3824 + t3825 + t3827 + t3839 + t3863 + t3874;
  p_output1[21]=0.135*(-1.*t2817*t2975*t3019 - 1.*t2990*t3212) - 0.049*t3065*t3258 + 0.09*t3083*t3258 + t3090*t3258 + t2817*t3019*t4011 + t3212*t4021;
  p_output1[22]=t2841*t3019*t4011 + t4021*t4057 + 0.135*(t3047 - 1.*t2990*t4057) - 0.049*t3065*t4070 + 0.09*t3083*t4070 + t3090*t4070;
  p_output1[23]=-1.*t2846*t4011 + t4021*t4098 + 0.135*(t2846*t2975 - 1.*t2990*t4098) - 0.049*t3065*t4108 + 0.09*t3083*t4108 + t3090*t4108;
  p_output1[24]=-0.09*(-1.*t3065*t3272 - 1.*t3083*t3281) - 0.049*t3301 + t3281*t4135 + t3272*t4144;
  p_output1[25]=t3940*t4135 + t4144*t4172 - 0.09*(-1.*t3083*t3940 - 1.*t3065*t4172) - 0.049*(t3065*t3940 - 1.*t3083*t4172);
  p_output1[26]=t3821*t4135 + t4144*t4210 - 0.09*(-1.*t3083*t3821 - 1.*t3065*t4210) - 0.049*(t3065*t3821 - 1.*t3083*t4210);
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



void Jp_hip_flexion_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
