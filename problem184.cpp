// GOOGLE -
// find n-digit numbers whose even-indexed diits sum equal to odd-indexed digits.

#include<math.h>
#include<iostream>
using namespace std;

bool compute(int num, int n)
{
    int even_sum=0, odd_sum=0;
    while(num!=0)
    {
        if(n % 2 == 0)
            even_sum += num%10;
        else
            odd_sum += num%10;
        num /= 10;
        n--;
    }
    if(even_sum == odd_sum)
        return true;
    else
        return false;
}

int main(){
    int n;
    cin>>n;
    int start = pow(10, n-1);
    int end = pow(10, n)-1;
    for(int i=start;i<=end;i++)
    {
        if(compute(i, n))
            cout<<i<<" ";
    }
    return 0;
}