cmake_minimum_required(VERSION 3.2.0)
project(BinaryTree)
#add_subdirectory("third_parties")

file(GLOB SUBDIRS "${CMAKE_CURRENT_SOURCE_DIR}/third_parties/*")
foreach(subdir ${SUBDIRS})
    add_subdirectory(${subdir})
endforeach()

set(MODULE      "BinaryTree")
set(LIBRARY     "lib${MODULE}")
set(TESTS       "tests")

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_PDB_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_subdirectory("src")
add_subdirectory("test")
enable_testing()
