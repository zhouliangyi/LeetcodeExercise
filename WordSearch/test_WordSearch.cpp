#include "WordSearch/wordsearch.h"
#include "gtest/gtest.h"

TEST(test_WordSearch, Example1)
{
    vector<vector<char>> in{ { 'A', 'B', 'C', 'E' },
        { 'S', 'F', 'C', 'S' },
        { 'A', 'D', 'E', 'E' } };
    string inS("SEE");
    bool answer = true;

    WordSearch w;
    auto result = w.exist(in, inS);
    EXPECT_EQ(answer, result);
}

TEST(test_WordSearch, Example2)
{
    vector<vector<char>> in{ { 'a' } };
    string inS("b");
    bool answer = false;

    WordSearch w;
    auto result = w.exist(in, inS);
    EXPECT_EQ(answer, result);
}
