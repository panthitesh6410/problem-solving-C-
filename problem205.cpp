// Google KickStart 2020 Round-D
// Record Breaker Problem

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
        int count = 0;
        for(int j=0;j<n;j++)
        {
            int in_count = 0;
            int flag = 0;
            for(int k=0;k<j;k++)
            {
                if(arr[k]<arr[j])
                {
                    in_count++;
                }
            }
            if(in_count == j)
            {
                if(j == n-1)
                    flag = 1; 
                else if(arr[j]>arr[j+1])
                    flag = 1;
            }
            if(flag == 1)
                count++;
        }
        cout<<"Case #"<<i<<": "<<count<<endl;
    }
    return 0;
}