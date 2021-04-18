// TCS DCA problem 

#include<iostream>
using namespace std;
int main(){
    int arr[11];
    for(int i=0;i<11;i++)
        cin>>arr[i];
    int count = 1;
    for(int i=0;i<11;i++){
        count++;
        int max = arr[i];
        int j=i;
        while(j<=i+arr[i] && j<11){
            if(arr[j] > max)
                max = arr[j];
            j++;
        }
        // cout<<"i="<<i<<"\n";
        i = i + max;
    }
    cout<<count;
    return 0;
}