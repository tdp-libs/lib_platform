#ifndef lib_platform_Debug_h
#define lib_platform_Debug_h

namespace lib_platform
{

//##################################################################################################
//! Prevent F12 from intrrupting debug sessions.
/*!
While debugging on WINDOWS F12 button reserved within ntdll.dll to do interuption and pause
application for debug. This code removes F12 handler in ntdll.dll for pause application in windows
debugger.
*/
void disableF12DebugInterrupt();

}

#endif
