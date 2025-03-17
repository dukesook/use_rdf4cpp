cmake_minimum_required(VERSION 3.14)
project(use_rdf4cpp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Conan setup for Conan 2.x
find_package(rdf4cpp REQUIRED)

add_executable(use_rdf4cpp main.cpp)

# Link rdf4cpp
target_link_libraries(use_rdf4cpp PRIVATE rdf4cpp::rdf4cpp)
