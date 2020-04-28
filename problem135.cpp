// WAP that takes an integer and returns nearest palindrome integer
// by either increment or decrement input value

#include<iostream>
using namespace std;

bool is_palindrome(int num)
{
    int ori = num, rev = 0;
    while(num != 0)
    {
        rev = rev*10 + (num%10);
        num = num/10;
    }
    if(rev == ori)
        return true;
    else
        return false;
}

int main()
{
    int num;
    cin>>num;
    if(is_palindrome(num))
        cout<<num;
    else
    {
        int right=num, left=num;
        while(!is_palindrome(right) || !is_palindrome(left))
        {
            right++;
            if(is_palindrome(right))
            {
                cout<<right;
                break;
            }
            left--;
            if(is_palindrome(left))
            {
                cout<<left;
                break;
            }
        }
    }
    return 0;
}