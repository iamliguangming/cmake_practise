PROJECT (HELLO)
cmake_minimum_required(VERSION 3.19)
set(CMAKE_CXX_STANDARD 11)
add_subdirectory(src)
MESSAGE(STATUS "This is BINARY dir " ${HELLO_BINARY_DIR}) 
MESSAGE(STATUS "This is SOURCE dir "${HELLO_SOURCE_DIR})
