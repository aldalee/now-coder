/**
 * Created by lhy on 2020/9/28 22:35
 * Description:
 */
#include <iostream>
using namespace std;

void swap(int arr[],int i,int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
void sort(int arr[],int length){
    for (int i = 0; i < length-1; ++i) {
        int minIndex = i;
        for (int j = i+1; j < length; ++j) {
            minIndex = arr[j] < arr[minIndex] ? j : minIndex;
        }
        swap(arr,i,minIndex);
    }
}

bool binarySearch(int arr[],int arrLength,int key){
    int left = 0;
    int right = arrLength - 1;
    int middle;
    while (left <= right){
        middle = (left + right)/2;
        if (key == arr[middle])
            return true;
        else if (key > arr[middle])
            left = middle + 1;
        else
            right = middle - 1;
    }
    return false;
}

int main(){
    int n = 0, m = 0;
    cin >> n;
    int num[n];
    for (int i = 0; i < n; ++i) {
        cin >> num[i];
    }
    cin >> m;
    int find[m];
    for (int j = 0; j < m; ++j) {
        cin >> find[j];
    }
    sort(num,n);
    for (int k = 0; k < m; ++k) {
        if (binarySearch(num,n,find[k]))
            cout << "YES"<<endl;
        else
            cout << "NO"<<endl;
    }
    return 0;
}
