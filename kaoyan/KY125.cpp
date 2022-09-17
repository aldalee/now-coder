#include <iostream>
using namespace std;
void getPrimeNumber(int prime[]){
    bool isPrim = true;
    int index = 0;
    for (int i = 2; i < 1000; ++i) {
        for (int j = 2; j <= i/2; ++j) {
            if (i % j == 0){
                isPrim = false;
                break;
            }
        }
    }
}
int main(){
    int primeNumber[1000]={0};
    getPrimeNumber(primeNumber);
    for (int k = 0; k < 25; ++k) {
        cout << primeNumber[k]<<" ";
    }
    return 0;
}
