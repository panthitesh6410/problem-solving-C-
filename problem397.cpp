// Codechef March Cook-Off 2021 Div-3 Problem 

#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int w1, w2, x1, x2, m;
        cin>>w1>>w2>>x1>>x2>>m;
        if(w1 < w2){
            int diff = w2 - w1;
            if(m*x1 > diff)
                cout<<0<<"\n";
            else if(m*x2 < diff)
                cout<<0<<"\n";
            else
                cout<<1<<"\n";
        }
        else
            cout<<0<<"\n";
    }
    return 0;
}