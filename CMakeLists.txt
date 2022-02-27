cmake_minimum_required (VERSION 3.5)
project(main C)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -g")

add_executable(
    main.wasm
    main.c
)
