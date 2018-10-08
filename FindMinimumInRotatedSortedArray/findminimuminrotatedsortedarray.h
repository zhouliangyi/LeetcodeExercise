#ifndef FINDMINIMUMINROTATEDSORTEDARRAY_H
#define FINDMINIMUMINROTATEDSORTEDARRAY_H

#include <algorithm>
#include <functional>
#include <vector>
using namespace std;

/**
 * @brief The FindMinimumInRotatedSortedArray class
 *
 * Suppose an array sorted in ascending order is rotated at some pivot unknown to you beforehand.

(i.e.,  [0,1,2,4,5,6,7] might become  [4,5,6,7,0,1,2]).

Find the minimum element.

You may assume no duplicate exists in the array.

Example 1:

Input: [3,4,5,1,2]
Output: 1
Example 2:

Input: [4,5,6,7,0,1,2]
Output: 0

 */
class FindMinimumInRotatedSortedArray {
public:
    FindMinimumInRotatedSortedArray();

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

#endif // FINDMINIMUMINROTATEDSORTEDARRAY_H
