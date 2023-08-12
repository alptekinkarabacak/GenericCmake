cmake_minimum_required(VERSION 3.16.0)
project(Generic_Cmake)
set(CMAKE_CXX_STANDARD 20)

# Set the directories for the project
# Set the directories for the project
set(SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)
set(INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/inc)

# Add all source files to the SOURCES variable
file(GLOB_RECURSE SOURCES ${SOURCE_DIR}/*.cpp)
# Add all header files to the HEADERS variable
# List all directories in the "inc" directory
file(GLOB INC_DIRS "inc/*")

# Print the list of directories

# Create the executable target
add_executable(Generic_Cmake ${SOURCES} main.cpp)

# Add the include directories to the target
foreach(dir ${INC_DIRS})
  message("Directory: ${dir}")
  include_directories(${dir})
endforeach()

