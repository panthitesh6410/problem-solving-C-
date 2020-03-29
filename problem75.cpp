// codeforces - Queue at the School :

#include<string.h>
#include<iostream>

using namespace std;

int main()
{
    int n, t;
    cin>>n>>t;
    string s;
    cin>>s;
    int score = 0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i] == 'B' && s[i+1] == 'G')
        {
            char temp = s[i];
            s[i] = s[i+1];
            s[i+1] = temp;
            score++;
        }
        if(score == t)
            break;
    }        
    cout<<s;
    return 0;
}