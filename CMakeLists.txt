# this script adds all subprojects to a single build to allow IDEs understand the full project structure.

cmake_minimum_required(VERSION 3.28.3)

project(all LANGUAGES CXX)

add_subdirectory(platform/core ${CMAKE_BINARY_DIR}/core)
add_subdirectory(platform/desktop ${CMAKE_BINARY_DIR}/desktop)
add_subdirectory(platform/server ${CMAKE_BINARY_DIR}/server)
add_subdirectory(standalone/desktop_win32_x64 ${CMAKE_BINARY_DIR}/desktop_win32_x64)
add_subdirectory(standalone/server_win32_x64 ${CMAKE_BINARY_DIR}/server_win32_x64)
