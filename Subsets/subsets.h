#ifndef SUBSETS_H
#define SUBSETS_H
#include <vector>
#include <math.h>
using namespace std;

class Subsets
{
public:
    Subsets();
    /**
     * @brief subsets
     * @details 采用二进制位判断，分析vector中哪些是需要进行组合的，并将所有组合放入subset
     */
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        int totalNumer = pow(2,nums.size());

        for(int i = 0;i<totalNumer;++i)
        {
            // 用来保存哪些位为1
            vector<int> bits;
            for (int j = 0; j < nums.size(); ++j) {
                // 如果当前判断当前为是否为1，如果是1，则在本次循环中需要写入set中
                if (i&(1<<j)) {
                    bits.push_back(j);
                }
            }
            vector<int> tmpSet;
            for(auto tmpIndex:bits)
            {
                tmpSet.push_back(nums.at(tmpIndex));
            }
            result.push_back(tmpSet);
        }
        return result;
    }
};

#endif // SUBSETS_H
