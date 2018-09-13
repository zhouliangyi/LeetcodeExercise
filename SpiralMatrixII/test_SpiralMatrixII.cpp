#include "SpiralMatrixII/spiralmatrixii.h"
#include "gtest/gtest.h"

TEST(test_SpiralMatrixII, Example1)
{
    int in = 3;
    vector<vector<int>> answer{
        { 1, 2, 3 },
        { 8, 9, 4 },
        { 7, 6, 5 }
    };

    SpiralMatrixII s;
    auto result = s.generateMatrix(in);
    EXPECT_EQ(answer, result);
}
