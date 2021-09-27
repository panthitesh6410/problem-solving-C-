// TCS Digital Question

#include<unordered_map>
#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    unordered_map<char, int> map;
    for(int i=0;i<s.length();i++){
        if(isalpha(s[i]))
        map[tolower(s[i])]++;
    }
    if(map.size() < 26)     cout<<"NO";
    else    cout<<"YES";
    return 0;
}