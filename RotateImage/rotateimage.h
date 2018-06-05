#ifndef ROTATEIMAGE_H
#define ROTATEIMAGE_H
#include <vector>
using namespace std;
/**
 * @brief The RotateImage class
 *
 * You are given an n x n 2D matrix representing an image.

Rotate the image by 90 degrees (clockwise).

Note:

You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.

Example 1:

Given input matrix =
[
  [1,2,3],
  [4,5,6],
  [7,8,9]
],

rotate the input matrix in-place such that it becomes:
[
  [7,4,1],
  [8,5,2],
  [9,6,3]
]
Example 2:

Given input matrix =
[
  [ 5, 1, 9,11],
  [ 2, 4, 8,10],
  [13, 3, 6, 7],
  [15,14,12,16]
],

rotate the input matrix in-place such that it becomes:
[
  [15,13, 2, 5],
  [14, 3, 4, 1],
  [12, 6, 8, 9],
  [16, 7,10,11]
]

 */
class RotateImage {
public:
    RotateImage();
    void rotate(vector<vector<int>>& matrix)
    {
        int n = matrix.size();
        // 先以中间的列对称变换 m[i][j]<--->m[i][n-1-j]
        for (int col = 0; col < (n + 1) / 2; col++) {
            for (int row = 0; row < n; row++) {
                int tmp = matrix[row][col];
                matrix[row][col] = matrix[row][n - 1 - col];
                matrix[row][n - 1 - col] = tmp;
            }
        }
        // 以反斜线对称变换 其中规律为 对称的两个元素(a,b) (c,d) a-b=c-d a+b+c+d=2n-2 ===> c=n-1-b,d=n-1-a
        // m[i][j]<--->m[n-1-j][n-1-i]
        for (int row = 0; row < n - 1; row++) {
            for (int col = 0; col < n - 1 - row; col++) {
                int tmp = matrix[row][col];
                matrix[row][col] = matrix[n - 1 - col][n - 1 - row];
                matrix[n - 1 - col][n - 1 - row] = tmp;
            }
        }
    }
};

#endif // ROTATEIMAGE_H
