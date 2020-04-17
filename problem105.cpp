// Given an array A and an integer K. Find the maximum for each and every 
// contiguous subarray of size K

#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n, k;
        cin>>n>>k;
        int arr[n];
        for(int j=0;j<n;j++)
            cin>>arr[j];
        int index = 0;
        while(index < n-k+1)
        {
            int max = 0;
            for(int j=index;j<index+k;j++)
            {
                if(arr[j] > max)
                    max = arr[j];
            }
            cout<<max<<" ";
            index++;
        }
        cout<<endl;
    }
    return 0;
}