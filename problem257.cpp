// TCS NQT problem :

#include<vector>
#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    if(s.length()>20)
        cout<<"Wrong Input";
    else
    {
        int v[s.length()];
        for(int i=0;i<s.length();i++)
            v[i] = 0;
        for(int i=0;i<s.length();i++)
        {
            for(int j=0;j<s.length();j++)
            {
                if(i != j && s[i] == s[j])
                    v[i] = 1;  
            }
        }
        int count_zeros = 0;
        for(int i=0;i<s.length();i++)
        {
            if(v[i] == 0)
                count_zeros++;
        }
        if(count_zeros == 0)
            cout<<"Exceptional String";
        else
        {
            for(int i=0;i<s.length();i++)
            {
                if(v[i] == 0)
                {
                    cout<<s[i];
                    break;
                }
            }
        }
    }
    return 0;
}