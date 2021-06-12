// Google Asked Problem -
// 3[a2[c]]ef  ---> accaccaccef

#include<stack>
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int curNum=0;
        string curStr;
        stack<int> stack;
        for(int i=0;i<s.size();i++){
            if(s[i] == '['){
                stack.push(curStr);
                stack.push(curNum);
                curStr.clear();
                curNum = 0;
            }
            else if(s[i] == ']'){
                int num = stack.pop();
                string str = stack.pop();
                curStr = str;
                for(int i=0;i<num;i++)
                    curStr += curStr;
            }
            else if(isdigit(s[i])){
                char c = s[i];
                curNum = curNum*10 + atoi(c);
            }
            else  curStr += s[i];
        }
        cout<<curStr<<"\n";
    }
    return 0;
}