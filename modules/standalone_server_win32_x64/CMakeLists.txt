cmake_minimum_required(VERSION 3.28.3)

project(standalone_server_win32_x64 LANGUAGES CXX)

# ---- Dependencies ----
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../module_core/src)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../module_server/src)

# ---- Create standalone executable ---- 
file(GLOB SOURCES CONFIGURE_DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)
add_executable(${PROJECT_NAME} ${SOURCES})
set_target_properties(${PROJECT_NAME} PROPERTIES 
  CXX_STANDARD 17 
  OUTPUT_NAME ${PROJECT_NAME}
)
