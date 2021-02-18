// Nth smallest element of an array - 
// 10 20 40 60 30  =  30

#include<algorithm>
#include<iostream>
using namespace std;

int main(){
    int size, n;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
        cin>>arr[i];
    cin>>n;
    sort(arr, arr+size);
    cout<<arr[n-1];
    return 0;
}