// Codesites :
// Micro's Array Update

#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int min = arr[0];
        for(int i=0;i<n;i++)
        {
            if(arr[i] < min)
                min = arr[i];
        }
        int count = 0;
        while(min < k)
        {
            min++;
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}