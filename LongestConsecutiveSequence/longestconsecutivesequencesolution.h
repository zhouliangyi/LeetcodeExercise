#ifndef LONGESTCONSECUTIVESEQUENCESOLUTION_H
#define LONGESTCONSECUTIVESEQUENCESOLUTION_H

#include <unordered_map>
#include <vector>
using namespace std;
class LongestConsecutiveSequenceSolution {
public:
    LongestConsecutiveSequenceSolution();

    /**
     * @brief longestConsecutive
     * @details 采用一个map存储所有值的使用情况，循环中，寻找当前值+1和当前值-1，如果在map中，并且未使用，则标记为已使用并寻找当前值+2或者当前值-2。如果不在map中，则记下来当前的length，并更新最大length值
     */
    int longestConsecutive(vector<int>& nums)
    {
        unordered_map<int, bool> isUsed;
        for (auto i : nums) {
            isUsed[i] = false;
        }
        int longest = 0;
        for (auto i : nums) {
            if (isUsed[i] == true)
                continue;
            int length = 1;
            isUsed[i] = true;
            int j = i + 1;
            int k = i - 1;
            while (1) {
                auto it = isUsed.find(j);
                if (it == isUsed.end())
                    break;
                else {
                    length++;
                    isUsed[j] = true;
                    j++;
                }
            }

            while (1) {
                auto it = isUsed.find(k);
                if (it == isUsed.end())
                    break;
                else {
                    length++;
                    isUsed[k] = true;
                    k--;
                }
            }
            longest = max(longest, length);
        }

        return longest;
    }
};

#endif // LONGESTCONSECUTIVESEQUENCESOLUTION_H
