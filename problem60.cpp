// codeforces  -  word capitalization :

#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    if(isupper(s[0]) == 0)
        s[0] = toupper(s[0]);
    cout<<s;
    return 0;
}