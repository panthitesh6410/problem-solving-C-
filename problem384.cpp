// TCS problem

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int a;
    cin>>a;
    if(a < 10)
        cout<<a+10;
    else{
        vector<int> res;
        for(int i=9;i>=2;i--){
            while(a%i == 0){
                res.push_back(i);
                a /= i;
            }
        }
        if(a > 10)
            cout<<"Not Possible";
        else{
            a = res[res.size()-1];
            for(int i=res.size()-2;i>=0;i--)
                a = a*10 + res[i];
            cout<<a;
        }
    }
    return 0;
}