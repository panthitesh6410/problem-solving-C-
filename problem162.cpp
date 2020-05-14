
#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int ori = num;
    int arr[10];
    int i=0;
    while(num != 0)
    {
        arr[i] = num/10;
        num = num/10;
        i++;
    }
    int denominator = arr[i]*10 + ori/10;
    if(ori%denominator == 0)
        cout<<"True";
        // cout<<"Divisible by "<<denominaor;
    else
        cout<<"False";
        // cout<<"Not-Divisible by "<<denominator;
    return 0;
}