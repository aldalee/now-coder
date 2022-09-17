#include <iostream>
#include <cmath>
using namespace std;
int main(){
    string n;
    int x = 0,k;
    while (cin >> n){
        for (int i = 0; i < n.length(); ++i) {
            k = n.length()-i;
            x += (n[i]-'0') * (pow(2,k)-1);
        }
        cout << x <<endl;
        x = 0;
    }
    return 0;
}
