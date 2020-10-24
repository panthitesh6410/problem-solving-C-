#include<iostream>
using namespace std;
int is_sorted(int arr[], int start, int end)
{
    for(int i=start;i<=end;i++)
    {
        if(arr[i]>=arr[i+1])
            return 0;
    }
    return 1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int max_len = 0,  result;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=i;k<=j;k++)
            {
                if(arr[k]>=arr[k+1])
                {
                    result = 0;
                }
                if(result == 1)
                {    
                    int len = j-i+1;
                    if(len >= max_len)
                        max_len = len;
                }
            }
            // int result = is_sorted(arr, i, j);
        }
    }
    cout<<max_len;
    return 0;
}