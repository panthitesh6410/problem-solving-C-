// TCS coding Practise

#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    string s1, s2;
    for(int i=0;i<s.length();i++){
        if(s[i] == '-')
            s1 += s[i];
        else
            s2 += s[i];
    }
    s = s1+s2;
    cout<<s;

    return 0;
}