/**
 * Created by lhy on 2020/9/27 13:35
 * Description: ����һ������n�����n�Ľ׳ˣ�ÿ������������ܰ����������ݣ���ע�⴦�� n��[1,20]
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