cmake_minimum_required(VERSION 3.0)

project(relsymlink)

add_executable(rslink main.cpp CommandLineInterface.hpp Common.hpp FileSystem.hpp)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")

include_directories(boost)

find_package(Boost COMPONENTS filesystem program_options)

target_link_libraries(rslink Boost::filesystem Boost::program_options)