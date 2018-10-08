#include "FindMinimumInRotatedSortedArray/findminimuminrotatedsortedarray.h"
#include "gtest/gtest.h"

TEST(test_FindMinimumInRotatedSortedArray, test_1)
{
    vector<int> in{ 3, 4, 5, 1, 2 };

    FindMinimumInRotatedSortedArray f;
    auto result = f.findMin(in);
    auto answer = 1;
    EXPECT_EQ(answer, result);
}

TEST(test_FindMinimumInRotatedSortedArray, test_2)
{
    vector<int> in{ 4, 5, 6, 7, 0, 1, 2 };

    FindMinimumInRotatedSortedArray f;
    auto result = f.findMin(in);
    auto answer = 0;
    EXPECT_EQ(answer, result);
}
