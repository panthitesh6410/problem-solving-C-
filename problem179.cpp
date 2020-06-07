// Nagarro Interview Question :
// count set bits in range

#include<iostream>
using namespace std;

int binary[32];
int calculate_binary(int num)
{
    // 5 - 101
    // 8 - 0001
    int i=0;
    while(num != 0)
    {
        binary[i] = num%2;
        num /= 2;
        i++;
    }
    return i;
}

int set_bits_in(int arr[], int index)
{
    int count=0;
    for(int i=index;i>=0;i--)
    {
        if(binary[i] == 1)
            count++;
    }
    return count;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, count=0;
        cin>>n;
        for(int i=0;i<=n;i++)
        {
            int index = calculate_binary(i);
            count += set_bits_in(binary, index);
        }
        cout<<count<<endl;
    }
    return 0;
}