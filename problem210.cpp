// hackerrank - tcs codevita practise round-1 problem :

#include<iostream>
using namespace std;
int main()
{
    int n, m;
    cin>>n>>m;
    int count = 0, flag = 0;
    for(int i=n;i>=1;i--)
    {
        m -= i;
        count++;
        if(m <= 0)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 0)
        cout<<-1;
    else
        cout<<count;
    return 0;
}