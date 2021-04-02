#include<iostream>
using namespace std;
int main(){
    long int t;
    cin>>t;
    while(t--){
        long int n;
        cin>>n;
        long int arr[n];
        for(long int i=0;i<n;i++)
            cin>>arr[i];
        int count = 0;
        for(long int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(arr[i] < arr[j]){
                    count++;
                    arr[i] = arr[j]+1;
                }
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}