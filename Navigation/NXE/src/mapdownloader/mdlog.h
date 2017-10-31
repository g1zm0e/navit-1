#ifndef LOG_H
#define LOG_H

#include <spdlog/spdlog.h>
#include <iostream>

#ifndef __FILENAME__
#define __FILENAME__ __BASE_FILE__
#endif

#define mdTrace() std::cout
#define mdDebug() std::cout
#define mdInfo() std::cout
#define mdError() std::cout
#define mdFatal() std::cout

#endif // LOG_H

