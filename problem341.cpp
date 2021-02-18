// if square of n end with itself(n) or not -

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n > 0){
        if((n*n)%10 == n)
            cout<<"Correct Number";
        else
            cout<<"Incorrect Number";   
    }
    else
        cout<<"Wrong Input";
    return 0;
}