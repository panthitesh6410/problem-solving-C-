// April Challenge 2021 Div.3 
// World Record

#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        float k1, k2, k3, v;
        cin>>k1>>k2>>k3>>v;
        float speed = k1*k2*k3*v;
        float time = 100/speed;
        // cout<<time;
        if(time < 9.575)
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";        
    }
    return 0;
}