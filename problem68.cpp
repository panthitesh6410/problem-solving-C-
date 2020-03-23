// codeforces :  Tram 

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x, y;
    int a[n], b[n];
    for(int i=0;i<n;i++)
    {
        cin>>x;
        a[i] = x;
        cin>>y;
        b[i] = y;
    }
    int total = 0;
    int max = 0;
    for(int i=0;i<n;i++)
    {
        total = total - a[i];
        total = total + b[i];
        if(total > max)
            max = total;
    }
    cout<<max;
    return 0;
}