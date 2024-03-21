cmake_minimum_required(VERSION 3.26)
project(DS)

set(CMAKE_CXX_STANDARD 17)

add_executable(DS main.c
        SeqList.h
        SeqList.c)
