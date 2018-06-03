cmake_minimum_required(VERSION 3.7.2)

# Zarzadaj wyszukania i dolaczenia papietu GTest
find_package(GTest REQUIRED)
	
# Dolacz sciezke ${GTEST_INCLUDE_DIRS} do INCLUDE_PATH
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(PalindromeTest PalindromeTest.cpp)
target_link_libraries(PalindromeTest ${GTEST_BOTH_LIBRARIES} palindromeLib)
target_link_libraries(PalindromeTest ${GTEST_LIBRARIES} pthread)

# Zarejestruj stworzony test
add_test(PalindromeTest PalindromeTest)