// Codechef February Lunchtime 2021 -
// Smallest Possible Whole Number 

#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        while(n>=0)
            n -= k;
        if (n >= 0)
            cout<<n<<"\n";
        else
            cout<<n+k<<"\n";
    }
    return 0;
}