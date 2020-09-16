// nagarro - find longest palindrome substring :

#include<iostream>
using namespace std;
bool check_palindrome(string s, int start, int end)
{
    // abba
    // aabb
    while(start != end)
    {
        if(s[start] != s[end])
            return false;
        start++;
        end--;
    }
    return true;

}
int main()
{
    string s;
    cin>>s;
    int start = 0, end = s.length();
    while(!(check_palindrome(s, start, end)) && (s.length() != 0))
    {
        end--;
        if(check_palindrome(s, start, end))
            break;
        end++;
        start++;
        if(check_palindrome(s, start, end))
            break;
        end--;
        if(check_palindrome(s, start, end))
            break;
        
    }
    for(int i=start;i<=end;i++)
        cout<<s[i];
    return 0;
}

// abfgerccdedccfgfer - ccdedcc