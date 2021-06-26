// June Lunchtime 2021 Division 3  » HTML Tags

#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        bool flag = true;
        if(s.length() > 3){
            if(s[0] == '<' && s[1] == '/' && s[s.length()-1] == '>'){
                for(int i=2;i<s.length()-1;i++){
                    if(!isdigit(s[i]) && !isalpha(s[i])){
                        cout<<"Error"<<"\n";
                        flag = false;
                        break;
                    }
                }
                if(flag)  cout<<"Success"<<"\n";
            }
            else  cout<<"Error"<<"\n";
        }
        else  cout<<"Error"<<"\n";    
    }
    return 0;
}