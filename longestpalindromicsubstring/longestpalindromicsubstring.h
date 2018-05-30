#ifndef LONGESTPALINDROMICSUBSTRING_H
#define LONGESTPALINDROMICSUBSTRING_H
#include <string>
using namespace std;
class LongestPalindromicSubstring {
public:
    LongestPalindromicSubstring();

    // 循环遍历所有的字符，以该字符为中心，向两侧扩展判断是否为回文，判断过程需要分两种情况考虑，一种是偶数个的回文，一种是奇数个的回文
    string longestPalindrome(string s)
    {
        int maxLength = 0;
        int index = 0;
        int maxLeft = 0;
        int maxRight = 0;
        for (int i = 0; i < s.size() - 1; i++) {
            {
                int left = 0;
                int right = 0;
                expand(s, i, 0, left, right);
                if (right - left + 1 > maxLength) {
                    maxLength = right - left + 1;
                    maxLeft = left;
                    maxRight = right;
                }
            }
            {
                int left = 0;
                int right = 0;
                expand(s, i, 1, left, right);
                if (right - left + 1 > maxLength) {
                    maxLength = right - left + 1;
                    maxLeft = left;
                    maxRight = right;
                }
            }
        }
        string result;
        for (int i = maxLeft; i <= maxRight; i++) {
            result += s.at(i);
        }
        return result;
    }
    void expand(string s, int index, int self, int& left, int& right)
    {
        left = index;
        right = index;

        if (s.at(index) == s.at(index + self)) {
            left = index;
            right = index + self;
        }

        while (true) {
            if (left == 0 || right == s.size() - 1) {
                break;
            } else {
                left--;
                right++;
                if (s.at(left) != s.at(right)) {
                    left++;
                    right--;
                    break;
                }
            }
        }
        return;
    }
};

#endif // LONGESTPALINDROMICSUBSTRING_H
