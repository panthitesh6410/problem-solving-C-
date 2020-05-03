// Password Validator :

#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int flag_num = 0, flag_special = 0;
    if(s.size()>=5 && s.size()<=10)
    {
        for(int i=0;i<s.size();i++)
        {
            if(isdigit(s[i]))
                flag_num = 1;
            if(!isdigit(s[i]) && !isupper(s[i]) && !islower(s[i]))
                flag_special = 1;
        }
    }
    if(flag_num == 1 && flag_special == 1)
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}