#include "longestsubstringwithoutrepeatingcharacters.h"
#include "gtest/gtest.h"
TEST(test_longestsubstringwithoutrepeatingcharacters, abcabcbb)
{
    longestsubstringwithoutrepeatingcharacters l;
    string s("abcabcbb");
    EXPECT_EQ(l.lengthOfLongestSubstring(s), 3);
}

TEST(test_longestsubstringwithoutrepeatingcharacters, bbbbb)
{
    longestsubstringwithoutrepeatingcharacters l;
    string s("bbbbb");
    EXPECT_EQ(l.lengthOfLongestSubstring(s), 1);
}

TEST(test_longestsubstringwithoutrepeatingcharacters, pwwkew)
{
    longestsubstringwithoutrepeatingcharacters l;
    string s("pwwkew");
    EXPECT_EQ(l.lengthOfLongestSubstring(s), 3);
}

TEST(test_longestsubstringwithoutrepeatingcharacters, c)
{
    longestsubstringwithoutrepeatingcharacters l;
    string s("c");
    EXPECT_EQ(l.lengthOfLongestSubstring(s), 1);
}

TEST(test_longestsubstringwithoutrepeatingcharacters, dvdf)
{
    longestsubstringwithoutrepeatingcharacters l;
    string s("dvdf");
    EXPECT_EQ(l.lengthOfLongestSubstring(s), 3);
}

TEST(test_longestsubstringwithoutrepeatingcharacters, abba)
{
    longestsubstringwithoutrepeatingcharacters l;
    string s("abba");
    EXPECT_EQ(l.lengthOfLongestSubstring(s), 2);
}
