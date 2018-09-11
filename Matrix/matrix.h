#ifndef MATRIX_H
#define MATRIX_H

#include <algorithm>
#include <queue>
#include <vector>
using namespace std;
class Matrix {
public:
    Matrix();

public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& matrix)
    {
        // 先将所有的0都填成0，然后再从已有值向其上下左右进行循环，直到所有值都填满
        vector<vector<int>> result;
        int col = matrix[0].size(); //矩阵的列数
        int row = matrix.size(); // 矩阵的行数

        std::queue<std::pair<int, int>> qs;
        // 构造一个初始的矩阵
        for (int i = 0; i < row; ++i) {
            result.push_back(vector<int>(col, -1));
        }

        for (int r = 0; r < row; ++r) {
            for (int c = 0; c < col; ++c) {
                int value = matrix[r][c];
                // 首先寻找0
                if (value == 0) {
                    result[r][c] = 0;
                    // 将坐标放入队列中 行-列
                    qs.push(std::pair<int, int>(r, c));
                }
            }
        }

        // 采用BFS广度优先的搜索方法，将所有值为0的坐标放入队列中，循环取出，当前的坐标周围四个坐标如果未被填写结果，则赋值为当前距离+1，并且将新坐标放入队列中，直到队列清空。
        // 首先将矩阵中matrix中元素值为零的单元格的坐标入队q中，其最短距离矩阵ans中相应值设置为0，将元素值为1的单元格的最短距离ans设置为-1；
        // 从队首q中取出元素front，将其相邻且未被访问过的单元格的最短距离ans设为ans[front]+1，并入队。
        // 循环，直至队列为空。

        while (!qs.empty()) {
            auto currentIndex = qs.front();
            qs.pop();
            int currentRow = currentIndex.first;
            int currentCol = currentIndex.second;
            int currentValue = result[currentRow][currentCol];
            int left = currentCol - 1;
            int right = currentCol + 1;
            int up = currentRow - 1;
            int down = currentRow + 1;

            if (left >= 0 && result[currentRow][left] == -1) {
                result[currentRow][left] = currentValue + 1;
                qs.push(std::pair<int, int>(currentRow, left));
            }
            if (right < col && result[currentRow][right] == -1) {
                result[currentRow][right] = currentValue + 1;
                qs.push(std::pair<int, int>(currentRow, right));
            }
            if (up >= 0 && result[up][currentCol] == -1) {
                result[up][currentCol] = currentValue + 1;
                qs.push(std::pair<int, int>(up, currentCol));
            }
            if (down < row && result[down][currentCol] == -1) {
                result[down][currentCol] = currentValue + 1;
                qs.push(std::pair<int, int>(down, currentCol));
            }
        }
        return result;
    }
};

#endif // MATRIX_H
