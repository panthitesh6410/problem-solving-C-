// Hackerrank - Mark and Toys :

#include<algorithm>
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int total;
    cin>>total;
    int toys[n];
    for(int i=0;i<n;i++)
        cin>>toys[i];
    int count = 0;
    sort(toys, toys+n);
    for(int i=0;i<n;i++)
    {
        if(toys[i] <= total)
        {
            count++;
            total -= toys[i];
        }
    }
    cout<<count;
    return 0;
}