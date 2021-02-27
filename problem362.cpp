// TCS digital capability exam - 
// 0 0 2 1 4 3 6 5 8 7 10 9 . . .

#include<vector>
#include<iostream>
using namespace std;
int main(){
    int n, odd = 1, even = 0;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        if(i == 0)
            v.push_back(0);
        else if(i == 1)
            v.push_back(0);
        else if(i%2 == 0){
            even += 2;
            v.push_back(even);
        }
        else if(i == 3)
            v.push_back(odd);
        else if(i%2 != 0){
            odd += 2;
            v.push_back(odd);
        }
    }
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    return 0;
}