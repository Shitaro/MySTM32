cmake_minimum_required(VERSION 3.1...3.15)

if(${CMAKE_VERSION} VERSION_LESS 3.12)
    cmake_policy(VERSION ${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION})
endif()

project(MySTM32
        VERSION 0.1
        DESCRIPTION "Utilize STM32F4Discovery without HAL Driver"
        LANGUAGES CXX ASM)

add_subdirectory(src)