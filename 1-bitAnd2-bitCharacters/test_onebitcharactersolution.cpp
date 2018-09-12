#include "1-bitAnd2-bitCharacters/onebitcharactersolution.h"
#include "gtest/gtest.h"

TEST(test_OneBitCharacterSolution, test1)
{
    std::vector<int> in{ 1, 0, 0 };

    OneBitCharacterSolution solution;
    bool result = solution.isOneBitCharacter(in);
    bool answer = true;
    EXPECT_EQ(result, answer);
}

TEST(test_OneBitCharacterSolution, test2)
{
    std::vector<int> in{ 1, 1, 1, 0 };

    OneBitCharacterSolution solution;
    bool result = solution.isOneBitCharacter(in);
    bool answer = false;
    EXPECT_EQ(result, answer);
}

TEST(test_OneBitCharacterSolution, test3)
{
    std::vector<int> in{ 0 };

    OneBitCharacterSolution solution;
    bool result = solution.isOneBitCharacter(in);
    bool answer = true;
    EXPECT_EQ(result, answer);
}

TEST(test_OneBitCharacterSolution, test4)
{
    std::vector<int> in{ 0, 0, 0 };

    OneBitCharacterSolution solution;
    bool result = solution.isOneBitCharacter(in);
    bool answer = true;
    EXPECT_EQ(result, answer);
}
