// hackerrank : Icecream Parlour 

#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int money;
        cin>>money;
        int n;
        cin>>n;
        int cost[n];
        for(int j=1;j<=n;j++)
            cin>>cost[j];
        for(int j=1;j<n;j++)
        {
            for(int k=j+1;k<=n;k++)
            {
                if(cost[j]+cost[k] == money)
                {
                    cout<<j<<" "<<k<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}
