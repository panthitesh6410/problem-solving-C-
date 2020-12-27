// U-125 Ecoding :

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1,a=1,d1=1,d2=3,d3=6;
    while (i<n)
    {
        if(i<n)
        {
            a += d1;
            i++;
        }
        if(i<n)
        {
            a += d2;
            i++;
        }
        if(i<n)
        {
            a += d3;
            i++;
        }
    }
    cout<<a;
    return 0;
}