#ifndef SEARCHA2DMATRIX_H
#define SEARCHA2DMATRIX_H

#include <vector>
#include <algorithm>
using namespace std;
/**
 * @brief The SearchA2DMatrix class
 * @details 思路：1.先比较target与第一列的所有元素，判断出target应该在的行。
                 2.再通过二分查找在对应行中寻找是否存在
 */
class SearchA2DMatrix
{
public:
    SearchA2DMatrix();
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.empty())
        {
            return false;
        }

        int row = matrix.size();
        int col = matrix[0].size();
        vector<int> firstCol;
        for(int i = 0; i < row; i++)
        {
            firstCol.push_back(matrix[i][0]);
        }

        if(binary_search(firstCol.begin(),firstCol.end(),target))
            return true;

        auto it_greaterThanTarget = find_if(firstCol.begin(),firstCol.end(),[target](int v){return v>target;});

        int targetRow = std::distance(firstCol.begin(),it_greaterThanTarget)-1;
        if(targetRow < 0) // 该值小于第一个数
            return false;
        auto targetRowVector = matrix[targetRow];
        return binary_search(targetRowVector.begin(),targetRowVector.end(),target);
    }

};

#endif // SEARCHA2DMATRIX_H
