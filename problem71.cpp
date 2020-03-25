// codeforces : HQ9+

#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int res = 0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i] == 'H' || s[i] == 'Q' || s[i] == 9 || s[i] == '9')
            res = 1;
    }
    if(res == 1)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}