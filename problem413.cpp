// April Challenge 2021 Div.3 
// Valid Pair

#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cin>>a>>b>>c;
    if(a==b || a==c || b==c)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}