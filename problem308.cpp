// Distinct Pair Sums » Submit Solution 

#include<vector>
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int l, r;
        cin>>l>>r;
        vector<int> v;
        for(int i=l;i<=r;i++){
            for(int j=l;j<=r;j++){
                v.push_back(i+j);
            }
        }
        // 1121223
        int count = 1;
        for(int i=0;i<v.size()-1;i++){
            int flag = 0;
            for(int j=i+1;j<v.size();j++){
                if(v[i] == v[j])
                    flag = 1;
            }
            if(flag == 0)
                count++;
        }
        cout<<count<<endl;
    } 
    return 0;
}