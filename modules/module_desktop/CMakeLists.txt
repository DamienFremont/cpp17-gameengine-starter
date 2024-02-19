cmake_minimum_required(VERSION 3.28.3)

project(module_desktop LANGUAGES CXX)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
add_library(${PROJECT_NAME} ${CMAKE_CURRENT_SOURCE_DIR}/src/desktop.cpp)

# ---- Dependencies ----
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../module_core/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../lib_SDL2/include)
