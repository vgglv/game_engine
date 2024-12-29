cmake_minimum_required(VERSION 3.18 FATAL_ERROR)

file(GLOB_RECURSE ENGINE_SOURCES
    "main/*.hpp"
    "main/*.cpp"
)

add_library(GameEngine STATIC)

set_target_properties(GameEngine PROPERTIES
	CXX_STANDARD 20
	CXX_STANDARD_REQUIRED ON
)

target_include_directories(GameEngine PUBLIC ${CMAKE_CURRENT_LIST_DIR})

target_sources(GameEngine PRIVATE ${ENGINE_SOURCES})