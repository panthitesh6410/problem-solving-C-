// TCS Digital Question
// Stock problem - version 2
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)    cin>>arr[i];
    int profit = 0;
    for(int i=1;i<n;i++){
        if(arr[i] > arr[i-1]) 
            profit += (arr[i] - arr[i-1]);  
    }
    cout<<profit;
    return 0;
}