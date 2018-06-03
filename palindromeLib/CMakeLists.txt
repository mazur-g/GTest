cmake_minimum_required(VERSION 3.7.2)

project(palindromeLib)

add_library(palindromeLib Palindrome.cpp)

target_include_directories(palindromeLib 
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
)
