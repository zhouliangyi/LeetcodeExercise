#include "MinimumPathSum/minimumpathsum.h"
#include "gtest/gtest.h"

TEST(test_MinimumPathSum, test_1)
{
    vector<vector<int>> in{
        { 1, 3, 1 },
        { 1, 5, 1 },
        { 4, 2, 1 }
    };

    MinimumPathSum m;
    auto result = m.minPathSum(in);
    auto answer = 7;
    EXPECT_EQ(answer, result);
}
