// geeksforgeeks - find the fine (Microsoft)

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
        int c[n], p[n];
        for(int j=0;j<n;j++)
            cin>>c[j];
        for(int j=0;j<n;j++)
            cin>>p[j];
        int fine=0;
        if(d % 2 == 0)
        {
            for(int j=0;j<n;j++)
            {
                if(c[j] % 2 != 0)
                {
                    fine += p[j];
                }
            }
        }
        else
        {
            for(int j=0;j<n;j++)
            {
                if(c[j] % 2 == 0)
                {
                    fine += p[j];
                }
            }
        }
        cout<<fine<<endl;
    }
    return 0;
}