// leetcode problem - Remove Duplicates from Sorted Array

#include<vector>
#include<iostream>
using namespace std;

int removeDuplicates(vector<int> &v){
    pos:
    for(int i=0;i<v.size()-1;i++){
        for(int j=i+1;j<v.size();j++){
            if(v[i] == v[j]){
                v.erase(v.begin()+j);
                goto pos;
            }
        }
    }
    // for(int i=0;i<v.size();i++)
    //     cout<<v[i]<<" ";
    // cout<<endl;
    return v.size();
}

int main(){
    vector<int> v;
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(2);
    v.push_back(2);
    v.push_back(3);
    v.push_back(3);
    v.push_back(4);
    cout<<removeDuplicates(v);
    return 0;
}