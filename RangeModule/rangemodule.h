#ifndef RANGEMODULE_H
#define RANGEMODULE_H

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
class RangeModule {
public:
    RangeModule();
    struct item {
        item(int v, bool c)
            : value(v)
            , isClose(c)
        {
        }
        bool operator==(const item& it_V) const
        {
            if (this->value == it_V.value && this->isClose == it_V.isClose) {
                return true;
            }
            return false;
        }

        //        friend ostream& operator<<(ostream& os, const item& it);
        int value;
        bool isClose;
    };

    void PrintTo(const RangeModule::item& it, ::std::ostream* os)
    {
        *os << "value:" << it.value << " isColse:" << it.isClose; // whatever needed to print bar to os
    }

    //    void addRange(int left, int right)
    //    {
    //        auto it_left_plus = find_if(range.begin(), range.end(), [left](int v) { return v > left; });
    //        auto it_right_plus = find_if(range.begin(), range.end(), [right](int v) { return v > right; });

    //        auto begin = range.begin();
    //        auto end = range.end();
    //        // 边界情况暂未考虑
    //        // 在区间中
    //        auto tt = it_left_plus - begin;
    //        if ((it_left_plus - begin) % 2 != 0 && it_left_plus < end) {
    //            if ((it_right_plus - begin) % 2 != 0 && it_right_plus < end) {
    //                range.erase(it_left_plus, it_right_plus);
    //            } else {
    //                range.erase(it_left_plus, it_right_plus);
    //                range.push_back(right);
    //                sort(range.begin(), range.end());
    //            }
    //        }
    //        // 不在区间中
    //        else {
    //            if ((it_right_plus - begin) % 2 != 0 && it_right_plus < end) {
    //                range.erase(it_left_plus, it_right_plus);
    //                range.push_back(left);
    //                sort(range.begin(), range.end());
    //            } else {
    //                range.erase(it_left_plus, it_right_plus);

    //                range.push_back(left);
    //                range.push_back(right);
    //                sort(range.begin(), range.end());
    //            }
    //        }
    //    }

    //    bool queryRange(int left, int right)
    //    {
    //        auto it_left_plus = find_if(range.begin(), range.end(), [left](int v) { return v > left; });
    //        auto it_right_plus = find_if(range.begin(), range.end(), [right](int v) { return v > right; });

    //        auto begin = range.begin();
    //        auto end = range.end();

    //        if (it_left_plus < end && it_right_plus < end) {
    //            if ((it_left_plus - begin) % 2 != 0 && (it_right_plus - begin) % 2 != 0)
    //                return true;
    //        } else
    //            return false;
    //    }

    void addRange(int left, int right)
    {
        item l(left, true);
        item r(right, false);
        range.push_back(l);
        range.push_back(r);

        sort(range.begin(), range.end(), [](item v1, item v2) { return v1.value < v2.value; });

        auto it_left = adjacent_find(range.begin(), range.end(), [](item v1, item v2) {
                if(v1.isClose == true&& v2.isClose==true)
                    return true;
                else
                    return false; });

        auto it_right = adjacent_find(range.begin(), range.end(), [](item v1, item v2) {
                if(v1.isClose == false&& v2.isClose==false)
                    return true;
                else
                    return false; });

        if (it_left != range.end() && it_right != range.end()) {
            range.erase(it_left + 1, it_right + 1);
        }

        auto it_left_equal = adjacent_find(range.begin(), range.end(), [](item v1, item v2) { return v1.value == v2.value; });
        if (it_left_equal != range.end())
            range.erase(it_left_equal, it_left_equal + 2);
    }

    bool queryRange(int left, int right)
    {
        auto it_left_open = find_if(range.begin(), range.end(), [left](item it_v) {
            if (it_v.isClose == false && it_v.value > left)
                return true;
            else
                return false;
        });

        auto it_left_close = it_left_open - 1;

        auto it_right_open = find_if(range.begin(), range.end(), [right](item it_v) {
            if (it_v.isClose == false && it_v.value >= right)
                return true;
            else
                return false;
        });

        auto it_right_close = it_right_open - 1;
        if (it_left_open == range.end() || it_left_close == range.end() || it_right_close == range.end() || it_right_open == range.end()) {
            return false;
        } else if (it_left_close == it_right_close && it_left_open == it_right_open)
            return true;
        else
            return false;
    }

    void
    removeRange(int left, int right)
    {
    }

    vector<item> range;
};
//ostream& operator<<(ostream& os, const RangeModule::item& it)
//{
//    return os << "value:" << it.value << " isColse:" << it.isClose;
//}
#endif // RANGEMODULE_H
