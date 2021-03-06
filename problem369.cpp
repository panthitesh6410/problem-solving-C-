// HackerRank - (Picking Numbers) :

#include<vector>
#include<iostream>
using namespace std;

bool acceptable_diff(vector<int> v, int y){
    for(int i=0;i<v.size();i++){
        if(abs(v[i]-y) > 1)
            return false;
    }
    return true;
}

int main(){
    long int n;
    cin>>n;
    long int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int max_len = 1;
    for(int i=0;i<n;i++){
        vector<int> v;
        v.push_back(arr[i]);
        for(int j=0;j<n;j++){
            if(acceptable_diff(v, arr[j]) && i!=j)
                v.push_back(arr[j]);
        }
        if(max_len < v.size())
            max_len = v.size();
    }
    cout<<max_len;
    return 0;
}