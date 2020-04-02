// rotate array clockwise :

#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n, d;
        cin>>n>>d;
        int arr[n];
        for(int j=0;j<n;j++)
            cin>>arr[j]; 
        int a[n];
        for(int j=0;j<n;j++)
        {
            int index = (abs(n-d))%n;
            a[(j+index)%5] = arr[j];
        }
        for(int j=0;j<n;j++)
            cout<<a[j]<<" ";
    }
    return 0;
}