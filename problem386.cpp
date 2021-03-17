// Leetcode  - Implement strStr()

#include<iostream>
using namespace std;
int strStr(string heystack, string needle) {
    if(heystack.empty() && !needle.empty())
        return -1;
    else if(heystack.empty() && needle.empty())
        return 0;
    else if(!heystack.empty() && needle.empty())
        return 0;
    else if(heystack.size() == needle.size() && needle.size() == 1)
        return 0;
    else if(needle.empty())
        return -1;
    else{
        int res = 0;
        for(int i=0;i<=heystack.size()-needle.size();i++){
            if(heystack.substr(i, needle.size()) == needle)
                return i;
        }
        return -1;
    }
}
int main(){
    string heystack, needle;
    getline(cin, heystack);
    getline(cin, needle);
    cout<<strStr(heystack, needle);
    return 0;
}