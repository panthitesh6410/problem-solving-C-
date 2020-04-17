// codesites contest problem :
// Leaders in an Array : Given an array of positive integers. Your task is to find the leaders in the array.
// An element of array is leader if it is greater than or equal to all the elements to its right side. Also, the rightmost element is always a leader.

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
            int count = 0;
            for(int k=j+1;k<n;k++)
            {
                if(arr[j] >= arr[k])
                    count++;
            }
            if(count == n-j-1)
                cout<<arr[j]<<" ";
        }
        cout<<arr[n-1];
        cout<<endl;
    }
    return 0;
}