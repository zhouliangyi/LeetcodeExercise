#ifndef REACHINGPOINTS_H
#define REACHINGPOINTS_H

/**
 * @brief The Solution class
 * A move consists of taking a point (x, y) and transforming it to either (x, x+y) or (x+y, y).

Given a starting point (sx, sy) and a target point (tx, ty), return True if and only if a sequence of moves exists to transform the point (sx, sy) to (tx, ty). Otherwise, return False.

Examples:
Input: sx = 1, sy = 1, tx = 3, ty = 5
Output: True
Explanation:
One series of moves that transforms the starting point to the target is:
(1, 1) -> (1, 2)
(1, 2) -> (3, 2)
(3, 2) -> (3, 5)

Input: sx = 1, sy = 1, tx = 2, ty = 2
Output: False

Input: sx = 1, sy = 1, tx = 1, ty = 1
Output: True

Note:

sx, sy, tx, ty will all be integers in the range [1, 10^9].

 */
class Solution {
public:
    Solution() {}
    /**
     * @brief reachingPoints
     * 方法是采用从最终值往前找的方法(tx,ty)<--(tx-ty,ty) or (tx,ty-tx)
     * @param sx
     * @param sy
     * @param tx
     * @param ty
     * @return
     */
    bool reachingPoints(int sx, int sy, int tx, int ty)
    {
        // 如果最终值≤初始值，则不可能找到变换方法
        if (tx <= sx && ty <= sy)
            return false;

        // 从最终值往前找，找到最接近初始值的值 至少有一个等于初始值（这个可能是初始值）或者有小于初始值的（这个必定不可能是初始值）
        while (tx > sx && ty > sy) {
            if (tx > ty) {
                tx -= ty;
            } else {
                ty -= tx;
            }
        }
        // 其中一个是初始值
        if (tx == sx) {
            // ty-sy 正好是整数个tx
            if ((ty - sy) % tx == 0) {
                return true;
            } else {
                return false;
            }
        } else if (ty == sy) {
            // tx-sx 正好是整数个ty
            if ((tx - sx) % ty == 0) {
                return true;
            } else {
                return false;
            }
        } else {
            return false;
        }
    }
};
#endif // REACHINGPOINTS_H
