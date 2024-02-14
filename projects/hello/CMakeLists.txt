cmake_minimum_required(VERSION 3.28.3)

project(hello LANGUAGES CXX)

# ---- Create standalone executable ---- 
file(GLOB sources CONFIGURE_DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/source/*.cpp)
add_executable(${PROJECT_NAME} ${sources})
set_target_properties(${PROJECT_NAME} PROPERTIES CXX_STANDARD 17 OUTPUT_NAME "hello")

