#include "ClimbingStairs/climbingstairs.h"
#include "gtest/gtest.h"

TEST(test_ClimbingStairs, test1)
{
    int in = 2;
    int answer = 2;
    ClimbingStairsSolution c;
    auto result = c.climbStairs(in);
    EXPECT_EQ(answer, result);
}
