// April Cook-Off 2021 Div.3 - (Chocolate Monger)

#include<unordered_map>
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, x;
        cin>>n>>x;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        unordered_map<int, int> map;
        for(int i=0;i<n;i++)
            map[arr[i]]++;
        int max_index = -1, max_val=INT_MIN;
        for(auto i: map){
            if(i.second > max_val){
                max_val = i.second;
                max_index = i.first;
            }
        }
        map[max_index]--;
        int count = 0;
        for(auto i: map){
            if(i.second > 0)
                count++;
        }
        cout<<count<<"\n";
    }
    return 0;
}