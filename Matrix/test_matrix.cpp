#include "Matrix/matrix.h"
#include "gtest/gtest.h"

/**
 * @brief TEST
Example 1:
Input:
0 0 0
0 1 0
0 0 0
Output:
0 0 0
0 1 0
0 0 0
 */
TEST(test_matrix, Example1)
{
    vector<vector<int>> matrixIn{ { 0, 0, 0 }, { 0, 1, 0 }, { 0, 0, 0 } };
    vector<vector<int>> matrixOut{ { 0, 0, 0 }, { 0, 1, 0 }, { 0, 0, 0 } };

    Matrix m;
    vector<vector<int>> result = m.updateMatrix(matrixIn);
    EXPECT_EQ(result, matrixOut);
}

TEST(test_matrix, Example2)
{
    vector<vector<int>> matrixIn{ { 0, 1, 0 }, { 0, 1, 0 }, { 0, 1, 0 }, { 0, 1, 0 }, { 0, 1, 0 } };
    vector<vector<int>> matrixOut{ { 0, 1, 0 }, { 0, 1, 0 }, { 0, 1, 0 }, { 0, 1, 0 }, { 0, 1, 0 } };

    Matrix m;
    vector<vector<int>> result = m.updateMatrix(matrixIn);
    EXPECT_EQ(result, matrixOut);
}

TEST(test_matrix, Example3)
{
    vector<vector<int>> matrixIn{
        { 0, 1, 1, 0, 1, 0, 1, 0, 1, 0 },
        { 1, 1, 1, 0, 0, 0, 1, 0, 0, 1 },
        { 0, 1, 1, 1, 0, 1, 1, 0, 1, 1 },
        { 1, 1, 1, 1, 0, 1, 1, 1, 1, 0 },
        { 1, 0, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 1, 1, 1, 1, 0, 0, 1, 0, 1, 1 },
        { 1, 1, 0, 1, 0, 0, 1, 1, 1, 1 },
        { 1, 1, 0, 1, 0, 0, 1, 0, 0, 0 },
        { 0, 0, 1, 0, 1, 0, 1, 1, 1, 0 },
        { 1, 1, 1, 1, 0, 1, 1, 0, 1, 1 }
    };

    vector<vector<int>> matrixOut{
        { 0, 1, 1, 0, 1, 0, 1, 0, 1, 0 },
        { 1, 2, 1, 0, 0, 0, 1, 0, 0, 1 },
        { 0, 1, 2, 1, 0, 1, 1, 0, 1, 1 },
        { 1, 1, 2, 1, 0, 1, 2, 1, 1, 0 },
        { 1, 0, 1, 2, 1, 1, 2, 1, 2, 1 },
        { 2, 1, 1, 1, 0, 0, 1, 0, 1, 2 },
        { 2, 1, 0, 1, 0, 0, 1, 1, 1, 1 },
        { 1, 1, 0, 1, 0, 0, 1, 0, 0, 0 },
        { 0, 0, 1, 0, 1, 0, 1, 1, 1, 0 },
        { 1, 1, 2, 1, 0, 1, 1, 0, 1, 1 }
    };

    Matrix m;
    vector<vector<int>> result = m.updateMatrix(matrixIn);
    EXPECT_EQ(result, matrixOut);
}

TEST(test_matrix, Example4)
{
    vector<vector<int>> matrixIn{
        { 1, 0, 1, 1, 0, 0, 1, 0, 0, 1 },
        { 0, 1, 1, 0, 1, 0, 1, 0, 1, 1 },
        { 0, 0, 1, 0, 1, 0, 0, 1, 0, 0 },
        { 1, 0, 1, 0, 1, 1, 1, 1, 1, 1 },
        { 0, 1, 0, 1, 1, 0, 0, 0, 0, 1 },
        { 0, 0, 1, 0, 1, 1, 1, 0, 1, 0 },
        { 0, 1, 0, 1, 0, 1, 0, 0, 1, 1 },
        { 1, 0, 0, 0, 1, 1, 1, 1, 0, 1 },
        { 1, 1, 1, 1, 1, 1, 1, 0, 1, 0 },
        { 1, 1, 1, 1, 0, 1, 0, 0, 1, 1 }
    };

    vector<vector<int>> matrixOut{
        { 1, 0, 1, 1, 0, 0, 1, 0, 0, 1 },
        { 0, 1, 1, 0, 1, 0, 1, 0, 1, 1 },
        { 0, 0, 1, 0, 1, 0, 0, 1, 0, 0 },
        { 1, 0, 1, 0, 1, 1, 1, 1, 1, 1 },
        { 0, 1, 0, 1, 1, 0, 0, 0, 0, 1 },
        { 0, 0, 1, 0, 1, 1, 1, 0, 1, 0 },
        { 0, 1, 0, 1, 0, 1, 0, 0, 1, 1 },
        { 1, 0, 0, 0, 1, 2, 1, 1, 0, 1 },
        { 2, 1, 1, 1, 1, 2, 1, 0, 1, 0 },
        { 3, 2, 2, 1, 0, 1, 0, 0, 1, 1 }
    };

    Matrix m;
    vector<vector<int>> result = m.updateMatrix(matrixIn);
    EXPECT_EQ(result, matrixOut);
}
