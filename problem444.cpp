#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
int DivisibilityByEleven(int num){
    vector<int> v;
    while(num){
        v.push_back(num%10);
        num /= 10;
    }
    reverse(v.begin(), v.end());
    int count = 0, temp=0;
    for(int i=0;i<v.size();i++){
        temp = temp*10 + v[i];
        if(temp%11 == 0){
            count++; 
            // cout<<temp<<" ";
            // temp = 0;
        }
    }
    return count;
}
int main(){
    int num;
    cin>>num;
    cout<<DivisibilityByEleven(num);
    return 0;
}