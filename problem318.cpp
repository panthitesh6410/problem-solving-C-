// wipro NLTH 2021

#include<iostream>
using namespace std;
int main(){
    long int num, x, count=0;
    cin>>num>>x;
    while(num){
        if(num%10 == x)
            count++;
        num /= 10;
    }
    cout<<count;
    return 0;
}