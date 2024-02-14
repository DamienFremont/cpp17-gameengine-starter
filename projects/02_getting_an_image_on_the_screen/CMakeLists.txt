cmake_minimum_required(VERSION 3.28.3)

project(02_getting_an_image_on_the_screen LANGUAGES CXX)

# ---- Dependencies ----
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../include/SDL2)
#include_directories("${PROJECT_SOURCE_DIR}/../lib/SDL2")
#add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/../lib/SDL2 ${CMAKE_CURRENT_BINARY_DIR}/SDL2)

# ---- Create standalone executable ---- 
file(GLOB SOURCES CONFIGURE_DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)
add_executable(${PROJECT_NAME} WIN32 ${SOURCES})
set_target_properties(${PROJECT_NAME} PROPERTIES
  WIN32_EXECUTABLE ON 
  CXX_STANDARD 17 
  OUTPUT_NAME "02_getting_an_image_on_the_screen"
)

# configure_file(<input> ${CMAKE_CURRENT_BINARY_DIR}/02_getting_an_image_on_the_screen COPYONLY)

# ---- Dependencies ----
target_link_libraries(${PROJECT_NAME} ${PROJECT_SOURCE_DIR}/../lib/SDL2/x64/SDL2.lib)
