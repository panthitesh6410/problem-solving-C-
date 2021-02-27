// TCS digital capability exam -

#include<algorithm>
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n<4)
        cout<<"Invalid Output";
    else{
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr, arr+n);
        cout<<arr[n-1]+arr[n-2]+arr[n-3];
    }

    return 0;
}