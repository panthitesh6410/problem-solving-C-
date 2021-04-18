// TCS coding Practise

#include<vector>
#include<iostream>
using namespace std;
int main(){
    vector<int> v;
    int n=21, num=5678;
    while(num){
        int d = num%n;
        v.push_back(d);
        num /= n;
    }
    string res;
    for(int i=v.size()-1;i>=0;i--){
        if(v[i] > 9){
            v[i] = v[i]+55;
            cout<<(char)v[i];
        }
        else
        cout<<v[i];
    }

    return 0;
}