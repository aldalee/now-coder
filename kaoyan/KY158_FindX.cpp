/**
 * Created by lhy on 2020/10/3 21:56
 * Description:
 */
#include <iostream>
using namespace std;

void swap(int arr[],int i,int j){
    arr[i] = arr[i] ^ arr[j];
    arr[j] = arr[i] ^ arr[j];
    arr[i] = arr[i] ^ arr[j];
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
int binarySearch(int arr[],int length,double key){
    int left = 0;
    int right = length - 1;
    int middle = 0;
    while(left <= right){
        middle = (left + right) / 2;
        if (arr[middle] == key)
            return middle;
        else if(arr[middle] > key)
            right = middle - 1;
        else
            left = middle + 1;
    }
    return -1;
}

int find(int arr[],int length,int key){
    for (int i = 0; i < length; ++i) {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

int main(){
    int n;
    double x;
    cin >> n;
    int arr[n];
    for(int i = 0;i < n;++i)
        cin >> arr[i];
    cin >> x;
    // 调用方法
    sort(arr, n);
    for (int j = 0; j < n; ++j) {
        cout << arr[j]<<" ";
    }
    cout << binarySearch(arr, n, x)<<endl;
    return 0;
}
