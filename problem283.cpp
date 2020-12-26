// Reverse the array :

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    // 1 2 3 4 - 4 3 2 1
    // 1 2 3 - 3 2 1
    int i=0, j=n-1;
    while(i<=j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}