// April Challenge 2021 Div.3 
// Chef and Dice

#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long int n;
        cin>>n;
        long int sum = 0;
        sum = (n/4)*44;
        int rem = n%4;
        if(n>=4){
            if(rem == 0)
                sum += 16;
            if(rem == 1)
                sum += 32;
            if(rem == 2)
                sum += 44;
            if(rem == 3)
                rem += 55;
            cout<<sum<<"\n";
        }
        else{
            if(rem == 1)
                sum += 20;
            if(rem == 2)
                sum += 36;
            if(rem == 3)
                sum += 51;
            cout<<sum<<"\n";
        }
    }
    return 0;
}