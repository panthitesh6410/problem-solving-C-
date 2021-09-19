// TCS Digital Question

#include<algorithm>
#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    do{
        cout<<s<<"\n";
    }while(next_permutation(s.begin(), s.end()));
    
    return 0;
}