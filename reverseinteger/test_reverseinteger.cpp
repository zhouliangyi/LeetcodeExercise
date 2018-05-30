#include "reverseinteger/reverseinteger.h"
#include "gtest/gtest.h"

TEST(test_reverseinteger, Input_123)
{
    int in=123;
    ReverseInteger r;
    EXPECT_EQ(r.reverse(in),321);
}

TEST(test_reverseinteger, Input_minus123)
{
    int in=-123;
    ReverseInteger r;
    EXPECT_EQ(r.reverse(in),-321);
}

TEST(test_reverseinteger, Input_120)
{
    int in=120;
    ReverseInteger r;
    EXPECT_EQ(r.reverse(in),21);
}
