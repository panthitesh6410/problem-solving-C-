// Asked in Google :
// Count Triplets With Sum :

#include<iostream>
using namespace std;

bool search(int arr[], int n, int j, int rem)
{
    for(int i=j;i<n;i++)
    {
        if(arr[i] == rem)
            return true;
    }
    return false;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int num;
    cin>>num; 
    int count = 0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;i<n;j++)
        {
            int rem = num - (arr[i]+arr[j]);
            if(search(arr, n, j, rem))
                count++;
        }
    }
    cout<<count;
    return 0;
}