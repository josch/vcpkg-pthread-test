project(pthreads_test)

find_library(PTHREAD_LIBRARIES NAMES pthreads)
# find_package(Threads REQUIRED)

add_executable(${PROJECT_NAME} pthread_test.cc)
target_link_libraries(${PROJECT_NAME} ${PTHREAD_LIBRARIES} winmm)
#target_link_libraries(${PROJECT_NAME} Threads::Threads)
