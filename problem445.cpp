// Accenture Coding Question -

#include<iostream>
using namespace std;
int FindCount(int arr[], int length, int num, int diff){
    int count = 0;
    for(int i=0;i<length;i++){
        if(abs(num - arr[i]) <= diff)
            count++;
    }
    return count;
}
int main(){
    int arr[]={12, 3, 14, 56, 77, 13};
    int length = 6;
    int num = 13;
    int diff = 2;
    cout<<FindCount(arr, length, num, diff);
    return 0;
}