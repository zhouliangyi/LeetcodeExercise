#ifndef NEXTGREATERELEMENTI_H
#define NEXTGREATERELEMENTI_H

#include <algorithm>
#include <vector>
using namespace std;

/**
 * @brief The NextGreaterElementI class
 *
 * You are given two arrays (without duplicates) nums1 and nums2 where nums1’s elements are subset of nums2. Find all the next greater numbers for nums1's elements in the corresponding places of nums2.

The Next Greater Number of a number x in nums1 is the first greater number to its right in nums2. If it does not exist, output -1 for this number.

Example 1:
Input: nums1 = [4,1,2], nums2 = [1,3,4,2].
Output: [-1,3,-1]
Explanation:
    For number 4 in the first array, you cannot find the next greater number for it in the second array, so output -1.
    For number 1 in the first array, the next greater number for it in the second array is 3.
    For number 2 in the first array, there is no next greater number for it in the second array, so output -1.
Example 2:
Input: nums1 = [2,4], nums2 = [1,2,3,4].
Output: [3,-1]
Explanation:
    For number 2 in the first array, the next greater number for it in the second array is 3.
    For number 4 in the first array, there is no next greater number for it in the second array, so output -1.

 */
class NextGreaterElementI {
public:
    NextGreaterElementI();

    int find_nextGreater(const vector<int>& in, int value)
    {
        // 找到value对应位置
        auto value_iterator = find(in.begin(), in.end(), value);

        // 从value对应位置开始找到比value大的值
        auto it = find_if(value_iterator, in.end(), [value](int tmp) { return tmp > value; });
        if (it != in.end())
            return *it;
        else
            return -1;
    }
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums)
    {
        vector<int> result;
        for (auto v : findNums) {
            result.push_back(find_nextGreater(nums, v));
        }
        return result;
    }
};

#endif // NEXTGREATERELEMENTI_H
