// Google KickStart Round B (2018) : Problem 1 :

#include<iostream>
using namespace std;

bool contain_nine(int num)
{
    while(num != 0)
    {
        int d = num % 10;
        if(d == 9)
            return true;
        num = num / 10;
    }
    return false;
}

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int f, l;
        cin>>f>>l;
        int count = 0;
        for(int j=f;j<=l;j++)
        {
            if(j > 0)
            {
                if(!contain_nine(j))
                {
                    if(j % 9 != 0)
                        count++;
                }
            }
        }
        cout<<"Case #"<<i<<": "<<count<<endl;
    }
    return 0;
}