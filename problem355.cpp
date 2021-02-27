// TCS digital capability exam -

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n<0)
        cout<<"Enter positive number";
    else{
        int mul = 1;
        while(n){
            mul *= n%10;
            n /= 10;
        }
        cout<<mul;
    }

    return 0;
}