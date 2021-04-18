#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a_min, b_min, c_min, a, b, c, total_min;
        cin>>a_min>>b_min>>c_min>>total_min>>a>>b>>c;
        // int total_min = a_min + b_min + c_min;
        int total = a + b + c;
        if(a < a_min || b < b_min || c < c_min || total < total_min)
            cout<<"NO"<<"\n";
        else
            cout<<"YES"<<"\n"; 
    }
    return 0;
}