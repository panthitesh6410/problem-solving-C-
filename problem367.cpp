// HackerRank - (Between Two Sets) :

#include<iostream>
#include<algorithm>
using namespace std;

bool is_multiple_of(int arr[], int n, int num){
    for(int i=0;i<n;i++){
        if(num % arr[i] != 0)
            return false;
    }
    return true;
}

bool is_factor_of(int arr[], int m, int num){
    for(int i=0;i<m;i++){
        if(arr[i] % num != 0)
            return false;
    }
    return true;
}

int main(){
    int n, m;
    cin>>n>>m;
    int arr1[n], arr2[m];
    for(int i=0;i<n;i++)
        cin>>arr1[i];
    for(int i=0;i<m;i++)
        cin>>arr2[i];
    int count = 0;
    sort(arr1, arr1+n);
    sort(arr2, arr2+m);
    for(int i=arr1[n-1];i<=arr2[0];i++){
        // all arr1 is factor of i & i is factor of all arr2 -
        if(is_multiple_of(arr1, n, i) && is_factor_of(arr2, m, i))    
              count++;
    }
    cout<<count;

    return 0;
}