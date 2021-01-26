// maximum subarra sum - (Kadane's Algorithm)

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int sum = 0, maximum = arr[0];
    for(int i=0;i<n;i++){
        sum += arr[i];
        if(sum < 0)
            sum = 0;
        else{
            if(sum > maximum)
                maximum = sum;
        }
    }
    cout<<maximum;
    return 0;
}