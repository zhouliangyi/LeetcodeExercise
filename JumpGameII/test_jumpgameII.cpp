#include "JumpGameII/jumpgameII.h"
#include "gtest/gtest.h"

TEST(test_jumpgameII, Example1)
{
    vector<int> in{ 2, 3, 1, 1, 4 };
    int answer = 2;
    JumpGameII j;
    auto result = j.jump(in);
    EXPECT_EQ(answer, result);
}


TEST(test_jumpgameII, Example2)
{
    vector<int> in{ 1,2 };
    int answer = 1;
    JumpGameII j;
    auto result = j.jump(in);
    EXPECT_EQ(answer, result);
}

TEST(test_jumpgameII, Example3)
{
    vector<int> in{ 1,2,1,1,1 };
    int answer = 3;
    JumpGameII j;
    auto result = j.jump(in);
    EXPECT_EQ(answer, result);
}
