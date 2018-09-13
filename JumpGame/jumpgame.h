#ifndef JUMPGAME_H
#define JUMPGAME_H
#include <unordered_map>
#include <vector>
using namespace std;

class JumpGame {
public:
    JumpGame();

    /**
     * @brief canJump
     * @details 采用递归的方式，从最后一个开始遍历，看哪些可以到达最后，如果最终寻找到起点，则可到达，如果寻找不到起点则不可到达。中间使用used记录哪些节点已经遍历过，避免重复遍历
     */
    bool canJump(vector<int>& nums)
    {
        unordered_map<int, bool> used;
        for (int i = 0; i < nums.size(); i++) {
            used[i] = false;
        }

        return canJumpToEnd(nums, nums.size() - 1, used);
    }

    bool canJumpToEnd(vector<int>& nums, int end, unordered_map<int, bool>& used)
    {
        if (end == 0) {
            return true;
        }
        for (int i = end - 1; i >= 0; --i) {
            if (used[i] == true) {
                continue;
            }
            used[i] = true;
            int diff = end - i;
            if (nums[i] >= diff) {
                return canJumpToEnd(nums, i, used);
            }
        }
        return false;
    }
};
#endif // JUMPGAME_H
