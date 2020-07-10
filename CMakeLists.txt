cmake_minimum_required(VERSION 3.0.0)

project(practica)


set(CMAKE_CXX_COMPILER g++)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++20 -Wall -Wextra -Wpedantic -Werror")
set(SOURCES List.cpp Main.cpp)

add_executable(${PROJECT_NAME} Main.cpp)

target_include_directories(practica
    PRIVATE 
        ${PROJECT_SOURCE_DIR})
