#include "lib_platform/Exit.h"

#include <cstdlib>

namespace lib_platform
{

//##################################################################################################
void exit(int c)
{

#ifdef TP_OSX
  std::exit(c);
#else
  std::quick_exit(c);
#endif

}

}
