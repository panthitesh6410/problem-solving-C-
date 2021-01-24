// leetcode - find count of substring palindromes :

#include<iostream>
using namespace std;
bool is_palindrome(string s, int start, int end){
    while(start <= end){
        if(s[start] != s[end])
            return false;
        start++;
        end--;
    }
    return true;
}
int main(){
    string s;
    cin>>s;
    // aaa - a,a,a,aa,aa,aaa (6)
    int total = 0;
    for(int i=0;i<s.length();i++){
        for(int j=i;j<s.length();j++){
            if(is_palindrome(s, i, j))
                total++;
        }
    }   
    cout<<total;
    return 0;
}