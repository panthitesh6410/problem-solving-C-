// nagarro coding question 2021 -   

#include<iostream>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    int flag = 0;
    for(int i=0;i<s.length();i++){
        if(s[i] == '_')
            flag = 1;
    }
    if(flag == 1){
        for(int i=0;i<s.length()-1;i++){
            if(s[i] == '_'){
                s[i+1] = toupper(s[i+1]);
                s.erase(s.begin()+i);
            }
        }
        cout<<s;
    }
    else{
        for(int i=0;i<s.length()-1;i++){
            if(isupper(s[i+1])){
                s[i+1] = tolower(s[i+1]);
                s.insert(i+1, "_");            
            }
        }
        cout<<s;
    }
    return 0;
}

