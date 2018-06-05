#include "foursum.h"
#include "gtest/gtest.h"

TEST(test_foursum, test1)
{
    std::vector<int> in{ 1, 0, -1, 0, -2, 2 };
    vector<vector<int>> ans{ { -2, -1, 1, 2 }, { -2, 0, 0, 2 }, { -1, 0, 0, 1 } };
    fourSum f;
    int target = 0;

    auto result = f.fourSumFunc(in, target);
    sort(result.begin(), result.end());
    sort(ans.begin(), ans.end());
    EXPECT_EQ(ans, result);
}
