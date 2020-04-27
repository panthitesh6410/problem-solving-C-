// SPOJ - EDIT (Edit Distance Again) :
// ABaa --> 2   
// AaAaB --> 0    (alternate upper and lowercase letters)

#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int count = 0;
    if(isupper(s[0]))
    {
        for(int i=1;i<s.size();i++)
        {
            if(i%2 == 0 && !isupper(s[i]))
                count++;
            if(i%2 != 0 && !islower(s[i]))
                count++;
        }
    }
    else 
    {
        for(int i=1;i<s.size();i++)
        {
            if(i%2 == 0 && !islower(s[i]))
                count++;
            if(i%2 != 0 && !isupper(s[i]))
                count++;
        }
    }
    cout<<count;
    return 0;
}