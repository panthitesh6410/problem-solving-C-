// Balanced Brackets - HackerRank Problem

#include <iostream>
#include<stack>

using namespace std;

string isBalanced(string s) {
    string result;
    if(s.length()%2 != 0)
        return "NO";
    else{
        stack<char> stack;
        for(unsigned int i=0;i<s.length();i++)
        {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                if(s[i] == '(')
                    stack.push(')');
                else if(s[i] == '[')
                    stack.push(']');
                else if(s[i] == '{')
                    stack.push('}');
            }
            else{
                if(stack.empty())
                {
                    // printf("line 19");
                    return "NO";
                }
                else{
                    if(s[i] != stack.top()){
                        // cout<<s[i]<<"-----"<<stack.top()<<endl;
                        // printf("line 19");
                        return "NO";
                    }
                    stack.pop();
                }
            }
        }
        if(stack.size()>0)
            return "NO";
        return "YES";
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<isBalanced(s)<<endl;
    }
    return 0;
}