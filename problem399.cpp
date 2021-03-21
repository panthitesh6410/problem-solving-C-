// Codechef March Cook-Off 2021 Div-3 Problem 

#include<climits>
#include<iostream>
using namespace std;
bool has_odd_factors(unsigned long long int num){
    unsigned long long int count = 0;
    for(unsigned long long int i=1;i<=num/2;i++){
        if(num%i == 0)
            count++;
    }
    if(count  % 2 != 0)
        return true;
    return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int guess;
        // unsigned long long int num = 1;
        for(unsigned long long int i=1;i<LLONG_MAX;i++){
            if(has_odd_factors(i)){
                cout<<i;
                cin>>guess;
                if(guess == 1)
                    continue;
            }
        }

    }
    return 0;
}