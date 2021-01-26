// TCS Digital Internal Assessment Question -
// page 1 will be on right-side always
// after page 1 we see page 2 & 3
// last page will always be on the front


#include<iostream>
using namespace std;
int main(){
    int total, p;
    cin>>total>>p;
    int min = (total/2)-(p/2);
    if(min > p/2)
        min = p/2;
    cout<<min;
    return 0;
}