cmake_minimum_required(VERSION 3.20)
project(lab_2)

set(CMAKE_CXX_STANDARD 14)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)

add_executable(lab_2 main.cpp Clothes.cpp Clothes.h)

target_link_libraries(lab_2 sfml-graphics sfml-audio)
