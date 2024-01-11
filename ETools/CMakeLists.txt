cmake_minimum_required(VERSION 2.8)
project(EToolsTest) 
file(GLOB SOURCE_1 "${CMAKE_SOURCE_DIR}/src/*.cpp")  #程序必须链接到hello.cpp里面的函数
file(GLOB SOURCE_2 "${CMAKE_SOURCE_DIR}/*.cpp") #告诉源文件地址
include_directories("${CMAKE_SOURCE_DIR}/include/")  #头文件
add_library(ETools SHARED ${SOURCE_1}) #告诉cmake生成一个动态链接库libETools.so
link_libraries(ETools)
add_executable(EToolsTest ${SOURCE_2}) #生成可执行文件，可执行文件名EToolsTest
target_link_libraries(EToolsTest ${ETools}) #将libETools.so链接到可执行文件

