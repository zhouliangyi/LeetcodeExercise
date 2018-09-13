#include "SpiralMatrix/spiralmatrix.h"
#include "gtest/gtest.h"

TEST(test_SpiralMatrix, Example1)
{
    vector<vector<int>> in{
        { 1, 2, 3, 4 },
        { 5, 6, 7, 8 },
        { 9, 10, 11, 12 }
    };
    vector<int> answer{ 1, 2, 3, 4, 8, 12, 11, 10, 9, 5, 6, 7 };

    SpiralMatrix s;
    auto result = s.spiralOrder(in);
    EXPECT_EQ(answer, result);
}
