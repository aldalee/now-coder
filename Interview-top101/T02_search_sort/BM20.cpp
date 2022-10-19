// 数组中的逆序对
// Created by HuanyuLee on 2022/10/19.
// AC
#include <vector>

using namespace std;

class Solution {
private:
    int count = 0;
public:
    int InversePairs(vector<int> data) {
        int N = (int) data.size();
        if (N < 2) return 0;
        vector<int> temp(N, 0);
        mergeSort(data, temp, 0, N - 1);
        return count;
    }

    void mergeSort(vector<int> &arr, vector<int> &temp, int L, int R) {
        if (L == R) {
            return;
        }
        int M = ((R - L) >> 1) + L;
        mergeSort(arr, temp, L, M);
        mergeSort(arr, temp, M + 1, R);
        merge(arr, temp, L, M, R);
    }

    void merge(vector<int> &arr, vector<int> &temp, int L, int M, int R) {
        int t = 0;
        int i = L, j = M + 1;
        while (i <= M && j <= R) {
            if (arr[i] <= arr[j]) {
                temp[t++] = arr[i++];
            } else {
                temp[t++] = arr[j++];
                count += (M - i + 1);
                count %= 1000000007;
            }
        }
        while (i <= M) {
            temp[t++] = arr[i++];
        }
        while (j <= R) {
            temp[t++] = arr[j++];
        }
        t = 0;
        while (L <= R) {
            arr[L++] = temp[t++];
        }
    }
};
