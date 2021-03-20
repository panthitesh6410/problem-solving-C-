// Leetcode - Valid Paindrome

#include<iostream>
using namespace std;
bool isPalindrome(string s){
    if(s.length() == 1)
        return true;
    string temp;
    for(int i=0;i<s.length();i++){
        if(isalpha(s[i])){
            s[i] = tolower(s[i]);
            temp = temp + s[i];
        }
    }
    // cout<<"--->"<<temp;
    if(temp.empty())
        return true;
    int i = 0, j = temp.length()-1;
    while(i < j){
        if(temp[i] != temp[j])
            return false;
        i++;
        j--;
    }
    return true;
}

int main(){
    // string input = "A man, a plan, a canal: Panama";
    string input = "aa";
    
    cout<<isPalindrome(input);    
    return 0;
}