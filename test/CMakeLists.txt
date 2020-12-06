file(GLOB SRC_TEST_FILES
	"*.cpp"
)

add_executable(CPPTutorial-test
	${SRC_TEST_FILES}
)

include_directories(../include/)

add_test(NAME CPPTutorial-test COMMAND CPPTutorial-test)

target_link_libraries(CPPTutorial-test PUBLIC CPPTutorial-static gtest gmock)
