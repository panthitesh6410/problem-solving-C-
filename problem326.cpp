// wipro NLTH 2021

#include<iostream>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    for(int i=0;i<s1.length();i++){
        int flag = 0;
        for(int j=0;j<s2.length();j++){
            if(s1[i] == s2[j])
                flag = 1;
        }
        if(flag == 0){
            cout<<s1[i];
            break;
        }
    }
    return 0;
}