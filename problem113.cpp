// program to count words in a sentence(if we use more than 1 space b/w 2 words ):

#include<iostream>
using namespace std;
int main()
{
    char s[150];
    gets(s);
    int count = 1, i = 0;
    while(s[i] != '\0')
    {
        if(s[i] == 32 && s[i+1] != 32)
            count++;
        i++;
    }
    cout<<count;
    return 0;
}