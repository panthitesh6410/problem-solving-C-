// TCS DCA 2021 question -

#include<cmath>
#include<iostream>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    if(n < 0)
        cout<<"Wrong Input";
    else{
        long long int power = pow(n, 4);
        if(n == power%10)
            cout<<"TRUE";
        else
            cout<<"False";
    }
    return 0;
}