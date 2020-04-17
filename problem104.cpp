// codesites contest problem :
// if next element is smaller print it otherwise print -1 in ana array :

#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++)
            cin>>arr[j];
        for(int j=0;j<n-1;j++)
        {
            if(arr[j] > arr[j+1])
                cout<<arr[j+1]<<" ";
            else
                cout<<"-1"<<" ";
        }
        cout<<"-1";
        cout<<endl;
    }
    return 0;
}