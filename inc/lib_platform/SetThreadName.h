#ifndef lib_platform_SetThreadName_h
#define lib_platform_SetThreadName_h

#include <thread>
#include <string>

namespace lib_platform
{
//##################################################################################################
//! Set the name of the calling thread.
void setThreadName(const std::string& threadName);

//##################################################################################################
//! set the name of a thread.
void setThreadName(std::thread& thread, const std::string& threadName);
}

#endif
