cmake_minimum_required(VERSION 3.28.3)

project(standalone_desktop_win32_x64 LANGUAGES CXX)

# ---- Dependencies Sources ----
include_directories(
  ${PROJECT_SOURCE_DIR}/src
  ${PROJECT_SOURCE_DIR}/../module_desktop/include
  ${PROJECT_SOURCE_DIR}/../module_desktop/src
    ${PROJECT_SOURCE_DIR}/../module_core/include
    ${PROJECT_SOURCE_DIR}/../module_core/src
  ${CMAKE_CURRENT_SOURCE_DIR}/../lib_SDL2/include
)
file(GLOB SOURCES
  "${PROJECT_SOURCE_DIR}/src/*.cpp"
  "${PROJECT_SOURCE_DIR}/../module_desktop/include/*.h"
  "${PROJECT_SOURCE_DIR}/../module_desktop/src/*.cpp"
    "${PROJECT_SOURCE_DIR}/../module_core/include/*.h"
    "${PROJECT_SOURCE_DIR}/../module_core/src/*.cpp"
)

# ---- Create standalone executable ---- 
add_executable(${PROJECT_NAME} WIN32 ${SOURCES})
set_target_properties(${PROJECT_NAME} PROPERTIES
  WIN32_EXECUTABLE ON 
  CXX_STANDARD 17 
  OUTPUT_NAME ${PROJECT_NAME}
)

# ---- Dependencies ----
target_link_libraries(${PROJECT_NAME} ${PROJECT_SOURCE_DIR}/../lib_SDL2/x64/SDL2.lib)

# ---- Bundle ----
file(COPY ${PROJECT_SOURCE_DIR}/../module_desktop/assets/ DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/Debug/assets/)
file(COPY ${PROJECT_SOURCE_DIR}/../lib_SDL2/x64/SDL2.dll DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/Debug)
