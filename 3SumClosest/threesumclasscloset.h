#ifndef THREESUMCLASSCLOSET_H
#define THREESUMCLASSCLOSET_H

#include <algorithm>
#include <vector>
using namespace std;
class threesumclassCloset {
public:
    threesumclassCloset();
    int threeSumClosest(vector<int>& nums, int target)
    {

        /**
先排序，时间复杂度是O(n*logn)，然后对排序后的向量按照跟3Sum相近的方法求解。枚举left,middle=left+1,right=n-1,l+m+r=target，则找到解;l+m+r<target，则middle++;l+m+r>target，则right--
         */
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int min = 0x7fffffff;
        int sum = 0;
        int result;
        for (int left = 0; left < n; ++left) {
            int middle = left + 1;
            int right = n - 1;
            while (middle < right) {
                sum = nums[left] + nums[middle] + nums[right];
                if (sum == target) {
                    return sum;
                }
                if (sum < target) {
                    ++middle;
                } else if (sum > target) {
                    --right;
                }
                if (abs(sum - target) < min) {
                    min = abs(sum - target);
                    result = sum;
                }
            }
        }
        return result;
    }
};

#endif // THREESUMCLASSCLOSET_H
