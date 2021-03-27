// Leetcode Problem - Ugly Number

#include<vector>
#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    if(num == 0)
        cout<<"NOT UGLY";
    else{
        while(num%2 == 0)
            num /= 2;
        while(num%3 == 0)
            num /= 3;
        while(num%5 == 0)
            num /= 5;
        if(num == 1)
            cout<<"IS UGLY";
        else    
        cout<<"NOT UGLY";
    }
    return 0;
}