// codeforces : stones on the table 

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count=0;
    for(int i=0;i<s.size();i++)
    {
        for(int j=i+1;i<s.size();j++)
        {
            if(s[i] == s[j])
                count++;
        }
    }
    cout<<count;
    return 0;
}