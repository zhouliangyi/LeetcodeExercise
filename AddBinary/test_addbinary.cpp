#include "addbinary.h"
#include "gtest/gtest.h"

TEST(test_addbinary, test1)
{
    string a = "11";
    string b = "1";
    string ans = "100";
    AddBinary add;
    EXPECT_EQ(ans, add.addBinary(a, b));
}

TEST(test_addbinary, test2)
{
    string a = "1";
    string b = "111";
    string ans = "1000";
    AddBinary add;
    EXPECT_EQ(ans, add.addBinary(a, b));
}
