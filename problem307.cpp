//  January Cook-Off 2021 Division 3  » Password

#include<sstream>
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        bool lower=false, upper=false, digit=false, special=false;
        if(s.length()<10)
            cout<<"NO"<<endl;
        else{
            for(int i=0;i<s.length()-1;i++){
                if(s[i] >= 65 && s[i] <= 90)
                    upper = true;
                else if(s[i] >= 97 && s[i] <= 122)
                    lower = true;
                else if(s[i] == '@' || s[i] == '#' || s[i] == '%' || s[i] == '&' || s[i] == '?') 
                    special = true;
                else{
                    string tmp = "";
                    tmp += s[i];
                    stringstream o(tmp);
                    int x = 0;
                    o >> x;
                    if(x>0 && x <9)
                        digit = true;
                }   
            }
            if(!lower && !upper && !digit && !special)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }
    }
   return 0;
}