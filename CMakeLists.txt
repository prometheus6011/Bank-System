cmake_minimum_required(VERSION 3.25)
project(Bank_System)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 14)

# Define the project structure
set(SOURCE_DIR ${CMAKE_SOURCE_DIR}/src)
set(INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)
set(TEST_DIR ${CMAKE_SOURCE_DIR}/test)

# Include directories for source files and Google Test
include_directories(${SOURCE_DIR})
include_directories(${INCLUDE_DIR}/googletest/googletest/include)

# Locate Google Test libraries (assuming static build exists in include folder)
set(GTEST_LIBS
        ${INCLUDE_DIR}/googletest/build/lib/libgtest.a
        ${INCLUDE_DIR}/googletest/build/lib/libgtest_main.a
)

# Source files for the main application
set(SOURCE_FILES
        ${SOURCE_DIR}/Account.cpp
        ${SOURCE_DIR}/Checkings.cpp
        ${SOURCE_DIR}/Savings.cpp
        ${SOURCE_DIR}/CD.cpp
)

# Add the main application executable
add_executable(Bank_System
        ${SOURCE_FILES}
        ${SOURCE_DIR}/main.cpp
        src/validation.cpp
        src/validation.h
        src/Bank.h
        src/Bank.cpp
)

# Add the test executable
add_executable(test_checkings
        ${TEST_DIR}/test_checkings.cpp
        ${SOURCE_FILES}
)

# Link Google Test libraries and pthread for the test executable
target_link_libraries(test_checkings ${GTEST_LIBS} pthread)
