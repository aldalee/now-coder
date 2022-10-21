// 数组中出现次数超过一半的数字
// Created by HuanyuLee on 2022/10/21.
// AC
#include <vector>

using namespace std;

class Solution {
public:
    int count[10000];

    int MoreThanHalfNum_Solution(vector<int> numbers) {
        int N = (int) numbers.size();
        int hN = N >> 1;
        for (int i = 0; i < N; ++i) {
            count[numbers[i]]++;
        }
        for (int i = 0; i < 10000; ++i) {
            if (count[i] > hN) {
                return i;
            }
        }
        return -1;
    }
};
