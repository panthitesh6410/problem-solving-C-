// TCS codevita question- 
// Minimum Gifts

#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n], gifts[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int i=0;i<n;i++)
            gifts[i] = 1;
        for(int i=1;i<n;i++){
            if(arr[i-1] < arr[i])
                gifts[i]++;
        }
        int count = 0;
        for(int i=0;i<n;i++)
            count += gifts[i];
        // 1 2 1 5 2
        // 1 2 1 2 1
        cout<<count<<"\n";
    }

    return 0;
}