// HackerRank : Array Manipulation :

#include<iostream>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    int operations[m][3];
    for(int i=1;i<=m;i++)
    {
        int a, b, k;
        cin>>a>>b>>k;
        operations[i][1] = a;
        operations[i][2] = b;
        operations[i][3] = k;
    }
    int arr[n];
    for(int i=1;i<=n;i++)
        arr[i] = 0;
    for(int i=1;i<=m;i++)
    {
        for(int j=operations[i][1];j<=operations[i][2];j++)
            arr[j] = arr[j] + operations[i][3];
    }
    int max = 0;
    for(int i=1;i<=n;i++)
    {
        if(arr[i] >= max)
            max = arr[i];
    }
    cout<<max;
    return 0;
}