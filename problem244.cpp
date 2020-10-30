#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int j=0, arr1[n/2], arr2[n/2];
    if(n%2 == 0)
    {
        for(int i=n-1;i>=0;i=i-2)
        {
            arr1[j]=arr[i];
            j++;
        }
        j=0;
        for(int i=n-2;i>=0;i=i-2)
        {
            arr2[j]=arr[i];
            j++;
        }
    }
    else
    {
        for(int i=n-1;i>=1;i=i-2)
        {
            arr1[j]=arr[i];
            j++;
        }
        j=0;
        for(int i=n-2;i>=1;i=i-2)
        {
            arr2[j]=arr[i];
            j++;
        }
    }
    int sum=0;
    for(int i=0;i<n/2;i++)
        sum=sum+arr1[i]+arr2[i];
    cout<<sum;
    return 0;
}