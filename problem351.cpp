// Nagarro Question -

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int final_count = 0;
    for(int i=0;i<n-1;i++){
        int count = 1, largest = arr[i];
        int j=i+1;
        while(j<n){
            if(arr[j] > largest){
                largest = arr[j];
                count++;
            }
            j++;
        }
        // printf("---------- %d\n ", count);
        if(count > final_count)
            final_count = count;
    }
    cout<<final_count;
    return 0;
}