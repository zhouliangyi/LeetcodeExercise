#ifndef CONTAINERWITHMOSTWATER_H
#define CONTAINERWITHMOSTWATER_H

#include <vector>
using namespace std;
class ContainerWithMostWater {
public:
    ContainerWithMostWater();
    /**
     * @brief maxArea
     * 最大盛水量取决于两边中较短的那条边，而且如果将较短的边换为更短边的话，盛水量只会变少。所以我们可以用两个头尾指针，计算出当前最大的盛水量后，将较短的边向中间移，因为我们想看看能不能把较短的边换长一点。这样一直计算到左边大于右边为止就行了。


     * @param height
     * @return
     */
    int maxArea(vector<int>& height)
    {
        int left = 0;
        int right = height.size() - 1;
        int maxWater = 0;
        int leftHeight = 0;
        int rightHeight = 0;
        int indexDiff = 0;

        while (right > left) {
            leftHeight = height.at(left);
            rightHeight = height.at(right);
            indexDiff = right - left;
            int waterHeigh = leftHeight < rightHeight ? leftHeight : rightHeight;
            maxWater = maxWater > (indexDiff * waterHeigh) ? maxWater : (indexDiff * waterHeigh);

            if (leftHeight < rightHeight)
                left++;
            else
                right--;
        }
        return maxWater;
    }

    int maxAreaSlow(vector<int>& height)
    {
        if (height.size() < 2) {
            return 0;
        }
        int maxWater = 0;
        for (int i = 0; i < height.size(); i++) {
            for (int j = i + 1; j < height.size(); j++) {
                int indexDiff = j - i;
                int height_i = height.at(i);
                int height_j = height.at(j);
                int minHeight = height_i > height_j ? height_j : height_i;
                int currentWater = indexDiff * minHeight;
                maxWater = currentWater > maxWater ? currentWater : maxWater;
            }
        }
        return maxWater;
    }
};

#endif // CONTAINERWITHMOSTWATER_H
