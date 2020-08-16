// hackerrank problem :
#include<vector>
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
        vector<char> v(s.length());
        int freq_count[s.length()];    
        for(int i=0;i<s.length();i++)
            freq_count[i] = 1;
        for(int i=0;i<s.length();i++)
        {
            for(int j=0;j<s.length();j++)
            {
                if(s[i] == s[j] && i!=j)
                    freq_count[i]++;
            }
        }
        int count=0;
        for(int i=0;i<s.length();i++)
        {
            if(freq_count[i]%2!=0)
                count++;
        }
        if(count>=s.length()/2)
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;   
    }
   return 0;
}