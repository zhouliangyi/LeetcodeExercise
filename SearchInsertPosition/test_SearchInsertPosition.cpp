#include "SearchInsertPosition/searchinsertposition.h"
#include "gtest/gtest.h"

TEST(test_SearchInsertPosition, Example1)
{
    vector<int> in{ 1, 3, 5, 6 };
    int target = 5;
    int answer = 2;

    SearchInsertPosition s;
    auto result = s.searchInsert(in, target);

    EXPECT_EQ(answer, result);
}
