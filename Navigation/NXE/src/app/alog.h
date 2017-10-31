#ifndef ALOG_H
#define ALOG_H

#include <spdlog/spdlog.h>
#include <iostream>

#ifndef __FILENAME__
#define __FILENAME__ __BASE_FILE__
#endif

//#define aTrace() spdlog::get("app")->debug() << __FILENAME__ << "@" << __LINE__ << " "
//#define aDebug() spdlog::get("app")->debug() << __FILENAME__ << "@" << __LINE__ << " "
//#define aInfo() spdlog::get("app")->info() << __FILENAME__ << "@" << __LINE__ << " "
//#define aError() spdlog::get("app")->error() << __FILENAME__ << "@" << __LINE__ << " "
//#define aFatal() spdlog::get("app")->critical()

#define aTrace() std::cout 
#define aDebug() std::cout 
#define aInfo()  std::cout
#define aError() std::cout 
#define aFatal() std::cout 

#endif // ALOG_H

