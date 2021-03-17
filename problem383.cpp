// TCS problem -

#include<algorithm>
#include<iostream>
using namespace std;

bool is_equal(int arr[], int n){
    int count = 0;
    for(int i=0;i<n-1;i++){
        if(arr[i] == arr[i+1])
            count++;
    }
    if(count == n-1)
        return true;
    return false;
}

int main(){
    int n;
    cin>>n;
    if(n < 2)
        cout<<"Invalid Input";
    else{
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        if(is_equal(arr, n))
            cout<<"Equal";
        else{
            sort(arr, arr+n);
            cout<<arr[0]<<" "<<arr[1];
        }
    }
    return 0;
}