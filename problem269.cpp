// check if armstrong number or not :

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int ori = num, sum=0;
    while(num)
    {
        int d = num%10;
        sum += pow(d, 3);
        num /= 10;
    }
    if(sum == ori)
        cout<<ori<<" is armstrong number";
    else
        cout<<ori<<" is not armstrong number";
    return 0;
}