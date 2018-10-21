#ifndef REMOVEDUPLICATESFROMSORTEDARRAYII_H
#define REMOVEDUPLICATESFROMSORTEDARRAYII_H

#include <vector>
using namespace std;

class RemoveDuplicatesFromSortedArrayII {
public:
    RemoveDuplicatesFromSortedArrayII();
    int removeDuplicates(vector<int>& nums)
    {
        // 使用两个index，第一个times循环所有元素，第二个newIndex用于指向最终结果
        // 第一个times指向的元素必须大于newIndex-2的元素，因为输入是有序的
        int times = 2;
        int newIndex = 2;
        for (int i = times; i < nums.size(); ++i) {
            if (nums.at(i) > nums.at(newIndex - times)) {
                nums.at(newIndex) = nums.at(i);
                newIndex++;
            }
        }
        return newIndex;
    }
};

#endif // REMOVEDUPLICATESFROMSORTEDARRAYII_H
