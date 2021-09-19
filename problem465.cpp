// TCS Digital Question

#include<math.h>
#include<iostream>
using namespace std;
bool is_prime(int num){
    int c = 0;
    if(num <= 1)    return false;
    if(num == 2)    return true;
    for(int i=1;i<=num/2;i++){
        if(num%i == 0)    c++;
    }
    if(c > 2)   return false;
    return true;
}
int main(){
    int n, m;
    cin>>n>>m;
    int count = 0;
    for(int i=n;i<=m;i++){
        for(int j=i;j<=m;j++){        
            if((j-i == 6) && (is_prime(i) && is_prime(j))){
                count++;
            }
        }
    }
    cout<<(count);
    return 0;
}