// GOOGLE -

#include<iostream>
using namespace std;
int main()
{
    int n, k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int min_len=n;
    for(int i=0;i<n;i++)
    {
        int sum = arr[i];
        int len = 1;
        for(int j=0;j<n;j++)
        {
            len++;
            sum += arr[j];
            if(sum == k)
            {
                if(len <= min_len)
                    min_len = len;
            }
        }
    }
    cout<<min_len;
    return 0;
}