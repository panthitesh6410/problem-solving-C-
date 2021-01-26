// best time to buy ad sell stock problem -

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int max_profit = 0;
    int min_price = INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i] < min_price)
            min_price = arr[i];
        if(arr[i]-min_price > max_profit)
            max_profit = arr[i]-min_price;
    }
    cout<<max_profit;
    return 0;
}