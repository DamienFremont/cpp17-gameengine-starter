cmake_minimum_required(VERSION 3.28.3)

project(desktop_win32_x64 LANGUAGES CXX)

# ---- Vars ----
set(PLATFORM ../../platform)
set(LIB ../../lib)
set(ASSETS ../../assets)

# ---- Dependencies Sources ----
include_directories(
  src
  ${PLATFORM}/desktop/include
  ${PLATFORM}/desktop/src
  ${PLATFORM}/core/include
  ${PLATFORM}/core/src
  ${LIB}/SDL2/include
)
file(GLOB SOURCES
  "src/*.cpp"
  "${PLATFORM}/desktop/include/*.h"
  "${PLATFORM}/desktop/src/*.cpp"
  "${PLATFORM}/core/include/*.h"
  "${PLATFORM}/core/src/*.cpp"
)

# ---- Create standalone executable ---- 
add_executable(${PROJECT_NAME} WIN32 ${SOURCES})
set_target_properties(${PROJECT_NAME} PROPERTIES
  WIN32_EXECUTABLE ON 
  CXX_STANDARD 17 
  OUTPUT_NAME ${PROJECT_NAME}
)

# ---- Dependencies ----
target_link_libraries(${PROJECT_NAME} ${LIB}/SDL2/x64/SDL2)

# ---- Bundle ----
file(COPY ${ASSETS}/images DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/Debug/assets/)
file(COPY ${LIB}/SDL2/x64/SDL2.dll DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/Debug)
