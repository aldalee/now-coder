// BM17 二分查找-I
// Created by HuanyuLee on 2022/10/17.
// AC
#include <vector>

using namespace std;

class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     * @param nums int整型vector
     * @param target int整型
     * @return int整型
     */
    static int search(vector<int> &nums, int target) {
        // write code here
        int L = 0;
        int R = (int) nums.size() - 1;
        while (L <= R) {
            int M = ((R - L) >> 1) + L;
            if (nums[M] == target) {
                return M;
            } else if (nums[M] > target) {
                R = M - 1;
            } else {
                L = M + 1;
            }
        }
        return -1;
    }
};