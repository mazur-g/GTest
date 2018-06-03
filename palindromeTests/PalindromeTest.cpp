#include "Palindrome.h"
#include "gtest/gtest.h"

TEST(isPalindrome,evenWordsLength)
{
	ASSERT_EQ(true,IsPalindrome("AMANAPLANACANALPANAMA"));
	ASSERT_EQ(true,IsPalindrome("RACECAR"));
	ASSERT_EQ(false,IsPalindrome("RANDOMWORD"));
}

TEST(isPalindrome,oddWordsLength)
{
	ASSERT_EQ(true,IsPalindrome("ARAARA"));
	ASSERT_EQ(true,IsPalindrome("PULLUP"));
	ASSERT_EQ(false,IsPalindrome("RANDOMWORDS"));
}


int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
