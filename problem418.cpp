// April Challenge 2021 Div.3 
// Worthy Matrix

#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m, k;
        cin>>n>>m>>k;
        int mat[n][m], dp[n][m];
        for(int i=0;i<m;i++)
            dp[0][i] = 0;
        for(int i=0;i<n;i++)
            dp[i][0] = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
                cin>>mat[i][j];
        }
        int count = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j] >= k)
                    count++;
                // dp[i][j] = mat[i][j] + mat[i-1][j] + mat[i][j-1] + mat[i-1][j-1];
            }
        }
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                // if(mat[i][j] >= k)
                //     count++;
                dp[i][j] = mat[i][j] + mat[i-1][j] + mat[i][j-1] + mat[i-1][j-1];
            }
        }
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(dp[i][j]/4 >= k)
                    count++;
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}