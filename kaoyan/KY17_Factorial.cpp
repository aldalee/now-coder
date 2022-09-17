/**
 * Created by lhy on 2020/9/27 13:35
 * Description: 输入一个整数n，输出n的阶乘（每组测试用例可能包含多组数据，请注意处理） n∈[1,20]
 */
#include <iostream>
using namespace std;

long factorial(long n){
    if (n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main(){
    long n;
    cin >> n;
    cout << factorial(n);
    return 0;
}