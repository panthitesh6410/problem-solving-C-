#include<iostream>
using namespace std;
bool is_prime(int n){
    for(int i=2;i<=n/2;i++){
        if(n%i == 0)
            return false;
    }
    return true;
}
int find_value(int n){
    if(n <= 1)
        return 0;
    if(is_prime(n))
        return 1;
    return n+find_value(n-1);
}
int main(){
    long int t;
    cin>>t;
    while(t--){
        long int l, r;
        cin>>l>>r;
        long int total = 0;
        for(int i=l;i<=r;i++)
            total += find_value(i);
        cout<<total<<"\n";
    }
    return 0;
}