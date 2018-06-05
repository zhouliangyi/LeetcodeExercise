#ifndef PLUSONE_H
#define PLUSONE_H
#include <vector>
using namespace std;
/**
 * @brief The PlusOne class
 *
 * Given a non-empty array of digits representing a non-negative integer, plus one to the integer.

The digits are stored such that the most significant digit is at the head of the list, and each element in the array contain a single digit.

You may assume the integer does not contain any leading zero, except the number 0 itself.

Example 1:

Input: [1,2,3]
Output: [1,2,4]
Explanation: The array represents the integer 123.
Example 2:

Input: [4,3,2,1]
Output: [4,3,2,2]
Explanation: The array represents the integer 4321.

 */
class PlusOne {
public:
    PlusOne();
    vector<int> plusOne(vector<int>& digits)
    {
        int n = digits.size();
        int jinwei = 0;
        for (int i = n - 1; i >= 0; i--) {
            int tmp = digits.at(i) + jinwei;
            if (i == n - 1) {
                tmp = tmp + 1 + jinwei;
            }

            if (tmp == 10) {
                jinwei = 1;
                tmp = 0;
            } else {
                jinwei = 0;
            }
            digits.at(i) = tmp;
            if (i == 0 && jinwei == 1) {
                digits.insert(digits.begin(), 1);
            }
        }
        return digits;
    }
};

#endif // PLUSONE_H
