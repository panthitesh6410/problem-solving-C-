// Codechef June LunchTime 2020 -
// Chef and Demonetisation -

#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int s, n;
        cin>>s>>n;
        int money[(n/2)+1];
        money[0] = 1;
        int j=1;
        for(int i=1;i<=n;i++)
        {
            if(i%2 == 0)
            {
                money[j] = i;
                j++;
            }
        }
        if(s < n)
            cout<<1<<endl;
        else{
            int count = 0;
            for(int i=(n/2);i>=0;i--)
            {
                while(money[i] <= s)
                {
                    s = s-money[i];
                    count++;
                }
            }
            cout<<count<<endl;
        }
    }
    return 0;
}