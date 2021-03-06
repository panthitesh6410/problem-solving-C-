// HackerRank - Circular Array Rotation 

#include<iostream>
using namespace std;

int main(){
    int n, k, q;
    cin>>n>>k>>q;
    int arr[n], temp[n]={0};
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int queries[q];
    for(int i=0;i<q;i++)
        cin>>queries[i];
    for(int i=0;i<n;i++){
        int pos = (k+i)%n;
        temp[pos] = arr[i]; 
    }
    // for(int i=1;i<=k;i++){
    //     int temp = arr[n-1];
    //     for(int j=n-1;j>0;j--)
    //         arr[j] = arr[j-1];
    //     arr[0] = temp;
    // }
    for(int i=0;i<q;i++)
        cout<<temp[queries[i]]<<"\n";
    return 0;
}