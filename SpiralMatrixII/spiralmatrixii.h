#ifndef SPIRALMATRIXII_H
#define SPIRALMATRIXII_H

#include <vector>
using namespace std;
class SpiralMatrixII {
public:
    SpiralMatrixII();

    /**
     * @brief generateMatrix
     * @details 采用最直接的办法
     */
    vector<vector<int>> generateMatrix(int n)
    {
        vector<int> tmp;
        for (int i = 0; i < n * n; ++i) {
            tmp.push_back(i + 1);
        }
        vector<vector<int>> result(n, vector<int>(n, 0));
        int type = 0; // 写入位置，0-上，1-右，2-下，3-左
        int hup = 0; // 上的位置
        int hdown = n - 1; // 下的位置
        int lleft = 0; //左的位置
        int lright = n - 1; //右的位置
        int count = 0; //写入的数量
        while (count < n * n) {
            if (type == 0) {
                for (int l = lleft; l <= lright; ++l) {
                    result[hup][l] = tmp[count++];
                }
                hup++;
                type++;
                type %= 4;
            }

            if (type == 1) {
                for (int h = hup; h <= hdown; ++h) {
                    result[h][lright] = tmp[count++];
                }
                lright--;
                type++;
                type %= 4;
            }

            if (type == 2) {
                for (int l = lright; l >= lleft; --l) {
                    result[hdown][l] = tmp[count++];
                }
                hdown--;
                type++;
                type %= 4;
            }

            if (type == 3) {
                for (int h = hdown; h >= hup; --h) {
                    result[h][lleft] = tmp[count++];
                }
                lleft++;
                type++;
                type %= 4;
            }
        }

        return result;
    }
};

#endif // SPIRALMATRIXII_H
