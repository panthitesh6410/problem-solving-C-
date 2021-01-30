// Cesear's Cipher (HackerRank) -

#include<iostream>
using namespace std;
int main(){
    int size;
    cin>>size;
    string s;
    cin>>s;
    int k;    
    cin>>k;
    // A - 65, Z - 90
    // a - 97, z - 122
    for(int i=0;i<s.length();i++){
        // check for characters -
        if(s[i] >= 65 && s[i] <= 90 || s[i] >= 97 && s[i] <= 122){
            cout<<(int(s[i]) + k)%26<<endl;
            s[i] = (int(s[i]) + k);
        }
    }
    // cout<<s;
    return 0;
}