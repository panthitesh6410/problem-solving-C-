// // TCS NQT 2020 :

#include<iostream>
using namespace std;
bool is_prime(int num)
{
    for(int i=2;i<=num/2;i++)
    {
        if(num%i==0)
            return false;
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    for(int i=2;i<n;i++)
    {
        if(is_prime(i))
            cout<<i<<" ";
    }
    return 0;
}