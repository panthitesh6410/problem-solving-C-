// Increment last digit of string if it is a number, else add 1 to it.

#include<iostream>
using namespace std;
bool is_digit(char c)
{
    bool result = false;
    if(c == '0' || c == '1' || c == '2' || c == '3' || c == '4' || c == '5' || c == '6' || c == '7' || c == '8')
        result = true;
    return result;
}
int main()
{
    string s;
    cin>>s;
    if(is_digit(s[s.size()-1]))
        s[s.size()-1] = s[s.size()-1] + 1;
    else
        s = s + '1'; 
    cout<<s;
    return 0;
}