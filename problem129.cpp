// Mumbler :
// Input : abc, plus
// Output : A-Bb-Ccc, P-Ll-Uuu-Ssss

#include<string.h>
#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(i == s.size()-1)
        {
            char ch = toupper(s[i]);
            cout<<ch;
            for(int j=0;j<i;j++)
                cout<<s[i];
        }
        else
        {
            char ch = toupper(s[i]);
            cout<<ch;
            for(int j=0;j<i;j++)
                cout<<s[i];
            cout<<"-";
        }
        
    }
    return 0;
}