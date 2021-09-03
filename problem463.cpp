// Balancing Parenthesis -

#include<vector>
#include<algorithm>
#include<stack>
#include<iostream>
using namespace std;

bool is_balanced(string s){
    stack<char> stac;
    for(int i=0;i<s.size();i++){
        if(s[i] == '(')  stac.push('(');
        else if(s[i] == ')' && stac.top() == '(')  stac.pop();
        else return false;
    }
    return stac.empty();
}
void all_permutation(){
    string s = "((()))";
    sort(s.begin(), s.end());
    do{
        cout<<s<<"\n";
    }while(next_permutation(s.begin(), s.end()));
}
vector<string> generateParenthesis(int n) {
    vector<string> result;
    string s = "";
    for(int i=1;i<=n;i++){
        s += '(';
        s += ')';
    }
    sort(s.begin(), s.end());
    do{
        if(is_balanced(s))
            result.push_back(s);
    }while(next_permutation(s.begin(), s.end()));
    return result;
}
int main(){
    // all_permutation();
    string s = "()()()()()";
    cout<<"answer : "<<is_balanced(s);
    return 0;
}