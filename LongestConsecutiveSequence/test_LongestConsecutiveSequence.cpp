#include "LongestConsecutiveSequence/longestconsecutivesequencesolution.h"
#include "gtest/gtest.h"

TEST(test_longestConsecutive, test1)
{
    vector<int> in = { 100, 4, 200, 1, 3, 2 };
    int answer = 4;
    LongestConsecutiveSequenceSolution l;
    auto result = l.longestConsecutive(in);
    EXPECT_EQ(answer, result);
}
