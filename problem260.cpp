// hackerrak string manipulation problem :

#include<iostream>
using namespace std;
int main()
{
    long int q;
    cin>>q;
    while(q--)
    {
        string s;
        cin>>s;
        long int count=0;
        label:
        for(long int i=0;i<s.length()-1;i++)
        {
            if(s[i] == s[i+1])
            {
                s.erase(s.begin()+i);
                count++;
                goto label;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}