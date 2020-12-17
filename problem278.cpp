// maximize stock price profit :

#include<iostream>
using namespace std;
int max_profit(int arr[], int n)
{
    int profit=0, max_score=0;
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i] >= max_score)
            max_score = arr[i];
        profit += max_score - arr[i];
    }
    return profit;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[n];
    cout<<max_profit(arr, n);
    return 0;
}