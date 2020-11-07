cmake_minimum_required(VERSION 3.16)

project(hdl_template)
find_package(verilator)

add_executable(Vhello_world sim/sim_main.cpp)
verilate(Vhello_world SOURCES src/hello_world.v)