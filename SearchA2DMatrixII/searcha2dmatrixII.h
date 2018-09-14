#ifndef SEARCHA2DMATRIXII_H
#define SEARCHA2DMATRIXII_H

#include <vector>
#include <algorithm>
#include <set>
using namespace std;
/**
 * @brief The SearchA2DMatrixII class
 * @details 思路：找出满足以下条件的行，第一个数小于target，最后一个数大于等于target，然后在这些行中寻找是否有target
 */
class SearchA2DMatrixII
{
public:
    SearchA2DMatrixII();
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.empty())
        {
            return false;
        }
        if(matrix[0].empty())
            return false;

        int row = matrix.size();
        int col = matrix[0].size();
        vector<int> firstCol,lastCol;
        // 第一列
        for(int i = 0; i < row; i++)
            firstCol.push_back(matrix[i][0]);

        // 最后一列
        for(int i =0;i<row;i++)
            lastCol.push_back(matrix[i][col-1]);


        set<int> firstColLessThanTarget;
        {
            auto it1 = find_if(firstCol.begin(),firstCol.end(),[target](int v){return v>=target;});
            if (*it1==target) {
                return true;
            }
            if(it1==firstCol.begin())
                return false;
            int index1 = std::distance(firstCol.begin(),it1);
            for (int i = 0; i < index1; ++i) {
                firstColLessThanTarget.insert(i);
            }
        }

        set<int> lastColGreaterThanTarget;
        {
            auto it = find_if(lastCol.begin(),lastCol.end(),[target](int v){return v>=target;});
            if (*it==target) {
                return true;
            }
            if (it == lastCol.end()) {
                return false;
            }
            int index = std::distance(lastCol.begin(),it);
            for (int i = index; i < row; ++i) {
                lastColGreaterThanTarget.insert(i);
            }
        }

        set<int> possibleRow;

        set_intersection(firstColLessThanTarget.begin(),firstColLessThanTarget.end(),
                       lastColGreaterThanTarget.begin(),lastColGreaterThanTarget.end(),
                        std::inserter(possibleRow, possibleRow.end())                       );

        for (auto currentRow:possibleRow) {
            auto tmpRow = matrix[currentRow];
            if (binary_search(tmpRow.begin(),tmpRow.end(),target)) {
                return true;
            }
        }
        return false;
    }

};

#endif // SEARCHA2DMATRIXII_H
