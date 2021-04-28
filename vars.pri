TARGET = lib_platform
TEMPLATE = lib

DEFINES += LIB_PLATFORM_LIBRARY

HEADERS += inc/lib_platform/Warnings.h

HEADERS += inc/lib_platform/Polyfill.h

HEADERS += inc/lib_platform/RandomDevice.h
SOURCES += src/RandomDevice.cpp

HEADERS += inc/lib_platform/Android.h
SOURCES += src/Android.cpp

HEADERS += inc/lib_platform/OSX.h

HEADERS += inc/lib_platform/SetThreadName.h
SOURCES += src/SetThreadName.cpp

HEADERS += inc/lib_platform/Globals.h
#SOURCES += src/Globals.cpp


