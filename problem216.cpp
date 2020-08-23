// Google Kickstart Round-E : (Longest Arithmetic Problem)

#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++)
            cin>>arr[j];
        int count = 0;
        for(int j=0;j<n-1;j++)
        {
            int temp_count=1;
            int k=j+1;
            int diff = arr[j]-arr[k];
            temp_count++;
            while(arr[k]-arr[k+1] == diff)
            {
                temp_count++;
                k++;
            }
            if(temp_count > count)
                count = temp_count;
        }
        cout<<"Case #"<<i<<": "<<count<<endl;
    }
    return 0;
}