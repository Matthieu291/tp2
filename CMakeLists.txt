cmake_minimum_required(VERSION 3.7)
project(tp2)

set(CMAKE_CXX_STANDARD 14)
set (CMAKE_AUTOMOC ON)
find_package(Qt5Widgets CONFIG REQUIRED)
add_executable(tp2 mainwindow.cpp main.cpp)
target_link_libraries(tp2 Qt5::Widgets)