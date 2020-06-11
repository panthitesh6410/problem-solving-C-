// DELL -
// Find greatest number less than or qual to n, whose every digit is 
// greater than or equal to it's preceding digit  
// 50 -> 49
// 420 --> 399

#include<iostream>
using namespace std;

bool criteria(int num)
{
    int next = num%10;
    while(num != 0)
    {
        num = num / 10;
        int d = num%10;
        if(next < d)
            return false;
        next = d;
    }
    return true;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=n;i>=9;i--)
        {
            if(criteria(i))
            {
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}