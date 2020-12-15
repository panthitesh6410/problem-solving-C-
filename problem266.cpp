// Tech Mahidra question 2020

#include<iostream>
using namespace std;
int distance(int input1, int input2[])
{
    int result=0;
    for(int i=0;i<input1-1;i++)
    {
        if(input2[i]>input2[i+1])
            result += (input2[i]-input2[i+1]);
        else
            result += (input2[i+1]-input2[i]);
    }    
    return result;
}
int main()
{
    int input1;
    cin>>input1;
    int input2[input1];
    for(int i=0;i<input1;i++)
        cin>>input2[i];
    cout<<distance(input1, input2);
    return 0;
}