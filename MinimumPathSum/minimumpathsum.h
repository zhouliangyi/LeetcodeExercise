#ifndef MINIMUMPATHSUM_H
#define MINIMUMPATHSUM_H

#include <vector>
using namespace std;

class MinimumPathSum {
public:
    MinimumPathSum();
    /**
     * @brief minPathSum
     * @param grid
     * @return
     *
     * 采用动态规划的思路dp[i][j] = min(dp[i-1][j],dp[i][j-1]) + grid[i][j]  需要考虑边界的情况
     */
    int minPathSum(vector<vector<int>>& grid)
    {
        int row = grid.size();
        int col = grid[0].size();
        vector<vector<int>> dp{ row, vector<int>(col, -1) };
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                int left = j - 1;
                int up = i - 1;

                // 超出左边界和上边界
                if (left < 0 && up < 0) {
                    dp[i][j] = grid[i][j];
                }
                // 超出左边界
                else if (left < 0) {
                    dp[i][j] = dp[up][j] + grid[i][j];
                }
                // 超出上边界
                else if (up < 0) {
                    dp[i][j] = dp[i][left] + grid[i][j];
                } else {
                    dp[i][j] = min(dp[i][left], dp[up][j]) + grid[i][j];
                }
            }
        }
        int result = dp[row - 1][col - 1];
        return result;
    }
};

#endif // MINIMUMPATHSUM_H
