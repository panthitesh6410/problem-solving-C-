// HackerRank - Fibonacci Modified

#include<iostream>
using namespace std;
int main()
{
    // 0 1 1 2 5 27 
    unsigned long long int t1, t2, n;
    cin>>t1>>t2>>n;
    unsigned long long int i=1, t3=t1+t2;
    while(i<n-1)
    {
        t3 = t1+t2*t2;
        t1 = t2;
        t2 = t3; 
        i++;
    }
    cout<<t3;
    return 0;
}