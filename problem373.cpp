// Google Code-Jam 2020 Problem

#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int k=1;k<=t;k++){
        string s;
        cin>>s;
        for(int i=0;i<s.length();i++){
            int count = 0;
            for(int j=0;j<=i;j++){    // count '(' 
                if(s[j] == '(')
                    count++;
            }
            for(int j=1;j<=s[i]-count;j++)
                s.insert(i, "(");
        }
        cout<<"Case #"<<k<<": "<<s<<"\n";
    }
    return 0;
}

// 1221 - (1(22)1) 
