// Balancing Star : (Codevita Season-8 Pre-Qualifier Round)

#include<stack>
#include<iostream>
using namespace std;
int main(){
    
    string str;
    cin>>str;
    stack<char> s;
    int i;
    for(i=0;i<str.length();i++){
        if(str[i] == '{' || str[i] == '[' || str[i] == '(' || str[i] == '*')
            s.push(str[i]);
        else
            break;
    }
    bool flag = true;
    int count_star = 0, count = 0;
    while(!s.empty()){
        if(count == 2){
            count_star++;
            count = 0;
        }
        if(s.top() == '*')
            count++;
        else if(s.top() == '{'){
            if(str[i] != '}'){
                flag = false;
                break;
            }
        }
        else if(s.top() == '['){
            if(str[i] != ']'){
                flag = false;
                break;
            }
        }
        else if(s.top() == '('){
            if(str[i] != ')'){
                flag = false;
                break;
            }
        }
        s.pop();
    }
    if(!flag)
        cout<<"No"<<" "<<count_star;
    else
        cout<<"Yes"<<" "<<count_star;
    
    // {**(**{**})}
    // *
    // *
    // {
    // *
    // *
    // (
    // *
    // *
    // {
    
    return 0;
}