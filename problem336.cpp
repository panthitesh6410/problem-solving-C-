// reverse sentence -
// this is fun -> fun is this

#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    vector<string> res;
    vector<string>::iterator ptr;
    int i=0;
    string tmp=" ";
    while(i<=s.length())
    {
        if(s[i] == 32 || i >= s.length()){
            res.push_back(tmp);
            tmp.erase();
        }
        tmp += s[i];
        i++;
    }
    reverse(res.begin(), res.end());
    for(ptr=res.begin();ptr!=res.end();ptr++)
        cout<<*ptr;
   
    return 0;
}