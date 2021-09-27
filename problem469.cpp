// TCS Digital Question
//   given an array of numbers, find the subsequence in given array such that
//  all elements are in increasing order and sum is maximum

#include<vector>
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)    cin>>arr[i];
    int temp[n];
    for(int i=0;i<n;i++)    temp[i] = arr[i];
    int max = -999;
    // 2,202,3,200,4,5  - arr
    // 2,202,3,200,4,5  - temp
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[i] > arr[j] && temp[i] < arr[i] + temp[j])
                temp[i] += arr[i] + temp[j]; 
        }
    }
    for(int i=0;i<n;i++){
        if(temp[i] > max)   max = temp[i];
    }
    cout<<max;
    return 0;
}