cmake_minimum_required(VERSION 3.18 FATAL_ERROR)

file(GLOB_RECURSE ENGINE_SOURCES
	"src/engine/*.hpp"
	"src/engine/*.cpp"
	"src/game/*.hpp"
	"src/scene/*.cpp"
	"src/scene/*.hpp"
	"libs/glad/src/glad.c"
)

add_library(GameEngine STATIC)

set_target_properties(GameEngine PROPERTIES
	CXX_STANDARD 20
	CXX_STANDARD_REQUIRED ON
)

target_include_directories(GameEngine PUBLIC ${CMAKE_CURRENT_LIST_DIR}/src)
target_include_directories(GameEngine PUBLIC ${CMAKE_CURRENT_LIST_DIR}/libs/glad/include)

target_sources(GameEngine PRIVATE ${ENGINE_SOURCES})

add_subdirectory(libs)

target_link_libraries(GameEngine PUBLIC
	glfw
)
