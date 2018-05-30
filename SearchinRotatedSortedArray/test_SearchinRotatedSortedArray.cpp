#include "SearchinRotatedSortedArray.h"
#include "gtest/gtest.h"

TEST(test_SearchinRotatedSortedArray, Vec_4_5_6_7_0_1_2_For_0)
{
    std::vector<int> nums{ 4, 5, 6, 7, 0, 1, 2 };
    SearchinRotatedSortedArray s;
    EXPECT_EQ(s.search(nums, 0), 4);
}

TEST(test_SearchinRotatedSortedArray, Vec_4_5_6_7_0_1_2_For_3)
{
    std::vector<int> nums{ 4, 5, 6, 7, 0, 1, 2 };
    SearchinRotatedSortedArray s;
    EXPECT_EQ(s.search(nums, 3), -1);
}
