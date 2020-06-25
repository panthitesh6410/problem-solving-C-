// Directi Question :
// find all n-digit numbers, whose sum of digits = k

#include<math.h>
#include<iostream>
using namespace std;

int DigitSum(int num)
{
    int sum = 0;
    while(num != 0)
    {
        sum += num%10;
        num /= 10;
    }
    return sum;
}

int main()
{
    int n, k;
    cin>>n>>;
    int start = pow(10, n-1); 
    int end = pow(10, n)-1;
    for(int i=start;i<=end;i++)
    {
        if(DigitSum(i) == k)
            cout<<i<<" ";
    }
    return 0;
}