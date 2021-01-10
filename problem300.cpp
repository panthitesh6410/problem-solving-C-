// Array Left Rotation : 

#include<iostream>
using namespace std;
int main(){
    int n, k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<k;i++){
        // 1,2,3,4, 5  -  3, 4, 5, 1, 2 ( for k == 2 ) 
        int first  = arr[0], j;
        for(j=0;j<n-1;j++)
            arr[j] = arr[j+1];
        arr[j] = first;
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}