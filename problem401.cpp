#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m, k;
        cin>>n>>m>>k;
        int mat[n][m];
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++)
        //         cin>>mat[i][j];
        // }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
                mat[i][j] = k+i+1+j+1;
        }
        int xor_op = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                xor_op = xor_op ^ mat[i][j];
            }
        }
        cout<<xor_op<<"\n";
    }
    return 0;
}