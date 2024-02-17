cmake_minimum_required(VERSION 3.28.3)

project(module_desktop LANGUAGES CXX)

# ---- Dependencies ----
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../module_core/src)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../lib_SDL2/include)
