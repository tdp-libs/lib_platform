#include "lib_platform/Android.h"


#ifdef TDP_ANDROID

namespace
{
struct lconv initLconv()
{
  struct lconv l;
  l.decimal_point      = (char*)"."; //char* decimal_point;
  l.thousands_sep      = (char*)"";  //char* thousands_sep;
  l.grouping           = (char*)"";  //char* grouping;
  l.int_curr_symbol    = (char*)"";  //char* int_curr_symbol;
  l.currency_symbol    = (char*)"";  //char* currency_symbol;
  l.mon_decimal_point  = (char*)"";  //char* mon_decimal_point;
  l.mon_thousands_sep  = (char*)"";  //char* mon_thousands_sep;
  l.mon_grouping       = (char*)"";  //char* mon_grouping;
  l.positive_sign      = (char*)"";  //char* positive_sign;
  l.negative_sign      = (char*)"";  //char* negative_sign;
  l.int_frac_digits    = 	CHAR_MAX;  //char int_frac_digits;
  l.frac_digits        = 	CHAR_MAX;  //char frac_digits;
  l.p_cs_precedes      = 	CHAR_MAX;  //char p_cs_precedes;
  l.p_sep_by_space     = 	CHAR_MAX;  //char p_sep_by_space;
  l.n_cs_precedes      = 	CHAR_MAX;  //char n_cs_precedes;
  l.n_sep_by_space     = 	CHAR_MAX;  //char n_sep_by_space;
  l.p_sign_posn        = 	CHAR_MAX;  //char p_sign_posn;
  l.n_sign_posn        = 	CHAR_MAX;  //char n_sign_posn;
  l.int_p_cs_precedes  = 	CHAR_MAX;  //char int_p_cs_precedes;
  l.int_p_sep_by_space = 	CHAR_MAX;  //char int_p_sep_by_space;
  l.int_n_cs_precedes  = 	CHAR_MAX;  //char int_n_cs_precedes;
  l.int_n_sep_by_space = 	CHAR_MAX;  //char int_n_sep_by_space;
  l.int_p_sign_posn    = 	CHAR_MAX;  //char int_p_sign_posn;
  l.int_n_sign_posn    = 	CHAR_MAX;  //char int_n_sign_posn;
  return l;
}
}

struct lconv* localeconv(void)
{
  static struct lconv androidHackLconv = initLconv();
  return &androidHackLconv;
}

#else
int lib_platform_NoAndroid=0;
#endif
