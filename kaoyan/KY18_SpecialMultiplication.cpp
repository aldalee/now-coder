/**
 * Created by lhy on 2020/9/27 16:52
 * Description:写个算法，对2个小于1000000000的输入，求结果。 特殊乘法举例：123 * 45 = 1*4 +1*5 +2*4 +2*5 +3*4+3*5
 */
#include <iostream>
#include <cmath>
using namespace std;

/*获得一个整数的位数*/
int getNumberLength(long x){
    int length = 0;
    while (x != 0){
        length++;
        x /=10;
    }
    return length;
}

/*任给一个数，得到它每一位上的数字，保存到数组里*/
int  *getNumberArray(int n){
    int length = getNumberLength(n);
    int *numbers = new int[length];
    for (int i = 0; i < length; ++i) {
        numbers[i] = (n / (int)(pow(10,length - i - 1))) % 10;
    }
    return numbers;
}

int main(){
    int a,b;
    cin >> a>>b;
    int * x = getNumberArray(a);
    int * y = getNumberArray(b);
    long sum = 0;
    for (int i = 0; i < getNumberLength(a); ++i) {
        for (int j = 0; j < getNumberLength(b); ++j) {
            sum += x[i] * y[j];
        }
    }
    cout << sum;
    delete x;
    delete y;
    return 0;
}