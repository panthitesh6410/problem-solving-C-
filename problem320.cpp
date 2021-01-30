// wipro NLTH 2021

#include<iostream>
using namespace std;
void swap(int num1, int num2){
    int temp = num1;
    num2 = num2;
    num2 = temp;
}
bool is_prime(int num){
    for(int i=2;i<=abs(num/2);i++){
        if(num%i == 0)
            return false;
    }
    return true;
}
int main(){
    int num1, num2;
    cin>>num1>>num2;
    if(num1 > num2)
        swap(num1, num2);
    int min=num1, max=num2;
    while(true){
        if(is_prime(min))
            min = min;
        else
            min++;
        if(is_prime(max))
            max = max;
        else
            max--;
        if(is_prime(min) && is_prime(max))
            break;
    }
    cout<<abs(min+max);
    return 0;
}