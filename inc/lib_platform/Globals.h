#ifndef lib_platform_Globals_h
#define lib_platform_Globals_h

#include <stddef.h>
#include <stdint.h>

#ifdef TP_WIN32
#  ifdef TP_WIN32_STATIC
#    define TP_EXPORT
#    define TP_IMPORT
#  else
#    define TP_EXPORT __declspec(dllexport)
#    define TP_IMPORT __declspec(dllimport)
#  endif
#else
#  define TP_EXPORT
#  define TP_IMPORT
#endif

#if defined(LIB_PLATFORM_LIBRARY)
#  define LIB_PLATFORM_EXPORT TP_EXPORT
#else
#  define LIB_PLATFORM_EXPORT TP_IMPORT
#endif

#define LIB_PLATFORM_NONCOPYABLE(T) T(const T&)=delete; T& operator=(const T&)=delete; T(T&&)=delete; T& operator=(T&&)=delete

#ifndef TP_GIT_BRANCH
#define TP_GIT_BRANCH
#endif

#ifndef TP_GIT_COMMIT
#define TP_GIT_COMMIT
#endif

#ifndef TP_GIT_COMMIT_NUMBER
#define TP_GIT_COMMIT_NUMBER
#endif

//##################################################################################################
//! Platform abstractions
namespace lib_platform
{
}

#endif
