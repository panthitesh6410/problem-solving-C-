// Wipro NLTH 2021 Question -

#include<iostream>
using namespace std;
int find_sum(int num){
    int sum = 0;
    while(num){
        sum += num%10;
        num /= 10;
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
        cout<<find_sum(arr[i])<<" ";
    return 0;
}