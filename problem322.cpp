// wipro NLTH 2021

#include<iostream>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    int misses=0;
    for (int i = 0; i < s.length(); i++){
        if(!(s[i]>='a' && s[i]<='z') && !(s[i]>='A' && s[i]<='Z') && !(s[i]>='0' && s[i]<='9') && !(s[i] == 32))
            misses++;
    }
    cout<<misses;
    return 0;
}