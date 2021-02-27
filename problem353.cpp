// TCS digital capability exam -

#include<iostream>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    bool flag = false;
    for(int i=0;i<s.length()-1;i++){
        if(s[i] == '5' && s[i+1] == '3')
            s.erase(s.begin()+i,s.begin()+i+2);
        else if(s[i] == '8')
            s.erase(s.begin()+i, s.begin()+i+1);
        else if(!isupper(s[i]) && !islower(s[i]) && !(s[i]>='0' && s[i]<='9'))
            flag = true;
    }
    if(flag)
        cout<<"Invalid Input";
    else
        cout<<s;
    return 0;
}