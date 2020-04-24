// change even into uppercase and ood into lowercase in a sentence :
// starting from 1 index
// asdf --> AsDf

#include<iostream>
using namespace std;
int main()
{
    char s[200];
    gets(s);
    for(int i=0;i!='\0';i++)
    {
        if(s[i]%2!=0)
            s[i] = toupper(s[i]);
        else
            s[i] = tolower(s[i]);
    }
    cout<<s;
    return 0;
}