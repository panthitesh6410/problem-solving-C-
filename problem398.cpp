// Codechef March Cook-Off 2021 Div-3 Problem 

#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string target = "party";  // pawri
        for(int i=0;i<s.length()-1;i++){
            string temp; 
            temp = temp +  s[i];
            for(int j=i+1;j<s.length();j++){
                temp += s[j];
                if(temp == target){
                    s[j] = 'i';
                    s[j-1] = 'r';
                    s[j-2] = 'w';
                }
            }
        }
        cout<<s<<"\n";
    }
    return 0;    
}