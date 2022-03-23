cmake_minimum_required(VERSION 3.21)
project (GestionHotel C)

set(CMAKE_C_STANDARD 99)

add_executable(GestionHotel main.c HOTEL_LLC_BIBLIO.c HOTEL_LLC_BIBLIO.h)
