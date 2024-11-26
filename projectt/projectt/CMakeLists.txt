cmake_minimum_required(VERSION 3.10)
project(LeetCode130)

# 设置C++标准为 C++14
set(CMAKE_CXX_STANDARD 14)

# 包含头文件目录
include_directories(include)

# 添加可执行文件
add_executable(LeetCode130 src/main.cpp src/solution.cpp)