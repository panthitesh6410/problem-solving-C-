// Rotate MAtric Clockwise 

#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;

void rotate(vector<vector<int>>& mat){
    // first do transpose
    for(int i=0;i<mat.size();i++){
        for(int j=i;j<mat[0].size();j++){
            int temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }
    }
    // then do reverse each row one by one
    for(int i=0;i<mat.size();i++)
        reverse(mat[i].begin(), mat[i].end());
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>> mat;
    for(int i=0;i<n;i++){
        vector<int> v;
        for(int j=0;j<n;j++){
            int num;
            cin>>num;
            v.push_back(num);
        }
        mat.push_back(v);
    }
    rotate(mat);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout<<mat[i][j]<<" ";
        cout<<"\n";
    }
    return 0;
}