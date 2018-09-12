#ifndef GASSTATION_H
#define GASSTATION_H
#include <vector>
using namespace std;
class GasStation {
public:
    GasStation();

    /**
     * @brief canCompleteCircuit
       @details 循环判断所有节点作为起点，看是否满足
     */
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost)
    {
        int i = 0;
        bool find = false;
        for (; i < gas.size(); i++) {
            if (check(i, gas, cost))
                return i;
        }
        if (!find)
            return -1;
    }

    /**
     * @brief check
     * @param s 起点
       @details s作为起点 判断当前汽油是否大于当前的cost，如果小于，则不可作为起点。如果大于，则计算到下个加油站后的油量=当前油量-当前cost+下个加油站gas，循环一遍就结束
     */
    bool check(int s, vector<int>& gas, vector<int>& cost)
    {
        // 初始化参数
        int n = gas.size();
        int currentIndex = s;
        int carGas = gas[s]; // 在当前加油站时的汽油量
        while (1) {
            int nextIndex = (currentIndex + 1 + n) % n;
            // 如果当前汽油量小于当前的cost
            if (carGas < cost[currentIndex]) {
                return false;
            }
            carGas = carGas - cost[currentIndex] + gas[nextIndex];
            currentIndex = nextIndex;
            if (currentIndex == s) {
                break;
            }
        }

        return true;
    }
};

#endif // GASSTATION_H
