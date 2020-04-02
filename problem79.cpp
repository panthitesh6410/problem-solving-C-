// geeksforgeeks : array : max vallue after m operations:

#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n, m;
        cin>>n>>m;
        int arr[n] = {0};
        for(int j=1;j<=m;j++)
        {
            int a, b, k;
            cin>>a>>b>>k;
            for(int p=0;p<n;p++)
            {
               if(p>=a && p<=b)
                   arr[p] += k;
            }
        }
        int maximum = arr[0];
        for(int j=0;j<n;j++)
        {
            if(arr[j]>=maximum)
                maximum = arr[j];
        }
        cout<<maximum<<endl;
    }
    return 0;
}