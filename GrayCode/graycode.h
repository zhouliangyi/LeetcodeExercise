#ifndef GRAYCODE_H
#define GRAYCODE_H

#include <math.h>
#include <unordered_map>
#include <vector>
using namespace std;
/**
 * @brief The GrayCode class
 * The gray code is a binary numeral system where two successive values differ in only one bit.

Given a non-negative integer n representing the total number of bits in the code, print the sequence of gray code. A gray code sequence must begin with 0.

For example, given n = 2, return [0,1,3,2]. Its gray code sequence is:

00 - 0
01 - 1
11 - 3
10 - 2
Note:
For a given n, a gray code sequence is not uniquely defined.

For example, [0,2,3,1] is also a valid gray code sequence according to the above definition.

For now, the judge is able to judge based on one instance of gray code sequence. Sorry about that.


 */
class GrayCode {
public:
    GrayCode();
    vector<int> grayCode(int n)
    {
        vector<int> result;
        vector<int> bits(n, 0);
        unordered_map<int, int> hash;

        result.push_back(0);
        hash.insert(pair<int, int>(0, 1));

        int totalNum = pow(2, n);
        while (result.size() < totalNum) {
            for (int i = 0; i < n; i++) {
                int bit = bits.at(i);
                if (bit == 0)
                    bits.at(i) = 1;
                else
                    bits.at(i) = 0;
                int bit_10 = vector2int(bits);
                if (hash.find(bit_10) != hash.end()) {
                    bits.at(i) = bit;
                } else {
                    result.push_back(bit_10);
                    hash.insert(pair<int, int>(bit_10, 1));
                    break;
                }
            }
        }
        return result;
    }
    /**
     * @brief vector2int 将按位存储的vec表示的二进制数转换成对应的十进制
     * @param vec vec中最先存的是二进制的低位
     * @return
     */
    int vector2int(vector<int> vec)
    {
        int result = 0;
        for (int i = 0; i < vec.size(); i++) {
            result += pow(2, i) * vec.at(i);
        }
        return result;
    }
};

#endif // GRAYCODE_H
