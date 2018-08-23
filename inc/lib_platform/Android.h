#ifndef lib_platform_Android_h
#define lib_platform_Android_h

//PLATFORM_ABSTRACTIONS
#ifdef TDP_ANDROID

#include <string>
#include <sstream>
#include <stdlib.h>
#include <locale.h>

struct lconv* localeconv(void);

namespace std
{
template <typename T>
std::string to_string(T value)
{
    std::ostringstream os ;
    os << value ;
    return os.str() ;
}

inline float strtof(const char* nptr, char** endptr)
{
  return ::strtof(nptr, endptr);
}

inline long double strtold(const char* __s, char** __end_ptr)
{
  return ::strtold(__s, __end_ptr);
}

inline unsigned long long strtoull(const char* __s, char** __end_ptr, int __base)
{
  return ::strtoull(__s, __end_ptr, __base);
}

inline long long strtoll(const char* __s, char** __end_ptr, int __base)
{
  return ::strtoll(__s, __end_ptr, __base);
}

inline int stoi(const string& str)
{
  if(str.empty())
    return 0;
  return ::atoi(str.data());
}

inline long long stoll(const string& str)
{
  if(str.empty())
    return 0;
  return ::strtoll(str.data(), 0, 10);
}

}

#endif

#endif
