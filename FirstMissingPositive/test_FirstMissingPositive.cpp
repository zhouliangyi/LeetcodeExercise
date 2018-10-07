#include "FirstMissingPositive/firstmissingpositive.h"
#include "gtest/gtest.h"

TEST(test_FirstMissingPositive, test1)
{
    std::vector<int> in{ 1, 2, 0 };

    FirstMissingPositive f;
    auto result = f.Solution(in);
    int answer = 3;
    EXPECT_EQ(answer, result);
}

TEST(test_FirstMissingPositive, test2)
{
    std::vector<int> in{ 3, 4, -1, 1 };

    FirstMissingPositive f;
    auto result = f.Solution(in);
    int answer = 2;
    EXPECT_EQ(answer, result);
}

TEST(test_FirstMissingPositive, test3)
{
    std::vector<int> in{ 7, 8, 9, 11, 12 };

    FirstMissingPositive f;
    auto result = f.Solution(in);
    int answer = 1;
    EXPECT_EQ(answer, result);
}

TEST(test_FirstMissingPositive, test4)
{
    std::vector<int> in{ 1, 2, 3, 4, 5 };

    FirstMissingPositive f;
    auto result = f.Solution(in);
    int answer = 6;
    EXPECT_EQ(answer, result);
}

TEST(test_FirstMissingPositive, test5)
{
    std::vector<int> in{ 1, -2, 3, 4, 5 };

    FirstMissingPositive f;
    auto result = f.Solution(in);
    int answer = 2;
    EXPECT_EQ(answer, result);
}

TEST(test_FirstMissingPositive, test6)
{
    std::vector<int> in{ -1, -2, 3, 4, 5 };

    FirstMissingPositive f;
    auto result = f.Solution(in);
    int answer = 1;
    EXPECT_EQ(answer, result);
}

TEST(test_FirstMissingPositive, test7)
{
    std::vector<int> in{ 11, 12, 13, 14, 15 };

    FirstMissingPositive f;
    auto result = f.Solution(in);
    int answer = 1;
    EXPECT_EQ(answer, result);
}

TEST(test_FirstMissingPositive, test8)
{
    std::vector<int> in{ 11, 12, 13, 14, 5 };

    FirstMissingPositive f;
    auto result = f.Solution(in);
    int answer = 1;
    EXPECT_EQ(answer, result);
}
