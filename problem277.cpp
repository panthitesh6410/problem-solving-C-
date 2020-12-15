// Pattern for n=4 :
// 1
// 2*3
// 4*5*6
// 7*8*9*10
// 7*8*9*10
// 4*5*6
// 2*3
// 1

#include<iostream>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    int count = 1;
    // 1st half -
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<count;
            int k=1;
            if(j<i)
            {
                cout<<"*";
                k++;
            }
            count++;
        }
        cout<<endl;
    }
    // 2nd half -
    // cout<<endl<<count;
    count--;
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<count;
            count--;
            int k=1;
            if(j<i)
            {
                cout<<"*";
                k++;
            }
        }
        cout<<endl;
    }
    return 0;
}