// Codechef March Cook-Off 2021 Div-3 Problem 

#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int sum = 0;
        for(int i=0;i<n;i++){
            if(arr[i] == 1){
                for(int j=i;j<n;j++){
                    if(j-i+1 == k){
                        if(arr[j] == 1)
                            sum++;
                        if(j == i)
                            arr[i] = 0;
                    }
                }
            }
        }
        cout<<sum<<"\n";
    }    
    return 0;
}