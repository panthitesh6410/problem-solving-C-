#include<iostream>
using namespace std;


void MaxInArray(int arr[], int length){
    int maxi = arr[0], index = 0;
    for(int i=0;i<length;i++){
        if(arr[i] > maxi){
            maxi = arr[i];
            index = i;
        }
    }
    cout<<maxi<<"\n"<<index;
}



int main(){
    int arr[]={23,45,82,27,66,12,78,13,71,86};
    MaxInArray(arr, 10);
    return 0;
}