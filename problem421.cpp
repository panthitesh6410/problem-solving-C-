// TCS DCA 2021 question -

#include<bits/stdc++.h>
#include<vector>
#include<iostream>
using namespace std;

int solve(string s1, string s2){
    int n = s1.length();
    int m = s2.length();
    if(n == 0)
        return 1;
    int dp[m][n];
    memset(dp, 0, sizeof(dp));
    for(int i=0;i<m;i++){
        for(int j=i;j<n;j++){
            if(i == 0){
                if(j == 0)
                    dp[i][j] = (s1[j] == s2[i]) ? 1: 0;
                else if(s1[j] == s2[i])
                    dp[i][j] = dp[i][j-1] + 1;
                else
                    dp[i][j] = dp[i][j-1];
            }
            else{
                if(s1[j] == s2[i])
                    dp[i][j] = dp[i][j-1] + dp[i-1][j-1];
                else
                    dp[i][j] = dp[i][j-1];
            }
        }
    }
    return dp[m-1][n-1];
}

int main(){
    string wrong, right;
    cin>>wrong>>right;
    cout<<solve(wrong,right);

    return 0;
}