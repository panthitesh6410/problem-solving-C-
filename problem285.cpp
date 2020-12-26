#include<vector>
#include<iostream>
using namespace std;
int main()
{
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    vector<int> v1(s1.length()),v2(s2.length());
    for(int i=0;i<s1.length();i++)
        v1[i] = 0;
    for(int i=0;i<s2.length();i++)
        v2[i] = 0;
    
    // cout<<s1<<endl<<s2;
    // 1
    // this is a 
    // this a
    for(int i=0;i<s1.length();i++)
    {
        for(int j=0;j<s2.length();j++)
        {
            if(s1[i] == s2[j] && v2[j] == 0){
                v1[i] = 1;
                v2[j] = 1;
            }
        }
    }
    for(int i=0;i<s1.length();i++)
    {
        if(v1[i] == 0)
            cout<<s1[i];
    }
    return 0;
}