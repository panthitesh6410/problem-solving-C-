// Given a number, check if Square of any prime divisor is still one of it's divisor :

#include<iostream>
using namespace std;

bool is_prime(int num)
{
    for(int i=2;i<=num/2;i++)
    {
        if(num % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int num;
    cin>>num;
    int flag=0;
    for(int i=2;i<=num/2;i++)
    {
        if(num % i == 0)
        {
            if(is_prime(i))
            {
                if(num % (i*i) == 0)
                {
                    flag = 1;
                    cout<<"True";
                    break;
                }
            }   
        }
    }
    if(flag == 0)
        cout<<"False";
    return 0;
}