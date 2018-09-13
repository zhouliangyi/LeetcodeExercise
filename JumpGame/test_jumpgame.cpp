#include "JumpGame/jumpgame.h"
#include "gtest/gtest.h"

TEST(test_jumpgame, Example1)
{
    vector<int> in{ 2, 3, 1, 1, 4 };
    bool answer = true;
    JumpGame j;
    auto result = j.canJump(in);
    EXPECT_EQ(answer, result);
}

TEST(test_jumpgame, Example2)
{
    vector<int> in{ 2, 0 };
    bool answer = true;
    JumpGame j;
    auto result = j.canJump(in);
    EXPECT_EQ(answer, result);
}
