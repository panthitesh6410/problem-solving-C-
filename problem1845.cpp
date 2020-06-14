// TCS Codevita Problem -
// Consecutive Prime Sum :

#include<iostream>
using namespace std;

bool is_prime(int num)
{
    int count = 0;
    for(int i=1;i<=num;i++)
    {
        if(num%i == 0)
            count++;
    }
    if(count == 2)
        return true;
    return false;
}

int main()
{
    int n;
    cin>>n;
    int sum=0, count=0;
    for(int i=2;i<=n;i++)
    {
        if(is_prime(i))
        {
            sum += i;
            if(is_prime(sum))
            {
                if(sum<n && sum>3)
                    count++;
            }
        }
    }
    cout<<count;
    return 0;
}