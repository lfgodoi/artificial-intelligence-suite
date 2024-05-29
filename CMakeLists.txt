cmake_minimum_required(VERSION 3.10)
project(nearestNeighbor)

# Setting the C++ standard to C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Adding the executable target
add_executable(nearestNeighbor ./src/nearestNeighbor.cpp)

# Linking any required libraries
target_link_libraries(nearestNeighbor PRIVATE m)