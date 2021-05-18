// Codechef May Challenge 2021 Division 3 (Rated)  »  Golf  

#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, x, k;
        cin>>n>>x>>k;
        bool forward = false, backward = false;
        for(int i=0;i<=n+1;i+=k){
            if(i == x)
                forward = true;
        }
        if(forward)
            cout<<"YES"<<"\n";
        else{
            for(int i=n+1;i>=0;i-=k){
                if(i == x)
                    backward = true;
            }
            if(backward)
                cout<<"YES"<<"\n";
            else
                cout<<"NO"<<"\n";
        }
    }
    return 0;
}