#include "graycode.h"
#include "gtest/gtest.h"

TEST(test_graycode, bit_2)
{
    GrayCode g;
    int in = 2;
    vector<int> ans = { 0, 1, 3, 2 };
    vector<int> result = g.grayCode(in);
    EXPECT_EQ(result, ans);
}
