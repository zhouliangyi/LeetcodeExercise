#include "SearchA2DMatrixII/searcha2dmatrixII.h"
#include "gtest/gtest.h"
TEST(test_SearchA2DMatrixII, Example1)
{
    vector<vector<int>> matrixIn{
        {1,   4,  7, 11, 15},
                                 {2,   5,  8, 12, 19},
                                 {3,   6,  9, 16, 22},
                                 {10, 13, 14, 17, 24},
                                 {18, 21, 23, 26, 30}};
    int target = 5;
    bool answer = true;
    SearchA2DMatrixII s;
    auto result = s.searchMatrix(matrixIn,target);
    EXPECT_EQ(answer,result);
}
