// Amazon -
// find longest substring without repeating characters in a given string :

#include<vector>
#include<iostream>
using namespace std;

bool not_in_v(vector<char> v, char c)
{
    for(int i=0;i<v.size();i++)
    {
        if(v[i] == c)
            return true;
    }
    return false;
}

int main()
{
    string s;
    cin>>s;
    int max_length=0;
    for(int i=0;i<s.size();i++)
    {
        vector<char> v;
        int count=0;
        for(int j=i;j<s.size();j++)
        {
            if(!not_in_v(v, s[j]))
            {
                v.push_back(s[j]);
                count++;
            }
            else
                goto nil;
        }
        nil:
        if(count >= max_length)
            max_length = count;
    }
    cout<<max_length;
    return 0;
}