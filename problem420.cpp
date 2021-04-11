// TCS DCA 2021 question -

#include<iostream>
using namespace std;
string backward_shift(string s){
    // abcd -- bcda
    // 0123 -- 0123
    string res;
    for(int i=1;i<s.length();i++)
        res += s[i];
    res += s[0];
    return res;
}
string forward_shift(string s){
    // abcd -- dabc
    // 0123 -- 0123
    string res;
    res += s[s.length()-1];
    for(int i=0;i<s.length()-1;i++)
        res += s[i];
    return res;
}
int main(){
    string s;
    cin>>s;
    string temp1 = forward_shift(s);
    string temp2 = backward_shift(s);
    if(temp1 == temp2)
        cout<<1;
    else
        cout<<0;
    return 0;
}