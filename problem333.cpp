// count no. of rows & cols of matrix that sums up within given range -

#include<iostream>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cin>>arr[i][j];
    }
    int q;
    cin>>q;
    for(int k=0;k<q;k++){
        int l, r;
        cin>>l>>r;
        int count = 0;
        // row wise
        for(int i=0;i<n;i++){
            int sum = 0;
            for(int j=0;j<m;j++)
                sum += arr[i][j];
            if(sum >= l && sum <= r)
                count++;
        }
        // col wise
        for(int i=0;i<m;i++){
            int sum = 0;
            for(int j=0;j<n;j++)
                sum += arr[i][j];
            if(sum >= l && sum <= r)
                count++;
        }
        cout<<count<<" ";
    }
    return 0;
}