// TCS coding Practise

#include<iostream>
using namespace std;
int main(){
    int num1, num2;
    cin>>num1>>num2;
    int count = 0;
    //   1 2 5
    //   9 6 7
    // 1 0 9 2
    int carry = 0; 
    while(num1 && num2){
        int d1 = num1%10;
        int d2 = num2%10;
        int sum = d1+d2+carry;
        if(sum > 9){
            count++;
            carry = sum / 10;
        }
        else
            carry = 0;
        num1 /= 10;
        num2 /= 10;
    }
    cout<<count;
    return 0;
}