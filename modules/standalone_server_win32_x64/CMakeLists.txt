cmake_minimum_required(VERSION 3.28.3)

project(standalone_server_win32_x64 LANGUAGES CXX)

# ---- Dependencies Include ----
include_directories(
  ${PROJECT_SOURCE_DIR}/src
  ${PROJECT_SOURCE_DIR}/../module_server/include
  ${PROJECT_SOURCE_DIR}/../module_server/src
    ${PROJECT_SOURCE_DIR}/../module_core/include
    ${PROJECT_SOURCE_DIR}/../module_core/src
)
file(GLOB SOURCES
  "${PROJECT_SOURCE_DIR}/src/*.cpp"
  "${PROJECT_SOURCE_DIR}/../module_server/include/*.h"
  "${PROJECT_SOURCE_DIR}/../module_server/src/*.cpp"
    "${PROJECT_SOURCE_DIR}/../module_core/include/*.h"
    "${PROJECT_SOURCE_DIR}/../module_core/src/*.cpp"
)

# ---- Create standalone executable ---- 
add_executable(${PROJECT_NAME} ${SOURCES})
set_target_properties(${PROJECT_NAME} PROPERTIES 
  CXX_STANDARD 17 
  OUTPUT_NAME ${PROJECT_NAME}
)
