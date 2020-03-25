// codechef : Find Your Gift (March Cook-Off 2020 Div.2)

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
        string s;
        cin>>s;
        int x = 0, y = 0;
        int flagl, flagr, flagd, flagu;
        flagl = flagr = flagd = flagu = 0;
        for(int j=0;j<n;j++)
        {
            if(s[i] == 'L')
            {
                if(flagl==0)
                {
                    x=x-1;
                    y=y;
                    flagl=1;
                }
                flagr=0;
                flagu=0;
                flagd=0;
            }
            else if(s[i] == 'R')
            {
                if(flagr==0)
                {
                    x=x+1;
                    y=y;
                    flagr=1;
                }   
                flagl=0;
                flagd=0;
                flagu=0;             
            }
            else if(s[i] == 'U')
            {
                if(flagu==0)
                {
                    x=x;
                    y=y+1;
                    flagu=1;
                }
                flagl=0;
                flagr=0;
                flagd=0;
            }
            else if(s[i] == 'D')
            {
                if(flagd==0)
                {
                    x=x;
                    y=y-1;
                    flagd=1;
                }
                flagl=0;
                flagr=0;
                flagu=0;
            }
        }
        cout<<x<<" "<<y<<endl;
    }
    return 0;
}