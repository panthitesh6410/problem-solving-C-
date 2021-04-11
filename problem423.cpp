// Leetcode - Longest Palindrome Substring :

#include<iostream>
#include<vector>
using namespace std;

vector<string> permutations;
vector<string> palindromes;

bool is_palindrome(string s){
    int i=0, j=s.length()-1;
    while(i<j){
        if(s[i] != s[j])
            return false;
        i++;
        j--;
    }
    return true;
}

void permute(string s){
    for(int i=0;i<s.length();i++){
        string temp; 
        temp = temp + s[i];
        permutations.push_back(temp);
        for(int j=i+1;j<s.length();j++){
            temp += s[j];
            permutations.push_back(temp);
        }
    }
}
// abacd
int main(){
    string s;
    cin>>s;
    permute(s);
    for(int i=0;i<permutations.size();i++){
        if(is_palindrome(permutations[i]))
            palindromes.push_back(permutations[i]);
    }
    string res = palindromes[0];
    for(int i=0;i<palindromes.size();i++){
        if(palindromes[i].length()>res.length())
            res = palindromes[i];
    }
    cout<<res;
}