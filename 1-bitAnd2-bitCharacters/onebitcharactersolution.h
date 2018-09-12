#ifndef ONEBITCHARACTERSOLUTION_H
#define ONEBITCHARACTERSOLUTION_H

#include <vector>
using namespace std;
/**
 * @brief The OneBitCharacterSolution class
 *

We have two special characters. The first character can be represented by one bit 0. The second character can be represented by two bits (10 or 11).

Now given a string represented by several bits. Return whether the last character must be a one-bit character or not. The given string will always end with a zero.

Example 1:
Input:
bits = [1, 0, 0]
Output: True
Explanation:
The only way to decode it is two-bit character and one-bit character. So the last character is one-bit character.
Example 2:
Input:
bits = [1, 1, 1, 0]
Output: False
Explanation:
The only way to decode it is two-bit character and two-bit character. So the last character is NOT one-bit character.
Note:

1 <= len(bits) <= 1000.
bits[i] is always 0 or 1.


 */
class OneBitCharacterSolution {
public:
    OneBitCharacterSolution();

    /**
     * @brief isCorrectCharacter
     * 判断给定的字符组合是否可通过最小字符单元组合而成
     * 关键是找到终止条件：
     * 1.如果字符数为0，true
     * 2.字符数为1且值为0 true
     * 3.字符数为2且为10,11,00 true
     */
    bool isCorrectCharacter(vector<int>& bits)
    {
        // 如果当前bits已经是合理的最小字符，则直接返回true
        if (bits.size() == 0) {
            return true;
        } else if (bits.size() == 1) {
            if (bits[0] == 0) {
                return true;
            } else
                return false;
        } else if (bits.size() == 2) {
            if ((bits[0] == 1) && (bits[1] == 0 || bits[1] == 1)) {
                return true;
            } else if (bits[0] == 0 && bits[1] == 0) {
                return true;
            } else {
                return false;
            }
        }
        // 从最前面讲合理的最小字符删除，再递归判断后面的字符组合是否合理
        else if (bits[0] == 0) {
            vector<int> newBits(bits.begin() + 1, bits.end());
            return isCorrectCharacter(newBits);
        } else if ((bits[0] == 1) && (bits[1] == 0 || bits[1] == 1)) {
            vector<int> newBits(bits.begin() + 2, bits.end());
            return isCorrectCharacter(newBits);
        }
        return false;
    }

    // 采用递归的思路，将最后一个字符去掉，然后判断前面的是否可以组成合理的字符
    bool isOneBitCharacter(vector<int>& bits)
    {
        vector<int> newBits(bits.begin(), bits.end() - 1);
        return isCorrectCharacter(newBits);
    }
};

#endif // ONEBITCHARACTERSOLUTION_H
