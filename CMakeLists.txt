cmake_minimum_required(VERSION 3.30)
project(data_structure C)

set(CMAKE_C_STANDARD 11)

add_executable(data_structure class1.c
        weight_and_height.h
        class2.c
        main.c
)
