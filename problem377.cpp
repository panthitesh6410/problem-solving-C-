// find number whose square ends with same number
// TCS DCA 

#include<math.h>
#include<iostream>
using namespace std;
int main(){
    int num, ori;
    cin>>num;
    if(num > 0){
        ori = num;
        int square = num*num;
        int digits = 0;
        while(num){
            digits++;
            num /= 10;
        }
        int power = pow(10, digits);
        if(ori == square%power)
            cout<<"Correct Aswer";
        else
            cout<<"Incorrect Answer";
    }
    else
        cout<<"Wrong Input";
    return 0;
}