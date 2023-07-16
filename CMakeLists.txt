cmake_minimum_required(VERSION 3.25)
project(kolokwium2)

set(CMAKE_CXX_STANDARD 20)

add_executable(kolokwium2 main.cpp Motocycle.cpp Vehicle.cpp Cars.cpp VehicleCatalog.cpp)
