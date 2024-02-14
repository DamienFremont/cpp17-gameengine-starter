# this script adds all subprojects to a single build to allow IDEs understand the full project structure.

cmake_minimum_required(VERSION 3.28.3)

project(BuildAll LANGUAGES CXX)

# include(../cmake/tools.cmake)

# needed to generate test target
# enable_testing()

#  ---- projects ---- 
add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/../desktop ${CMAKE_BINARY_DIR}/desktop)
add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/../console ${CMAKE_BINARY_DIR}/console)
# add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/../console_test ${CMAKE_BINARY_DIR}/console_test)
# add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/../documentation ${CMAKE_BINARY_DIR}/documentation)
