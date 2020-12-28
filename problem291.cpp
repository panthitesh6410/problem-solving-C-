// ADOBE question :
// Given a string, find all sub-strings that are palindromes :

#include<iostream>
using namespace std;
bool is_palindrome(string s, int start, int end)
{
    string str;
    for(int i=start;i<=end;i++)
        str = str + s[i];
    int l=0, r=str.length()-1;
    while(l<r)
    {
        if(str[l] != str[r])
            return false;
        l++;
        r--;
    }
    return true;
}
int main()
{
    // saascsas - saas, aa, ascsa, scs, sas 
    string s;
    cin>>s;
    int count=0;
    int i=0, j=s.length()-1;
    for(int i=0;i<s.length()-1;i++)
    {
        for(int j=i+1;j<s.length();j++)
        {
            if(is_palindrome(s, i, j))
            {   
                // print sub-string
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}