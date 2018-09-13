#ifndef SPIRALMATRIX_H
#define SPIRALMATRIX_H

#include <vector>
using namespace std;
class SpiralMatrix {
public:
    SpiralMatrix();

    /**
     * @brief spiralOrder
     * @details 采用最直接的办法
     * @return
     */
    vector<int> spiralOrder(vector<vector<int>>& matrix)
    {
        vector<int> result;
        if (matrix.empty()) {
            return result;
        }
        int hang = matrix.size();
        int lie = matrix[0].size();

        int type = 0; // 写入位置，0-上，1-右，2-下，3-左
        int hup = 0; // 上的位置
        int hdown = hang - 1; // 下的位置
        int lleft = 0; //左的位置
        int lright = lie - 1; //右的位置
        int count = 0; //写入的数量
        while (result.size() < hang * lie) {
            if (type == 0) {
                for (int l = lleft; l <= lright; ++l) {
                    result.push_back(matrix[hup][l]);
                }
                hup++;
                type++;
                type %= 4;
            }

            else if (type == 1) {
                for (int h = hup; h <= hdown; ++h) {
                    result.push_back(matrix[h][lright]);
                }
                lright--;
                type++;
                type %= 4;
            }

            else if (type == 2) {
                for (int l = lright; l >= lleft; --l) {
                    result.push_back(matrix[hdown][l]);
                }
                hdown--;
                type++;
                type %= 4;
            }

            else if (type == 3) {
                for (int h = hdown; h >= hup; --h) {
                    result.push_back(matrix[h][lleft]);
                }
                lleft++;
                type++;
                type %= 4;
            }
        }

        return result;
    }
};

#endif // SPIRALMATRIX_H
