// wipro NLTH 2021

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    // 10 98 3 33 12 22 21 11 - 10 98 12 22 3 33 21 11
    int res[n], j=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2 == 0){
            res[j] = arr[i];
            j++;
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2 != 0){
            res[j] = arr[i];
            j++;
        }
    }
    for(int i=0;i<n;i++)
        cout<<res[i]<< " ";
    return 0;
}