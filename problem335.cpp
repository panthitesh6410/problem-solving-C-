// given 2 matrices one big and 2nd small, check is smaller matrix is 
// submatrix of larger one

#include<iostream>
using namespace std;
int main(){
    int n1, m1;
    cin>>n1>>m1;
    int mat1[n1][m1];
    for(int i=0;i<n1;i++){
        for(int j=0;j<m1;j++)
            cin>>mat1[i][j];
    }
    int n2, m2;
    cin>>n2>>m2;
    int mat2[n2][m2];
    for(int i=0;i<n2;i++){
        for(int j=0;j<m2;j++)
            cin>>mat1[i][j];
    }
    
    
    return 0;
}