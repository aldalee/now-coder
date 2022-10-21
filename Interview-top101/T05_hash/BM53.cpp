// 失的第一个正整数
// Created by HuanyuLee on 2022/10/21.
// AC
#include <vector>

using namespace std;

class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     * @param nums int整型vector
     * @return int整型
     */
    int minNumberDisappeared(vector<int> &nums) {
        // write code here
        int N = 3e5;
        int x[N];
        for (int k = 0; k < N; ++k) {
            x[k] = 0;
        }
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] > 0) {
                x[nums[i]]++;
            }
        }
        int index = -1;
        for (int j = 1; j < N; ++j) {
            if (x[j] == 0) {
                index = j;
                break;
            }
        }
        return index;
    }
};

