# this script adds all subprojects to a single build to allow IDEs understand the full project structure.

cmake_minimum_required(VERSION 3.28.3)

project(BuildAll LANGUAGES CXX)

# include(../cmake/tools.cmake)

# needed to generate test target
# enable_testing()

#  ---- projects ---- 
add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/../02_getting_an_image_on_the_screen ${CMAKE_BINARY_DIR}/02_getting_an_image_on_the_screen)
add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/../hello ${CMAKE_BINARY_DIR}/hello)
# add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/../hello_test ${CMAKE_BINARY_DIR}/hello_test)
# add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/../documentation ${CMAKE_BINARY_DIR}/documentation)
