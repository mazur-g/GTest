cmake_minimum_required(VERSION 3.7.2)
project(palindrome)

# Wlacz testowanie w projekcie
enable_testing()

add_subdirectory(palindromeLib)
add_subdirectory(palindromeTests)
