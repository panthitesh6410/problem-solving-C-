// Wipro NLTH 2021 Question -

#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v;
    while(n){
        v.push_back(n%10);
        n /= 10;
    }
    sort(v.begin(), v.end());
    for(int i=0;i<v.size()-1;i++){
        if(i%2 == 0){
            int temp = v[i];
            v[i] = v[i+1];
            v[i+1] = temp;
        }
    }
    int num = 0;
    for(int i=0;i<v.size();i++)
        num = num*10 + v[i];
    cout<<num;
    return 0;
}