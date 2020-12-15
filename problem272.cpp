/*
    Pattern for n = 3 :
    1
    2*2
    3*3*3
    2*2
    1
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i!=n+1)
    {
        for(int j=0;j<i;j++)
            cout<<i<<"*";
        cout<<endl;
        i++;
    }
    i = n-1;
    while(i!=0)
    {
        for(int j=i;j>0;j--)
            cout<<i<<"*";
        cout<<endl;
        i--;
    }
    return 0;
}