// codechef april challenge 2020 Div.2 
// Strange Number 

#include<iostream>
using namespace std;

bool check_prime(int num)
{
    int count = 0;
    for(int i=2;i<=num/2;i++)
    {
        if(num%2 == 0)
        {
            count++;
            break;
        }
    }
    if(count == 0)
        return true;
    return false;
}

int no_of_divisors(int num)
{
    int count = 0;
    for(int i=1;i<=num;i++)
    {
        if(num%i == 0)
            count++;
    }
    return count;
}

int no_of_primes(int num)
{
    int count = 0;
    for(int i=1;i<=num;i++)
    {
        if(num%i == 0)
        {
            if(check_prime(i))
                count++;
        }
    }
    return count;
}

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int x, k, result = 0;
        cin>>x>>k;
        for(int j=2;j<=499;j++)
        {
            if((no_of_divisors(j) == x) && (no_of_primes(j) == k))
            {
                result = 1;
                break;
            }
        }
        cout<<result<<endl;
    }
    return 0;
}