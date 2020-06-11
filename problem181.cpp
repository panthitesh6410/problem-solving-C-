// Flipkart -
// print array indices that sum upto k :

#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[i] + arr[j] == k)
                {
                    cout<<i<<" "<<j;
                    break;
                }
            }
        }
    }
    return 0;
}