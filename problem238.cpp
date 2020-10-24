#include<string>
#include<iostream>
using namespace std;
int main()
{
    string s, ori;
    cin>>s;
    ori = s;
    int m, n;
    cin>>m>>n;
    int m1 = s.length()-m;
    int n1 = s.length()-n;
    int count = 0 ;
    while(s != ori)
    {
        string dup;
        for(int i=m1;i<=s.length();i++)
            dup = dup + s[i];
        s.erase(m1, n);
        string new_str = new_str+dup;
        new_str = new_str + s;
        count++;
        if(s == ori)
            break;
        for(int i=n1;i<=s.length();i++)
            dup = dup + s[i];
        s.erase(m1, n);
        new_str = new_str+dup;
        new_str = new_str + s;
        count++;
        if(s == ori)
            break;
    }
    cout<<count;
    return 0;
}