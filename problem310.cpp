// next permutation : 

#include<algorithm>
#include<iostream>
using namespace std;
void swap(int a, int b){
    int t = a;
    a = b;
    b = t;
}
int main(){
    int n;
    cin>>n;
    int arr[n], i, k;
    for(int j=0;j<n;j++)
        cin>>arr[j];
    // 1 3 2 4 5
    for(i=n-2;i>=0;i--){
        if(arr[i]<arr[i+1])
            break;
    }
    if(i<0)     // if no break point found, simply reverse number
        reverse(arr, arr+n);
    else{
        for(k=n-1;k>i;k--){
            if(arr[k]>arr[i])
                break;
        }
    }
    swap(arr[k], arr[i]);
    reverse(arr+i+1, arr+n);
    for(int j=0;j<n;j++)
        cout<<arr[i]<<" ";
    return 0;
}