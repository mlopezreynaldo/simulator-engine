# cmake_minimum_required(VERSION <specify CMake version here>)
project(SimEngine)

set(CMAKE_CXX_STANDARD 20)

add_executable(SimEngine src/main.cpp src/sysstems/draw/Draw.cpp src/systems/draw/Draw.h src/systems/input/input.cpp src/systems/input/input.h src/systems/physics/Physics.cpp src/systems/physics/Physics.h src/systems/sound/Sounds.cpp src/systems/sound/Sounds.h src/systems/utilities/utilities.cpp src/systems/utilities/utilities.h)