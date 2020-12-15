// Pattern for n=3 :
// 1
// 2*2
// 3*3*3
// 3*3*3
// 2*2
// 1

#include<iostream>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    // 1st half -
    int k;
    for(int i=1;i<=n;i++)
    {
        k=1;
        for(int j=0;j<i;j++)
        {
            cout<<i;
            if(k<i)
            {
                cout<<"*";
                k++;
            }
        }
        cout<<endl;
    }
    // 2nd half -
    for(int i=n;i>=1;i--)
    {
        k=1;
        for(int j=0;j<i;j++)
        {
            cout<<i;
            if(k<i)
            {
                cout<<"*";
                k++;
            }
        }
        cout<<endl;
    }
    return 0;
}