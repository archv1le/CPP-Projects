cmake_minimum_required(VERSION 3.27)
project(to_do_list)

set(CMAKE_CXX_STANDARD 23)

add_executable(to_do_list main.cpp
        Todo.cpp
        Todo.h
        Todo.h
        TodoList.cpp
        TodoList.h)
