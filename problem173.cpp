// Google Interview Question :

#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n>>m;
        int a[n], b[m];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<m;i++)
            cin>>b[i];
        int median_index = 0;
        int mid = (n+m)/2 + 1;
        if(mid < n)
            cout<<a[mid-1]<<endl;
        else
            cout<<b[mid-n-1]<<endl;
    }
    return 0;
}