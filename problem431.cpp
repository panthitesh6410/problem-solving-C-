// TCS coding Practise

#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    int arr[]={9,8,3,-7,3,9};
    int sum = 4;
    sort(arr, arr+6);
    if(arr[0]+arr[1] <= sum)
        cout<<arr[0]*arr[1];
    else
        cout<<0;

    return 0;
}