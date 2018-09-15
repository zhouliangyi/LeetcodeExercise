#ifndef JUMPGAMEII_H
#define JUMPGAMEII_H
#include <unordered_map>
#include <vector>
using namespace std;

class JumpGameII {
public:
    JumpGameII();

    /**
     * @brief jump
     * @details 采用greedy方法。贪心的思路是
     * 遍历当前位置currentPosition最远可走的位置(nextPosition)
     * ，然后再找出在这些位置(nextPosition)最远可走的(nextNextPosition)，
     * 以到达最远的nextNextPosition的nextPosition作为下一次currentPositoin的起点进行遍历
     * e.g.  [2,3,1,1,1,2]
     * 1. currentPositon=0，指向第一个位置，最多可走2步
     * 1.1 在0位置走1步到达位置1，位置1最多可走3步，最远到达4
     * 1.2 在0位置走2步到达位置2，位置2最多可走1步，最远到达3
     * 1.3 所以选位置1作为下一次的currentPosition
     * 2. currentPosition=1 最多可走3步
     * 2.1 在位置1走1步到达位置2，位置2最多可走1步，最远到达3
     * 2.2 在位置1走2步到达位置3，位置3最多可走1步，最远到达4
     * 2.3 在位置1走3步到达位置4，位置4最多可走1步，最远到达5 结束
     */
    int jump(vector<int>& nums) {
        int count = 0;
        int current = 0;
        while(current<nums.size()-1){
            int max = -1;
            int newCurrent = -1;
            count++;
            int currentMaxStep = nums[current];
            int tmpCurrentStep=current;
            for (int currentStep = 1; currentStep <= currentMaxStep; ++currentStep) {
                int nextPosition = tmpCurrentStep + currentStep;
                if(nextPosition>=nums.size()-1)
                {
                    current=nextPosition;
                    break;
                }
                if(nextPosition+nums[nextPosition]>max)
                {
                    max=nextPosition+nums[nextPosition];
                    current=nextPosition;
                }
            }
        }
        return count;
    }

};
#endif // JUMPGAMEII_H
