// Codechef May Challenge 2021 Division 3 (Rated)  »  Xor Equality

#include<iostream> 
#include<cmath>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, count = 0;
        cin>>n;
        for(int i=0;i<pow(2, n);i++){
            int res1 = i ^ (i+1);
            int res2 = (i+2) ^ (i+3);
            if(res1 == res2)
                count++; 
        }
        cout<<count<<"\n";
    }
    return 0;
}