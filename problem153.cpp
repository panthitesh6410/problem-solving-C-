// Leetcode May Challenge Day 4 :
// Number Complement -

#include<math.h>
#include<iostream>
using namespace std;

int find_binary(int num)
{
    int arr[32];
    int i=0;
    while(num != 0)
    {
        arr[i] = num%2;
        num = num/2;
        i++;
    }
    int r = 0;
    for(int j=i;j>=0;j--)
        r = (r*10)+arr[j];
    return r;
}

int reverse(int num)
{
    int rev = 0;
    while(num != 0)
    {
        rev = (rev*10) + num%10;
        num /= 10;
    }
    return rev;
}

int find_decimal(int num)
{
    int decimal = 0, i=0;
    while(num != 0)
    {
        decimal += (num%10)*pow(2,i);
        num /= 10;
        i++;
    }
    return decimal;
}

int main()
{
    int num;
    cin>>num;
    int binary = find_binary(num);
    int binary_rev = reverse(binary);
    cout<<find_decimal(binary_rev);
    return 0;
}