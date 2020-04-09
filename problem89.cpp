// GeeksforGeeks : transpose matrix (MMT/Wipro)

#include<iostream>
using namespace std;
int  main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n;
        cin>>n;
        int mat[n][n];
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
                cin>>mat[j][k];
        }
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
                cout<<mat[k][j]<<" ";
        }
    }
    return 0;
}