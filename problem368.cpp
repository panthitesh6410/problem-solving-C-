// HackerRank - (Day of the programmer) :

#include<iostream>
using namespace std;
int main(){
    unsigned int y;
    cin>>y;
    if(y >= 1700 && y <= 1917){
        // julian calender 
        if(y%4 == 0)
            cout<<"12.09."<<y;
        else
            cout<<"13.09."<<y;
    }
    else if(y == 1918){
        cout<<"26.09.1918";
    }
    else{
        // georgian calender
        if(y%400 == 0 || (y%4 == 0 && y%100 != 0))
            cout<<"12.09."<<y;
        else
            cout<<"13.09."<<y;
    }

    return 0;
}
/*
31+
14+
31+
30+
31+
30+
31+
31+
  256  
  229
   
*/