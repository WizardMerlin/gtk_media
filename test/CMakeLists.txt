
INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR}/include)
SET(TEST_EXEC_PATH ${PROJECT_SOURCE_DIR}/test/exec_output)
SET(EXECUTABLE_OUTPUT_PATH ${TEST_EXEC_PATH})


#watch out:
#run make before u run ctest or make test
#cause we need the executable for test
add_executable(test_log test_log.c)


enable_testing()



##for every module we test it in a standalone file
#
#test main 
#in dir test we add more test (we use make test to run this)
add_test (test_run ${PROJECT_SOURCE_DIR}/bin/main) #test whether the executable can run 


#test log module
add_test(test_log ${TEST_EXEC_PATH}/test_log)





