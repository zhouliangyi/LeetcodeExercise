#include "threesumclass.h"
#include "gtest/gtest.h"

TEST(test_threesumclass, test1)
{
    std::vector<int> in{ -1, 0, 1, 2, -1, -4 };
    vector<vector<int>> ans{ { -1, 0, 1 }, { -1, -1, 2 } };
    threeSumClass t;

    auto result = t.threeSum(in);
    sort(result.begin(), result.end());
    sort(ans.begin(), ans.end());

    EXPECT_EQ(ans, t.threeSum(in));
}
