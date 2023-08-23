#include "lib_platform/Debug.h"

#ifdef _WIN32
#include <windows.h>
#endif

namespace lib_platform
{

//##################################################################################################
void disableF12DebugInterrupt()
{
#if defined(_WIN32)
#if defined __clang__
#pragma clang diagnostic ignored "-Wmicrosoft-cast"
#endif

  HMODULE hNtdll = GetModuleHandleA("ntdll.dll");
  if(!hNtdll)
    return;

  FARPROC pDbgBreakPoint = GetProcAddress(hNtdll, "DbgBreakPoint");
  if(!pDbgBreakPoint)
    return;

  DWORD dwOldProtect;
  if(!VirtualProtect(pDbgBreakPoint, 1, PAGE_EXECUTE_READWRITE, &dwOldProtect))
    return;

  *(PBYTE)pDbgBreakPoint = (BYTE)0xC3; // ret
#endif
}

}
