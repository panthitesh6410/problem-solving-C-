// TCS Mockvita-2 2020
//  Problem-B: Digit-Pairs

#include<iostream>
using namespace std;

int find_max_bit(int num)
{
    int ori = num;
    int maxi = num/100;
    while(ori!=0)
    {
        int d = num%10;
        if(d >= maxi)
            maxi = d;
        ori=ori/10;
    }
    return maxi;
}

int find_min_bit(int num)
{
    int ori = num;
    int mini = num/100;
    while(ori!=0)
    {
        int d = num%10;
        if(d <= mini)
            mini = d;
        ori=ori/10;
    }
    return mini;
}

int main()
{
    int n;
    cin>>n;
    int numbers[n];
    for(int i=1;i<=n;i++)
        cin>>numbers[i];
    int scores[n];
    for(int i=1;i<=n;i++)
    {
        int max_bit = find_max_bit(numbers[i]); 
        int min_bit = find_min_bit(numbers[i]);
        int bit_score = max_bit*11 + min_bit*7;
        if(bit_score>99)
            bit_score = bit_score%100;
        scores[i] = bit_score;
    }
    // for(int i=1;i<=n;i++)
    //     cout<<scores[i];
    int count = 0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i != j)
            {
                if(scores[i]/10 == scores[j]/10)
                {
                    if((i%2==0 && j%2==0) || (i%2!=0 && j%2!=0))
                        count++;
                }
            }
        }
    }
    cout<<count/2;
    return 0;
}