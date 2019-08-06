cmake_minimum_required(VERSION 3.15)
project(pthreads_test)

#find_library(PTHREAD_LIBRARIES NAMES pthreads)
# find_package(Threads REQUIRED)
find_package(pthreads CONFIG REQUIRED)

add_executable(${PROJECT_NAME} pthread_test.cc)
target_include_directories(${PROJECT_NAME} ${PThreads4W_INCLUDE_DIR})
target_link_libraries(${PROJECT_NAME} pthreads)
#target_link_libraries(${PROJECT_NAME} Threads::Threads)
