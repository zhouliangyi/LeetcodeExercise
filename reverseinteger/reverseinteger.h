#ifndef REVERSEINTEGER_H
#define REVERSEINTEGER_H

/**
 * @brief The ReverseInteger class
 *
 * Given a 32-bit signed integer, reverse digits of an integer.

Example 1:

Input: 123
Output: 321
Example 2:

Input: -123
Output: -321
Example 3:

Input: 120
Output: 21
Note:
Assume we are dealing with an environment which could only store integers within the 32-bit signed integer range: [−2^31,  2^31 − 1]. For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows.


 */
class ReverseInteger {
public:
    ReverseInteger();
    int reverse(int x)
    {
        //    int result = 0;
        //    while (true) {
        //        int tmp = x % 10;

        //        x /= 10;

        //        if (x > 10 || x < -10) {
        //            result = result * 10 + tmp;
        //        } else {
        //            result = result * 10 + x;
        //            break;
        //        }
        //    }

        //    return result;

        //    bool positiveFlag = true;
        //    if (x < 0) {
        //        x = -x;
        //        false;
        //    }
        //    long long result = 0;
        //    while (x > 0) {
        //        result = result * 10 + x % 10;
        //        x /= 10;
        //    }
        //    if (result > _I32_MAX) {
        //        result = 0;
        //    }
        //    if (!positiveFlag)
        //        result = -result;

        //    return result;

        long long result = 0;
        while (x >= 10 || x <= -10) {
            int tmp = x % 10;
            result = result * 10 + tmp;
            x /= 10;
        }

        result = result * 10 + x;
        if (result > 2147483647 || result < -2147483649) {
            result = 0;
        }

        return result;
    }
};

#endif // REVERSEINTEGER_H
