#include "SearchA2DMatrix/searcha2dmatrix.h"
#include "gtest/gtest.h"

TEST(test_SearchA2DMatrix, Example1)
{
    vector<vector<int>> matrix;
    int target = 1;
    bool answer = false;
    SearchA2DMatrix s;
    auto result = s.searchMatrix(matrix,target);
    EXPECT_EQ(answer,result);
}


TEST(test_SearchA2DMatrix, Example2)
{
    vector<vector<int>> matrix{{1}};
    int target = 1;
    bool answer = true;
    SearchA2DMatrix s;
    auto result = s.searchMatrix(matrix,target);
    EXPECT_EQ(answer,result);
}
