// codechef problem : (IIITDS20 contest)    

#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n, q;
        cin>>n>>q;
        int games[n], queries[q];
        for(int j=0;j<n;j++)
            cin>>games[j];
        for(int j=0;j<q;j++)
            cin>>queries[j];
        int result;
        for(int j=0;j<q;j++)
        {
            int max = games[0];
            for(int k=0;k<queries[j];k++)
            {
                if(games[k]>=max)
                    max = games[k];
            }
            cout<<max<<endl;
        }
    }
    return 0;
}