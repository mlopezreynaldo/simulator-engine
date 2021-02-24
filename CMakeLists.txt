 cmake_minimum_required(VERSION 3.17.5 FATAL_ERROR)

 set(CMAKE_CXX_STANDARD 11)

 project(engine)

 set(ENGINE_SOURCE
         ${CMAKE_CURRENT_LIST_DIR}/src/engine/engine.h
         ${CMAKE_CURRENT_LIST_DIR}/src/engine/engine.cpp)

 add_library(engine STATIC ${ENGINE_SOURCE})

 set(TESTING_SOURCE
         src/testing/testing.cpp)

 add_executable(program ${TESTING_SOURCE})

 target_link_libraries(program
         engine)

 set(CMAKE_CXX_STANDARD 20)