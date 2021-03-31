/*
 * Automatically Generated from Mathematica.
 * Wed 23 Oct 2019 10:26:08 GMT-07:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_VectorNav_to_LeftToeBack_src.h"

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
  double t149;
  double t191;
  double t571;
  double t966;
  double t982;
  double t1002;
  double t1074;
  double t1290;
  double t1623;
  double t1799;
  double t1825;
  double t1963;
  double t2113;
  double t2130;
  double t2198;
  double t2528;
  double t2721;
  double t2915;
  double t2928;
  double t2976;
  double t2979;
  double t3042;
  double t3350;
  double t3607;
  double t3660;
  double t3838;
  double t4066;
  double t4322;
  double t4548;
  double t4765;
  double t4890;
  double t4966;
  double t5012;
  double t5015;
  double t5261;
  double t5673;
  double t5681;
  double t5707;
  double t5758;
  double t6013;
  double t6024;
  double t6062;
  double t6101;
  double t6119;
  double t6126;
  double t6190;
  double t6197;
  double t6244;
  double t310;
  double t378;
  double t500;
  double t658;
  double t689;
  double t1068;
  double t1079;
  double t1211;
  double t1326;
  double t1327;
  double t1471;
  double t1890;
  double t2025;
  double t2087;
  double t2380;
  double t2419;
  double t2512;
  double t3036;
  double t3138;
  double t3323;
  double t6435;
  double t6447;
  double t6457;
  double t6471;
  double t6473;
  double t6476;
  double t3803;
  double t3836;
  double t3837;
  double t4919;
  double t4968;
  double t4995;
  double t6519;
  double t6540;
  double t6543;
  double t6556;
  double t6558;
  double t6560;
  double t5366;
  double t5391;
  double t5582;
  double t6034;
  double t6069;
  double t6100;
  double t6566;
  double t6569;
  double t6570;
  double t6575;
  double t6581;
  double t6584;
  double t6169;
  double t6171;
  double t6181;
  double t6604;
  double t6624;
  double t6628;
  double t6640;
  double t6642;
  double t6648;
  double t6712;
  double t6713;
  double t6715;
  double t6720;
  double t6726;
  double t6727;
  double t6729;
  double t6730;
  double t6732;
  double t6735;
  double t6739;
  double t6742;
  double t6744;
  double t6746;
  double t6747;
  double t6751;
  double t6752;
  double t6757;
  double t6790;
  double t6791;
  double t6793;
  double t6802;
  double t6803;
  double t6811;
  double t6815;
  double t6820;
  double t6822;
  double t6827;
  double t6828;
  double t6830;
  double t6833;
  double t6835;
  double t6839;
  double t6845;
  double t6847;
  double t6848;
  double t6780;
  double t6781;
  double t6782;
  double t6880;
  double t6882;
  double t6884;
  double t6890;
  double t6891;
  double t6893;
  double t6896;
  double t6898;
  double t6899;
  double t6903;
  double t6907;
  double t6911;
  double t6915;
  double t6916;
  double t6920;
  double t6924;
  double t6925;
  double t6926;
  double t6969;
  double t6971;
  double t6974;
  double t6978;
  double t6983;
  double t6984;
  double t6989;
  double t6990;
  double t6991;
  double t6995;
  double t6996;
  double t6998;
  double t7004;
  double t7006;
  double t7008;
  double t7010;
  double t7012;
  double t7013;
  double t6956;
  double t6959;
  double t6961;
  double t7032;
  double t7034;
  double t7035;
  double t7041;
  double t7043;
  double t7047;
  double t7049;
  double t7050;
  double t7052;
  double t7053;
  double t7055;
  double t7059;
  double t7061;
  double t7062;
  double t7068;
  double t7069;
  double t7070;
  double t7072;
  double t7076;
  double t7077;
  double t7028;
  double t7029;
  double t7099;
  double t7100;
  double t7101;
  double t7104;
  double t7107;
  double t7108;
  double t7112;
  double t7115;
  double t7117;
  double t7118;
  double t7119;
  double t7124;
  double t7125;
  double t7126;
  double t7128;
  double t7129;
  double t7131;
  double t7134;
  double t7138;
  double t7140;
  double t6976;
  double t6988;
  double t6993;
  double t7002;
  double t7009;
  double t7015;
  double t7017;
  double t7018;
  double t7021;
  double t7022;
  double t7023;
  double t7024;
  double t7025;
  double t7026;
  double t7159;
  double t7162;
  double t7163;
  double t7165;
  double t7166;
  double t7172;
  double t7173;
  double t7175;
  double t7176;
  double t7178;
  double t7183;
  double t7185;
  double t7191;
  double t7192;
  double t7193;
  double t7197;
  double t7200;
  double t7203;
  double t7218;
  double t7219;
  double t7221;
  double t7227;
  double t7231;
  double t7235;
  double t7236;
  double t7239;
  double t7240;
  double t7241;
  double t7244;
  double t7245;
  double t7246;
  double t7249;
  double t7252;
  double t7253;
  double t7259;
  double t7260;
  double t7262;
  double t7288;
  double t7289;
  double t7290;
  double t7294;
  double t7296;
  double t7299;
  double t7303;
  double t7308;
  double t7310;
  double t7311;
  double t7317;
  double t7318;
  double t7319;
  double t7282;
  double t7283;
  double t7285;
  double t7286;
  double t7287;
  double t7335;
  double t7336;
  double t7341;
  double t7346;
  double t7349;
  double t7352;
  double t7354;
  double t7377;
  double t7378;
  double t7380;
  double t7384;
  double t7385;
  double t7387;
  double t7388;
  double t7393;
  double t7394;
  double t7395;
  double t7398;
  double t7400;
  double t7402;
  double t7426;
  double t7427;
  double t7428;
  double t7434;
  double t7438;
  double t7442;
  double t7443;
  double t7422;
  double t7423;
  double t7424;
  double t7431;
  double t7432;
  double t7460;
  double t7462;
  double t6680;
  double t7473;
  double t7474;
  double t7475;
  double t7481;
  double t7483;
  double t7485;
  double t7486;
  double t7446;
  double t7508;
  double t7509;
  double t7510;
  double t7451;
  double t7500;
  double t7501;
  double t7505;
  double t7506;
  double t7507;
  double t7464;
  double t6684;
  double t6685;
  double t7489;
  double t7535;
  double t7536;
  double t7537;
  double t7495;
  t149 = Sin(var1[0]);
  t191 = Cos(var1[1]);
  t571 = Sin(var1[1]);
  t966 = Cos(var1[2]);
  t982 = -1.*t966;
  t1002 = 1. + t982;
  t1074 = Sin(var1[2]);
  t1290 = Cos(var1[0]);
  t1623 = Cos(var1[3]);
  t1799 = -1.*t1623;
  t1825 = 1. + t1799;
  t1963 = Sin(var1[3]);
  t2113 = -1.*t966*t149*t571;
  t2130 = -1.*t1290*t1074;
  t2198 = t2113 + t2130;
  t2528 = -1.*t1290*t966;
  t2721 = t149*t571*t1074;
  t2915 = t2528 + t2721;
  t2928 = Cos(var1[4]);
  t2976 = -1.*t2928;
  t2979 = 1. + t2976;
  t3042 = Sin(var1[4]);
  t3350 = -1.*t1963*t2198;
  t3607 = t1623*t2915;
  t3660 = t3350 + t3607;
  t3838 = t1623*t2198;
  t4066 = t1963*t2915;
  t4322 = t3838 + t4066;
  t4548 = Cos(var1[5]);
  t4765 = -1.*t4548;
  t4890 = 1. + t4765;
  t4966 = Sin(var1[5]);
  t5012 = t3042*t3660;
  t5015 = t2928*t4322;
  t5261 = t5012 + t5015;
  t5673 = t2928*t3660;
  t5681 = -1.*t3042*t4322;
  t5707 = t5673 + t5681;
  t5758 = Cos(var1[6]);
  t6013 = -1.*t5758;
  t6024 = 1. + t6013;
  t6062 = Sin(var1[6]);
  t6101 = -1.*t4966*t5261;
  t6119 = t4548*t5707;
  t6126 = t6101 + t6119;
  t6190 = t4548*t5261;
  t6197 = t4966*t5707;
  t6244 = t6190 + t6197;
  t310 = -1.*t191;
  t378 = 1. + t310;
  t500 = 0.135*t378;
  t658 = 0.049*t571;
  t689 = 0. + t500 + t658;
  t1068 = -0.049*t1002;
  t1079 = -0.09*t1074;
  t1211 = 0. + t1068 + t1079;
  t1326 = -0.09*t1002;
  t1327 = 0.049*t1074;
  t1471 = 0. + t1326 + t1327;
  t1890 = -0.049*t1825;
  t2025 = -0.21*t1963;
  t2087 = 0. + t1890 + t2025;
  t2380 = -0.21*t1825;
  t2419 = 0.049*t1963;
  t2512 = 0. + t2380 + t2419;
  t3036 = -0.2707*t2979;
  t3138 = 0.0016*t3042;
  t3323 = 0. + t3036 + t3138;
  t6435 = t1290*t966*t571;
  t6447 = -1.*t149*t1074;
  t6457 = t6435 + t6447;
  t6471 = -1.*t966*t149;
  t6473 = -1.*t1290*t571*t1074;
  t6476 = t6471 + t6473;
  t3803 = -0.0016*t2979;
  t3836 = -0.2707*t3042;
  t3837 = 0. + t3803 + t3836;
  t4919 = 0.0184*t4890;
  t4968 = -0.7055*t4966;
  t4995 = 0. + t4919 + t4968;
  t6519 = -1.*t1963*t6457;
  t6540 = t1623*t6476;
  t6543 = t6519 + t6540;
  t6556 = t1623*t6457;
  t6558 = t1963*t6476;
  t6560 = t6556 + t6558;
  t5366 = -0.7055*t4890;
  t5391 = -0.0184*t4966;
  t5582 = 0. + t5366 + t5391;
  t6034 = -1.1135*t6024;
  t6069 = 0.0216*t6062;
  t6100 = 0. + t6034 + t6069;
  t6566 = t3042*t6543;
  t6569 = t2928*t6560;
  t6570 = t6566 + t6569;
  t6575 = t2928*t6543;
  t6581 = -1.*t3042*t6560;
  t6584 = t6575 + t6581;
  t6169 = -0.0216*t6024;
  t6171 = -1.1135*t6062;
  t6181 = 0. + t6169 + t6171;
  t6604 = -1.*t4966*t6570;
  t6624 = t4548*t6584;
  t6628 = t6604 + t6624;
  t6640 = t4548*t6570;
  t6642 = t4966*t6584;
  t6648 = t6640 + t6642;
  t6712 = t966*t1963*t571;
  t6713 = t1623*t571*t1074;
  t6715 = t6712 + t6713;
  t6720 = -1.*t1623*t966*t571;
  t6726 = t1963*t571*t1074;
  t6727 = t6720 + t6726;
  t6729 = t3042*t6715;
  t6730 = t2928*t6727;
  t6732 = t6729 + t6730;
  t6735 = t2928*t6715;
  t6739 = -1.*t3042*t6727;
  t6742 = t6735 + t6739;
  t6744 = -1.*t4966*t6732;
  t6746 = t4548*t6742;
  t6747 = t6744 + t6746;
  t6751 = t4548*t6732;
  t6752 = t4966*t6742;
  t6757 = t6751 + t6752;
  t6790 = -1.*t1290*t191*t966*t1963;
  t6791 = -1.*t1623*t1290*t191*t1074;
  t6793 = t6790 + t6791;
  t6802 = t1623*t1290*t191*t966;
  t6803 = -1.*t1290*t191*t1963*t1074;
  t6811 = t6802 + t6803;
  t6815 = t3042*t6793;
  t6820 = t2928*t6811;
  t6822 = t6815 + t6820;
  t6827 = t2928*t6793;
  t6828 = -1.*t3042*t6811;
  t6830 = t6827 + t6828;
  t6833 = -1.*t4966*t6822;
  t6835 = t4548*t6830;
  t6839 = t6833 + t6835;
  t6845 = t4548*t6822;
  t6847 = t4966*t6830;
  t6848 = t6845 + t6847;
  t6780 = 0.049*t191;
  t6781 = 0.135*t571;
  t6782 = t6780 + t6781;
  t6880 = -1.*t191*t966*t1963*t149;
  t6882 = -1.*t1623*t191*t149*t1074;
  t6884 = t6880 + t6882;
  t6890 = t1623*t191*t966*t149;
  t6891 = -1.*t191*t1963*t149*t1074;
  t6893 = t6890 + t6891;
  t6896 = t3042*t6884;
  t6898 = t2928*t6893;
  t6899 = t6896 + t6898;
  t6903 = t2928*t6884;
  t6907 = -1.*t3042*t6893;
  t6911 = t6903 + t6907;
  t6915 = -1.*t4966*t6899;
  t6916 = t4548*t6911;
  t6920 = t6915 + t6916;
  t6924 = t4548*t6899;
  t6925 = t4966*t6911;
  t6926 = t6924 + t6925;
  t6969 = -1.*t191*t966*t1963;
  t6971 = -1.*t1623*t191*t1074;
  t6974 = t6969 + t6971;
  t6978 = -1.*t1623*t191*t966;
  t6983 = t191*t1963*t1074;
  t6984 = t6978 + t6983;
  t6989 = -1.*t3042*t6974;
  t6990 = t2928*t6984;
  t6991 = t6989 + t6990;
  t6995 = t2928*t6974;
  t6996 = t3042*t6984;
  t6998 = t6995 + t6996;
  t7004 = t4966*t6991;
  t7006 = t4548*t6998;
  t7008 = t7004 + t7006;
  t7010 = t4548*t6991;
  t7012 = -1.*t4966*t6998;
  t7013 = t7010 + t7012;
  t6956 = -0.09*t966;
  t6959 = -0.049*t1074;
  t6961 = t6956 + t6959;
  t7032 = -1.*t1290*t966*t571;
  t7034 = t149*t1074;
  t7035 = t7032 + t7034;
  t7041 = t1963*t7035;
  t7043 = t7041 + t6540;
  t7047 = t1623*t7035;
  t7049 = -1.*t1963*t6476;
  t7050 = t7047 + t7049;
  t7052 = -1.*t3042*t7043;
  t7053 = t2928*t7050;
  t7055 = t7052 + t7053;
  t7059 = t2928*t7043;
  t7061 = t3042*t7050;
  t7062 = t7059 + t7061;
  t7068 = t4966*t7055;
  t7069 = t4548*t7062;
  t7070 = t7068 + t7069;
  t7072 = t4548*t7055;
  t7076 = -1.*t4966*t7062;
  t7077 = t7072 + t7076;
  t7028 = 0.049*t966;
  t7029 = t7028 + t1079;
  t7099 = t1290*t966;
  t7100 = -1.*t149*t571*t1074;
  t7101 = t7099 + t7100;
  t7104 = t1963*t2198;
  t7107 = t1623*t7101;
  t7108 = t7104 + t7107;
  t7112 = -1.*t1963*t7101;
  t7115 = t3838 + t7112;
  t7117 = -1.*t3042*t7108;
  t7118 = t2928*t7115;
  t7119 = t7117 + t7118;
  t7124 = t2928*t7108;
  t7125 = t3042*t7115;
  t7126 = t7124 + t7125;
  t7128 = t4966*t7119;
  t7129 = t4548*t7126;
  t7131 = t7128 + t7129;
  t7134 = t4548*t7119;
  t7138 = -1.*t4966*t7126;
  t7140 = t7134 + t7138;
  t6976 = t3837*t6974;
  t6988 = t3323*t6984;
  t6993 = t5582*t6991;
  t7002 = t4995*t6998;
  t7009 = t6181*t7008;
  t7015 = t6100*t7013;
  t7017 = -1.*t6062*t7008;
  t7018 = t5758*t7013;
  t7021 = t7017 + t7018;
  t7022 = -1.200144*t7021;
  t7023 = t5758*t7008;
  t7024 = t6062*t7013;
  t7025 = t7023 + t7024;
  t7026 = -0.027251*t7025;
  t7159 = -0.21*t1623;
  t7162 = -0.049*t1963;
  t7163 = t7159 + t7162;
  t7165 = 0.049*t1623;
  t7166 = t7165 + t2025;
  t7172 = -1.*t1623*t6457;
  t7173 = t7172 + t7049;
  t7175 = -1.*t3042*t6543;
  t7176 = t2928*t7173;
  t7178 = t7175 + t7176;
  t7183 = t3042*t7173;
  t7185 = t6575 + t7183;
  t7191 = t4966*t7178;
  t7192 = t4548*t7185;
  t7193 = t7191 + t7192;
  t7197 = t4548*t7178;
  t7200 = -1.*t4966*t7185;
  t7203 = t7197 + t7200;
  t7218 = t966*t149*t571;
  t7219 = t1290*t1074;
  t7221 = t7218 + t7219;
  t7227 = -1.*t1963*t7221;
  t7231 = t7227 + t7107;
  t7235 = -1.*t1623*t7221;
  t7236 = t7235 + t7112;
  t7239 = -1.*t3042*t7231;
  t7240 = t2928*t7236;
  t7241 = t7239 + t7240;
  t7244 = t2928*t7231;
  t7245 = t3042*t7236;
  t7246 = t7244 + t7245;
  t7249 = t4966*t7241;
  t7252 = t4548*t7246;
  t7253 = t7249 + t7252;
  t7259 = t4548*t7241;
  t7260 = -1.*t4966*t7246;
  t7262 = t7259 + t7260;
  t7288 = t1623*t191*t966;
  t7289 = -1.*t191*t1963*t1074;
  t7290 = t7288 + t7289;
  t7294 = -1.*t2928*t7290;
  t7296 = t6989 + t7294;
  t7299 = -1.*t3042*t7290;
  t7303 = t6995 + t7299;
  t7308 = t4966*t7296;
  t7310 = t4548*t7303;
  t7311 = t7308 + t7310;
  t7317 = t4548*t7296;
  t7318 = -1.*t4966*t7303;
  t7319 = t7317 + t7318;
  t7282 = 0.0016*t2928;
  t7283 = t7282 + t3836;
  t7285 = -0.2707*t2928;
  t7286 = -0.0016*t3042;
  t7287 = t7285 + t7286;
  t7335 = -1.*t2928*t6560;
  t7336 = t7175 + t7335;
  t7341 = t4966*t7336;
  t7346 = t7341 + t6624;
  t7349 = t4548*t7336;
  t7352 = -1.*t4966*t6584;
  t7354 = t7349 + t7352;
  t7377 = t1623*t7221;
  t7378 = t1963*t7101;
  t7380 = t7377 + t7378;
  t7384 = -1.*t2928*t7380;
  t7385 = t7239 + t7384;
  t7387 = -1.*t3042*t7380;
  t7388 = t7244 + t7387;
  t7393 = t4966*t7385;
  t7394 = t4548*t7388;
  t7395 = t7393 + t7394;
  t7398 = t4548*t7385;
  t7400 = -1.*t4966*t7388;
  t7402 = t7398 + t7400;
  t7426 = t3042*t6974;
  t7427 = t2928*t7290;
  t7428 = t7426 + t7427;
  t7434 = -1.*t4966*t7428;
  t7438 = t7434 + t7310;
  t7442 = -1.*t4548*t7428;
  t7443 = t7442 + t7318;
  t7422 = -0.7055*t4548;
  t7423 = 0.0184*t4966;
  t7424 = t7422 + t7423;
  t7431 = -0.0184*t4548;
  t7432 = t7431 + t4968;
  t7460 = -1.*t4548*t6570;
  t7462 = t7460 + t7352;
  t6680 = t5758*t6628;
  t7473 = t3042*t7231;
  t7474 = t2928*t7380;
  t7475 = t7473 + t7474;
  t7481 = -1.*t4966*t7475;
  t7483 = t7481 + t7394;
  t7485 = -1.*t4548*t7475;
  t7486 = t7485 + t7400;
  t7446 = -1.*t6062*t7438;
  t7508 = t4548*t7428;
  t7509 = t4966*t7303;
  t7510 = t7508 + t7509;
  t7451 = t5758*t7438;
  t7500 = 0.0216*t5758;
  t7501 = t7500 + t6171;
  t7505 = -1.1135*t5758;
  t7506 = -0.0216*t6062;
  t7507 = t7505 + t7506;
  t7464 = -1.*t6062*t6628;
  t6684 = -1.*t6062*t6648;
  t6685 = t6680 + t6684;
  t7489 = -1.*t6062*t7483;
  t7535 = t4548*t7475;
  t7536 = t4966*t7388;
  t7537 = t7535 + t7536;
  t7495 = t5758*t7483;
  p_output1[0]=0;
  p_output1[1]=-1.*t1290*t1471 + 0.135*t149 - 0.1305*t149*t191 + t2087*t2198 + t2512*t2915 + t3323*t3660 + t3837*t4322 + t4995*t5261 + t5582*t5707 - 1.*t1211*t149*t571 + t6100*t6126 + t6181*t6244 - 0.027251*(t6062*t6126 + t5758*t6244) - 1.200144*(t5758*t6126 - 1.*t6062*t6244) - 1.*t149*t689;
  p_output1[2]=-0.135*t1290 - 1.*t1471*t149 + 0.1305*t1290*t191 + t1211*t1290*t571 + t2087*t6457 + t2512*t6476 + t3323*t6543 + t3837*t6560 + t4995*t6570 + t5582*t6584 + t6100*t6628 + t6181*t6648 - 0.027251*(t6062*t6628 + t5758*t6648) - 1.200144*t6685 + t1290*t689;
  p_output1[3]=0.004500000000000004*t191 - 0.049*t571 - 1.*t1211*t571 + t1074*t2512*t571 + t3323*t6715 + t3837*t6727 + t4995*t6732 + t5582*t6742 + t6100*t6747 + t6181*t6757 - 0.027251*(t6062*t6747 + t5758*t6757) - 1.200144*(t5758*t6747 - 1.*t6062*t6757) - 1.*t2087*t571*t966;
  p_output1[4]=t1211*t1290*t191 - 1.*t1074*t1290*t191*t2512 - 0.1305*t1290*t571 + t1290*t6782 + t3323*t6793 + t3837*t6811 + t4995*t6822 + t5582*t6830 + t6100*t6839 + t6181*t6848 - 0.027251*(t6062*t6839 + t5758*t6848) - 1.200144*(t5758*t6839 - 1.*t6062*t6848) + t1290*t191*t2087*t966;
  p_output1[5]=t1211*t149*t191 - 1.*t1074*t149*t191*t2512 - 0.1305*t149*t571 + t149*t6782 + t3323*t6884 + t3837*t6893 + t4995*t6899 + t5582*t6911 + t6100*t6920 + t6181*t6926 - 0.027251*(t6062*t6920 + t5758*t6926) - 1.200144*(t5758*t6920 - 1.*t6062*t6926) + t149*t191*t2087*t966;
  p_output1[6]=-1.*t1074*t191*t2087 + t191*t6961 + t6976 + t6988 + t6993 + t7002 + t7009 + t7015 + t7022 + t7026 - 1.*t191*t2512*t966;
  p_output1[7]=t2087*t6476 + t1290*t571*t6961 - 1.*t149*t7029 + t2512*t7035 + t3837*t7043 + t3323*t7050 + t5582*t7055 + t4995*t7062 + t6181*t7070 + t6100*t7077 - 1.200144*(-1.*t6062*t7070 + t5758*t7077) - 0.027251*(t5758*t7070 + t6062*t7077);
  p_output1[8]=t2198*t2512 + t149*t571*t6961 + t1290*t7029 + t2087*t7101 + t3837*t7108 + t3323*t7115 + t5582*t7119 + t4995*t7126 + t6181*t7131 + t6100*t7140 - 1.200144*(-1.*t6062*t7131 + t5758*t7140) - 0.027251*(t5758*t7131 + t6062*t7140);
  p_output1[9]=t6976 + t6988 + t6993 + t7002 + t7009 + t7015 + t7022 + t7026 - 1.*t1074*t191*t7166 + t191*t7163*t966;
  p_output1[10]=t3837*t6543 + t6457*t7163 + t6476*t7166 + t3323*t7173 + t5582*t7178 + t4995*t7185 + t6181*t7193 + t6100*t7203 - 1.200144*(-1.*t6062*t7193 + t5758*t7203) - 0.027251*(t5758*t7193 + t6062*t7203);
  p_output1[11]=t7101*t7166 + t7163*t7221 + t3837*t7231 + t3323*t7236 + t5582*t7241 + t4995*t7246 + t6181*t7253 + t6100*t7262 - 1.200144*(-1.*t6062*t7253 + t5758*t7262) - 0.027251*(t5758*t7253 + t6062*t7262);
  p_output1[12]=t6974*t7283 + t7287*t7290 + t5582*t7296 + t4995*t7303 + t6181*t7311 + t6100*t7319 - 1.200144*(-1.*t6062*t7311 + t5758*t7319) - 0.027251*(t5758*t7311 + t6062*t7319);
  p_output1[13]=t4995*t6584 + t6543*t7283 + t6560*t7287 + t5582*t7336 + t6181*t7346 + t6100*t7354 - 1.200144*(-1.*t6062*t7346 + t5758*t7354) - 0.027251*(t5758*t7346 + t6062*t7354);
  p_output1[14]=t7231*t7283 + t7287*t7380 + t5582*t7385 + t4995*t7388 + t6181*t7395 + t6100*t7402 - 1.200144*(-1.*t6062*t7395 + t5758*t7402) - 0.027251*(t5758*t7395 + t6062*t7402);
  p_output1[15]=t7424*t7428 + t7303*t7432 + t6181*t7438 + t6100*t7443 - 1.200144*(t5758*t7443 + t7446) - 0.027251*(t6062*t7443 + t7451);
  p_output1[16]=t6181*t6628 + t6570*t7424 + t6584*t7432 + t6100*t7462 - 0.027251*(t6680 + t6062*t7462) - 1.200144*(t5758*t7462 + t7464);
  p_output1[17]=t7388*t7432 + t7424*t7475 + t6181*t7483 + t6100*t7486 - 1.200144*(t5758*t7486 + t7489) - 0.027251*(t6062*t7486 + t7495);
  p_output1[18]=t7438*t7501 + t7507*t7510 - 1.200144*(t7446 - 1.*t5758*t7510) - 0.027251*(t7451 - 1.*t6062*t7510);
  p_output1[19]=-0.027251*t6685 - 1.200144*(-1.*t5758*t6648 + t7464) + t6628*t7501 + t6648*t7507;
  p_output1[20]=t7483*t7501 + t7507*t7537 - 1.200144*(t7489 - 1.*t5758*t7537) - 0.027251*(t7495 - 1.*t6062*t7537);
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
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
}



void Jp_VectorNav_to_LeftToeBack_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
