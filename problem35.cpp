// HackerRank Problem - Birthday Chocoloate

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int d, m;
    cin>>d>>m;
    int count = 0;
    for(int i=0;i<n;i++)
    {
        int sum = 0;
        for(int j=i;j<i+m;j++)
        {
            sum = sum + arr[j];
        }
        if(sum == d)
            count++;
    }
    cout<<count;

    return 0;
}