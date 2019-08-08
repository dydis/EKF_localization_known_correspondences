cmake_minimum_required(VERSION 2.8.3)

project(ekf_localization)

if(CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
    set(CMAKE_CXX_FLAGS "-std=c++11 ${CMAKE_CXX_FLAGS}")
endif()

set(CMAKE_CXX_FLAGS "-O2 ${CMAKE_CXX_FLAGS}")

add_definitions(-D_USE_MATH_DEFINES)

find_package(OpenGL REQUIRED)
find_package(SDL2 REQUIRED)

SET(EIGEN3_INCLUDE_DIR "$ENV{EIGEN3_INCLUDE_DIR}")

set (HEADERS
    src/landmark.h
    src/EKF_localization.h
    src/robot.h
    src/opengl_display.h
    src/config.h
)

add_executable(EKF_localization
    src/main.cpp
    src/EKF_localization.cpp
    src/robot.cpp
    src/opengl_display.cpp
    ${HEADERS}
)

include_directories(${SDL2_INCLUDE_DIRS})
include_directories("${EIGEN3_INCLUDE_DIR}")

target_link_libraries(EKF_localization ${SDL2_LIBRARIES} ${OPENGL_LIBRARIES})
