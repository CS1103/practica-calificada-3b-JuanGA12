cmake_minimum_required(VERSION 3.14.2)
project(pc3b)

set(CMAKE_CXX_STANDARD 17)
if(WIN32)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")
else()
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror -Wpedantic -Wextra")
endif()

add_executable(pc3b main.cpp Rectangulo.h Rectangulo.cpp Tablero.cpp Tablero.h Lectura.h "Seleccion y Ordenamiento.h" Escritura.h)