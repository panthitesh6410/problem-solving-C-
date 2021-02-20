//  variable sized array - (HackerRank):

#include<vector>
#include<iostream>
using namespace std;
int main(){
    int n, q;
    cin>>n>>q;
    // input the data - 
    vector<vector<int>> arr;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        vector<int> v;
        for(int j=0;j<k;j++){
            int num;
            cin>>num;
            v.push_back(num);
        }    
        arr.push_back(v);
    }
    // query part -
    for(int k=0;k<q;k++){
        int i, j;
        cin>>i>>j;
        cout<<arr[i][j]<<"\n";
    }
    return 0;
}