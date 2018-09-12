#ifndef CLIMBINGSTAIRS_H
#define CLIMBINGSTAIRS_H

#include <unordered_map>
using namespace std;

/**
 * @brief The ClimbingStairsSolution class
You are climbing a stair case. It takes n steps to reach to the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

Note: Given n will be a positive integer.

Example 1:

Input: 2
Output: 2
Explanation: There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps
Example 2:

Input: 3
Output: 3
Explanation: There are three ways to climb to the top.
1. 1 step + 1 step + 1 step
2. 1 step + 2 steps
3. 2 steps + 1 step

*/
class ClimbingStairsSolution {
public:
    ClimbingStairsSolution();

    /**
     * @brief climbStairs
     * @details 采用迭代的方法，斐波那契数列
     */
    int climbStairs(int n)
    {
        unordered_map<int, int> map;
        map[0] = 0;
        map[1] = 1;
        map[2] = 2;
        for (int i = 3; i <= n; i++) {
            map[i] = map[i - 1] + map[i - 2];
        }
        return map[n];
    }
};

#endif // CLIMBINGSTAIRS_H
