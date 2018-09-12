#ifndef PATTERN132_H
#define PATTERN132_H

#include <algorithm>
#include <vector>
using namespace std;

/**
 * @brief The Pattern132 class
 *
 *
 * Given a sequence of n integers a1, a2, ..., an, a 132 pattern is a subsequence ai, aj, ak such that i < j < k and ai < ak < aj. Design an algorithm that takes a list of n numbers as input and checks whether there is a 132 pattern in the list.

Note: n will be less than 15,000.

Example 1:
Input: [1, 2, 3, 4]

Output: False

Explanation: There is no 132 pattern in the sequence.
Example 2:
Input: [3, 1, 4, 2]

Output: True

Explanation: There is a 132 pattern in the sequence: [1, 4, 2].
Example 3:
Input: [-1, 3, 2, 0]

Output: True

Explanation: There are three 132 patterns in the sequence: [-1, 3, 2], [-1, 3, 0] and [-1, 2, 0].



 */
class Pattern132 {
public:
    Pattern132();
    /**
     * @brief find132pattern
     * 两层循环，第一层是寻找最小的值ai，第二层是寻找中间的值ak。
     * 第二层循环过程中用max保存当前最大的数字，用max暂时存放(这个值可以理解为aj)，不断更新max的同时，判断当前数字ak是否是大于第一个数字ai小于max
     */
    bool find132pattern(vector<int>& nums)
    {
        int n = nums.size();
        if (n < 3) {
            return false;
        }

        bool result = false;
        for (int i = 0; i < n - 1; ++i) {
            int ai = nums[i];
            int maxValue = nums[i + 1];
            for (int k = i + 1; k < n; ++k) {
                int ak = nums[k];
                if (ak < maxValue && ak > ai) {
                    return true;
                } else {
                    maxValue = max(maxValue, ak);
                }
            }
        }
        return result;
    }
};

#endif // PATTERN132_H
