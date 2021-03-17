// Leetcode - Longest Common Prefix 

#include<iostream>
#include<vector>
using namespace std;

string longestCommonPrefix(vector<string>& v){
    if(v.empty())
        return "";
    else if(v.size() == 1)
        return v[0];
    else{
        string res = "";
        for(int i=0;i<v[0].size();i++){
            char c = v[0][i];
            for(int j=1;j<v.size();j++){
                if(i>=v[j].size() || v[j][i]!=c)
                    return res;
            }
            res = res + c;
        }
        return res;
    }
}

int main(){
    vector<string> v;
    v.push_back("flower");
    v.push_back("flow");
    v.push_back("flight");
    cout<<longestCommonPrefix(v);
    return 0;
}