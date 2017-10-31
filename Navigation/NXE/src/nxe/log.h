#ifndef LOG_H
#define LOG_H

#include <spdlog/fmt/ostr.h>
#include <spdlog/spdlog.h>
#include <cstring>
#include <iostream>
#include <memory>

#ifndef __FILENAME__
#define __FILENAME__ __BASE_FILE__
#endif

#define nTrace() std::cout
#define nDebug() std::cout
#define nInfo() std::cout
#define nError() std::cout
#define nFatal() std::cout

#define dbusTrace() std::cout
#define dbusDebug() std::cout
#define dbusInfo() std::cout
#define dbusError() std::cout
#define dbusFatal() std::cout


namespace NXE {
struct PointClicked;
struct Position;
}  // namespace NXE

std::ostream& operator<<(std::ostream& os, const NXE::Position&);
std::ostream& operator<<(std::ostream& os, const NXE::PointClicked&);

#endif  // LOG_H
