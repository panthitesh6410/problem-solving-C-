// codeforces : Taxi 

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int total = 0;
    for(int i=0;i<n;i++)
        total += arr[i];
    int result;
    for(int i=1;i<=total;i++)
    {
        if(i*4 >= total)
        {
            result = i;
            break;
        }
    } 
    cout<<result;
    return 0;
}