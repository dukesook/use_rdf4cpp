cmake_minimum_required(VERSION 3.14)
project(MyRDFProject LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(rdf4cpp REQUIRED)

add_executable(MyRDFProject main.cpp)

target_link_libraries(MyRDFProject PRIVATE rdf4cpp::rdf4cpp)
