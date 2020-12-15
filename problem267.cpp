// Tech Mahidra question 2020

#include<iostream>
using namespace std;
int difference(int input1, int input2[])
{
    int result1=0, result2=0;
    for(int i=0;i<input1;i++)
    {
        if(input2[i]%2==0)
            result1 += input2[i];
        else
            result2 += input2[i];
    }
    return (result2 - result1);
}
int main()
{
    int input1;
    cin>>input1;
    int input2[input1];
    for(int i=0;i<input1;i++)
        cin>>input2[i];
    cout<<difference(input1, input2);
    return 0;
}