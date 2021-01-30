// wipro NLTH 2021

#include<iostream>
using namespace std;
int main(int argc, const char** argv) {
    int n;
    cin>>n;
    int fact = 1;
    for(int i=n;i>=2;i--)
        fact *= i;
    int count_zeros = 0;
    while(fact){
        if(fact%10 != 0)
            break;
        count_zeros++;
        fact /= 10;
    }    
    cout<<count_zeros;
    return 0;
}