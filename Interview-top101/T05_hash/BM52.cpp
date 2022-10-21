// 数组中只出现一次的两个数字
// Created by HuanyuLee on 2022/10/21.
// AC
#include <vector>

using namespace std;

class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     * @param array int整型vector
     * @return int整型vector
     */
    int count[1000001];

    vector<int> FindNumsAppearOnce(vector<int> &array) {
        // write code here
        int N = (int) array.size();
        for (int i = 0; i < N; ++i) {
            count[array[i]]++;
        }
        vector<int> ans;
        for (int i = 0; i <= 1000000; ++i) {
            if (count[i] == 1) {
                ans.push_back(i);
            }
        }
        return {ans[0], ans[1]};
    }
};