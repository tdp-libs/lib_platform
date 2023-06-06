#ifndef lib_platform_Format_h
#define lib_platform_Format_h

#if TP_CPP_VERSION>=20
#include <format>
#else
#include <sstream>
#include <string>

namespace std
{
// std::format C++20 short implementation
template<typename T>
void format_helper(std::ostringstream& oss, std::string_view& str, const T& value)
{
  std::size_t openBracket = str.find('{');
  if (openBracket == std::string::npos) { return; }
  std::size_t closeBracket = str.find('}', openBracket + 1);
  if (closeBracket == std::string::npos) { return; }
  oss << str.substr(0, openBracket) << value;
  str = str.substr(closeBracket + 1);
}

template<typename... Targs>
std::string format(std::string_view str, Targs...args)
{
  std::ostringstream oss;
  (format_helper(oss, str, args),...);
  oss << str;
  return oss.str();
}
}
#endif


#endif
