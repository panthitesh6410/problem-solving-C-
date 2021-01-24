// merging 2 sorted arrays in O(1) space

#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    int n1, n2;
    cin>>n1>>n2;
    int arr1[n1], arr2[n2];
    for(int i=0;i<n1;i++)
        cin>>arr1[i];
    for(int i=0;i<n2;i++)
        cin>>arr2[i];
    int i=0;
    while(i<n1){
        if(arr1[i] > arr2[0]){
            int temp = arr1[i];
            arr1[i] = arr2[0];
            arr2[0] = temp;
            sort(arr2, arr2+n2);
        }
        i++;
    }
    i=0;
    while(i<n1){
        cout<<arr1[i]<<" ";
        i++;
    }
    i=0;
    while(i<n2){
        cout<<arr2[i]<<" ";
        i++;
    }
    return 0;
}