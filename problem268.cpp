// i/p - 44,30,24,32,35,30,40,38,15
// o/p - 16 (40-24) is max difference (less, more)

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    // int max_diff = -99;
    // for(int i=0;i<n-1;i++)
    // {
    //     for(int j=i+1;j<n;j++)
    //     {
    //         if(arr[i]<arr[j])
    //         {
    //             if(arr[i]-arr[j] > max_diff)
    //                 max_diff = arr[i]-arr[j];
    //         }
    //     }
    // }
    // if(max_diff > 0)
    //     cout<<max_diff;
    // else
    //     cout<<-1;
    
    // alter solution :

    // int count=0;
    // for(int i=0;i<n-1;i++)
    // {
    //     if(arr[i]>arr[i+1])
    //         count++;
    // }
    // if(count == n-1)
    //     cout<<-1;
    // else{
    //     int max = -999;
    //     for(int i=n-1;i>=0;i--)
    //     {
    //         for(int j=0;j<n;j++)
    //         {
    //             if(i != j)
    //             {
    //                 if(arr[i]-arr[j] > 0)
    //                 {
    //                     if(arr[i]-arr[j] > max)
    //                         max = arr[i]-arr[j];
    //                 }
    //             }
    //         }
    //     }
    //     cout<<max;
    // }
    return 0;
}