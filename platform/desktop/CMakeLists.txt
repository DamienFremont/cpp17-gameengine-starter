cmake_minimum_required(VERSION 3.28.3)

project(desktop LANGUAGES CXX)

include_directories(include)
add_library(${PROJECT_NAME} src/desktop.cpp)

# ---- Dependencies ----
include_directories(../core/include)
include_directories(../../lib/SDL2/include)
