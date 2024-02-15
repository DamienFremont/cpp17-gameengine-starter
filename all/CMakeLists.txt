# this script adds all subprojects to a single build to allow IDEs understand the full project structure.

cmake_minimum_required(VERSION 3.28.3)

project(BuildAll LANGUAGES CXX)

# include(../cmake/tools.cmake)

# needed to generate test target
# enable_testing()

#  ---- projects ---- 

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/../modules/desktop ${CMAKE_BINARY_DIR}/desktop)
add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/../standalones/desktop_win32_x64 ${CMAKE_BINARY_DIR}/desktop_win32_x64)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/../modules/server ${CMAKE_BINARY_DIR}/server)
add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/../standalones/server_win32_x64 ${CMAKE_BINARY_DIR}/server_win32_x64)

