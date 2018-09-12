#include "3SumClosest/threesumclasscloset.h"
#include "gtest/gtest.h"

TEST(test_threesumclassCloset, test1)
{
    std::vector<int> in{ -1, 2, 1, -4 };
    int target = 2;
    threesumclassCloset t;
    int answer = 2;

    auto result = t.threeSumClosest(in, target);
    EXPECT_EQ(answer, result);
}

TEST(test_threesumclassCloset, test2)
{
    std::vector<int> in{ 4, 0, 5, -5, 3, 3, 0, -4, -5 };
    int target = -2;
    threesumclassCloset t;
    int answer = -2;

    auto result = t.threeSumClosest(in, target);
    EXPECT_EQ(answer, result);
}

TEST(test_threesumclassCloset, test3)
{
    std::vector<int> in{ -1, 2, 1, -4 };
    int target = 1;

    threesumclassCloset t;
    int answer = 2;

    auto result = t.threeSumClosest(in, target);
    EXPECT_EQ(answer, result);
}

TEST(test_threesumclassCloset, test4)
{
    std::vector<int> in{ 1, 1, -1, -1, 3 };
    int target = -1;

    threesumclassCloset t;
    int answer = -1;

    auto result = t.threeSumClosest(in, target);
    EXPECT_EQ(answer, result);
}

TEST(test_threesumclassCloset, test5)
{
    std::vector<int> in{ 1, 1, 1, 0 };
    int target = 100;

    threesumclassCloset t;
    int answer = 3;

    auto result = t.threeSumClosest(in, target);
    EXPECT_EQ(answer, result);
}

TEST(test_threesumclassCloset, test6)
{
    std::vector<int> in{ 1, 2, 4, 8, 16, 32, 64, 128 };
    int target = 82;

    threesumclassCloset t;
    int answer = 82;

    auto result = t.threeSumClosest(in, target);
    EXPECT_EQ(answer, result);
}

TEST(test_threesumclassCloset, test7)
{
    std::vector<int> in{ -55, -24, -18, -11, -7, -3, 4, 5, 6, 9, 11, 23, 33 };
    int target = 0;

    threesumclassCloset t;
    int answer = 0;

    auto result = t.threeSumClosest(in, target);
    EXPECT_EQ(answer, result);
}
