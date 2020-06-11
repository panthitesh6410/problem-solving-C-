// SAMSUNG - 

#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n>>m;
        int mat[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                cin>>mat[i][j];
        }
        int count = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j] == 2)
                {
                    if(mat[i][j-1] == 1)
                    {
                        mat[i][j-1] = 2;
                        count++;
                    }
                    if(mat[i][j+1] == 1)
                    {
                        mat[i][j+1] = 2;
                        count++;
                    }
                    if(mat[i+1][j] == 1)
                    {
                        mat[i+1][j] = 2;
                        count++;
                    }
                    if(mat[i-1][j] == 1)
                    {
                        mat[i-1][j] = 2;
                        count++;
                    }
                }
            }
        }
        if(count == 0)
            cout<<-1<<endl;
        else
            cout<<count<<endl;
    }
    return 0;
}