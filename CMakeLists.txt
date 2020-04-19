cmake_minimum_required(VERSION 3.13.4)
project(soa_1920_sincronizacion_DarkWayC0de)

set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} "-std=c++17 -pthread")

find_package(Threads)

add_executable(soa_1920_sincronizacion_DarkWayC0de
        src/main.cpp
        src/Cola.h
        src/Cliente.cpp         src/Cliente.h
        )

target_link_libraries(soa_1920_sincronizacion_DarkWayC0de ${CMAKE_THREAD_LIBS_INIT})