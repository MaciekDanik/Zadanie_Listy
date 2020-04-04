cmake_minimum_required(VERSION 3.10)

project(NazwaProjektu_DO_ZMIANY)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Werror")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pedantic")

set(LIBRARY_OUTPUT_PATH build/)
set(BINARY_OUTPUT_PATH build/)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

include(External_GTest.cmake)

# SRC
include_directories(Include)
include_directories(Test)

add_executable(testy "main.cpp" ")


set(TEST_BINARY_FILES $<TARGET_OBJECTS:source_objects_lib>
                      ${TEST_FILES}
                      ${MAIN_TEST})

add_executable(testy_ut "test.cpp" "i_inne_pliki_cpp_z testami" "i inne pliki .cpp")
target_link_libraries(testy_ut 	${GTEST_MAIN_LIBRARY}
                                                ${GTEST_LIBRARY}
                                                ${GMOCK_MAIN_LIBRARY}
                                                ${GMOCK_LIBRARY})