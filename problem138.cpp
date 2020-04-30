// codechef april challenge 2020 Div.2 :
// Sell All The Cars -

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
        int price[n];
        for(int j=1;j<=n;j++)
            cin>>price[j];
        int count = 1, total_profit = 0; 
        while(count <= n)
        {
            if(price[count] > 0)
            {
                total_profit += price[count];
                for(int k=count+1;k<=n;k++)
                    price[k]--;
            }
            count++;
        }
        cout<<total_profit<<endl;
    }
    return 0;
}