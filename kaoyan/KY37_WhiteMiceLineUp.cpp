/**
 * Created by lhy on 2020/9/28 15:58
 * Description:
 */
#include <iostream>
#include <cstring>
using namespace std;

const int maxN = 100;
struct Mice{
    int weight;
    char color[20];
}mice[maxN];

void swap(Mice mice[],int i,int j){
    char tMice[20];
    int temp = mice[i].weight;
    strcpy(tMice,mice[i].color);
    mice[i].weight = mice[j].weight;
    strcpy(mice[i].color,mice[j].color);
    mice[j].weight = temp;
    strcpy(mice[j].color,tMice);
}
void sort(Mice mice[],int length){
    for (int i = 0; i < length-1; ++i) {
        int minIndex = i;
        for (int j = i+1; j < length; ++j) {
            minIndex = mice[j].weight > mice[minIndex].weight ? j : minIndex;
        }
        swap(mice,i,minIndex);
    }
}

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> mice[i].weight >> mice[i].color;
    }
    sort(mice,n);
    for (int j = 0; j < n; ++j) {
        cout << mice[j].color<<endl;
    }
    return 0;
}
