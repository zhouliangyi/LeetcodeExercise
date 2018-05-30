#include "reverseinteger.h"
#include <limits.h>
#include <math.h>
ReverseInteger::ReverseInteger()
{
}

int ReverseInteger::reverse(int x)
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
