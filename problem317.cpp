// wipro NLTH 2021

#include<iostream>
using namespace std;
int main(){
    long int num;
    cin>>num;
    int digits[10]={0};
    while(num){
        int d = num%10;
        digits[d%10]++;
        num /= 10;
    }
    int count = 0;
    for(int i=0;i<10;i++){
        if(digits[i] > 1)
            count++;
    }
    if(count > 0)
        cout<<count;
    else
        cout<<-1;
    return 0;
}