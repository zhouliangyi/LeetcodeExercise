#ifndef SEARCHINSERTPOSITION_H
#define SEARCHINSERTPOSITION_H

#include <algorithm>
#include <vector>
using namespace std;
/**
 * @brief The SearchInsertPosition class
 *
 * Given a sorted array and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You may assume no duplicates in the array.

Example 1:

Input: [1,3,5,6], 5
Output: 2
Example 2:

Input: [1,3,5,6], 2
Output: 1
Example 3:

Input: [1,3,5,6], 7
Output: 4
Example 4:

Input: [1,3,5,6], 0
Output: 0

 */
class SearchInsertPosition {
public:
    SearchInsertPosition();

    /**
     * @brief searchInsert
       @details 寻找序列中大于等于target的位置
     */
    int searchInsert(vector<int>& nums, int target)
    {
        /*int r = 0;
        for(;r<nums.size();r++)
        {
            if(nums[r]>=target)
                break;
        }
        return r;*/
        auto it = find_if(nums.begin(), nums.end(), [target](int v1) { return v1 >= target; });
        return distance(nums.begin(), it);
    }
};

#endif // SEARCHINSERTPOSITION_H
