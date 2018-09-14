#include "Subsets/subsets.h"
#include "gtest/gtest.h"

TEST(test_Subsets, Example1)
{
    vector<int> in{ 1,2,3};
    Subsets s;
    s.subsets(in);
}
