cmake_minimum_required(VERSION 3.1)
project(crtp)

set(CMAKE_CXX_STANDARD 14)

add_executable(runtime_example runtime.cpp runtime/dog.cpp)

add_executable(crtp_example crtp.cpp crtp/dog.cpp)
