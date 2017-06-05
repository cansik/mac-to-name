cmake_minimum_required(VERSION 3.7)
project(mac_to_name)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c)
add_executable(mac_to_name ${SOURCE_FILES})