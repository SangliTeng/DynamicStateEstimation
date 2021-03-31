/*
 * Automatically Generated from Mathematica.
 * Wed 12 Feb 2020 15:27:58 GMT-08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_toe_joint_left_src.h"

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
  double t1862;
  double t845;
  double t1981;
  double t1548;
  double t2526;
  double t89;
  double t1745;
  double t2818;
  double t2998;
  double t3134;
  double t4010;
  double t4361;
  double t4876;
  double t5534;
  double t5535;
  double t5737;
  double t6839;
  double t5123;
  double t5320;
  double t5343;
  double t8029;
  double t8060;
  double t8075;
  double t8082;
  double t8085;
  double t8055;
  double t8058;
  double t8059;
  double t8093;
  double t8094;
  double t8095;
  double t8115;
  double t8120;
  double t8121;
  double t8124;
  double t8133;
  double t8144;
  double t8149;
  double t8159;
  double t8161;
  double t8162;
  double t8166;
  double t8169;
  double t8181;
  double t8189;
  double t8197;
  double t8198;
  double t8199;
  double t8223;
  double t8229;
  double t8231;
  double t8239;
  double t8240;
  double t8241;
  double t8244;
  double t8253;
  double t8258;
  double t8259;
  double t8266;
  double t8267;
  double t8271;
  double t8282;
  double t8286;
  double t8292;
  double t8295;
  double t8300;
  double t8303;
  double t8305;
  double t8318;
  double t8319;
  double t8324;
  double t156;
  double t512;
  double t513;
  double t811;
  double t4890;
  double t5060;
  double t8358;
  double t8361;
  double t8365;
  double t8373;
  double t8376;
  double t8378;
  double t6780;
  double t7815;
  double t7827;
  double t8033;
  double t8036;
  double t8037;
  double t8383;
  double t8387;
  double t8389;
  double t8083;
  double t8086;
  double t8090;
  double t8103;
  double t8107;
  double t8112;
  double t8123;
  double t8128;
  double t8132;
  double t8403;
  double t8404;
  double t8406;
  double t8410;
  double t8412;
  double t8415;
  double t8156;
  double t8157;
  double t8158;
  double t8187;
  double t8191;
  double t8193;
  double t8418;
  double t8420;
  double t8421;
  double t8423;
  double t8424;
  double t8425;
  double t8203;
  double t8207;
  double t8212;
  double t8243;
  double t8247;
  double t8251;
  double t8427;
  double t8429;
  double t8437;
  double t8445;
  double t8446;
  double t8448;
  double t8261;
  double t8262;
  double t8263;
  double t8294;
  double t8296;
  double t8299;
  double t8453;
  double t8454;
  double t8458;
  double t8465;
  double t8467;
  double t8468;
  double t8308;
  double t8310;
  double t8311;
  double t8472;
  double t8474;
  double t8476;
  double t8479;
  double t8481;
  double t8486;
  double t8515;
  double t8516;
  double t8518;
  double t8526;
  double t8527;
  double t8529;
  double t8532;
  double t8535;
  double t8536;
  double t8540;
  double t8543;
  double t8545;
  double t8548;
  double t8549;
  double t8550;
  double t8552;
  double t8553;
  double t8554;
  double t8556;
  double t8557;
  double t8558;
  double t8562;
  double t8563;
  double t8566;
  double t8569;
  double t8572;
  double t8574;
  double t8576;
  double t8578;
  double t8579;
  double t8581;
  double t8582;
  double t8583;
  t1862 = Cos(var1[3]);
  t845 = Cos(var1[5]);
  t1981 = Sin(var1[4]);
  t1548 = Sin(var1[3]);
  t2526 = Sin(var1[5]);
  t89 = Cos(var1[6]);
  t1745 = -1.*t845*t1548;
  t2818 = t1862*t1981*t2526;
  t2998 = t1745 + t2818;
  t3134 = t1862*t845*t1981;
  t4010 = t1548*t2526;
  t4361 = t3134 + t4010;
  t4876 = Sin(var1[6]);
  t5534 = Cos(var1[7]);
  t5535 = -1.*t5534;
  t5737 = 1. + t5535;
  t6839 = Sin(var1[7]);
  t5123 = t89*t2998;
  t5320 = t4361*t4876;
  t5343 = t5123 + t5320;
  t8029 = Cos(var1[4]);
  t8060 = Cos(var1[8]);
  t8075 = -1.*t8060;
  t8082 = 1. + t8075;
  t8085 = Sin(var1[8]);
  t8055 = t1862*t8029*t5534;
  t8058 = t5343*t6839;
  t8059 = t8055 + t8058;
  t8093 = t89*t4361;
  t8094 = -1.*t2998*t4876;
  t8095 = t8093 + t8094;
  t8115 = Cos(var1[9]);
  t8120 = -1.*t8115;
  t8121 = 1. + t8120;
  t8124 = Sin(var1[9]);
  t8133 = t8060*t8059;
  t8144 = t8095*t8085;
  t8149 = t8133 + t8144;
  t8159 = t8060*t8095;
  t8161 = -1.*t8059*t8085;
  t8162 = t8159 + t8161;
  t8166 = Cos(var1[10]);
  t8169 = -1.*t8166;
  t8181 = 1. + t8169;
  t8189 = Sin(var1[10]);
  t8197 = -1.*t8124*t8149;
  t8198 = t8115*t8162;
  t8199 = t8197 + t8198;
  t8223 = t8115*t8149;
  t8229 = t8124*t8162;
  t8231 = t8223 + t8229;
  t8239 = Cos(var1[11]);
  t8240 = -1.*t8239;
  t8241 = 1. + t8240;
  t8244 = Sin(var1[11]);
  t8253 = t8189*t8199;
  t8258 = t8166*t8231;
  t8259 = t8253 + t8258;
  t8266 = t8166*t8199;
  t8267 = -1.*t8189*t8231;
  t8271 = t8266 + t8267;
  t8282 = Cos(var1[12]);
  t8286 = -1.*t8282;
  t8292 = 1. + t8286;
  t8295 = Sin(var1[12]);
  t8300 = -1.*t8244*t8259;
  t8303 = t8239*t8271;
  t8305 = t8300 + t8303;
  t8318 = t8239*t8259;
  t8319 = t8244*t8271;
  t8324 = t8318 + t8319;
  t156 = -1.*t89;
  t512 = 1. + t156;
  t513 = 0.135*t512;
  t811 = 0. + t513;
  t4890 = -0.135*t4876;
  t5060 = 0. + t4890;
  t8358 = t1862*t845;
  t8361 = t1548*t1981*t2526;
  t8365 = t8358 + t8361;
  t8373 = t845*t1548*t1981;
  t8376 = -1.*t1862*t2526;
  t8378 = t8373 + t8376;
  t6780 = 0.135*t5737;
  t7815 = 0.049*t6839;
  t7827 = 0. + t6780 + t7815;
  t8033 = -0.049*t5737;
  t8036 = 0.135*t6839;
  t8037 = 0. + t8033 + t8036;
  t8383 = t89*t8365;
  t8387 = t8378*t4876;
  t8389 = t8383 + t8387;
  t8083 = -0.049*t8082;
  t8086 = -0.09*t8085;
  t8090 = 0. + t8083 + t8086;
  t8103 = -0.09*t8082;
  t8107 = 0.049*t8085;
  t8112 = 0. + t8103 + t8107;
  t8123 = -0.049*t8121;
  t8128 = -0.21*t8124;
  t8132 = 0. + t8123 + t8128;
  t8403 = t8029*t5534*t1548;
  t8404 = t8389*t6839;
  t8406 = t8403 + t8404;
  t8410 = t89*t8378;
  t8412 = -1.*t8365*t4876;
  t8415 = t8410 + t8412;
  t8156 = -0.21*t8121;
  t8157 = 0.049*t8124;
  t8158 = 0. + t8156 + t8157;
  t8187 = -0.2707*t8181;
  t8191 = 0.0016*t8189;
  t8193 = 0. + t8187 + t8191;
  t8418 = t8060*t8406;
  t8420 = t8415*t8085;
  t8421 = t8418 + t8420;
  t8423 = t8060*t8415;
  t8424 = -1.*t8406*t8085;
  t8425 = t8423 + t8424;
  t8203 = -0.0016*t8181;
  t8207 = -0.2707*t8189;
  t8212 = 0. + t8203 + t8207;
  t8243 = 0.0184*t8241;
  t8247 = -0.7055*t8244;
  t8251 = 0. + t8243 + t8247;
  t8427 = -1.*t8124*t8421;
  t8429 = t8115*t8425;
  t8437 = t8427 + t8429;
  t8445 = t8115*t8421;
  t8446 = t8124*t8425;
  t8448 = t8445 + t8446;
  t8261 = -0.7055*t8241;
  t8262 = -0.0184*t8244;
  t8263 = 0. + t8261 + t8262;
  t8294 = -1.1135*t8292;
  t8296 = 0.0216*t8295;
  t8299 = 0. + t8294 + t8296;
  t8453 = t8189*t8437;
  t8454 = t8166*t8448;
  t8458 = t8453 + t8454;
  t8465 = t8166*t8437;
  t8467 = -1.*t8189*t8448;
  t8468 = t8465 + t8467;
  t8308 = -0.0216*t8292;
  t8310 = -1.1135*t8295;
  t8311 = 0. + t8308 + t8310;
  t8472 = -1.*t8244*t8458;
  t8474 = t8239*t8468;
  t8476 = t8472 + t8474;
  t8479 = t8239*t8458;
  t8481 = t8244*t8468;
  t8486 = t8479 + t8481;
  t8515 = t8029*t89*t2526;
  t8516 = t8029*t845*t4876;
  t8518 = t8515 + t8516;
  t8526 = -1.*t5534*t1981;
  t8527 = t8518*t6839;
  t8529 = t8526 + t8527;
  t8532 = t8029*t845*t89;
  t8535 = -1.*t8029*t2526*t4876;
  t8536 = t8532 + t8535;
  t8540 = t8060*t8529;
  t8543 = t8536*t8085;
  t8545 = t8540 + t8543;
  t8548 = t8060*t8536;
  t8549 = -1.*t8529*t8085;
  t8550 = t8548 + t8549;
  t8552 = -1.*t8124*t8545;
  t8553 = t8115*t8550;
  t8554 = t8552 + t8553;
  t8556 = t8115*t8545;
  t8557 = t8124*t8550;
  t8558 = t8556 + t8557;
  t8562 = t8189*t8554;
  t8563 = t8166*t8558;
  t8566 = t8562 + t8563;
  t8569 = t8166*t8554;
  t8572 = -1.*t8189*t8558;
  t8574 = t8569 + t8572;
  t8576 = -1.*t8244*t8566;
  t8578 = t8239*t8574;
  t8579 = t8576 + t8578;
  t8581 = t8239*t8566;
  t8582 = t8244*t8574;
  t8583 = t8581 + t8582;
  p_output1[0]=0. + t4361*t5060 + t5343*t7827 + 0.1305*(t5343*t5534 - 1.*t1862*t6839*t8029) + t1862*t8029*t8037 + t8059*t8090 + t2998*t811 + t8095*t8112 + t8132*t8149 + t8158*t8162 + t8193*t8199 + t8212*t8231 + t8251*t8259 + t8263*t8271 + t8299*t8305 + t8311*t8324 - 0.0216*(t8295*t8305 + t8282*t8324) - 1.1135*(t8282*t8305 - 1.*t8295*t8324) + var1[0];
  p_output1[1]=0. + t1548*t8029*t8037 + t811*t8365 + t5060*t8378 + t7827*t8389 + 0.1305*(-1.*t1548*t6839*t8029 + t5534*t8389) + t8090*t8406 + t8112*t8415 + t8132*t8421 + t8158*t8425 + t8193*t8437 + t8212*t8448 + t8251*t8458 + t8263*t8468 + t8299*t8476 + t8311*t8486 - 0.0216*(t8295*t8476 + t8282*t8486) - 1.1135*(t8282*t8476 - 1.*t8295*t8486) + var1[1];
  p_output1[2]=0. - 1.*t1981*t8037 + t2526*t8029*t811 + t5060*t8029*t845 + t7827*t8518 + 0.1305*(t1981*t6839 + t5534*t8518) + t8090*t8529 + t8112*t8536 + t8132*t8545 + t8158*t8550 + t8193*t8554 + t8212*t8558 + t8251*t8566 + t8263*t8574 + t8299*t8579 + t8311*t8583 - 0.0216*(t8295*t8579 + t8282*t8583) - 1.1135*(t8282*t8579 - 1.*t8295*t8583) + var1[2];
}



void p_toe_joint_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
