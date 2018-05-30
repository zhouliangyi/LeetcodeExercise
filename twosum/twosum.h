#ifndef TWOSUM_H
#define TWOSUM_H
#include <vector>
using namespace std;
#include <algorithm>
#include <unordered_map>
#include <utility>
/**
 * @brief The TwoSum class
 * Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:

Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].

 */
class TwoSum {
public:
    TwoSum();
    vector<int> twoSum(vector<int>& nums, int target)
    {
        //        vector<int> result;
        //        for (int i = 0; i < nums.size(); i++) {
        //            for (int j = 0; j < nums.size(); j++) {
        //                if (i == j) {
        //                    continue;
        //                }
        //                if ((nums[i] + nums[j]) == target) {
        //                    result.push_back(i);
        //                    result.push_back(j);
        //                    return result;
        //                }
        //            }
        //        }
        //        return result;

        int size = nums.size();
        unordered_map<int, int> hashTable;
        for (int i = 0; i < size; i++) {
            int complement = target - nums[i];
            auto found = hashTable.find(complement);
            if (found == hashTable.end()) {
                hashTable.insert(pair<int, int>{ nums[i], i });
            } else {
                return vector<int>{ found->second, i };
            }
        }
    }
};

#endif // TWOSUM_H
