// Google Kick-Start (2018) Round-A : Problem-1

#include<iostream>
using namespace std;

bool all_even_digits(int num)
{
    int ori = num, count_digits=0,count_even_digits=0;
    while(ori != 0)
    {
        count_digits++;
        ori = ori /10;
    }
    ori = num;
    while(ori != 0)
    {
        int d = ori%10;
        if(d % 2 == 0)
            count_even_digits++;
        ori = ori/10;
    }
    if(count_digits == count_even_digits)
        return true;
    else
        return false;
}

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int num;
        cin>>num;
        if(all_even_digits(num))
        {
           int count=0;
           cout<<"Case #"<<i<<": "<<count<<endl;
        }
        else
        {
            int count_minus=0, count_plus=0;
            int ori = num;
            // find count with plus operation
            while(!all_even_digits(ori))
            {
                ori++;
                count_plus++;
            }
            ori = num;
            // find count with minus operation
            while(!all_even_digits(ori))
            {
                ori--;
                count_minus++;
            }
            // compare both and print the minimum
            if(count_minus <= count_plus)
                cout<<"Case #"<<i<<": "<<count_minus<<endl;
            else
                cout<<"Case #"<<i<<": "<<count_plus<<endl;
        }
    }
    return 0;
}