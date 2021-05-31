CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

SET(CMAKE_CXX_STANDARD 11)

ADD_SUBDIRECTORY(googletest)

ADD_EXECUTABLE(test
    personalTask_test.cpp 
    plannerTest.cpp      
    schoolTask_test.cpp   
    sortCategory_test.cpp 
    sortDate_test.cpp     
    sortName_test.cpp     
    sortPriority_test.cpp 
    task_test.cpp  
    main.cpp
)


TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)
