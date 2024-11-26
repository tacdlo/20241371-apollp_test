#!/bin/bash

# 创建build目录
mkdir -p build
cd build

# 使用cmake生成Makefile
cmake ..

# 编译项目
make

# 运行程序
./LeetCode130