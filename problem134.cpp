// Google Kick-Start (2019) - Round C (Wiggle Walk)

#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n, r, c, sr, sc;
        cin>>n>>r>>c>>sr>>sc;
        string s;
        cin>>s;
        int mat[c][r];
        for(int j=1;j<=c;j++)
        {
            for(int k=1;k<=r;k++)
            {
                mat[j][k] = 0;
            }
        }
        // make a cell as 1 if it is traversed
        mat[sr][sc] = 1;
        int q=0;
        while(q<s.size())
        {
            if(s[q] == 'E')
            {
                // increment -
                while(mat[sr][sc+1] == 1)
                    sc++;
                mat[sr][sc+1] = 1;
                sc++;
            }  
            else if(s[q] == 'W')
            {
                // increment -
                while(mat[sr][sc-1] == 1)
                    sc--;
                mat[sr][sc-1] = 1;
                sc--;
            }
            else if(s[q] == 'N')
            {
                // increment -
                while(mat[sr-1][sc] == 1)
                    sr--;
                mat[sr-1][sc] = 1;
                sr--;
            }
            else
            {
                // increment -
                while(mat[sr+1][sc] == 1)
                    sr++;
                mat[sr+1][sc] = 1;
                sr++;
            }
            q++;
        }
        cout<<"Case #"<<i<<": "<<sr<<" "<<sc<<endl;    
    }
    return 0;
}