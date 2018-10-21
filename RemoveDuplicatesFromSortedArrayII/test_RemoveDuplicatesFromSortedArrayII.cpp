#include "RemoveDuplicatesFromSortedArrayII/removeduplicatesfromsortedarrayii.h"
#include "gtest/gtest.h"

TEST(test_RemoveDuplicatesFromSortedArrayII, test1)
{
    std::vector<int> in{ 1, 1, 1, 2, 2, 3 };
    std::vector<int> ans{ 1, 1, 2, 2, 3 };

    RemoveDuplicatesFromSortedArrayII r;

    auto result = r.removeDuplicates(in);

    EXPECT_EQ(ans.size(), result);
}

TEST(test_RemoveDuplicatesFromSortedArrayII, test2)
{
    std::vector<int> in{ 0, 0, 1, 1, 1, 1, 2, 3, 3 };
    std::vector<int> ans{ 0, 0, 1, 1, 2, 3, 3 };

    RemoveDuplicatesFromSortedArrayII r;

    auto result = r.removeDuplicates(in);

    EXPECT_EQ(ans.size(), result);
}
