// to find binary gap :

#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int binary[33]={0};
    int i=0;
    while(num)
    {
        binary[i] = num%2;
        i++;
        num /= 2;
    }
    int out_count = 0;
    for(int j=i-1;j>0;j--)
    {
        // 0 0 1 1  
        // 1 0 0 0 1 0 0 1 0
        int in_count = 0;
        if(binary[j] == 1)
        {
            int k=j-1;
            while(binary[k] != 1)
            {
                in_count++;
                k--;
                if(k == 0)
                    break;
            }
            if(in_count > out_count)
                out_count = in_count;
        }
    }
    if(out_count > 0)
        cout<<"max_length of binary gap = "<<out_count;
    else
        cout<<"No binary gap present";
    return 0;
}