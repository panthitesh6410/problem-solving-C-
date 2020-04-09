// GeeksforGeeks - zig-zag arary : (Amazon/Paytm)

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
            if(j%2==0)
            {
                if(arr[j]>arr[j+1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
            else
            {
                if(arr[j]<arr[j+1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
        for(int j=0;j<n;j++)
            cout<<arr[j]<<" ";
        cout<<endl;
    }
    return 0;
}