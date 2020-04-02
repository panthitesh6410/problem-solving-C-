// GeeksforGeeks : replace 0's with 5 (Amazon)

#include<iostream>
using namespace std;
int reverse(int num)
{
    int temp=0;
    while(num!=0)
    {
        int d = num%10;
        temp = temp*10 + d;
        num = num/10;
    }
    return temp;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int num, ori=0;
        cin>>num;
        while(num != 0)
        {
            int d = num % 10;
            ori = ori*10 + d;
            if( d == 0)
            {
                ori = ori / 10;
                ori = ori*10 + 5;
            }
            num /= 10;
        }
        cout<<reverse(ori)<<endl;
    }
    return 0;
}