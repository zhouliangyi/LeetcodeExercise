#include "SearchinRotatedSortedArray.h"

SearchinRotatedSortedArray::SearchinRotatedSortedArray()
{
}

int SearchinRotatedSortedArray::search(std::vector<int>& nums, int target)
{
    if (nums.empty())
        return -1;
    if (nums.size() == 1) {
        if (nums[0] == target)
            return 0;
        else
            return -1;
    }
    int first = 0;
    int last = nums.size() - 1;
    while (first <= last) {
        const int mid = first + (last - first) / 2;
        if (nums[mid] == target)
            return mid;
        if (nums[first] <= nums[mid]) {
            if (target <= nums[mid] && target >= nums[first])
                last = mid;
            else
                first = mid + 1;
        } else {
            if (nums[mid] <= target && target <= nums[last])
                first = mid + 1;
            else
                last = mid;
        }
    }
    return -1;
}
