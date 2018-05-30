#ifndef LONGESTSUBSTRINGWITHOUTREPEATINGCHARACTERS_H
#define LONGESTSUBSTRINGWITHOUTREPEATINGCHARACTERS_H
#include <string>
#include <unordered_map>
using namespace std;
/**
 * @brief The longestsubstringwithoutrepeatingcharacters class
 *
 *
 * Given a string, find the length of the longest substring without repeating characters.

Examples:

Given "abcabcbb", the answer is "abc", which the length is 3.

Given "bbbbb", the answer is "b", with the length of 1.

Given "pwwkew", the answer is "wke", with the length of 3. Note that the answer must be a substring, "pwke" is a subsequence and not a substring.


 */
class longestsubstringwithoutrepeatingcharacters {
public:
    longestsubstringwithoutrepeatingcharacters();
    int lengthOfLongestSubstring(string s)
    {
        // 使用hashMap记录字符是否重复出现
        //        if (s.size() == 1) {
        //            return 1;
        //        }
        //        int count = 0;
        //        int result = 0;
        //        unordered_map<char, int> hash;
        //        for (int i = 0; i < s.size();) {
        //            char tmpC = s.at(i);
        //            auto found = hash.find(tmpC);
        //            if (found == hash.end()) {
        //                hash.insert(pair<char, int>(tmpC, i));
        //                count++;
        //                i++;
        //            } else {
        //                result = count > result ? count : result;
        //                // 需要考虑已经重复的第一个参数，这个时候计数是1，并且需要把该字符放入hash记录
        //                count = 0;
        //                i = (*found).second + 1;
        //                hash.clear();

        //                // 或者采用下面的方法 重新从该重复的参数循环去判断
        //                //                count = 0;
        //                //                i--;
        //            }
        //        }
        //        result = count > result ? count : result;
        //        return result;

        // 使用一个数组记录最近当前字符出现的最近位置，然后循环遍历
        // 使用变量记录最大子字符串的最左侧对应的下标（left变量）
        // 1、循环遍历，如果当前字符已经出现，则需要更新最左侧对应的下标（left变量），left使用当前字符上次出现下标+1是去除重复，并且需要判断当前字符上次出现的位置是在left之前还是之后，如果在之前则不用更新left变量。如果没出现，则不用更新
        // 2、将当前字符出现的位置记录在数组中，便于以后使用
        // 3、计算当前从left到当前下标的长度，这个长度对应的的是未重复的最大字符串长度

        int record[300];
        for (int i = 0; i < 300; i++) {
            record[i] = -1;
        }
        int left = 0;
        int length = 0;
        for (int i = 0; i < s.size(); i++) {
            char tmp = s.at(i);
            if (record[tmp] != -1) {
                left = record[tmp] + 1 > left ? record[tmp] + 1 : left;
            }
            record[tmp] = i;
            length = length > (i - left + 1) ? length : (i - left + 1);
        }
        return length;
    }
};

#endif // LONGESTSUBSTRINGWITHOUTREPEATINGCHARACTERS_H
