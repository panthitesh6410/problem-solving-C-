// Codechef JUNE Challenge 2020 :
// (CHEF and STRING)

#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int count = 0;
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i] != s[i+1])
            {
                count++;
                i++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}