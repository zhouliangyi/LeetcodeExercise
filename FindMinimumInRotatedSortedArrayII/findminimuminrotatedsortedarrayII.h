#ifndef FINDMINIMUMINROTATEDSORTEDARRAYII_H
#define FINDMINIMUMINROTATEDSORTEDARRAYII_H

#include <algorithm>
#include <functional>
#include <vector>
using namespace std;

/**
 * @brief The FindMinimumInRotatedSortedArrayII class
 *
Suppose an array sorted in ascending order is rotated at some pivot unknown to you beforehand.

(i.e.,  [0,1,2,4,5,6,7] might become  [4,5,6,7,0,1,2]).

Find the minimum element.

The array may contain duplicates.

Example 1:

Input: [1,3,5]
Output: 1
Example 2:

Input: [2,2,2,0,1]
Output: 0
Note:

This is a follow up problem to Find Minimum in Rotated Sorted Array.
Would allow duplicates affect the run-time complexity? How and why?

 */
class FindMinimumInRotatedSortedArrayII {
public:
    FindMinimumInRotatedSortedArrayII();

    /**
     * @brief findMin
     * @param nums
     * @return
     * 直接采用std的算法实现
     */
    int findMin(vector<int>& nums)
    {
        auto it = adjacent_find(nums.begin(), nums.end(), std::greater<int>());
        if (it != nums.end()) {
            return *(it + 1);
        } else {
            return nums[0];
        }
    }
};

#endif // FINDMINIMUMINROTATEDSORTEDARRAYII_H
