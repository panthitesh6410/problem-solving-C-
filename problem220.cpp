// HackerRank Warmup CHallenge - (Counting Valleys)

#include<stack>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    stack<char> s;
    int count = 0;
    for(int i=str.length()-1;i>=0;i--)
        s.push(str[i]);
    while(s.top() != 'D')
        s.pop();
    if(s.top() == 'D')
    {
        label:
        while(s.top() == 'U')
            s.pop();
        int score = 1;
        s.pop();
        while(!s.empty())
        {
            if(s.top() == 'D')
            {
                score--;
                s.pop();
            }
            else
            {
                score++;
                s.pop();
            }
            if(score == 1)
            {
                count++;
                if(!s.empty())
                    goto label;
            }
        }
    }
    cout<<count;
    return 0;
}