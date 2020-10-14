// TCS NQT problems :
// count prime numbers within a given range

#include<iostream>
#include<math.h>
using namespace std;
int is_prime(int num)
{
    for(int i=2;i<=sqrt(num);i++)
    {
        if(num % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int n1, n2;
    cin>>n1>>n2;
    int sum = 0;
    for(int i=n1+1;i<n2;i++)
    {
        if(is_prime(i))
            sum = sum + i;
    }
    cout<<sum;
    return 0;
}