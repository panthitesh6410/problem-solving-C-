// leetcode problem - Remove Element

#include<vector>
#include<iostream>
using namespace std;

int removeElement(vector<int>& v, int val) {
    pos:
    for(int i=0;i<v.size();i++){
        if(v[i] == val){
            v.erase(v.begin()+i);
            goto pos;
        }
    }       
    return v.size();
}

int main(){
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(2);
    v.push_back(3);
    v.push_back(0);
    v.push_back(4);
    v.push_back(2);
    int value = 2;
    cout<<removeElement(v, value);
    return 0;
}