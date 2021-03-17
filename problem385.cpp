// TCS problem
// 0 0 2 1 4 3 6 5 8 7..

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int odd = 1, even = 2;
    for(int i=1;i<=n;i++){
        if(i == 1 || i == 2)
            cout<<0<<" ";
        else{
            if(i%2 != 0){
                cout<<even<<" ";
                even += 2;
            }
            else{
                cout<<odd<<" ";
                odd += 2;
            }
        }
    }
    return 0;
}