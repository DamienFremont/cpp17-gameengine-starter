cmake_minimum_required(VERSION 3.28.3)

project(02_getting_an_image_on_the_screen LANGUAGES CXX)

# ---- Dependencies ----
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../include/SDL2)

# ---- Create standalone executable ---- 
file(GLOB SOURCES CONFIGURE_DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)
add_executable(${PROJECT_NAME} WIN32 ${SOURCES})
set_target_properties(${PROJECT_NAME} PROPERTIES
  WIN32_EXECUTABLE ON 
  CXX_STANDARD 17 
  OUTPUT_NAME "02_getting_an_image_on_the_screen"
)

# ---- Dependencies ----
target_link_libraries(${PROJECT_NAME} ${PROJECT_SOURCE_DIR}/../lib/SDL2/x64/SDL2.lib)

# ---- Bundle ----
file(COPY ${PROJECT_SOURCE_DIR}/assets/ DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/Debug/assets/)
file(COPY ${PROJECT_SOURCE_DIR}/../lib/SDL2/x64/SDL2.dll DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/Debug)
