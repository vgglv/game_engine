cmake_minimum_required(VERSION 3.18 FATAL_ERROR)

project(Galaga)

file(GLOB_RECURSE GAME_SOURCES
    "src/*.cpp"
    "src/*.hpp"
)

add_executable(Galaga ${GAME_SOURCES})

target_link_libraries(Galaga PRIVATE GameEngine)

set_target_properties(Galaga PROPERTIES
	CXX_STANDARD 20
	CXX_STANDARD_REQUIRED ON
)
