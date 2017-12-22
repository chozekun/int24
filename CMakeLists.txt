cmake_minimum_required(VERSION 3.0.0)
project(int24 LANGUAGES C CXX)

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug)
    set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
endif(NOT CMAKE_BUILD_TYPE)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++14 -lstdc++ -lm -Wall -Wextra -Wpedantic")

if(NOT WIN32)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fPIC")
endif(NOT WIN32)

include_directories(types)

#Types
set(SourceGroup_Types
    "types/int24.h"
    "types/int24_t/int24_t.cpp"
    "types/int24_t/int24_t.h"
    "types/int24_t/uint24_t.cpp"
    "types/int24_t/uint24_t.h"
    "types/utility/conversion.hpp"
    "types/utility/operators.hpp"
    "types/utility/integer.hpp"
)
source_group("rPiDeviceIO\\Types" FILES ${SourceGroup_Types})

#Tests
set(SourceGroup_Test
    "main.cpp"
)
source_group("rPiDeviceIO\\Test" FILES ${SourceGroup_Test})

set(SOURCE
    ${SourceGroup_Types}
    ${SourceGroup_Test}
)

add_executable(${PROJECT_NAME} ${SOURCE})
