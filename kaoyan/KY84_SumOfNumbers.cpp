/**
 * Created by lhy on 2020/9/28 21:39
 * Description:
 */
#include <iostream>
using namespace std;

int main(){
    int nums[6];
    int sum = 0;
    for (int & num : nums) {
        cin >> num;
    }
    for (int i = 1; i <= 5; ++i) {
        if (nums[0] > nums[i])
            sum += nums[i];
    }
    cout << sum;
    return 0;
}