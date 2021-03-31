/*
 * Automatically Generated from Mathematica.
 * Wed 12 Feb 2020 15:27:40 GMT-08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_knee_joint_left_src.h"

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
  double t4360;
  double t4352;
  double t4362;
  double t4354;
  double t4367;
  double t2956;
  double t4358;
  double t4371;
  double t4373;
  double t4376;
  double t4384;
  double t4390;
  double t4393;
  double t4414;
  double t4420;
  double t4423;
  double t4437;
  double t4404;
  double t4409;
  double t4410;
  double t4467;
  double t4493;
  double t4497;
  double t4498;
  double t4512;
  double t4484;
  double t4486;
  double t4492;
  double t4523;
  double t4525;
  double t4527;
  double t4535;
  double t4541;
  double t4542;
  double t4550;
  double t4555;
  double t4556;
  double t4558;
  double t4573;
  double t4576;
  double t4577;
  double t2963;
  double t4033;
  double t4231;
  double t4269;
  double t4394;
  double t4401;
  double t4613;
  double t4619;
  double t4620;
  double t4623;
  double t4624;
  double t4626;
  double t4429;
  double t4456;
  double t4460;
  double t4469;
  double t4470;
  double t4471;
  double t4629;
  double t4631;
  double t4632;
  double t4499;
  double t4516;
  double t4517;
  double t4528;
  double t4529;
  double t4531;
  double t4546;
  double t4551;
  double t4553;
  double t4649;
  double t4657;
  double t4662;
  double t4668;
  double t4670;
  double t4674;
  double t4560;
  double t4564;
  double t4571;
  double t4686;
  double t4689;
  double t4694;
  double t4700;
  double t4703;
  double t4704;
  double t4725;
  double t4733;
  double t4734;
  double t4749;
  double t4753;
  double t4754;
  double t4760;
  double t4761;
  double t4765;
  double t4768;
  double t4769;
  double t4771;
  double t4774;
  double t4775;
  double t4778;
  t4360 = Cos(var1[3]);
  t4352 = Cos(var1[5]);
  t4362 = Sin(var1[4]);
  t4354 = Sin(var1[3]);
  t4367 = Sin(var1[5]);
  t2956 = Cos(var1[6]);
  t4358 = -1.*t4352*t4354;
  t4371 = t4360*t4362*t4367;
  t4373 = t4358 + t4371;
  t4376 = t4360*t4352*t4362;
  t4384 = t4354*t4367;
  t4390 = t4376 + t4384;
  t4393 = Sin(var1[6]);
  t4414 = Cos(var1[7]);
  t4420 = -1.*t4414;
  t4423 = 1. + t4420;
  t4437 = Sin(var1[7]);
  t4404 = t2956*t4373;
  t4409 = t4390*t4393;
  t4410 = t4404 + t4409;
  t4467 = Cos(var1[4]);
  t4493 = Cos(var1[8]);
  t4497 = -1.*t4493;
  t4498 = 1. + t4497;
  t4512 = Sin(var1[8]);
  t4484 = t4360*t4467*t4414;
  t4486 = t4410*t4437;
  t4492 = t4484 + t4486;
  t4523 = t2956*t4390;
  t4525 = -1.*t4373*t4393;
  t4527 = t4523 + t4525;
  t4535 = Cos(var1[9]);
  t4541 = -1.*t4535;
  t4542 = 1. + t4541;
  t4550 = Sin(var1[9]);
  t4555 = t4493*t4492;
  t4556 = t4527*t4512;
  t4558 = t4555 + t4556;
  t4573 = t4493*t4527;
  t4576 = -1.*t4492*t4512;
  t4577 = t4573 + t4576;
  t2963 = -1.*t2956;
  t4033 = 1. + t2963;
  t4231 = 0.135*t4033;
  t4269 = 0. + t4231;
  t4394 = -0.135*t4393;
  t4401 = 0. + t4394;
  t4613 = t4360*t4352;
  t4619 = t4354*t4362*t4367;
  t4620 = t4613 + t4619;
  t4623 = t4352*t4354*t4362;
  t4624 = -1.*t4360*t4367;
  t4626 = t4623 + t4624;
  t4429 = 0.135*t4423;
  t4456 = 0.049*t4437;
  t4460 = 0. + t4429 + t4456;
  t4469 = -0.049*t4423;
  t4470 = 0.135*t4437;
  t4471 = 0. + t4469 + t4470;
  t4629 = t2956*t4620;
  t4631 = t4626*t4393;
  t4632 = t4629 + t4631;
  t4499 = -0.049*t4498;
  t4516 = -0.09*t4512;
  t4517 = 0. + t4499 + t4516;
  t4528 = -0.09*t4498;
  t4529 = 0.049*t4512;
  t4531 = 0. + t4528 + t4529;
  t4546 = -0.049*t4542;
  t4551 = -0.21*t4550;
  t4553 = 0. + t4546 + t4551;
  t4649 = t4467*t4414*t4354;
  t4657 = t4632*t4437;
  t4662 = t4649 + t4657;
  t4668 = t2956*t4626;
  t4670 = -1.*t4620*t4393;
  t4674 = t4668 + t4670;
  t4560 = -0.21*t4542;
  t4564 = 0.049*t4550;
  t4571 = 0. + t4560 + t4564;
  t4686 = t4493*t4662;
  t4689 = t4674*t4512;
  t4694 = t4686 + t4689;
  t4700 = t4493*t4674;
  t4703 = -1.*t4662*t4512;
  t4704 = t4700 + t4703;
  t4725 = t4467*t2956*t4367;
  t4733 = t4467*t4352*t4393;
  t4734 = t4725 + t4733;
  t4749 = -1.*t4414*t4362;
  t4753 = t4734*t4437;
  t4754 = t4749 + t4753;
  t4760 = t4467*t4352*t2956;
  t4761 = -1.*t4467*t4367*t4393;
  t4765 = t4760 + t4761;
  t4768 = t4493*t4754;
  t4769 = t4765*t4512;
  t4771 = t4768 + t4769;
  t4774 = t4493*t4765;
  t4775 = -1.*t4754*t4512;
  t4778 = t4774 + t4775;
  p_output1[0]=0. + t4269*t4373 + t4390*t4401 + t4410*t4460 + 0.1305*(t4410*t4414 - 1.*t4360*t4437*t4467) + t4360*t4467*t4471 + t4492*t4517 + t4527*t4531 + t4553*t4558 + t4571*t4577 - 0.21*(-1.*t4550*t4558 + t4535*t4577) - 0.049*(t4535*t4558 + t4550*t4577) + var1[0];
  p_output1[1]=0. + t4354*t4467*t4471 + t4269*t4620 + t4401*t4626 + t4460*t4632 + 0.1305*(-1.*t4354*t4437*t4467 + t4414*t4632) + t4517*t4662 + t4531*t4674 + t4553*t4694 + t4571*t4704 - 0.21*(-1.*t4550*t4694 + t4535*t4704) - 0.049*(t4535*t4694 + t4550*t4704) + var1[1];
  p_output1[2]=0. + t4269*t4367*t4467 + t4352*t4401*t4467 - 1.*t4362*t4471 + t4460*t4734 + 0.1305*(t4362*t4437 + t4414*t4734) + t4517*t4754 + t4531*t4765 + t4553*t4771 + t4571*t4778 - 0.21*(-1.*t4550*t4771 + t4535*t4778) - 0.049*(t4535*t4771 + t4550*t4778) + var1[2];
}



void p_knee_joint_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
