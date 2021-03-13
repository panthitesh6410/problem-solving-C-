// LeetCode - Maximal Square Size : 
// (Asked In ByteDance)  Dynamic Programming 


#include<iostream>
using namespace std;
int main(){
    int mat[5][5]={
        1,0,1,0,0,
        1,0,1,1,1,
        1,1,1,1,1,
        1,0,1,1,1
    };
    int res = 0;
    for(int i=1;i<5;i++){
        for(int j=0;j<5;j++){
            if(mat[i][j]>0 && mat[i-1][j]>0 && mat[i][j-1]>0 && mat[i-1][j-1]>0)
                mat[i][j] = mat[i-1][j-1] + 1;
        }
    }
    for(int i=1;i<5;i++){
        for(int j=0;j<5;j++){
            if(mat[i][j]>res)
                res = mat[i][j];
        }
    }
    cout<<res*res;
    return 0;
}