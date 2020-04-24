// password validator :
// atleast 6 chars, contain a lowercase letter, contain an uppercase letter, contains a number

#include<iostream>
using namespace std;

bool password_validator(string s)
{
    int count_small=0, count_capital=0, count_num=0;
    for(int i=0;i<s.size();i++)
    {
        if(s.size() >= 6)
        {
            if(islower(s[i]))
                count_small++;
            else if(isupper(s[i]))
                count_capital++;
            else if(isdigit(s[i]))
                count_num++;
        }
    }
    if(count_capital>0 && count_num>0 && count_small>0)
        return true;
    return false;
}

int main()
{
    string s;
    cin>>s;
    if(password_validator(s))
        cout<<"True";
    else
        cout<<"False";
    return 0;
}
