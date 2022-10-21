// 两数之和
// Created by HuanyuLee on 2022/10/21.
// AC
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    /**
     *
     * @param numbers int整型vector
     * @param target int整型
     * @return int整型vector
     */
    vector<int> twoSum(vector<int> &numbers, int target) {
        // write code here
        map<int, int> hash;
        for (int i = 0; i < numbers.size(); ++i) {
            auto it = hash.find(target - numbers[i]);
            if (it != hash.end()) {
                return {it->second + 1, i + 1};
            }
            hash[numbers[i]] = i;
        }
        return {};
    }
};