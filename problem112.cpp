// write a program to reverse a string word-wise :
// INPUT - i am here
// OUTPUT - here am i

#include<iostream>
using namespace std;
int main()
{
    char s[100];
    gets(s);
    int i=0;
    while(s[i] != '\0')
        i++;
    int start, end = i-1;
    while(i >= 0)
    {
        if(s[i] == 32)
        {
            s[i] = '\0';
            start = i;
            for(int j=start+1;j<=end;j++)
                cout<<s[j];
            end = start;
            cout<<" ";
        }
        i--;
    }
    start = 0;
    while(start != end)
    {
        cout<<s[start];
        start++;
    }
    return 0;
}