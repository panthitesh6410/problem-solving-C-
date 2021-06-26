// June Lunchtime 2021 Division 3  »  Richie Rich  

#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b, x;
        cin>>a>>b>>x;
        int count = 0;
        while(a < b){
            count++;
            a += x;
        }
        cout<<count<<"\n";
    }
    return 0;
}