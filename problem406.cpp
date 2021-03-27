// Google Code-Jam 2021 Qualifier Round 
// Problem : ReverSort

#include<vector>
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int k=1;k<=t;k++){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int count = 0;
        for(int i=0;i<n-1;i++){
            int j=i, flag=0;
            vector<int> v;
            while(arr[j]>arr[j+1]){
                v.push_back(arr[j]);
                j++;
                count++;
                flag = 1;
            }
            if(flag == 1){
                for(int p=0;p<v.size();p++){
                    arr[j] = v[p];
                    j--;
                }
            }
            count++;
            // 4 2 1 3 - 1 2 4 3
        }
        cout<<"Case #"<<k<<": "<<count<<"\n";
    }
    return 0;
}