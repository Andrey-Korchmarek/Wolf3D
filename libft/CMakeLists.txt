cmake_minimum_required(VERSION 3.5.1)
project(libft C)

set(CMAKE_C_STANDARD 11)

include_directories(.)
include_directories(includes)

file(GLOB SRCS srcs/*.c srcs/*/*.c)
file(GLOB HEAD includes/*.h)

add_library(libft STATIC ${SRCS})
