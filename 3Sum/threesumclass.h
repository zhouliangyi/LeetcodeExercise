#ifndef THREESUMCLASS_H
#define THREESUMCLASS_H
#include <algorithm>
#include <set>
#include <vector>
using namespace std;

/**
 * @brief The threeSumClass class
 *
 * Given an array nums of n integers, are there elements a, b, c in nums such that a + b + c = 0? Find all unique triplets in the array which gives the sum of zero.

Note:

The solution set must not contain duplicate triplets.

Example:

Given array nums = [-1, 0, 1, 2, -1, -4],

A solution set is:
[
  [-1, 0, 1],
  [-1, -1, 2]
]

 */
class threeSumClass {
public:
    threeSumClass() {}
    vector<vector<int>> threeSum(vector<int>& nums)
    {
        vector<vector<int>> result;
        if (nums.size() < 3)
            return result;

        set<vector<int>> resultSet;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() - 2; i++) {
            int current = nums.at(i);
            int target = 0 - current;
            int left = i + 1;
            int right = nums.size() - 1;
            while (left < right) {
                int sum = nums.at(left) + nums.at(right);
                if (sum == target) {
                    resultSet.insert({ nums.at(i), nums.at(left), nums.at(right) });
                    left++;
                    right--;
                } else if (sum > target) {
                    right--;
                } else if (sum < target) {
                    left++;
                }
            }
        }
        return vector<vector<int>>(resultSet.begin(), resultSet.end());
    }
};
#endif // THREESUMCLASS_H
