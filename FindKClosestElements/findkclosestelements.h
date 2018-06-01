#ifndef FINDKCLOSESTELEMENTS_H
#define FINDKCLOSESTELEMENTS_H

#include <algorithm>
#include <list>
#include <vector>
using namespace std;

/**
 * @brief The FindKClosestElements class
 * Given a sorted array, two integers k and x, find the k closest elements to x in the array. The result should also be sorted in ascending order. If there is a tie, the smaller elements are always preferred.

Example 1:
Input: [1,2,3,4,5], k=4, x=3
Output: [1,2,3,4]
Example 2:
Input: [1,2,3,4,5], k=4, x=-1
Output: [1,2,3,4]
Note:
The value k is positive and will always be smaller than the length of the sorted array.
Length of the given array is positive and will not exceed 104
Absolute value of elements in the array and x will not exceed 104
UPDATE (2017/9/19):
The arr parameter had been changed to an array of integers (instead of a list of integers). Please reload the code definition to get the latest changes.
 */
class FindKClosestElements {
public:
    FindKClosestElements();
    vector<int> findClosestElements(vector<int>& arr, int k, int x)
    {
        int arr_size = arr.size();
        int left = 0;
        int right = arr_size - 1;

        std::vector<int> result;
        auto it = find_if(arr.begin(), arr.end(), [x](int val) { return val >= x; });
        int p1 = it - arr.begin();

        // 找到比x大的第一个数对应的下标
        int pos = 0;
        for (int i = 0; i < arr_size; ++i) {
            if (arr.at(i) >= x) {
                pos = i;
                break;
            }
        }
        left = pos - 1;
        right = pos;

        while (result.size() < k) {

            // 如果左右下标都有效
            if (left >= 0 && right < arr_size) {
                int left_value = arr.at(left);
                int right_value = arr.at(right);
                int left_diff = x - left_value;
                int right_diff = right_value - x;
                // 左边小于右边 取左侧;如果左右侧相等 则将左侧的添加到结果中，并将左下标左移
                if (left_diff <= right_diff) {
                    result.insert(result.begin(), left_value);
                    left--;
                }
                // 右边小于左边，取右侧
                else if (left_diff > right_diff) {
                    result.push_back(right_value);
                    right++;
                }

            }
            // 左侧下标无效 右侧下标有效
            else if (left < 0 && right < arr_size) {
                int right_value = arr.at(right);
                result.push_back(right_value);
                right++;
            } else if (left >= 0 && right >= arr_size) {
                int left_value = arr.at(left);
                result.insert(result.begin(), left_value);
                left--;
            } else {
                break;
            }
        }
        return result;
    }
};

#endif // FINDKCLOSESTELEMENTS_H
