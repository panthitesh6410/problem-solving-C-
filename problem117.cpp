// TCS Ninja Coding Question :
// 1, 2, 1, 3, 2, 5, 3, 7, 5, 11, 8, ...
// odd terms - fibonacci terms
// even terms - prime numbers
// find nth term
#include<iostream>
using namespace std;

bool is_prime(int num)
{
    bool result = true;
    for(int i=2;i<=(num/2);i++)
    {
        if(num % i == 0)
        {
            result = false;
            break;
        }
    }
    return result;
}

int fibonacci(int n)
{
    int a=1, b=1, c=a+b, result;
    if(n == 1 || n == 2)
        result = 1;
    else
    {
        for(int i=1;i<=n-2;i++)
        {
            c = a + b;
            result = c;
            a = b;
            b = c;
        }
    }
    return result;
}

int prime(int n)
{
    int result;
    int count=0;
    for(int i=2;i<9999;i++)
    {
        if(is_prime(i))
        {
            result = i;
            count++;
        }
        if(count>=n)
            break;
    }
    return result;
}

int main()
{
    int n;
    cin>>n;
    if(n % 2 == 0)
    {
        if(n == 1)
            cout<<"2";
        else
            cout<<prime((n/2));
    }
    else
        cout<<fibonacci((n/2)+1);
    return 0;
}