#ifndef FIRSTMISSINGPOSITIVE_H
#define FIRSTMISSINGPOSITIVE_H

#include <vector>
using namespace std;

/**
 * @brief The FirstMissingPositive class
 *
 * Given an unsorted integer array, find the smallest missing positive integer.

Example 1:

Input: [1,2,0]
Output: 3
Example 2:

Input: [3,4,-1,1]
Output: 2
Example 3:

Input: [7,8,9,11,12]
Output: 1
Note:

Your algorithm should run in O(n) time and uses constant extra space.


 */
class FirstMissingPositive {
public:
    FirstMissingPositive();

    /**
     * @brief firstMissingPositive
     * @param nums
     * @return
     *
     * tmpNums用于存放数字，初始化为-1，nums中值≤n的正整数存入tmpNums，并且元素的下标值为元素值-1 e.g. tmpNums[i-1]=i
     * nums={1,2,3,4,5}    ---->  tmpNums={1,2,3,4,5}  return 6
     * nums={1,-2,3,4,5}   ---->  tmpNums={1,-1,3,4,5}  return 2
     * nums={-1,-2,3,4,5}   ---->  tmpNums={-1,-1,3,4,5}  return 1
     * nums={11,12,13,14,15}   ---->  tmpNums={-1,-1,-1,-1,-1}  return 1
     * nums={11,12,13,14,5}   ---->  tmpNums={-1,-1,-1,-1,5}  return 1
     *
     */
    int Solution(vector<int>& nums)
    {
        int numSize = nums.size();

        vector<int> tmpNums(numSize + 1, -1);
        for (int i = 0; i < numSize; ++i) {
            // 只有正整数且值必须小于n才放到该放的位置
            // 因为如果currentValue大于n，nums的元素总数是n，那么nums中肯定缺少某个小于n的值，所以没有必要再处理大于n的值
            int currentValue = nums[i];
            if (currentValue > 0 && currentValue <= numSize) {
                tmpNums[currentValue - 1] = currentValue;
            }
        }
        for (int i = 0; i < numSize; ++i) {
            if (tmpNums[i] != i + 1) {
                return i + 1;
            }
        }
        return numSize + 1;
    }
};

#endif // FIRSTMISSINGPOSITIVE_H
