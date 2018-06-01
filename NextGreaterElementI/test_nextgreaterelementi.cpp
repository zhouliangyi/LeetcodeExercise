#include "nextgreaterelementi.h"
#include "gtest/gtest.h"

TEST(test_nextgreaterelementi, Vec_4_2_3_in_1_3_4_2)
{
    std::vector<int> nums1{ 4, 1, 2 };
    std::vector<int> nums2{ 1, 3, 4, 2 };
    std::vector<int> answer{ -1, 3, -1 };

    NextGreaterElementI n;
    std::vector<int> result = n.nextGreaterElement(nums1, nums2);
    EXPECT_EQ(result, answer);
}

TEST(test_nextgreaterelementi, Vec_2_4_in_1_2_3_4)
{
    std::vector<int> nums1{ 2, 4 };
    std::vector<int> nums2{ 1, 2, 3, 4 };
    std::vector<int> answer{ 3, -1 };

    NextGreaterElementI n;
    std::vector<int> result = n.nextGreaterElement(nums1, nums2);
    EXPECT_EQ(result, answer);
}
