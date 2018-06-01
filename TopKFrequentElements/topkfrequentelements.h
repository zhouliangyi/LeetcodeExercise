#ifndef TOPKFREQUENTELEMENTS_H
#define TOPKFREQUENTELEMENTS_H

#include <algorithm>
#include <map>
#include <unordered_map>
#include <vector>
using namespace std;

/**
 * @brief The TopKFrequentElements class
 * Given a non-empty array of integers, return the k most frequent elements.

For example,
Given [1,1,1,2,2,3] and k = 2, return [1,2].

Note:
You may assume k is always valid, 1 ≤ k ≤ number of unique elements.
Your algorithm's time complexity must be better than O(n log n), where n is the array's size.

 */
class TopKFrequentElements {
public:
    TopKFrequentElements();

    /**
     * @brief topKFrequent 使用map记录value出现的次数，key是数值，value是次数；采用multimap记录次数对应数值，循环一下上一个map，把值存进来即可，因为multimap的key是从小到大排序，取出multimap中后k个元素就是最终结果
     * @param nums
     * @param k
     * @return
     */
    vector<int> topKFrequent(vector<int>& nums, int k)
    {
        // key对应出现的值，value对应出现次数 统计出现次数
        unordered_map<int, int> hash;
        for (int i = 0; i < nums.size(); i++) {
            int v = nums.at(i);
            auto found = hash.find(v);
            if (found != hash.end())
                hash[v]++;
            else {
                hash.insert(pair<int, int>(v, 1));
            }
        }

        // 将 数值-次数 更改为次数-数值
        vector<int> result;
        multimap<int, int> count2value;
        for (auto it = hash.begin(); it != hash.end(); ++it) {
            count2value.insert(pair<int, int>((*it).second, (*it).first));
        }

        // 从次数-数值 取后k个元素
        int c = 0;
        for (auto it = count2value.rbegin(); it != count2value.rend(); ++it) {
            if (result.size() < k) {
                result.push_back((*it).second);
            } else {
                break;
            }
        }

        return result;
    }
};

#endif // TOPKFREQUENTELEMENTS_H
