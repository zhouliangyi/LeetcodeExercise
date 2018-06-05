#include "plusone.h"
#include "gtest/gtest.h"

TEST(test_plusone, test1)
{
    vector<int> in{ 1, 2, 3 };
    vector<int> ans{ 1, 2, 4 };
    PlusOne p;
    EXPECT_EQ(ans, p.plusOne(in));
}
