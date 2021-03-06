cmake_minimum_required(VERSION 3.5)
project(Wolf3D C)

set(CMAKE_C_STANDARD 99)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Werror -Wextra")
set(LIBMLX ${CMAKE_SOURCE_DIR}/minilibx_linux/libmlx.a)

include_directories(.)
include_directories(includes)
include_directories(libft)
include_directories(minilibx_linux)
FILE(GLOB SOURCES main.c sources/*.c)

add_executable(${CMAKE_PROJECT_NAME} ${SOURCES})

add_subdirectory(libft)
target_link_libraries(${CMAKE_PROJECT_NAME} libft)

add_library(mlx STATIC IMPORTED)
set_property(TARGET mlx PROPERTY
        IMPORTED_LOCATION ${LIBMLX})
target_link_libraries(${CMAKE_PROJECT_NAME} mlx -lXext -lX11 -lm -lz)
