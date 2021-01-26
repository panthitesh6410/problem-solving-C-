// TCS Digital Internal Assessment Question -

#include<iostream>
using namespace std;
int main(int argc, const char** argv) {
    int year;
    cin>>year;
    if(year == 1918)
        cout<<"26.09.1918";
    else if(year == 1700 || year == 1800 || year == 1900)
        cout<<"12.09."<<year;
    else if(year%400 == 0)
        cout<<"12.09."<<year;
    else if(year%4 == 0){
        if(year%100 == 0)
            cout<<"13.09."<<year;
        else
            cout<<"12.09."<<year;
    } 
    else
        cout<<"13.09."<<year;
    return 0;
}
