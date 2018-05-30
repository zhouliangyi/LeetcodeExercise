#ifndef SEARCHINROTATEDSORTEDARRAY_H
#define SEARCHINROTATEDSORTEDARRAY_H
#include <vector>

/**
 * @brief The Solution class
 *
 * Search in Rotated Sorted Array
 * Suppose an array sorted in ascending order is rotated at some pivot unknown to you beforehand.

(i.e., [0,1,2,4,5,6,7] might become [4,5,6,7,0,1,2]).

You are given a target value to search. If found in the array return its index, otherwise return -1.

You may assume no duplicate exists in the array.

Your algorithm's runtime complexity must be in the order of O(log n).

Example 1:

Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4
Example 2:

Input: nums = [4,5,6,7,0,1,2], target = 3
Output: -1

 */
class SearchinRotatedSortedArray {
public:
    SearchinRotatedSortedArray();
    int search(std::vector<int>& nums, int target);
};

#endif // SOLUTION_H
