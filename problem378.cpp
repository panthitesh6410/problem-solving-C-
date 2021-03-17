// Find category of Input -
// TCS DCA 

#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    if(ch >= 97 && ch <= 122)
        cout<<"lower alphabet";
    else if(ch >= 65 && ch <= 90)
        cout<<"UPPER ALPHABET";
    else if(isdigit(ch))
        cout<<"Number";
    else
        cout<<"Symbol";
    return 0;
}