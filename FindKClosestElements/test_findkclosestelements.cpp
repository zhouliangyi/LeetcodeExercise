#include "findkclosestelements.h"
#include "gtest/gtest.h"

TEST(test_findkclosestelements, find_4_3_in_Vec_1_2_3_4_5)
{
    FindKClosestElements f;
    std::vector<int> in{ 1, 2, 3, 4, 5 };
    std::vector<int> result{ 1, 2, 3, 4 };
    EXPECT_EQ(f.findClosestElements(in, 4, 3), result);
}

TEST(test_findkclosestelements, find_4_minus1_in_Vec_1_2_3_4_5)
{
    FindKClosestElements f;
    std::vector<int> in{ 1, 2, 3, 4, 5 };
    std::vector<int> result{ 1, 2, 3, 4 };
    EXPECT_EQ(f.findClosestElements(in, 4, -1), result);
}

TEST(test_findkclosestelements, find_4_3_in_Vec_0_0_1_2_3_3_4_7_7_8)
{
    FindKClosestElements f;
    std::vector<int> in{ 0, 0, 1, 2, 3, 3, 4, 7, 7, 8 };
    std::vector<int> result{ 3, 3, 4 };
    EXPECT_EQ(f.findClosestElements(in, 3, 5), result);
}
