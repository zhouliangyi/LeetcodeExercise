#ifndef WORDSEARCH_H
#define WORDSEARCH_H

#include <algorithm>
#include <hash_fun.h>
#include <set>
#include <unordered_map>
#include <vector>
using namespace std;

namespace std {
/**
 * @brief The hash<pair<T, U> > struct
 * 要使用pair<int, int>作为unordered_map的key，必须实现hash函数
 */
template <typename T, typename U>
struct hash<pair<T, U>> {
    size_t operator()(std::pair<T, U> x) const throw()
    {
        return hash<T>()(x.first) ^ hash<U>()(x.second);
    }
};
}

class WordSearch {
public:
    WordSearch();
    /**
     * @brief exist
     * @details 思路：遍历所有数组元素，采用深度优先搜索的方法。以当前元素为起点，不断向四周扩展，判断是否满足单词的要求
     */
    bool exist(vector<vector<char>>& board, string word)
    {
        if (board.size() == 0) {
            return false;
        } else {
            if (board[0].size() == 0) {
                return false;
            } else {
                for (int i = 0; i < board.size(); ++i) {
                    for (int j = 0; j < board[0].size(); ++j) {
                        if (exist(board, word, pair<int, int>(i, j), unordered_map<pair<int, int>, bool>())) {
                            return true;
                        }
                    }
                }
                return false;
            }
        }
    }
    /**
     * @brief exist
     * @param board 字母的数组
     * @param word 当前待查找的单词
     * @param start 起点的位置
     * @param seq 当前已经查找过的位置，避免重复查询
     * @return
     */
    bool exist(vector<vector<char>>& board,
        string word,
        pair<int, int> start,
        unordered_map<pair<int, int>, bool> seq)
    {
        // 终止条件，如果word只有一个字母时，判断该字母是否和当前位置字母一样。如果一样则找到，反之未找到。
        if (word.size() == 1) {
            if (word[0] == board[start.first][start.second])
                return true;
            else
                return false;
        }
        // 如果word还有多个字母，需要继续深度查找
        else {
            if (board[start.first][start.second] != word[0])
                return false;
            else {
                // 当前位置放入被查找过的map中记录，避免重复查找
                seq.insert(pair<pair<int, int>, bool>(start, true));
                // 产生当前位置的合理相邻位置
                vector<pair<int, int>> newStarts;
                generateStarts(start, seq, board.size(), board[0].size(), newStarts);
                // 新的word
                string newWord = word;
                newWord.erase(newWord.begin());
                for (auto s : newStarts) {
                    if (exist(board, newWord, s, seq))
                        return true;
                }
                return false;
            }
        }
    }

    /**
     * @brief generateStarts 给定当前位置、已经查询过的位置，产生当前位置合理的相邻位置
     * @param start
     * @param seq
     * @param row
     * @param col
     * @param result
     */
    void generateStarts(pair<int, int> start,
        unordered_map<pair<int, int>, bool> seq,
        int row,
        int col, vector<pair<int, int>>& result)
    {
        pair<int, int> up(start.first - 1, start.second);
        pair<int, int> down(start.first + 1, start.second);
        pair<int, int> left(start.first, start.second - 1);
        pair<int, int> right(start.first, start.second + 1);

        // 位置必须在数组内，并且不能重复出现
        if (up.first >= 0 && up.first < row && up.second >= 0 && up.second < col && seq[up] != true) {
            result.push_back(up);
        }
        if (down.first >= 0 && down.first < row && down.second >= 0 && down.second < col && seq[down] != true) {
            result.push_back(down);
        }
        if (left.first >= 0 && left.first < row && left.second >= 0 && left.second < col && seq[left] != true) {
            result.push_back(left);
        }
        if (right.first >= 0 && right.first < row && right.second >= 0 && right.second < col && seq[right] != true) {
            result.push_back(right);
        }
    }
};

#endif // WORDSEARCH_H
