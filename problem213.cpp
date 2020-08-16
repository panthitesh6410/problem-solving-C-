// TCS codevita season 9 - problem A :

#include<iostream>
using namespace std;
int main()
{
    // A moves left only 
    // B moves right only
    int n;
    cin>>n;
    string s;
    cin>>s;
    int countA=0, countB=0;
    for(int i=0;i<n;i++)
    {
        if(s[i] == 'A')
        {
            countA++;
            if(i>0 && s[i-1]=='-')
            {
                s[i-1] = 'A';
                countA++;
                i++;
            }
        }
        else if(s[i]=='B')
        {
            countB++;
            if(s[i+1]=='-')
            {
                s[i+1]='B';
                countB++;
                i++;
            }
        }
        else if(s[i]=='-')
            continue;
    }
    if(countA>countB)
        cout<<'A';
    else if(countB>countA)
        cout<<'B';
    else
        cout<<"Coalition government";
    return 0;
}