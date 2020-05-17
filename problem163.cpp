// Google KickStart 2020 - Round C (problem1) :
// Countdown -

#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int q=1;q<=t;q++)
    {
        int n, k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int count = 0;
        for(int i=0;i<n;i++)
        {
            if(arr[i] == k)
            {
                int index = i, internal_count=0;
                for(int j=k;j>=1;j--)
                {
                    if(arr[index] == j)
                        internal_count++;
                    index++;
                }
                if(internal_count == k)
                    count++;
            }
        }
        cout<<"Case #"<<q<<": "<<count<<endl;
    }
    return 0;
}   