// Wiley mthree asked problem

#include<iostream>
using namespace std;
bool is_magic_no(int num){
    if(num == 6 || num == 8)
        return true;
    else{
        bool six = false;
        bool eigth = false;
        while(num){
            if(num%10 == 6)
                six = true;
            if(num%10 == 8)
                eigth = true;
            num /= 10;
        }
        if(six==true && eigth==true)
            return false;
        else if(six || eigth)
            return true;
        else
            return false;
    }
}
int main(){
    int n;
    cin>>n;
    int i = 6, pos=1;
    while(pos != n){
        if(is_magic_no(i)){
            cout<<i<<" ";
            pos++;
        }
        i++;
    }
    return 0;
}