cmake_minimum_required(VERSION 3.16)
project(Wolf3D C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Werror -Wextra")
set(LIBMLX ${CMAKE_CURRENT_SOURCE_DIR}/minilibx_macos/libmlx.a)

find_library(OPENGL OpenGL)
find_library(APPKIT AppKit)

include_directories(.)
include_directories(libft)
#include_directories(libft/includes)
include_directories(minilibx_macos)
include_directories(includes)
include_directories(sources)
FILE(GLOB SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/*.c ${CMAKE_CURRENT_SOURCE_DIR}/sources/*.c ${CMAKE_CURRENT_SOURCE_DIR}/sources/*/*.c)
FILE(GLOB INCLUDES includes/*.h)

add_executable(${PROJECT_NAME} ${SOURCES} ${INCLUDES})

add_subdirectory(libft)
target_link_libraries(${PROJECT_NAME} lib)

add_library(mlx STATIC IMPORTED)
set_property(TARGET mlx PROPERTY
        IMPORTED_LOCATION ${LIBMLX})
target_link_libraries(${PROJECT_NAME} mlx ${OPENGL} ${APPKIT})