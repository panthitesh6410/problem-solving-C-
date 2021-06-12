// HackerRank Problem -

#include<iostream>
using namespace std;

string superReducedString(string s) {
    label:
    for(int i=0;i<s.length()-1;i++){
        if(s[i] == s[i+1]){
            s.erase(s.begin()+i,s.begin()+i+2);
            goto label;
        }
    }
    return s;
}

int main(){
    string s;
    getline(cin, s);
    cout<<superReducedString(s);
    return 0;
}