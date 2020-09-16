// nagarro - find next higher number having same set bits :

#include<iostream>
using namespace std;
int binary[32]={0};
int i=0;
void calc_binary(int num)
{
    while(num != 0)
    {
        binary[i] = num%2;
        num = num/2;
        i++;
    }
}
int count_set()
{
    int count = 0;
    for(int j=i;j>=0;j--)
    {
        if(binary[j] == 1)
            count++;
    }
    return count;
}
void reset_bits()
{
    for(int j=0;j<32;j++)
        binary[j] = 0;
}
int main()
{
    int num;
    cin>>num;
    calc_binary(num);
    int count_num=count_set();
    int count = -1;
    while(count != count_num)
    {
        reset_bits();
        num++;
        calc_binary(num);
        count = count_set();
    }
    cout<<num;
    return 0;
}
