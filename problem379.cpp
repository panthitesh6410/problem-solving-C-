// leetcode problem -  Valid Parentheses

#include<stack>
#include<iostream>
using namespace std;

bool isValid(string s) {
    if(s.length()%2 == 0){
        int mid = s.length()/2-1, i = 0;
        stack<char> temp_stack;
        while(i<s.length()){
            while(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                temp_stack.push(s[i]);
                i++;
            }
            if(!temp_stack.empty()){
                if(temp_stack.top() == '(' && s[i] != ')' || temp_stack.top() == '[' && s[i] != ']' || temp_stack.top() == '{' && s[i] != '}')
                    return false;
                temp_stack.pop();
                i++;
            }
            else
                return false;
        }
        if(!temp_stack.empty())
            return false;
        return true;
    }
    return false;
}

int main(){
    string s1 = "()", s2 = "()[]{}", s3 = "{[]}"; // all retur true
    string s4 = "([)]", s5 = "){", s6 = "[[[]";  // all return false
    cout<<isValid(s6);
    return 0;
}