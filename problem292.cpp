// ADOBE question :
// given 'k', find max sum of an countiguous subarray of size k :

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int k;
    cin>>k;
    int max = 0;
    // 1 2 3 4 5 - 3
    for(int i=0;i<n-1;i++)
    {
        int sum = arr[i];
        for(int j=i+1;j<i+k;j++)
            sum += arr[j];
        // cout<<sum<<endl;
        if(max<sum)
            max = sum;
    }
    cout<<max;
    return 0;
}