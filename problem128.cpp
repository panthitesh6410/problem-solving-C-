// check for pangram or not :
// every english alphabet atleast once

#include<vector>
#include<string.h>
#include<iostream>
using namespace std;
    
vector<char> v;

bool is_avail(char ch)
{
    for(int i=0;i<v.size();i++)
    {
        if(v[i] == ch)
            return true;
    }
    return false;
}

int main()
{
    char s[200];
    gets(s);
    int count = 0;
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i] != 32)
        {
            if(!is_avail(s[i]))
            {
                count++;
                v.push_back(s[i]);
            }
        }
    }
    if(count < 26)
        cout<<"False";
    else
        cout<<"True";
    return 0;
}
