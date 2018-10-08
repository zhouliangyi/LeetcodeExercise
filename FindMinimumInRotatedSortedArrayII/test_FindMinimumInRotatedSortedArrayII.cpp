#include "FindMinimumInRotatedSortedArrayII/findminimuminrotatedsortedarrayII.h"
#include "gtest/gtest.h"

TEST(test_FindMinimumInRotatedSortedArrayII, test_1)
{
    vector<int> in{ 1, 3, 5 };

    FindMinimumInRotatedSortedArrayII f;
    auto result = f.findMin(in);
    auto answer = 1;
    EXPECT_EQ(answer, result);
}

TEST(test_FindMinimumInRotatedSortedArrayII, test_2)
{
    vector<int> in{ 2, 2, 2, 0, 1 };

    FindMinimumInRotatedSortedArrayII f;
    auto result = f.findMin(in);
    auto answer = 0;
    EXPECT_EQ(answer, result);
}
