// merge two sorted arrays into one sorted array :

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
        int a[n], b[m], c[m+n];
        for(int j=0;j<n;j++)
            cin>>a[j];
        for(int j=0;j<m;j++)
            cin>>b[j];
        int j=0, k=0, l=0;
        if(n<m)
        {
            while(j<n)
            {
                if(a[j] < b[k])
                {
                    c[l] = a[j];
                    j++;
                    l++;
                }
                else
                {
                    c[l] = b[k];
                    k++;
                    l++;
                }
            }
            while(k<m)
            {
                c[l] = b[k];
                k++;
                l++;
            }
        }
        else
        {
            while(k<m)
            {
                if(a[j] < b[k])
                {
                    c[l] = a[j];
                    j++;
                    l++;
                }
                else
                {
                    c[l] = b[k];
                    k++;
                    l++;
                }
            }
            while(j<n)
            {
                c[l] = a[j];
                j++;
                l++;
            }
        }
        for(int j=0;j<m+n;j++)
            cout<<c[j]<<" ";
        cout<<endl;
    }
}