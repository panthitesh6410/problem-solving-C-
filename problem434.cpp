// TCS coding Practise

#include<iostream>
using namespace std;
string change(string s, char c1, char c2){
    for(int i=0;i<s.length();i++){
        if(s[i] == c1)
            s[i] = c2;
        else if(s[i] == c2)
            s[i] = c1;
    }
    return s;
}
int main(){
    string s = "apple";
    char c1 = 'a', c2 = 'p';
    cout<<change(s, c1, c2);
    return 0;
}