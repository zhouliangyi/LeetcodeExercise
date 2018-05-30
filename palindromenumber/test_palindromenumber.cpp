#include "palindromenumber.h"
#include "gtest/gtest.h"
TEST(test_palindromenumber, test_121)
{
    PalindromeNumber p;
    EXPECT_EQ(p.isPalindrome(121), true);
}

TEST(test_palindromenumber, test_minus121)
{
    PalindromeNumber p;
    EXPECT_EQ(p.isPalindrome(-121), false);
}

TEST(test_palindromenumber, test_10)
{
    PalindromeNumber p;
    EXPECT_EQ(p.isPalindrome(10), false);
}

TEST(test_palindromenumber, test_1221)
{
    PalindromeNumber p;
    EXPECT_EQ(p.isPalindrome(1221), true);
}
