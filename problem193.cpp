// HP Question -

#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr1[n], arr2[n];
        for(int i=0;i<n;i++)
            cin>>arr1[i];
        for(int i=0;i<n;i++)
            cin>>arr2[i];
        int end=arr2[0], count=1;
        for(int i=0;i<n;i++)
        {
            if(end <= arr1[i])
            {
                count++;
                end = arr2[i];
            }   
        }
        cout<<count<<endl;
    }
    return 0;
}