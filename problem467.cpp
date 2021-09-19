// TCS Digital Question

#include<vector>
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        getline(cin, s);
        vector<string> words;
        string temp = "";
        for(int i=0;i<s.length();i++){
            if(s[i] == 32){         
                words.push_back(temp);
                temp = "";
            }
            temp += s[i];
            if(i == s.length()-1)   // for last word
                words.push_back(temp);
        }
        for(int i=0;i<words.size();i++){
            string output = "";
            bool flag = true;
            for(int j=0;j<words[i].length();j++){
                if(words[i][j] == '9'){
                    flag = false;
                    break;
                }
                else if(words[i][j] >= '0' && words[i][j] < '9')
                    output += words[i][j];
            }
            if(flag)   
                cout<<output<<" ";
        }
    }   
    return 0;
}