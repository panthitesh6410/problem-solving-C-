// codechef : Soldier and Banana 

#include<iostream>
using namespace std;
int main()
{
    int k,n,w;
    cin>>k>>n>>w;
    // k - cost of 1st banana
    // n - initial money soldier has
    // w - no.of banana he wants
    // Input : 3, 17, 4      || OUTPUT : 13 
    // Output zero if he doesnot need to borrow money.
    // i.e. total_money <= n
    // 3 + 6 + 9 + 12  = 30, 30-17=13(ans.)
    int total_money = 0;
    for(int i=1;i<=w;i++)
    {
        total_money += k*i;
    }
    int result;
    if(total_money <= n)
    {
        result = 0;
        cout<<result;
    }
    else
    {
        result = total_money - n;
        cout<<result;
    }
    return 0;
}