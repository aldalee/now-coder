#include <iostream>
using namespace std;
int main(){
    string s;
    char min,temp;
    while (cin >> s){
        for (int i = 0; i < s.length(); ++i) {
            for (int j = 0; j < s.length(); ++j) {
                min = s[i];
                if (min < s[j]){
                    temp = s[i];
                    s[i] = s[j];
                    s[j] = temp;
                }
            }
        }
        for (char i : s) {
            cout << i;
        }
    }
    return 0;
}