cmake_minimum_required(VERSION 3.0)

project(IEP2)

if(CMAKE_VERSION GREATER "3.1.2")
    set(CMAKE_CXX_STANDARD 14)
    set(CMAKE_CXX_STANDARD_REQUIRED ON)
    set(CMAKE_CXX_EXTENSIONS OFF)
endif()

add_executable(${PROJECT_NAME}
                main.cpp
                Vegetable.hpp
                Purchase.hpp
                Vegetable.cpp
                Purchase.cpp)
