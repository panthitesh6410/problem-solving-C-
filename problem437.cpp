// TCS coding Practise

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
    int max_row=INT_MIN, max_col=INT_MIN;
    for(int i=0;i<n;i++){          // for row
        int sum = 0;
        for(int j=0;j<m;j++){
            sum += arr[i][j];
        }
        if(max_row < sum)
            max_row = sum;
    }
    for(int i=0;i<n;i++){          // for col
        int sum = 0;
        for(int j=0;j<m;j++){
            sum += arr[j][i];
        }
        if(max_col < sum)
            max_col = sum;
    }
    cout<<max_row+max_col;
    return 0;
}