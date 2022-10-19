// 寻找峰值
// Created by HuanyuLee on 2022/10/19.
// AC
#include <vector>

using namespace std;

class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     *
     * @param nums int整型vector
     * @return int整型
     */
    static int findPeakElement(vector<int> &nums) {
        // write code here
        int L = 0, R = (int) nums.size() - 1;
        int M = ((R - L) >> 1) + L;
        while (L < R - 1) {
            if (nums[M] > nums[M - 1] && nums[M] > nums[M + 1]) {
                return M;
            }
            if (nums[M] < nums[M - 1]) {
                R = M - 1;
            } else if (nums[M] < nums[M + 1]) {
                L = M + 1;
            }
            M = ((R - L) >> 1) + L;
        }
        return nums[L] > nums[R] ? L : R;
    }
};