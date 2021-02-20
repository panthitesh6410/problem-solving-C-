// TCS codevita problem - (Count Pairs)

#include<iostream>
using namespace std;
bool is_happy_element(int arr[], int n, int i, int k){
    int l = i - k, h = i + k;
    for(int j=0;j<n;j++){
        if(arr[j]>=l && arr[j]<h)
            return true;
    }
    return false;
}
int main(){
    int n, k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int count = 0;
    for(int i=0;i<n;i++){
        if(is_happy_element(arr, n, i, k))
            count++;
    }
    cout<<count;
    return 0;
}