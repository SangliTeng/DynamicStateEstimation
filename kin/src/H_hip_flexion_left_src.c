/*
 * Automatically Generated from Mathematica.
 * Wed 12 Feb 2020 15:27:37 GMT-08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_hip_flexion_left_src.h"

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
  double t2052;
  double t3014;
  double t1812;
  double t2549;
  double t3025;
  double t1648;
  double t3147;
  double t3151;
  double t3161;
  double t2907;
  double t3034;
  double t3044;
  double t3174;
  double t944;
  double t3267;
  double t3278;
  double t3399;
  double t3407;
  double t3415;
  double t3362;
  double t3371;
  double t3376;
  double t3301;
  double t3317;
  double t3284;
  double t3285;
  double t3294;
  double t3296;
  double t3302;
  double t3305;
  double t3124;
  double t3223;
  double t3237;
  double t3437;
  double t3444;
  double t3445;
  double t3446;
  double t3450;
  double t3453;
  double t3389;
  double t3420;
  double t3433;
  double t3502;
  double t3504;
  double t3519;
  double t3520;
  double t3524;
  double t3529;
  double t3472;
  double t3479;
  double t3482;
  double t3738;
  double t3739;
  double t3815;
  double t3816;
  double t3584;
  double t3585;
  double t3595;
  double t3702;
  double t3705;
  double t3708;
  double t3712;
  double t3719;
  double t3726;
  double t3743;
  double t3748;
  double t3767;
  double t3770;
  double t3788;
  double t3792;
  double t3820;
  double t3832;
  double t3852;
  double t3856;
  double t3867;
  double t3872;
  double t3603;
  double t3606;
  double t3608;
  double t3628;
  double t3632;
  double t3636;
  t2052 = Cos(var1[5]);
  t3014 = Sin(var1[3]);
  t1812 = Cos(var1[3]);
  t2549 = Sin(var1[4]);
  t3025 = Sin(var1[5]);
  t1648 = Cos(var1[6]);
  t3147 = -1.*t2052*t3014;
  t3151 = t1812*t2549*t3025;
  t3161 = t3147 + t3151;
  t2907 = t1812*t2052*t2549;
  t3034 = t3014*t3025;
  t3044 = t2907 + t3034;
  t3174 = Sin(var1[6]);
  t944 = Cos(var1[8]);
  t3267 = Cos(var1[4]);
  t3278 = Cos(var1[7]);
  t3399 = t1812*t2052;
  t3407 = t3014*t2549*t3025;
  t3415 = t3399 + t3407;
  t3362 = t2052*t3014*t2549;
  t3371 = -1.*t1812*t3025;
  t3376 = t3362 + t3371;
  t3301 = Sin(var1[7]);
  t3317 = Sin(var1[8]);
  t3284 = t1812*t3267*t3278;
  t3285 = t1648*t3161;
  t3294 = t3044*t3174;
  t3296 = t3285 + t3294;
  t3302 = t3296*t3301;
  t3305 = t3284 + t3302;
  t3124 = t1648*t3044;
  t3223 = -1.*t3161*t3174;
  t3237 = t3124 + t3223;
  t3437 = t3267*t3278*t3014;
  t3444 = t1648*t3415;
  t3445 = t3376*t3174;
  t3446 = t3444 + t3445;
  t3450 = t3446*t3301;
  t3453 = t3437 + t3450;
  t3389 = t1648*t3376;
  t3420 = -1.*t3415*t3174;
  t3433 = t3389 + t3420;
  t3502 = -1.*t3278*t2549;
  t3504 = t3267*t1648*t3025;
  t3519 = t3267*t2052*t3174;
  t3520 = t3504 + t3519;
  t3524 = t3520*t3301;
  t3529 = t3502 + t3524;
  t3472 = t3267*t2052*t1648;
  t3479 = -1.*t3267*t3025*t3174;
  t3482 = t3472 + t3479;
  t3738 = -1.*t3278;
  t3739 = 1. + t3738;
  t3815 = -1.*t944;
  t3816 = 1. + t3815;
  t3584 = t944*t3305;
  t3585 = t3237*t3317;
  t3595 = t3584 + t3585;
  t3702 = -1.*t1648;
  t3705 = 1. + t3702;
  t3708 = 0.135*t3705;
  t3712 = 0. + t3708;
  t3719 = -0.135*t3174;
  t3726 = 0. + t3719;
  t3743 = 0.135*t3739;
  t3748 = 0.049*t3301;
  t3767 = 0. + t3743 + t3748;
  t3770 = -0.049*t3739;
  t3788 = 0.135*t3301;
  t3792 = 0. + t3770 + t3788;
  t3820 = -0.049*t3816;
  t3832 = -0.09*t3317;
  t3852 = 0. + t3820 + t3832;
  t3856 = -0.09*t3816;
  t3867 = 0.049*t3317;
  t3872 = 0. + t3856 + t3867;
  t3603 = t944*t3453;
  t3606 = t3433*t3317;
  t3608 = t3603 + t3606;
  t3628 = t944*t3529;
  t3632 = t3482*t3317;
  t3636 = t3628 + t3632;
  p_output1[0]=t3305*t3317 - 1.*t3237*t944;
  p_output1[1]=t3317*t3453 - 1.*t3433*t944;
  p_output1[2]=t3317*t3529 - 1.*t3482*t944;
  p_output1[3]=0.;
  p_output1[4]=t3595;
  p_output1[5]=t3608;
  p_output1[6]=t3636;
  p_output1[7]=0.;
  p_output1[8]=-1.*t3278*t3296 + t1812*t3267*t3301;
  p_output1[9]=t3014*t3267*t3301 - 1.*t3278*t3446;
  p_output1[10]=-1.*t2549*t3301 - 1.*t3278*t3520;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.135*(t3278*t3296 - 1.*t1812*t3267*t3301) - 0.049*t3595 + t3161*t3712 + t3044*t3726 + t3296*t3767 + t1812*t3267*t3792 + t3305*t3852 + t3237*t3872 - 0.09*(-1.*t3305*t3317 + t3237*t944) + var1[0];
  p_output1[13]=0. + 0.135*(-1.*t3014*t3267*t3301 + t3278*t3446) - 0.049*t3608 + t3415*t3712 + t3376*t3726 + t3446*t3767 + t3014*t3267*t3792 + t3453*t3852 + t3433*t3872 - 0.09*(-1.*t3317*t3453 + t3433*t944) + var1[1];
  p_output1[14]=0. + 0.135*(t2549*t3301 + t3278*t3520) - 0.049*t3636 + t3025*t3267*t3712 + t2052*t3267*t3726 + t3520*t3767 - 1.*t2549*t3792 + t3529*t3852 + t3482*t3872 - 0.09*(-1.*t3317*t3529 + t3482*t944) + var1[2];
  p_output1[15]=1.;
}



void H_hip_flexion_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
