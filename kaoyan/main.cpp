#include <iostream>
#include <vector>

using namespace std;
struct group {
    bool flag;
    int l;
    int r;
};

group binarySearch(vector<int> arr, int target) {
    int l = 0, r = arr.size() - 1;
    int mid = l + (r - l) / 2;
    while (l <= r) {
        if (arr[mid] == target)
            return group{true, mid, mid};
        else if (arr[mid] > target)
            r = mid - 1;
        else
            l = mid + 1;
        mid = l + (r - l) / 2;
    }
    // ±ß½ç¼ì²é
    l = mid - 1 < 0 ? 0 : mid - 1;
    r = mid >= arr.size() ? arr.size() - 1 : mid;
    return group{false, l, r};
}

void search(vector<int> arr, int target) {
    group g = binarySearch(arr, target);
    if (g.flag)
        printf("%d", g.l);
    else
        printf("(%d,%d)", g.l, g.r);
}

int main() {
    vector<int> arr = {1, 3, 4, 5, 7};
    int target = 4;
    search(arr, target);
    return 0;
}