#ifndef FOURSUM_H
#define FOURSUM_H
#include <algorithm>
#include <iterator>
#include <set>
#include <vector>
using namespace std;
/**
 * @brief The fourSum class
 * Given an array nums of n integers and an integer target, are there elements a, b, c, and d in nums such that a + b + c + d = target? Find all unique quadruplets in the array which gives the sum of target.

Note:

The solution set must not contain duplicate quadruplets.

Example:

Given array nums = [1, 0, -1, 0, -2, 2], and target = 0.

A solution set is:
[
  [-1,  0, 0, 1],
  [-2, -1, 1, 2],
  [-2,  0, 0, 2]
]

 */
class fourSum {
public:
    fourSum();
    //    vector<vector<int>> fourSumFunc(vector<int>& nums, int target)
    //    {
    //        sort(nums.begin(), nums.end());
    //        vector<vector<int>> res;
    //        for (int i = 0; i < nums.size() - 3; ++i) {
    //            int current = nums.at(i);
    //            int targetForThreeSum = target - current;
    //            auto it = nums.begin();
    //            std::advance(it, i + 1);
    //            vector<int> tmpVec(it, nums.end());
    //            auto tmpResult = threeSum(tmpVec, targetForThreeSum);

    //            for (auto& tmp : tmpResult) {
    //                tmp.insert(tmp.begin(), nums.at(i));
    //            }
    //            res.insert(res.end(), tmpResult.begin(), tmpResult.end());
    //        }
    //        auto it = unique(res.begin(), res.end());
    //        res.erase(it, res.end());
    //        return res;
    //    }

    //    vector<vector<int>> threeSum(vector<int>& nums, int targetV)
    //    {
    //        vector<vector<int>> result;
    //        sort(nums.begin(), nums.end());

    //        for (int i = 0; i < nums.size() - 2; i++) {
    //            int current = nums.at(i);
    //            int target = targetV - current;
    //            int left = i + 1;
    //            int right = nums.size() - 1;
    //            while (left < right) {
    //                int sum = nums.at(left) + nums.at(right);
    //                if (sum == target) {
    //                    result.push_back({ nums.at(i), nums.at(left), nums.at(right) });
    //                    left++;
    //                    right--;
    //                } else if (sum > target) {
    //                    right--;
    //                } else if (sum < target) {
    //                    left++;
    //                }
    //            }
    //        }
    //        //        auto it = unique(result.begin(), result.end());
    //        //        result.erase(it, result.end());
    //        return result;
    //    }

    ////////////////////
    /// 利用set去重
    ///
    vector<vector<int>> fourSumFunc(vector<int>& nums, int target)
    {
        vector<vector<int>> result;
        if (nums.size() < 4)
            return result;

        sort(nums.begin(), nums.end());
        set<vector<int>> resultSet;

        for (int i = 0; i < nums.size() - 3; ++i) {
            int current = nums.at(i);
            int targetForThreeSum = target - current;
            auto it = nums.begin();
            std::advance(it, i + 1);
            vector<int> tmpVec(it, nums.end());
            auto tmpResult = threeSum(tmpVec, targetForThreeSum);
            for (auto& tmp : tmpResult) {
                tmp.insert(tmp.begin(), nums.at(i));
                resultSet.insert(tmp);
            }
        }
        return vector<vector<int>>(resultSet.begin(), resultSet.end());
    }

    vector<vector<int>> threeSum(vector<int>& nums, int targetV)
    {
        set<vector<int>> resultSet;
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() - 2; i++) {
            int current = nums.at(i);
            int target = targetV - current;
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

    //    vector<int> twoSum(vector<int>& nums, int target)
    //    {
    //        unordered_map<int, int> m;
    //        vector<int> res;
    //        for (int i = 0; i < nums.size(); ++i) {
    //            auto found = m.find(target - nums.at(i));
    //            if (found != m.end()) {
    //                return std::vector<int>{ (*found).second, i };
    //                //                res.push_back((*found).second);
    //                //                res.push_back(i);
    //            } else {
    //                m.insert(pair<int, int>(nums.at(i), i));
    //            }
    //        }
    //        return res;
    //    }
};

#endif // FOURSUM_H
