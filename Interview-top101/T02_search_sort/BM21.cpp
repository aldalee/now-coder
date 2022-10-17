// BM21 旋转数组的最小数字
// Created by HuanyuLee on 2022/10/17.
// AC
#include <vector>

using namespace std;

class Solution {
public:
    static int minNumberInRotateArray(vector<int> rotateArray) {
        int L = 0;
        int R = (int) rotateArray.size() - 1;
        int M;
        while (L <= R) {
            M = ((R - L) >> 1) + L;
            if (rotateArray[M] > rotateArray[R]) {
                L = M + 1;
            } else if (rotateArray[M] == rotateArray[R]) {
                R--;
            } else {
                R = M;
            }
        }
        return rotateArray[M];
    }
};