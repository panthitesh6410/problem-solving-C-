// GeeksforGeeks : Rotate by 90 degree  (Amazon/Factset)

#include<vector>
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int k=1;k<=t;k++)
    {
        int n;
        cin>>n;
        int mat[n][n];
        for(int j=0;j<n;j++)
        {
            for(int i=0;i<n;i++)
                cin>>mat[j][i];
        }
        vector<int> v;
        for(int j=n-1;j>=0;j--)
        {
            // push col to vector :
            for(int i=0;i<n;i++)
                v.push_back(mat[i][j]);
            // copy row to col :
            for(int i=0;i<n;i++)
                mat[i][j] = mat[abs(j-n)][i];
            // copy vector to row :
            for(int  i=0;i<n;i++)
                mat[abs(j-n)][i] = v[i]; 
        }
        for(int j=0;j<n;j++)
        {
            for(int i=0;i<n;i++)
                cout<<mat[j][i]<<" ";
            cout<<endl;
        }
    }
    return 0;
}