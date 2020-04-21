// Google KickStart Round - B (Problem 1) :

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
        int count = 0;
        for(int j=1;j<=n;j++)
            cin>>arr[j];
        for(int j=2;j<=n-1;j++)
        {
            if((arr[j] > arr[j+1]) && (arr[j] > arr[j-1]))
                count++;
        }
        cout<<count<<endl;
    }
    return 0;
}