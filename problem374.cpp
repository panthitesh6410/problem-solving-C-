// ByteDance Technical Interview (Live Coding Round 2021 Experience) -
// Find max suarray sum problem in O(n) - Dynamic Progamming

#include<iostream>
using namespace std;

int max_subarray_sum(int arr[], int n){
    int max_sum=0, sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
        if(sum < 0)
            sum = 0;
        else if(max_sum < sum)
            max_sum = sum;
    }
    return max_sum;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<max_subarray_sum(arr, n);
    return 0;
}