// Amazon Online Assessment Problem :

#include<iostream>
using namespace std;

bool hash_available(string s)
{
    for(int i=0;i<s.size();i++)
    {
        if(!isalpha(s[i]))
            return true;
    }
    return false;
}

int main()
{
    string s1, s2;
    cin>>s1>>s2;
    while(hash_available(s1))
    {
        for(int i=0;i<s1.size();i++)
        {
            if(!isalpha(s1[i]))
                s1.erase(i-1, i);
        }
        if(!isalpha(s1[0]))
            s1.erase(s1.begin());
    } 
    while(hash_available(s2))
    {
        for(int i=0;i<s2.size();i++)
        {
            if(!isalpha(s2[i]))
                s2.erase(i-1, i);
        }
        if(!isalpha(s2[0]))
            s2.erase(s2.begin());
    }

    // cout<<s1<<" "<<s2<<endl;

    if(s1 == s2)
        cout<<"True";
    else
        cout<<"False";
    return 0;
}