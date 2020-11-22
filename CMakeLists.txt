cmake_minimum_required(VERSION 3.16.3)
project(CPPTutorial)

option(BUILD_TESTS "Turn on build for tests of CPPTutorial" OFF)

file(GLOB SRC_FILES
	"src/*.cpp"
)

set(INC_FILES_DIR
	include/
)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if (BUILD_TESTS)
	add_subdirectory(external/googletest)
	add_subdirectory(test)
endif()

include_directories(
	${INC_FILES_DIR}
)

add_executable(CPPTutorial
	${SRC_FILES}
)

add_library(CPPTutorial-static STATIC
	${SRC_FILES}
)
