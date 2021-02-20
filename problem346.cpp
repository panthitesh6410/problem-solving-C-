// TCS codevita Question -
// (Minimize the sum) 

#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    int n, k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    while(k--){
        sort(arr, arr+n);
        arr[n-1] = arr[n-1]/2;
    }
    int sum = 0;
    for(int i=0;i<n;i++)
        sum += arr[i];
    cout<<sum;
    return 0;
}