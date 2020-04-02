// maximum in struct array (geeksforgeeks) :

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
        int arr[2*n];
        for(int j=0;j<2*n;j++)
            cin>>arr[j];
        for(int j=0;j<2*n;j=j+2)
            arr[j] = (arr[j]*12) + arr[j+i];
        int max=arr[0];
        for(int j=0;j<2*n;j=j+2)
        {
            if(arr[j]>=max)
                max=arr[j];
        }
        cout<<max<<endl;
    }
    return 0;
}