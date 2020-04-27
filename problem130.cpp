// Codechef April Lunchtime 2020 Div.2 :
// Chef in Fantasy League :

#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n, s;
        cin>>n>>s;         // s is already used cost out of 100
        int cost[n];
        for(int j=0;j<n;j++)
            cin>>cost[j];
        int pos[n];
        for(int j=0;j<n;j++)
            cin>>pos[j];
        // 0 - defender    ||    1 - forward
        // need only 1 defender and 1 forward 
        // if possible return 'yes'
        int remaining = 100 - s;
        int flag = 0;
        for(int j=0;j<n-1;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if((cost[j] + cost[k] <= remaining) && (pos[j] != pos[k]))
                {
                    flag = 1;
                    break;
                }
            }
        }
        if(flag == 1)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
}