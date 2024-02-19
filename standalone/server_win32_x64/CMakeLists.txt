cmake_minimum_required(VERSION 3.28.3)

project(server_win32_x64 LANGUAGES CXX)

# ---- Vars ----
set(PLATFORM ../../platform)
set(LIB ../../lib)
set(ASSETS ../../assets)

# ---- Dependencies Include ----
include_directories(
  src
  ${PLATFORM}/server/include
  ${PLATFORM}/server/src
  ${PLATFORM}/core/include
  ${PLATFORM}/core/src
)
file(GLOB SOURCES
  "src/*.cpp"
  "${PLATFORM}/server/include/*.h"
  "${PLATFORM}/server/src/*.cpp"
  "${PLATFORM}/core/include/*.h"
  "${PLATFORM}/core/src/*.cpp"
)

# ---- Create standalone executable ---- 
add_executable(${PROJECT_NAME} ${SOURCES})
set_target_properties(${PROJECT_NAME} PROPERTIES 
  CXX_STANDARD 17 
  OUTPUT_NAME ${PROJECT_NAME}
)
