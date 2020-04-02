// GeeksforGeeks : greater on right side   (Amazon)

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
        for(int j=0;j<n-1;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(arr[j]<=arr[k])
                    arr[j] = arr[k];
            }
        }
        arr[n-1] = -1;
        for(int j=0;j<n;j++)
            cout<<arr[j]<<" ";
        cout<<endl;
    }
    return 0;
}