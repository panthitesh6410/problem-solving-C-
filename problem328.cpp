// codechef January Lunchtime 2021

#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int op = 0, i=1, j=n-1;
        // while(i < j){
        //     if(abs(arr[i]-arr[i-1])%2 != 0 || abs(arr[i]-arr[i-1])%2 != 0){
        //         arr[i]++;
        //         op++;
        //     }
        //     if(abs(arr[j]-arr[j-1])%2 != 0 || abs(arr[j]-arr[j-1])%2 != 0){
        //         arr[i]++;
        //         op++;
        //     }
        //     i++;
        //     j--;
        // }
        for(int i=1;i<n-1;i++){
            if(abs(arr[i]-arr[i-1])%2 != 0 || abs(arr[i]-arr[i-1])%2 != 0){
                arr[i]++;
                op++;
            }
        }
        cout<<op<<endl;
    }
    return 0;
}