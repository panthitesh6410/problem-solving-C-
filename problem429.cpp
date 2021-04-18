// TCS coding Practise

#include<iostream>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    int div = 0, not_div = 0;
    for(int i=1;i<=m;i++){
        if(i%n == 0)
            div += i;
        else
            not_div += i;
    }
    cout<<abs(div - not_div);
    return 0;
}