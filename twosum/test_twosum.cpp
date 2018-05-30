#include "twosum/twosum.h"
#include "gtest/gtest.h"

TEST(test_twosum, vec_3_2_4)
{
    std::vector<int> in{ 3, 2, 4 };
    std::vector<int> correct{ 1, 2 };
    TwoSum t;
    EXPECT_EQ(t.twoSum(in, 6), correct);
}

TEST(test_twosum, vec_2_7_11_15)
{
    std::vector<int> in{ 2, 7, 11, 15 };
    TwoSum t;
    std::vector<int> correct{ 0, 1 };
    auto result = t.twoSum(in, 9);
    EXPECT_EQ(result, correct);
}
