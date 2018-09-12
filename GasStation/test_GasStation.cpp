#include "gasstation.h"
#include "gtest/gtest.h"

TEST(test_GasStation, test1)
{

    std::vector<int> gas = { 1, 2, 3, 4, 5 };
    std::vector<int> cost = { 3, 4, 5, 1, 2 };

    int answer = 3;

    GasStation g;
    auto result = g.canCompleteCircuit(gas, cost);
    EXPECT_EQ(answer, result);
}

TEST(test_GasStation, test2)
{

    std::vector<int> gas = { 3, 3, 4 };
    std::vector<int> cost = { 3, 4, 4 };

    int answer = -1;

    GasStation g;
    auto result = g.canCompleteCircuit(gas, cost);
    EXPECT_EQ(answer, result);
}

TEST(test_GasStation, test3)
{

    std::vector<int> gas = { 3, 1, 1 };
    std::vector<int> cost = { 1, 2, 2 };

    int answer = 0;

    GasStation g;
    auto result = g.canCompleteCircuit(gas, cost);
    EXPECT_EQ(answer, result);
}
