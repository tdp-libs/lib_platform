
#ifdef tp_qt_ANDROID
#include "lib_platform/Android.h"
#elif defined tp_qt_OSX
#include "lib_platform/OSX.h"
#else
#define TP_ENUM_HASH(c)
#endif
