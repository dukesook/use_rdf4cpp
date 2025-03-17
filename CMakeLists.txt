cmake_minimum_required(VERSION 3.15)
project(MyProject)

# Set a default build type if not specified
if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release CACHE STRING "Choose the type of build." FORCE)
endif()


set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(${CMAKE_BINARY_DIR}/conan_toolchain.cmake)

find_package(rdf4cpp REQUIRED)

add_executable(hello main.cpp)
target_link_libraries(hello PRIVATE rdf4cpp::rdf4cpp)
