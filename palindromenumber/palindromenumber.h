#ifndef PALINDROMENUMBER_H
#define PALINDROMENUMBER_H
#include <vector>
class PalindromeNumber {
public:
    PalindromeNumber();
    bool isPalindrome(int x)
    {
        if (x < 0)
            return false;
        else if (x < 10) {
            return true;
        } else {
            std::vector<int> numBits;
            while (true) {
                int bit = x % 10;
                numBits.push_back(bit);
                x /= 10;
                if (x == 0) {
                    break;
                }
            }
            int left = 0;
            int right = numBits.size() - 1;
            bool result = true;

            while (true) {
                if (left >= right)
                    break;
                if (numBits.at(left) != numBits.at(right)) {
                    result = false;
                    break;
                }
                left++;
                right--;
            }
            return result;
        }
    }
};

#endif // PALINDROMENUMBER_H
