// TCS Digital Question

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    // even, odd, ...
    // 1,2,3,4,5,6,...
    // 0,0,2,1,4,3,...
    int even = 2, odd = 1;
    for(int i=1;i<=n;i++){
        if(i == 1){
            if(i == n)  cout<<0<<" ";
        }
        else if(i == 2){
            if(i == n)  cout<<0<<" ";
        }
        else if(i%2 != 0){
            // even
            if(i == n)  cout<<even<<" ";
            even += 2;
        }
        else{
            // odd
            if(i == n)  cout<<odd<<" ";
            odd += 2;
        }
    }
    return 0;
}