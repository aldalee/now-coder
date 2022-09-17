#include <iostream>
#include <string>
#include <sstream>

using namespace std;


int main(){
    string a,b;
    a = "12000";
    b = "1300000";
//    cin >> a >> b;
    string add,sub,mul;
    int exp_a = 0;
    int exp_b = 0;
    int exp = 0;
    int na,nb;
    for (int i = a.length()-1; i>=0; --i) {
        if (a[i]=='0' && a[i-1] != '0'){
            exp_a = a.length()-i;
            a = a.substr(0,i);
        }
    }
    for (int i = b.length()-1; i>=0; --i) {
        if (b[i]=='0' && b[i-1] != '0'){
            exp_b = b.length()-i;
            b = b.substr(0,i);
        }
    }
    exp = min(exp_a,exp_b);
    stringstream sa(a);
    sa >> na;
    stringstream sb(b);
    sb >> nb;
    

//    cout << na <<" " <<nb<<" "<<exp_a<<" "<<exp_b;
    return 0;
}



