cmake_minimum_required(VERSION 3.28.3)

project(console LANGUAGES CXX)

# ---- Create standalone executable ---- 
file(GLOB SOURCES CONFIGURE_DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)
add_executable(${PROJECT_NAME} ${SOURCES})
set_target_properties(${PROJECT_NAME} PROPERTIES 
  CXX_STANDARD 17 
  OUTPUT_NAME "console"
)
