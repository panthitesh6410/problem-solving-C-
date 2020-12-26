#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    // a - 97
    // A - 65
    int q;
    cin>>q;
    
    while(q--)
    {
        string s1, s2;
        cin>>s1>>s2;
        for(int i=0;i<s1.length();i++)
        {
            // daBcd
            // ABC
            int count = 0;
            for(int j=0;j<s2.length();j++)
            {
                if(s1[i] != s2[j] && s1[i]-32 != s2[j])
                    count++;
                else if(s1[i]-32 == s2[j])
                    s1[i] = s1[i]-32;
            }
            if(count == s2.length())
                s1.erase(s1.begin()+i);
        }
        transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
        // cout<<s1<<endl<<s2<<endl;
        if(s1 == s2)
            cout<<"YES"<<endl;
        else    
            cout<<"NO"<<endl;
    }
    return 0;
}