# this script adds all subprojects to a single build to allow IDEs understand the full project structure.

cmake_minimum_required(VERSION 3.28.3)

project(BuildAll LANGUAGES CXX)

# include(../cmake/tools.cmake)

# needed to generate test target
# enable_testing()

#  ---- projects ---- 

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/../module_core ${CMAKE_BINARY_DIR}/module_core)
add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/../module_desktop ${CMAKE_BINARY_DIR}/module_desktop)
add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/../module_server ${CMAKE_BINARY_DIR}/module_server)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/../standalone_desktop_win32_x64 ${CMAKE_BINARY_DIR}/standalone_desktop_win32_x64)
add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/../standalone_server_win32_x64 ${CMAKE_BINARY_DIR}/standalone_server_win32_x64)

