#include "topkfrequentelements.h"
#include "gtest/gtest.h"

TEST(test_topkfrequentelements, List_1_1_1_2_2_3)
{
    std::vector<int> in{ 1, 1, 1, 2, 2, 3 };
    int k = 2;
    vector<int> answer{ 1, 2 };

    TopKFrequentElements t;
    auto result = t.topKFrequent(in, k);
    EXPECT_EQ(result, answer);
}

TEST(test_topkfrequentelements, List_minus1_minus1)
{
    std::vector<int> in{ -1, -1 };
    int k = 1;
    vector<int> answer{ -1 };

    TopKFrequentElements t;
    auto result = t.topKFrequent(in, k);
    EXPECT_EQ(result, answer);
}

TEST(test_topkfrequentelements, List_1_2)
{
    std::vector<int> in{ 1, 2 };
    int k = 2;
    vector<int> answer{ 1, 2 };

    TopKFrequentElements t;
    auto result = t.topKFrequent(in, k);
    EXPECT_EQ(result, answer);
}
