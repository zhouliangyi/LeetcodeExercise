#include "longestpalindromicsubstring.h"
#include "gtest/gtest.h"

TEST(test_LongestPalindromicSubstring, babad)
{
    LongestPalindromicSubstring l;
    EXPECT_EQ(l.longestPalindrome("babad"), "bab");
}

TEST(test_LongestPalindromicSubstring, cbbd)
{
    LongestPalindromicSubstring l;
    EXPECT_EQ(l.longestPalindrome("cbbd"), "bb");
}

TEST(test_LongestPalindromicSubstring, ccc)
{
    LongestPalindromicSubstring l;
    EXPECT_EQ(l.longestPalindrome("ccc"), "ccc");
}
