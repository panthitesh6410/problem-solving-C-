// DELL Interview Question -
// Find the Triplets, where sum of two is third one

#include<iostream>
using namespace std;

inline bool search_for(int arr[], int n, int num)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i] == num)
            return true;
    }
    return false;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int flag = 0; 
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int result = arr[i]+arr[j];
                if(search_for(arr, n, result))
                {
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[i]+arr[j]<<endl;
                    flag = 1;
                    break;
                }
                
            }
        }
        if(flag == 0)
            cout<<"-1"<<endl;
        // 11, 20, 30, 44, 50
    }
    return 0;
}