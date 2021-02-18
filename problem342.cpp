// find category of input characrer -

#include<iostream>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    if(s[0]>=65 && s[0]<=90)
        cout<<"Upper Alphabet";
    else if(s[0]>=97 && s[0]<=122)
        cout<<"Lower Alphabet";
    else if(s[0]>='0' && s[0]<='9')
        cout<<"Number";
    else
        cout<<"Symbol";
    return 0;
}