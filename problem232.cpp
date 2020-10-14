// TCS NQT problems :
// check a number is palindrome or not

#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int ori = num;
    int rev = 0;
    while(num != 0)
    {
        int d = num%10;
        rev = rev*10 + d;
        num/=10;
    }
    if(rev == ori)
        cout<<"is palindrome";
    else
        cout<<"not palindrome";
    return 0;
}