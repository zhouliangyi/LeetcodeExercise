#ifndef ADDBINARY_H
#define ADDBINARY_H
#include <string>
using namespace std;
/**
 * @brief The AddBinary class
 *
 * Given two binary strings, return their sum (also a binary string).

The input strings are both non-empty and contains only characters 1 or 0.

Example 1:

Input: a = "11", b = "1"
Output: "100"
Example 2:

Input: a = "1010", b = "1011"
Output: "10101"

 */
class AddBinary {
public:
    AddBinary();
    string addBinary(string a, string b)
    {
        string result;
        // 设置进位的变量
        bool jinwei = false;
        int a_size = a.size();
        int b_size = b.size();
        // 将a、b字符串长度设置为相同，便于循环操作
        if (a_size > b_size) {
            b.insert(b.begin(), a_size - b_size, '0');
        } else if (a_size < b_size) {
            a.insert(a.begin(), b_size - a_size, '0');
        }
        int i = a.size() - 1;
        for (; i >= 0; i--) {
            char tmp_a = a[i];
            char tmp_b = b[i];
            char res;
            if (tmp_a == '1' && tmp_b == '1' && jinwei) {
                res = '1';
                jinwei = true;
            } else if (tmp_a == '1' && tmp_b == '1' && !jinwei) {
                res = '0';
                jinwei = true;
            } else if (tmp_a == '1' && tmp_b == '0' && jinwei) {
                res = '0';
                jinwei = true;
            } else if (tmp_a == '1' && tmp_b == '0' && !jinwei) {
                res = '1';
                jinwei = false;
            }
            if (tmp_a == '0' && tmp_b == '1' && jinwei) {
                res = '0';
                jinwei = true;
            } else if (tmp_a == '0' && tmp_b == '1' && !jinwei) {
                res = '1';
                jinwei = false;
            } else if (tmp_a == '0' && tmp_b == '0' && jinwei) {
                res = '1';
                jinwei = false;
            } else if (tmp_a == '0' && tmp_b == '0' && !jinwei) {
                res = '0';
                jinwei = false;
            }
            result.insert(result.begin(), res);
        }

        if (jinwei)
            result.insert(result.begin(), '1');
        return result;
    }
};

#endif // ADDBINARY_H
