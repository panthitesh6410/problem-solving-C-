// TCS digital capability exam - 

#include<vector>
#include<iostream>
using namespace std;
vector<int> v;
void foo(int num){
    while(num){
        int d = num % 10;
        v.push_back(d);
        num /= 10;
    }
}
int main(){
    int l, h;
    cin>>l>>h;
    for(int i=l;i<=h;i++)
        foo(i);
    int count = 0;
    for(int i=0;i<v.size();i++){
        int flag = 0;
        for(int j=0;j<v.size();j++){
            if(v[i] == v[j] && i != j)
                flag = 1;
        }
        if(flag == 0)
            count++;
    }
    cout<<count;
    return 0;
}