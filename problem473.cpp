// Infosys Question -

#include<iostream>
using namespace std;
int main(){
    int n, k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)    arr[i] = i+1;
    int count = n;
    for(int i=0;i<=n-k;i++){
        int c = 0;
        for(int j=i;j<i+k-1;j++){
            if(arr[j+1]%arr[i] == 0)    c++;
        }
        if(count == k)  count++;
    }
    cout<<count;
}