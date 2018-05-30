#include "containerwithmostwater.h"
#include "gtest/gtest.h"

TEST(test_containerwithmostwater, NoHeight)
{
    std::vector<int> height;
    ContainerWithMostWater c;
    EXPECT_EQ(c.maxArea(height), 0);
}

TEST(test_containerwithmostwater, OneHeight)
{
    std::vector<int> height{ 0 };
    ContainerWithMostWater c;
    EXPECT_EQ(c.maxArea(height), 0);
}

TEST(test_containerwithmostwater, Height_1_3_2)
{
    std::vector<int> height{ 1, 3, 2 };
    ContainerWithMostWater c;
    EXPECT_EQ(c.maxArea(height), 2);
}

TEST(test_containerwithmostwater, Height_1_3_2_3)
{
    std::vector<int> height{ 1, 3, 2, 3 };
    ContainerWithMostWater c;
    EXPECT_EQ(c.maxArea(height), 6);
}
TEST(test_containerwithmostwater, Height_2_3_2_3_2)
{
    std::vector<int> height{ 2, 3, 2, 3, 2 };
    ContainerWithMostWater c;
    EXPECT_EQ(c.maxArea(height), 8);
}
