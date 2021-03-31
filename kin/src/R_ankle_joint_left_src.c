/*
 * Automatically Generated from Mathematica.
 * Wed 12 Feb 2020 15:27:57 GMT-08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_ankle_joint_left_src.h"

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
  double t2646;
  double t3825;
  double t4858;
  double t3909;
  double t4907;
  double t3824;
  double t5611;
  double t5655;
  double t7242;
  double t4164;
  double t4913;
  double t5427;
  double t7303;
  double t2359;
  double t7414;
  double t7427;
  double t7429;
  double t3594;
  double t3687;
  double t3701;
  double t5489;
  double t7323;
  double t7327;
  double t7358;
  double t7359;
  double t7372;
  double t7464;
  double t7508;
  double t7385;
  double t7477;
  double t7491;
  double t2348;
  double t7512;
  double t7534;
  double t7536;
  double t7552;
  double t7500;
  double t7539;
  double t7548;
  double t2231;
  double t7554;
  double t7557;
  double t7564;
  double t1910;
  double t7612;
  double t7617;
  double t7619;
  double t7604;
  double t7605;
  double t7606;
  double t7636;
  double t7641;
  double t7646;
  double t7601;
  double t7608;
  double t7623;
  double t7624;
  double t7626;
  double t7628;
  double t7635;
  double t7647;
  double t7649;
  double t7653;
  double t7654;
  double t7655;
  double t7577;
  double t7650;
  double t7656;
  double t7657;
  double t7660;
  double t7661;
  double t7666;
  double t7705;
  double t7709;
  double t7711;
  double t7687;
  double t7688;
  double t7690;
  double t7694;
  double t7695;
  double t7698;
  double t7700;
  double t7712;
  double t7713;
  double t7715;
  double t7717;
  double t7718;
  double t7714;
  double t7723;
  double t7725;
  double t7730;
  double t7734;
  double t7737;
  double t7551;
  double t7565;
  double t7570;
  double t7579;
  double t7582;
  double t7583;
  double t7659;
  double t7667;
  double t7669;
  double t7672;
  double t7673;
  double t7675;
  double t7726;
  double t7739;
  double t7740;
  double t7744;
  double t7746;
  double t7749;
  t2646 = Cos(var1[3]);
  t3825 = Cos(var1[5]);
  t4858 = Sin(var1[4]);
  t3909 = Sin(var1[3]);
  t4907 = Sin(var1[5]);
  t3824 = Cos(var1[6]);
  t5611 = t2646*t3825*t4858;
  t5655 = t3909*t4907;
  t7242 = t5611 + t5655;
  t4164 = -1.*t3825*t3909;
  t4913 = t2646*t4858*t4907;
  t5427 = t4164 + t4913;
  t7303 = Sin(var1[6]);
  t2359 = Cos(var1[8]);
  t7414 = t3824*t7242;
  t7427 = -1.*t5427*t7303;
  t7429 = t7414 + t7427;
  t3594 = Cos(var1[4]);
  t3687 = Cos(var1[7]);
  t3701 = t2646*t3594*t3687;
  t5489 = t3824*t5427;
  t7323 = t7242*t7303;
  t7327 = t5489 + t7323;
  t7358 = Sin(var1[7]);
  t7359 = t7327*t7358;
  t7372 = t3701 + t7359;
  t7464 = Sin(var1[8]);
  t7508 = Cos(var1[9]);
  t7385 = t2359*t7372;
  t7477 = t7429*t7464;
  t7491 = t7385 + t7477;
  t2348 = Sin(var1[9]);
  t7512 = t2359*t7429;
  t7534 = -1.*t7372*t7464;
  t7536 = t7512 + t7534;
  t7552 = Cos(var1[10]);
  t7500 = -1.*t2348*t7491;
  t7539 = t7508*t7536;
  t7548 = t7500 + t7539;
  t2231 = Sin(var1[10]);
  t7554 = t7508*t7491;
  t7557 = t2348*t7536;
  t7564 = t7554 + t7557;
  t1910 = Sin(var1[11]);
  t7612 = t3825*t3909*t4858;
  t7617 = -1.*t2646*t4907;
  t7619 = t7612 + t7617;
  t7604 = t2646*t3825;
  t7605 = t3909*t4858*t4907;
  t7606 = t7604 + t7605;
  t7636 = t3824*t7619;
  t7641 = -1.*t7606*t7303;
  t7646 = t7636 + t7641;
  t7601 = t3594*t3687*t3909;
  t7608 = t3824*t7606;
  t7623 = t7619*t7303;
  t7624 = t7608 + t7623;
  t7626 = t7624*t7358;
  t7628 = t7601 + t7626;
  t7635 = t2359*t7628;
  t7647 = t7646*t7464;
  t7649 = t7635 + t7647;
  t7653 = t2359*t7646;
  t7654 = -1.*t7628*t7464;
  t7655 = t7653 + t7654;
  t7577 = Cos(var1[11]);
  t7650 = -1.*t2348*t7649;
  t7656 = t7508*t7655;
  t7657 = t7650 + t7656;
  t7660 = t7508*t7649;
  t7661 = t2348*t7655;
  t7666 = t7660 + t7661;
  t7705 = t3594*t3825*t3824;
  t7709 = -1.*t3594*t4907*t7303;
  t7711 = t7705 + t7709;
  t7687 = -1.*t3687*t4858;
  t7688 = t3594*t3824*t4907;
  t7690 = t3594*t3825*t7303;
  t7694 = t7688 + t7690;
  t7695 = t7694*t7358;
  t7698 = t7687 + t7695;
  t7700 = t2359*t7698;
  t7712 = t7711*t7464;
  t7713 = t7700 + t7712;
  t7715 = t2359*t7711;
  t7717 = -1.*t7698*t7464;
  t7718 = t7715 + t7717;
  t7714 = -1.*t2348*t7713;
  t7723 = t7508*t7718;
  t7725 = t7714 + t7723;
  t7730 = t7508*t7713;
  t7734 = t2348*t7718;
  t7737 = t7730 + t7734;
  t7551 = t2231*t7548;
  t7565 = t7552*t7564;
  t7570 = t7551 + t7565;
  t7579 = t7552*t7548;
  t7582 = -1.*t2231*t7564;
  t7583 = t7579 + t7582;
  t7659 = t2231*t7657;
  t7667 = t7552*t7666;
  t7669 = t7659 + t7667;
  t7672 = t7552*t7657;
  t7673 = -1.*t2231*t7666;
  t7675 = t7672 + t7673;
  t7726 = t2231*t7725;
  t7739 = t7552*t7737;
  t7740 = t7726 + t7739;
  t7744 = t7552*t7725;
  t7746 = -1.*t2231*t7737;
  t7749 = t7744 + t7746;
  p_output1[0]=t1910*t7570 - 1.*t7577*t7583;
  p_output1[1]=t1910*t7669 - 1.*t7577*t7675;
  p_output1[2]=t1910*t7740 - 1.*t7577*t7749;
  p_output1[3]=t7570*t7577 + t1910*t7583;
  p_output1[4]=t7577*t7669 + t1910*t7675;
  p_output1[5]=t7577*t7740 + t1910*t7749;
  p_output1[6]=-1.*t3687*t7327 + t2646*t3594*t7358;
  p_output1[7]=t3594*t3909*t7358 - 1.*t3687*t7624;
  p_output1[8]=-1.*t4858*t7358 - 1.*t3687*t7694;
}



void R_ankle_joint_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
