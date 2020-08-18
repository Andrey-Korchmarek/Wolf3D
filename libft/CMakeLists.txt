cmake_minimum_required(VERSION 3.16)
project(lib C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

file(GLOB SRCS ./srcs/*.c srcs/*/*.c)
file(GLOB HEAD ./includes/*.h)

add_library(lib STATIC ${SRCS} ${HEAD})
