#include <iostream>
using namespace std;
int main(){
    int n;
    int step = 0;
    while (cin >> n){
        if (n == 0)
            break;
        while (n != 1){
            if (n%2 == 0)
                n /= 2;
            else
                n = (3*n+1) / 2;
            ++step;
        }
        cout << step << endl;
        step = 0;
    }
    return 0;
}

