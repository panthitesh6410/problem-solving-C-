// codesites contest problem :
// Given n, take the sum of the digits of n. If that value has more than one digit, continue reducing in this way until a single-digit number is produced

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum = 0;
    while(n != 0)
    {
        sum = sum + (n % 10);
        n = n / 10;
    }
    if(sum > 9)
    {   
        int final_sum = 0;
        while(sum != 0)
        {
            final_sum = final_sum + (sum % 10);
            sum = sum / 10;
        }
        cout<<final_sum;
    }
    else
        cout<<sum;
    return 0;
}