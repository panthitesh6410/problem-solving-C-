// TCS Digital Internal Assessment Question -
// 10 = 2*5 --> 25 
// 150 = 5*5*6 --> 556
// 150 - 1,2,3,5,6,10,15,30,50,75

#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a;
    cin>>a;
    int div=9, ori=a;
    vector<int> v;
    while(a>=10){
        if(a%div == 0){
            a /= div;
            v.push_back(div);
        }
        else
            div--;
    }
    v.push_back(a);
    
    
    int res = 0, check=1;
    for(int i=v.size()-1;i>=0;i--){
        if(res < 10 || check != ori){
            res = res*10 + v[i];
            check *= v[i]; 
        }
            
    }
    cout<<res;

    return 0;
}