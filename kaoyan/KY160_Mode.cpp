/**
 * Created by lhy on 2020/10/6 12:50
 * Description: 输入20个数，每个数都在1-10之间，求1-10中的众数（众数就是出现次数最多的数，
 *              如果存在一样多次数的众数，则输出权值较小的那一个）
 */
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
/*
 * 思路：首先定义一个
 * 对原有数组进行排序(降序)，5 5 5 5 4 4 4 3 3 3
 * 进行计数，如果后面的某一个数字出现的次数小于前一个，则后面的数字直接排除
 */


void swap(int arr[],int i,int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
void sort(int arr[],int length){
    for (int i = 0; i < length-1; ++i) {
        int minIndex = i;
        for (int j = i+1; j < length; ++j) {
            minIndex = arr[j] > arr[minIndex] ? j : minIndex;
        }
        swap(arr,i,minIndex);
    }
}
map<int,int> numberCountMap;
int main(){
    int numbers[20];     // 定义number数组用来存放题目输入的数字
    for (int & i : numbers) {
        cin >> i;
    }
    sort(numbers,20);
    // 求出每个不同数字出现的次数，保存到map映射，map(number，count)
    int count[20];      // 定义count数组用来存储每个数字出现的次数
    int n = 0;
    for (int i = 0; i < 20; ++i) {
        for (int j : numbers) {
            if (numbers[i] == j){
                count[i] = ++n;
            }
        }
        numberCountMap[count[i]] = numbers[i];
        n = 0;
    }
    map<int,int>::iterator iter;
    iter = numberCountMap.begin();
    int number = 0;
    while (iter != numberCountMap.end()){
        number = iter->second;
        iter ++;
    }
    cout << number;
    return 0;
}